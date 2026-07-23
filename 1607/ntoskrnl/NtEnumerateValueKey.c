/*
 * XREFs of NtEnumerateValueKey @ 0x140438410
 * Callers:
 *     AdtpObjsInitialize @ 0x140570130 (AdtpObjsInitialize.c)
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14002CDD0 (ExIsResourceAcquiredSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400598D0 (EtwGetKernelTraceTimestamp.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ExfAcquireRundownProtection @ 0x14008BD40 (ExfAcquireRundownProtection.c)
 *     ExfReleaseRundownProtection @ 0x140090490 (ExfReleaseRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmEnumerateValueKey @ 0x140436E40 (CmEnumerateValueKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140437630 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacks @ 0x1404518D0 (CmpCallCallBacks.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x1405FFAA8 (CmEnumerateValueKeyFromMergedView.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtEnumerateValueKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  ULONG v8; // esi
  __int64 v10; // rdi
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v12; // rcx
  unsigned __int64 v13; // rtt
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v15; // rdx
  NTSTATUS v16; // ebx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rcx
  ULONG v20; // esi
  __int64 v21; // rcx
  struct _KTHREAD *v22; // rax
  PVOID v23; // rdi
  PVOID v24; // rsi
  unsigned __int64 v25; // rtt
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  void (__fastcall *v31)(signed __int64, int *, __int64, _QWORD, __int64, _QWORD); // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  int Object; // [rsp+20h] [rbp-168h]
  int v37; // [rsp+30h] [rbp-158h]
  PVOID v39; // [rsp+58h] [rbp-130h] BYREF
  ULONG v40; // [rsp+60h] [rbp-128h]
  KEY_VALUE_INFORMATION_CLASS v41; // [rsp+68h] [rbp-120h]
  PVOID v42; // [rsp+70h] [rbp-118h] BYREF
  __int64 v43; // [rsp+78h] [rbp-110h]
  _QWORD v44[2]; // [rsp+80h] [rbp-108h] BYREF
  __int64 v45; // [rsp+90h] [rbp-F8h]
  PULONG v46; // [rsp+98h] [rbp-F0h]
  PVOID v47; // [rsp+A0h] [rbp-E8h] BYREF
  PVOID v48[3]; // [rsp+A8h] [rbp-E0h] BYREF
  _QWORD v49[8]; // [rsp+C0h] [rbp-C8h] BYREF
  _QWORD v50[7]; // [rsp+100h] [rbp-88h] BYREF
  int v51; // [rsp+138h] [rbp-50h] BYREF
  __int64 v52; // [rsp+13Ch] [rbp-4Ch]
  int v53; // [rsp+144h] [rbp-44h]

  v8 = Index;
  v40 = Index;
  v41 = KeyValueInformationClass;
  v48[1] = KeyValueInformation;
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
    if ( (unsigned int)KeyValueInformationClass > KeyValuePartialInformation )
    {
      v31 = (void (__fastcall *)(signed __int64, int *, __int64, _QWORD, __int64, _QWORD))CmpTraceRoutine;
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
          v31 = (void (__fastcall *)(signed __int64, int *, __int64, _QWORD, __int64, _QWORD))CmpTraceRoutine;
        }
        if ( v31 )
        {
          LOBYTE(v12) = 18;
          v31(v12, &v51, 3221225485LL, v8, v10, 0LL);
        }
      }
      ExReleaseRundownProtection(&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v32, v33, v34);
      return -1073741811;
    }
    else
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      v16 = ObReferenceObjectByHandle(KeyHandle, 1u, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, v48, 0LL);
      v19 = v48[0];
      v39 = v48[0];
      if ( v16 >= 0 && *(_DWORD *)v48[0] != 1803104306 )
      {
        v16 = -1073741816;
        ObfDereferenceObject(v48[0]);
        v19 = 0LL;
        v39 = 0LL;
      }
      if ( v16 >= 0 )
      {
        if ( CmpTraceRoutine && v19 )
        {
          v17 = v19[1];
          v43 = v17;
          v45 = v17;
        }
        if ( PreviousMode == 1 )
        {
          v20 = Length;
          if ( Length )
          {
            if ( ((unsigned __int8)KeyValueInformation & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v15 = 0x7FFFFFFF0000LL;
            if ( (unsigned __int64)KeyValueInformation + Length > 0x7FFFFFFF0000LL
              || (char *)KeyValueInformation + Length < KeyValueInformation )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
            }
          }
          else
          {
            v15 = 0x7FFFFFFF0000LL;
          }
          v21 = (__int64)ResultLength;
          if ( (unsigned __int64)ResultLength >= 0x7FFFFFFF0000LL )
            v21 = 0x7FFFFFFF0000LL;
          *(_DWORD *)v21 = *(_DWORD *)v21;
        }
        else
        {
          v20 = Length;
        }
        v44[1] = v44;
        v44[0] = v44;
        v22 = KeGetCurrentThread();
        --v22->KernelApcDisable;
        if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
        {
          v49[0] = v39;
          v49[1] = __PAIR64__(KeyValueInformationClass, Index);
          v49[2] = KeyValueInformation;
          LODWORD(v49[3]) = v20;
          v49[4] = ResultLength;
          LOBYTE(v17) = 1;
          v16 = CmpCallCallBacks(6, (unsigned int)v49, v17, 21, (__int64)v39, (__int64)v44);
        }
        if ( v16 < 0 )
        {
          if ( v16 == -1073740541 )
            v16 = 0;
        }
        else
        {
          v42 = 0LL;
          v16 = CmKeyBodyRemapToVirtualForEnum(&v39, PreviousMode, 1, &v42);
          v23 = v42;
          if ( v16 < 0 )
          {
            v24 = v39;
          }
          else if ( v42 )
          {
            v37 = v20;
            v24 = v39;
            v16 = CmEnumerateValueKeyFromMergedView(
                    (int)v39,
                    (int)v42,
                    0,
                    Index,
                    KeyValueInformationClass,
                    KeyValueInformation,
                    v37,
                    (__int64)ResultLength,
                    0LL);
          }
          else
          {
            Object = v20;
            v24 = v39;
            v16 = CmEnumerateValueKey(
                    (__int64)v39,
                    Index,
                    KeyValueInformationClass,
                    KeyValueInformation,
                    Object,
                    (__int64)ResultLength);
          }
          if ( v23 )
            ObfDereferenceObject(v23);
          if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) && (_QWORD *)v44[0] != v44 )
          {
            memset(&v50[1], 0, 0x30uLL);
            v50[0] = v24;
            LODWORD(v50[1]) = v16;
            LODWORD(v50[3]) = v16;
            v50[2] = v49;
            CmpCallCallBacks(21, (unsigned int)v50, 0, 21, (__int64)v24, (__int64)v44);
            v16 = v50[3];
          }
        }
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v15, v17, v18);
        ObfDereferenceObject(v39);
        v8 = Index;
      }
      if ( CmpTraceRoutine )
      {
        v35 = v43;
        LOBYTE(v35) = 18;
        CmpTraceRoutine(v35, &v51, (unsigned int)v16, v8, v43, 0LL);
      }
      _m_prefetchw(&CmpShutdownRundown);
      v25 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v25 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&CmpShutdownRundown,
                    (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                    CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v15, v17, v18);
      return v16;
    }
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v27, v28, v29);
  if ( CmpTraceRoutine )
  {
    LOBYTE(v30) = 18;
    CmpTraceRoutine(v30, &v51, 3221225865LL, v8, 0LL, 0LL);
  }
  return -1073741431;
}
