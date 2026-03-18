/*
 * XREFs of NtEnumerateKey @ 0x1404C6220
 * Callers:
 *     AdtpObjsInitialize @ 0x140592B28 (AdtpObjsInitialize.c)
 *     sub_1406EF8FC @ 0x1406EF8FC (sub_1406EF8FC.c)
 *     sub_1407DD578 @ 0x1407DD578 (sub_1407DD578.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400CA650 (ExIsResourceAcquiredSharedLite.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     EtwGetKernelTraceTimestamp @ 0x140111B58 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     CmpCallCallBacks @ 0x140496120 (CmpCallCallBacks.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     CmEnumerateKey @ 0x1404C66B0 (CmEnumerateKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404C7070 (CmKeyBodyRemapToVirtualForEnum.c)
 */

NTSTATUS __stdcall NtEnumerateKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  __int64 v10; // rdi
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v12; // rcx
  unsigned __int64 v13; // rtt
  unsigned __int8 v14; // r15
  NTSTATUS v15; // ebx
  ULONG v16; // edi
  _DWORD *v17; // rcx
  struct _KTHREAD *v18; // rax
  PVOID v19; // rdi
  PVOID v20; // rsi
  struct _KTHREAD *v21; // rcx
  __int16 v22; // ax
  unsigned __int64 v23; // rtt
  struct _KTHREAD *v24; // rcx
  __int16 v25; // ax
  BOOLEAN v27; // di
  struct _KTHREAD *v28; // rax
  void (__fastcall *v29)(signed __int64, int *, __int64, _QWORD, __int64, _QWORD); // rax
  unsigned __int64 v30; // rtt
  struct _KTHREAD *v31; // rdx
  __int16 v32; // ax
  __int64 v33; // rcx
  ULONG HandleInformation; // [rsp+28h] [rbp-150h]
  PVOID v36; // [rsp+48h] [rbp-130h] BYREF
  __int64 v37; // [rsp+50h] [rbp-128h]
  KEY_INFORMATION_CLASS v38; // [rsp+58h] [rbp-120h]
  _QWORD v39[2]; // [rsp+60h] [rbp-118h] BYREF
  ULONG v40; // [rsp+70h] [rbp-108h]
  PVOID v41; // [rsp+78h] [rbp-100h] BYREF
  __int64 v42; // [rsp+80h] [rbp-F8h]
  PVOID v43[3]; // [rsp+90h] [rbp-E8h] BYREF
  PVOID Object; // [rsp+A8h] [rbp-D0h] BYREF
  _QWORD v45[8]; // [rsp+B0h] [rbp-C8h] BYREF
  _QWORD v46[7]; // [rsp+F0h] [rbp-88h] BYREF
  int v47; // [rsp+128h] [rbp-50h] BYREF
  __int64 v48; // [rsp+12Ch] [rbp-4Ch]
  int v49; // [rsp+134h] [rbp-44h]

  v40 = Index;
  v38 = KeyInformationClass;
  v43[1] = KeyInformation;
  v43[2] = ResultLength;
  memset(v45, 0, sizeof(v45));
  v47 = 0;
  v48 = 0LL;
  v49 = 0;
  v10 = 0LL;
  v37 = 0LL;
  v42 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((char *)&v47, (char *)0x20000);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&CmpShutdownRundown);
  v12 = (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2;
  v13 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v13 == _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpShutdownRundown,
                v12,
                CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
    goto LABEL_4;
  v27 = ExfAcquireRundownProtection(&CmpShutdownRundown);
  if ( !v27 )
  {
    v28 = KeGetCurrentThread();
    v12 = (unsigned int)++v28->KernelApcDisable;
    if ( !(_WORD)v12 )
    {
      v12 = (signed __int64)&v28->152;
      if ( *(_QWORD *)v12 != v12 && !v28->SpecialApcDisable )
        KiCheckForKernelApcDelivery();
    }
  }
  if ( v27 )
  {
    v10 = 0LL;
LABEL_4:
    if ( (unsigned int)KeyInformationClass > KeyFullInformation )
    {
      v29 = (void (__fastcall *)(signed __int64, int *, __int64, _QWORD, __int64, _QWORD))CmpTraceRoutine;
      if ( CmpTraceRoutine )
      {
        if ( KeyHandle )
        {
          if ( ObReferenceObjectByHandle(
                 KeyHandle,
                 0,
                 (POBJECT_TYPE)CmKeyObjectType,
                 KeGetCurrentThread()->PreviousMode,
                 v43,
                 0LL) >= 0 )
          {
            v10 = *((_QWORD *)v43[0] + 1);
            ObfDereferenceObject(v43[0]);
          }
          v29 = (void (__fastcall *)(signed __int64, int *, __int64, _QWORD, __int64, _QWORD))CmpTraceRoutine;
        }
        if ( v29 )
        {
          LOBYTE(v12) = 17;
          v29(v12, &v47, 3221225485LL, Index, v10, 0LL);
        }
      }
      _m_prefetchw(&CmpShutdownRundown);
      v30 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v30 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&CmpShutdownRundown,
                    (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                    CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&CmpShutdownRundown);
      v31 = KeGetCurrentThread();
      v32 = v31->KernelApcDisable + 1;
      v31->KernelApcDisable = v32;
      if ( !v32
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v31->ApcState.ApcListHead[0].Flink != &v31->152
        && !v31->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      return -1073741811;
    }
    else
    {
      v14 = KeGetCurrentThread()->gap0[10];
      v15 = ObReferenceObjectByHandle(KeyHandle, 8u, (POBJECT_TYPE)CmKeyObjectType, v14, &Object, 0LL);
      v36 = Object;
      if ( v15 >= 0 && *(_DWORD *)Object != 1803104306 )
      {
        v15 = -1073741816;
        ObfDereferenceObject(Object);
        v36 = 0LL;
      }
      if ( v15 >= 0 )
      {
        if ( CmpTraceRoutine && v36 )
        {
          v37 = *((_QWORD *)v36 + 1);
          v42 = v37;
        }
        if ( v14 == 1 )
        {
          v16 = Length;
          ProbeForWrite(KeyInformation, Length, 4u);
          v17 = ResultLength;
          if ( (unsigned __int64)ResultLength >= MmUserProbeAddress )
            v17 = (_DWORD *)MmUserProbeAddress;
          *v17 = *v17;
        }
        else
        {
          v16 = Length;
        }
        v39[1] = v39;
        v39[0] = v39;
        v18 = KeGetCurrentThread();
        --v18->KernelApcDisable;
        if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
        {
          v45[0] = v36;
          v45[1] = __PAIR64__(KeyInformationClass, Index);
          v45[2] = KeyInformation;
          LODWORD(v45[3]) = v16;
          v45[4] = ResultLength;
          v15 = CmpCallCallBacks(5u, (__int64)v45, 1, 20LL, (__int64)v36, (__int64)v39);
        }
        if ( v15 < 0 )
        {
          if ( v15 == -1073740541 )
            v15 = 0;
        }
        else
        {
          v41 = 0LL;
          v15 = CmKeyBodyRemapToVirtualForEnum(&v36, v14, 8LL, &v41);
          if ( v15 < 0 )
          {
            v20 = v36;
            v19 = v41;
          }
          else
          {
            HandleInformation = v16;
            v19 = v41;
            v20 = v36;
            v15 = CmEnumerateKey(
                    (_DWORD)v36,
                    (_DWORD)v41,
                    Index,
                    KeyInformationClass,
                    (__int64)KeyInformation,
                    HandleInformation,
                    (__int64)ResultLength);
          }
          if ( v19 )
            ObfDereferenceObject(v19);
          if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) && (_QWORD *)v39[0] != v39 )
          {
            memset(&v46[1], 0, 0x30uLL);
            v46[0] = v20;
            LODWORD(v46[1]) = v15;
            LODWORD(v46[3]) = v15;
            v46[2] = v45;
            CmpCallCallBacks(0x14u, (__int64)v46, 0, 20LL, (__int64)v20, (__int64)v39);
            v15 = v46[3];
          }
        }
        v21 = KeGetCurrentThread();
        v22 = v21->KernelApcDisable + 1;
        v21->KernelApcDisable = v22;
        if ( !v22
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v21->ApcState.ApcListHead[0].Flink != &v21->152
          && !v21->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        ObfDereferenceObject(v36);
      }
      if ( CmpTraceRoutine )
      {
        v33 = v37;
        LOBYTE(v33) = 17;
        CmpTraceRoutine(v33, &v47, (unsigned int)v15, Index, v37, 0LL);
      }
      _m_prefetchw(&CmpShutdownRundown);
      v23 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v23 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&CmpShutdownRundown,
                    (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                    CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&CmpShutdownRundown);
      v24 = KeGetCurrentThread();
      v25 = v24->KernelApcDisable + 1;
      v24->KernelApcDisable = v25;
      if ( !v25
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v24->ApcState.ApcListHead[0].Flink != &v24->152
        && !v24->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      return v15;
    }
  }
  if ( CmpTraceRoutine )
  {
    LOBYTE(v12) = 17;
    CmpTraceRoutine(v12, &v47, 3221225865LL, Index, 0LL, 0LL);
  }
  return -1073741431;
}
