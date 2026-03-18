/*
 * XREFs of NtEnumerateKey @ 0x1403FD480
 * Callers:
 *     AdtpObjsInitialize @ 0x14052EF6C (AdtpObjsInitialize.c)
 *     sub_14066C188 @ 0x14066C188 (sub_14066C188.c)
 *     sub_14076925C @ 0x14076925C (sub_14076925C.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14003DAD0 (ExIsResourceAcquiredSharedLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExfAcquireRundownProtection @ 0x140079F60 (ExfAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfReleaseRundownProtection @ 0x1400D0750 (ExfReleaseRundownProtection.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400DE680 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1403FD380 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmEnumerateKey @ 0x1403FDED0 (CmEnumerateKey.c)
 *     CmpCallCallBacks @ 0x140409130 (CmpCallCallBacks.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
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
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS v15; // ebx
  _QWORD *v16; // rdi
  ULONG v17; // edi
  _DWORD *v18; // rcx
  ULONG v19; // esi
  struct _KTHREAD *v20; // rax
  int v21; // r8d
  ULONG v22; // r8d
  PVOID v23; // rdi
  PVOID v24; // rsi
  struct _KTHREAD *v25; // rcx
  __int16 v26; // ax
  unsigned __int64 v27; // rtt
  struct _KTHREAD *v28; // rcx
  __int16 v29; // ax
  __int64 v31; // rcx
  void (__fastcall *v32)(signed __int64, int *, __int64, _QWORD, __int64, _QWORD); // rax
  __int64 v33; // rcx
  ULONG HandleInformation; // [rsp+28h] [rbp-150h]
  PVOID v36; // [rsp+48h] [rbp-130h] BYREF
  PVOID v37; // [rsp+50h] [rbp-128h] BYREF
  KEY_INFORMATION_CLASS v38; // [rsp+58h] [rbp-120h]
  __int64 v39; // [rsp+60h] [rbp-118h]
  _QWORD v40[2]; // [rsp+68h] [rbp-110h] BYREF
  ULONG v41; // [rsp+78h] [rbp-100h]
  PVOID Object; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v43; // [rsp+88h] [rbp-F0h]
  PULONG v44; // [rsp+90h] [rbp-E8h]
  PVOID v45[3]; // [rsp+98h] [rbp-E0h] BYREF
  _QWORD v46[8]; // [rsp+B0h] [rbp-C8h] BYREF
  _QWORD v47[7]; // [rsp+F0h] [rbp-88h] BYREF
  int v48; // [rsp+128h] [rbp-50h] BYREF
  __int64 v49; // [rsp+12Ch] [rbp-4Ch]
  int v50; // [rsp+134h] [rbp-44h]

  v41 = Index;
  v38 = KeyInformationClass;
  v45[1] = KeyInformation;
  v44 = ResultLength;
  memset(v46, 0, sizeof(v46));
  v48 = 0;
  v49 = 0LL;
  v50 = 0;
  v10 = 0LL;
  v39 = 0LL;
  v43 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((char *)&v48, (char *)0x20000);
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
  if ( ExfAcquireRundownProtection(&CmpShutdownRundown) )
  {
    v10 = 0LL;
LABEL_4:
    if ( (unsigned int)KeyInformationClass > KeyFullInformation )
    {
      v32 = (void (__fastcall *)(signed __int64, int *, __int64, _QWORD, __int64, _QWORD))CmpTraceRoutine;
      if ( CmpTraceRoutine )
      {
        if ( KeyHandle )
        {
          if ( ObReferenceObjectByHandle(
                 KeyHandle,
                 0,
                 (POBJECT_TYPE)CmKeyObjectType,
                 KeGetCurrentThread()->PreviousMode,
                 v45,
                 0LL) >= 0 )
          {
            v10 = *((_QWORD *)v45[0] + 1);
            ObfDereferenceObject(v45[0]);
          }
          v32 = (void (__fastcall *)(signed __int64, int *, __int64, _QWORD, __int64, _QWORD))CmpTraceRoutine;
        }
        if ( v32 )
        {
          LOBYTE(v12) = 17;
          v32(v12, &v48, 3221225485LL, Index, v10, 0LL);
        }
      }
      ExReleaseRundownProtection_0(&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      return -1073741811;
    }
    else
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      v15 = ObReferenceObjectByHandle(KeyHandle, 8u, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &Object, 0LL);
      v16 = Object;
      v36 = Object;
      if ( v15 >= 0 && *(_DWORD *)Object != 1803104306 )
      {
        v15 = -1073741816;
        ObfDereferenceObject(Object);
      }
      if ( v15 >= 0 )
      {
        if ( CmpTraceRoutine && v16 )
        {
          v39 = v16[1];
          v43 = v39;
        }
        if ( PreviousMode == 1 )
        {
          v17 = Length;
          ProbeForWrite(KeyInformation, Length, 4u);
          v18 = ResultLength;
          if ( (unsigned __int64)ResultLength >= MmUserProbeAddress )
            v18 = (_DWORD *)MmUserProbeAddress;
          *v18 = *v18;
          v19 = Index;
        }
        else
        {
          v17 = Length;
          v19 = Index;
        }
        v40[1] = v40;
        v40[0] = v40;
        v20 = KeGetCurrentThread();
        --v20->KernelApcDisable;
        if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
        {
          v46[0] = Object;
          v46[1] = __PAIR64__(KeyInformationClass, v19);
          v46[2] = KeyInformation;
          LODWORD(v46[3]) = v17;
          v46[4] = ResultLength;
          LOBYTE(v21) = 1;
          v15 = CmpCallCallBacks(5, (unsigned int)v46, v21, 20, (__int64)Object, (__int64)v40);
        }
        if ( v15 < 0 )
        {
          if ( v15 == -1073740541 )
            v15 = 0;
        }
        else
        {
          v37 = 0LL;
          v15 = CmKeyBodyRemapToVirtualForEnum((__int64)&v36, &v37);
          if ( v15 < 0 )
          {
            v24 = v36;
            v23 = v37;
          }
          else
          {
            HandleInformation = v17;
            v22 = v19;
            v23 = v37;
            v24 = v36;
            v15 = CmEnumerateKey(
                    (_DWORD)v36,
                    (_DWORD)v37,
                    v22,
                    KeyInformationClass,
                    (__int64)KeyInformation,
                    HandleInformation,
                    (__int64)ResultLength);
          }
          if ( v23 )
            ObfDereferenceObject(v23);
          if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) && (_QWORD *)v40[0] != v40 )
          {
            memset(&v47[1], 0, 0x30uLL);
            v47[0] = v24;
            LODWORD(v47[1]) = v15;
            LODWORD(v47[3]) = v15;
            v47[2] = v46;
            CmpCallCallBacks(20, (unsigned int)v47, 0, 20, (__int64)v24, (__int64)v40);
            v15 = v47[3];
          }
        }
        v25 = KeGetCurrentThread();
        v26 = v25->KernelApcDisable + 1;
        v25->KernelApcDisable = v26;
        if ( !v26
          && ($E81C3296F15336D9BF9B2D43BB137B25 *)v25->ApcState.ApcListHead[0].Flink != &v25->152
          && !v25->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery((__int64)v25);
        }
        ObfDereferenceObject(v36);
      }
      if ( CmpTraceRoutine )
      {
        v33 = v39;
        LOBYTE(v33) = 17;
        CmpTraceRoutine(v33, &v48, (unsigned int)v15, Index, v39, 0LL);
      }
      _m_prefetchw(&CmpShutdownRundown);
      v27 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v27 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&CmpShutdownRundown,
                    (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                    CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&CmpShutdownRundown);
      v28 = KeGetCurrentThread();
      v29 = v28->KernelApcDisable + 1;
      v28->KernelApcDisable = v29;
      if ( !v29
        && ($E81C3296F15336D9BF9B2D43BB137B25 *)v28->ApcState.ApcListHead[0].Flink != &v28->152
        && !v28->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery((__int64)v28);
      }
      return v15;
    }
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( CmpTraceRoutine )
  {
    LOBYTE(v31) = 17;
    CmpTraceRoutine(v31, &v48, 3221225865LL, Index, 0LL, 0LL);
  }
  return -1073741431;
}
