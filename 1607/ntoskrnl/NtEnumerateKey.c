/*
 * XREFs of NtEnumerateKey @ 0x140438A40
 * Callers:
 *     AdtpObjsInitialize @ 0x140570130 (AdtpObjsInitialize.c)
 *     ExpWatchLicenseInfoWork @ 0x1406ACB24 (ExpWatchLicenseInfoWork.c)
 *     ExpWatchProductTypeInitialization @ 0x1407A9F80 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14002CDD0 (ExIsResourceAcquiredSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400598D0 (EtwGetKernelTraceTimestamp.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ExfAcquireRundownProtection @ 0x14008BD40 (ExfAcquireRundownProtection.c)
 *     ExfReleaseRundownProtection @ 0x140090490 (ExfReleaseRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140437630 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmEnumerateKey @ 0x140437F90 (CmEnumerateKey.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacks @ 0x1404518D0 (CmpCallCallBacks.c)
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
  KPROCESSOR_MODE PreviousMode; // r15
  NTSTATUS v15; // ebx
  ULONG v16; // edi
  __int64 v17; // rcx
  struct _KTHREAD *v18; // rax
  int v19; // r8d
  PVOID v20; // rdi
  PVOID v21; // rsi
  struct _KTHREAD *v22; // rcx
  __int16 v23; // ax
  unsigned __int64 v24; // rtt
  struct _KTHREAD *v25; // rcx
  __int16 v26; // ax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  void (__fastcall *v32)(signed __int64, int *, __int64, _QWORD, __int64, _QWORD); // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  int HandleInformation; // [rsp+28h] [rbp-150h]
  PVOID v39; // [rsp+48h] [rbp-130h] BYREF
  ULONG v40; // [rsp+50h] [rbp-128h]
  KEY_INFORMATION_CLASS v41; // [rsp+58h] [rbp-120h]
  PVOID v42; // [rsp+60h] [rbp-118h] BYREF
  __int64 v43; // [rsp+68h] [rbp-110h]
  _QWORD v44[2]; // [rsp+70h] [rbp-108h] BYREF
  __int64 v45; // [rsp+80h] [rbp-F8h]
  PULONG v46; // [rsp+88h] [rbp-F0h]
  PVOID v47; // [rsp+90h] [rbp-E8h] BYREF
  PVOID Object[3]; // [rsp+98h] [rbp-E0h] BYREF
  _QWORD v49[8]; // [rsp+B0h] [rbp-C8h] BYREF
  _QWORD v50[7]; // [rsp+F0h] [rbp-88h] BYREF
  int v51; // [rsp+128h] [rbp-50h] BYREF
  __int64 v52; // [rsp+12Ch] [rbp-4Ch]
  int v53; // [rsp+134h] [rbp-44h]

  v40 = Index;
  v41 = KeyInformationClass;
  Object[1] = KeyInformation;
  v46 = ResultLength;
  memset(v49, 0, sizeof(v49));
  v51 = 0;
  v52 = 0LL;
  v53 = 0;
  v10 = 0LL;
  v43 = 0LL;
  v45 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((char *)&v51, 0x20000uLL);
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
                 &v47,
                 0LL) >= 0 )
          {
            v10 = *((_QWORD *)v47 + 1);
            ObfDereferenceObject(v47);
          }
          v32 = (void (__fastcall *)(signed __int64, int *, __int64, _QWORD, __int64, _QWORD))CmpTraceRoutine;
        }
        if ( v32 )
        {
          LOBYTE(v12) = 17;
          v32(v12, &v51, 3221225485LL, Index, v10, 0LL);
        }
      }
      ExReleaseRundownProtection(&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v33, v34, v35);
      return -1073741811;
    }
    else
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      v15 = ObReferenceObjectByHandle(KeyHandle, 8u, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, Object, 0LL);
      v39 = Object[0];
      if ( v15 >= 0 && *(_DWORD *)Object[0] != 1803104306 )
      {
        v15 = -1073741816;
        ObfDereferenceObject(Object[0]);
        v39 = 0LL;
      }
      if ( v15 >= 0 )
      {
        if ( CmpTraceRoutine && v39 )
        {
          v43 = *((_QWORD *)v39 + 1);
          v45 = v43;
        }
        if ( PreviousMode == 1 )
        {
          v16 = Length;
          ProbeForWrite(KeyInformation, Length, 4u);
          v17 = (__int64)ResultLength;
          if ( (unsigned __int64)ResultLength >= 0x7FFFFFFF0000LL )
            v17 = 0x7FFFFFFF0000LL;
          *(_DWORD *)v17 = *(_DWORD *)v17;
        }
        else
        {
          v16 = Length;
        }
        v44[1] = v44;
        v44[0] = v44;
        v18 = KeGetCurrentThread();
        --v18->KernelApcDisable;
        if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
        {
          v49[0] = v39;
          v49[1] = __PAIR64__(KeyInformationClass, Index);
          v49[2] = KeyInformation;
          LODWORD(v49[3]) = v16;
          v49[4] = ResultLength;
          LOBYTE(v19) = 1;
          v15 = CmpCallCallBacks(5, (unsigned int)v49, v19, 20, (__int64)v39, (__int64)v44);
        }
        if ( v15 < 0 )
        {
          if ( v15 == -1073740541 )
            v15 = 0;
        }
        else
        {
          v42 = 0LL;
          v15 = CmKeyBodyRemapToVirtualForEnum(&v39, PreviousMode, 8, &v42);
          if ( v15 < 0 )
          {
            v21 = v39;
            v20 = v42;
          }
          else
          {
            HandleInformation = v16;
            v20 = v42;
            v21 = v39;
            v15 = CmEnumerateKey(
                    (__int64)v39,
                    (__int64)v42,
                    Index,
                    KeyInformationClass,
                    (__int64)KeyInformation,
                    HandleInformation,
                    (__int64)ResultLength);
          }
          if ( v20 )
            ObfDereferenceObject(v20);
          if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) && (_QWORD *)v44[0] != v44 )
          {
            memset(&v50[1], 0, 0x30uLL);
            v50[0] = v21;
            LODWORD(v50[1]) = v15;
            LODWORD(v50[3]) = v15;
            v50[2] = v49;
            CmpCallCallBacks(20, (unsigned int)v50, 0, 20, (__int64)v21, (__int64)v44);
            v15 = v50[3];
          }
        }
        v22 = KeGetCurrentThread();
        v23 = v22->KernelApcDisable + 1;
        v22->KernelApcDisable = v23;
        if ( !v23
          && ($2B8565053CDC740D4E4887693DD8AC9E *)v22->ApcState.ApcListHead[0].Flink != &v22->152
          && !v22->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery((__int64)v22);
        }
        ObfDereferenceObject(v39);
      }
      if ( CmpTraceRoutine )
      {
        v36 = v43;
        LOBYTE(v36) = 17;
        CmpTraceRoutine(v36, &v51, (unsigned int)v15, Index, v43, 0LL);
      }
      _m_prefetchw(&CmpShutdownRundown);
      v24 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v24 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&CmpShutdownRundown,
                    (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                    CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&CmpShutdownRundown);
      v25 = KeGetCurrentThread();
      v26 = v25->KernelApcDisable + 1;
      v25->KernelApcDisable = v26;
      if ( !v26
        && ($2B8565053CDC740D4E4887693DD8AC9E *)v25->ApcState.ApcListHead[0].Flink != &v25->152
        && !v25->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery((__int64)v25);
      }
      return v15;
    }
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v28, v29, v30);
  if ( CmpTraceRoutine )
  {
    LOBYTE(v31) = 17;
    CmpTraceRoutine(v31, &v51, 3221225865LL, Index, 0LL, 0LL);
  }
  return -1073741431;
}
