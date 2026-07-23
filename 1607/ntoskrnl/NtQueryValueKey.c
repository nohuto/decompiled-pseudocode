/*
 * XREFs of NtQueryValueKey @ 0x14043A750
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1404CA880 (ExpWatchProductTypeWork.c)
 *     IopLoadDriver @ 0x140516794 (IopLoadDriver.c)
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 *     ExpWatchProductTypeInitialization @ 0x1407A9F80 (ExpWatchProductTypeInitialization.c)
 *     CmpCreateControlSet @ 0x1407AC02C (CmpCreateControlSet.c)
 *     CmpSetSystemValues @ 0x1407AE99C (CmpSetSystemValues.c)
 *     ExpInitFastCache @ 0x1407B5348 (ExpInitFastCache.c)
 *     IopProtectSystemPartition @ 0x1407BC468 (IopProtectSystemPartition.c)
 *     InitSafeBoot @ 0x1407CD104 (InitSafeBoot.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14002CDD0 (ExIsResourceAcquiredSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400598D0 (EtwGetKernelTraceTimestamp.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ExfAcquireRundownProtection @ 0x14008BD40 (ExfAcquireRundownProtection.c)
 *     ExfReleaseRundownProtection @ 0x140090490 (ExfReleaseRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140437630 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmQueryValueKey @ 0x14043E2F0 (CmQueryValueKey.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacks @ 0x1404518D0 (CmpCallCallBacks.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryValueKey(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  __int64 v10; // rsi
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v12; // rcx
  unsigned __int64 v13; // rtt
  KPROCESSOR_MODE PreviousMode; // r12
  NTSTATUS v15; // ebx
  int v16; // eax
  wchar_t *Buffer; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int16 v19; // ax
  _BYTE *PoolWithQuotaTag; // rbx
  ULONG v21; // esi
  __int64 v22; // rcx
  unsigned __int16 i; // ax
  unsigned __int16 v24; // dx
  KEY_VALUE_INFORMATION_CLASS v25; // r12d
  struct _KTHREAD *v26; // rax
  int v27; // r8d
  int v28; // eax
  int ValueKey; // ebx
  PVOID v30; // rdi
  PVOID v31; // rsi
  struct _KTHREAD *v32; // rcx
  __int16 v33; // ax
  unsigned __int64 v34; // rtt
  struct _KTHREAD *v35; // rax
  __int16 v36; // cx
  $2B8565053CDC740D4E4887693DD8AC9E *v37; // rcx
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rcx
  void (__fastcall *v43)(signed __int64, int *, __int64, _QWORD, __int64, _QWORD); // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rcx
  ULONG Object; // [rsp+20h] [rbp-1E8h]
  NTSTATUS v49; // [rsp+30h] [rbp-1D8h]
  void *Src[2]; // [rsp+40h] [rbp-1C8h] BYREF
  PVOID v52; // [rsp+50h] [rbp-1B8h] BYREF
  _BYTE *v53; // [rsp+58h] [rbp-1B0h]
  KEY_VALUE_INFORMATION_CLASS v54; // [rsp+60h] [rbp-1A8h]
  PVOID v55; // [rsp+68h] [rbp-1A0h] BYREF
  __int64 v56; // [rsp+70h] [rbp-198h]
  _QWORD v57[2]; // [rsp+78h] [rbp-190h] BYREF
  __int64 v58; // [rsp+88h] [rbp-180h]
  PULONG v59; // [rsp+90h] [rbp-178h]
  PVOID v60; // [rsp+98h] [rbp-170h] BYREF
  PVOID v61[2]; // [rsp+A0h] [rbp-168h] BYREF
  __int128 v62; // [rsp+B0h] [rbp-158h]
  __int128 v63; // [rsp+C0h] [rbp-148h] BYREF
  __int128 v64; // [rsp+D0h] [rbp-138h] BYREF
  _QWORD v65[8]; // [rsp+E0h] [rbp-128h] BYREF
  _QWORD v66[10]; // [rsp+120h] [rbp-E8h] BYREF
  int v67; // [rsp+170h] [rbp-98h] BYREF
  __int64 v68; // [rsp+174h] [rbp-94h]
  int v69; // [rsp+17Ch] [rbp-8Ch]
  _BYTE v70[64]; // [rsp+180h] [rbp-88h] BYREF

  v54 = KeyValueInformationClass;
  v61[1] = KeyValueInformation;
  v59 = ResultLength;
  LOWORD(Src[0]) = 0;
  *(void **)((char *)Src + 2) = 0LL;
  *(_DWORD *)((char *)&Src[1] + 2) = 0;
  HIWORD(Src[1]) = 0;
  memset(v66, 0, 0x48uLL);
  v53 = 0LL;
  v67 = 0;
  v68 = 0LL;
  v69 = 0;
  v10 = 0LL;
  v56 = 0LL;
  v58 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((char *)&v67, 0x20000uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&CmpShutdownRundown);
  v12 = (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2;
  v13 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v13 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpShutdownRundown,
                v12,
                CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
  {
    if ( !ExfAcquireRundownProtection(&CmpShutdownRundown) )
    {
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v39, v40, v41);
      if ( CmpTraceRoutine )
      {
        LOBYTE(v42) = 16;
        CmpTraceRoutine(v42, &v67, 3221225865LL, (unsigned int)KeyValueInformationClass, 0LL, 0LL);
      }
      return -1073741431;
    }
    v10 = 0LL;
  }
  if ( (unsigned int)KeyValueInformationClass <= KeyValuePartialInformationAlign64 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    v15 = ObReferenceObjectByHandle(KeyHandle, 1u, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, v61, 0LL);
    v52 = v61[0];
    if ( v15 >= 0 && *(_DWORD *)v61[0] != 1803104306 )
    {
      v15 = -1073741816;
      ObfDereferenceObject(v61[0]);
      v52 = 0LL;
    }
    v49 = v15;
    if ( v15 < 0 )
    {
      v25 = KeyValueInformationClass;
    }
    else
    {
      if ( CmpTraceRoutine && v52 )
      {
        v56 = *((_QWORD *)v52 + 1);
        v58 = v56;
      }
      if ( PreviousMode == 1 )
      {
        if ( (unsigned __int64)ValueName >= 0x7FFFFFFF0000LL )
          ValueName = (PUNICODE_STRING)0x7FFFFFFF0000LL;
        v16 = *(_DWORD *)&ValueName->Length;
        LODWORD(v62) = v16;
        Buffer = ValueName->Buffer;
        *((_QWORD *)&v62 + 1) = Buffer;
        *(_OWORD *)Src = v62;
        if ( (_WORD)v16 )
        {
          if ( ((unsigned __int8)Buffer & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v18 = (unsigned __int64)Buffer + (unsigned __int16)v16;
          if ( v18 > 0x7FFFFFFF0000LL || v18 < (unsigned __int64)Buffer )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        v19 = (unsigned __int16)Src[0];
        if ( LOWORD(Src[0]) )
        {
          if ( LOWORD(Src[0]) > 0x40u )
          {
            PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, LOWORD(Src[0]), 0x6E764D43u);
            v53 = PoolWithQuotaTag;
            if ( !PoolWithQuotaTag )
            {
              v49 = -1073741670;
              v25 = KeyValueInformationClass;
LABEL_60:
              if ( CmpTraceRoutine )
              {
                v47 = v56;
                LOBYTE(v47) = 16;
                CmpTraceRoutine(v47, &v67, (unsigned int)v49, (unsigned int)v25, v56, Src);
              }
              if ( PoolWithQuotaTag && PoolWithQuotaTag != v70 )
                ExFreePoolWithTag(PoolWithQuotaTag, 0);
              _m_prefetchw(&CmpShutdownRundown);
              v34 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
              if ( v34 != _InterlockedCompareExchange64(
                            (volatile signed __int64 *)&CmpShutdownRundown,
                            (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                            CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
                ExfReleaseRundownProtection(&CmpShutdownRundown);
              v35 = KeGetCurrentThread();
              v36 = v35->KernelApcDisable + 1;
              v35->KernelApcDisable = v36;
              if ( !v36 )
              {
                v37 = &v35->152;
                if ( ($2B8565053CDC740D4E4887693DD8AC9E *)v37->ApcState.ApcListHead[0].Flink != v37
                  && !v35->SpecialApcDisable )
                {
                  KiCheckForKernelApcDelivery((__int64)v37);
                }
              }
              return v49;
            }
            v19 = (unsigned __int16)Src[0];
          }
          else
          {
            PoolWithQuotaTag = v70;
            v53 = v70;
          }
          memmove(PoolWithQuotaTag, Src[1], v19);
          Src[1] = PoolWithQuotaTag;
          v19 = (unsigned __int16)Src[0];
        }
        WORD1(Src[0]) = v19;
        v21 = Length;
        if ( Length )
        {
          if ( ((unsigned __int8)KeyValueInformation & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)KeyValueInformation + Length > 0x7FFFFFFF0000LL
            || (char *)KeyValueInformation + Length < KeyValueInformation )
          {
            MEMORY[0x7FFFFFFF0000] = 0;
          }
        }
        v22 = (__int64)ResultLength;
        if ( (unsigned __int64)ResultLength >= 0x7FFFFFFF0000LL )
          v22 = 0x7FFFFFFF0000LL;
        *(_DWORD *)v22 = *(_DWORD *)v22;
      }
      else
      {
        *(UNICODE_STRING *)Src = *ValueName;
        v21 = Length;
      }
      if ( ((__int64)Src[0] & 1) != 0 )
      {
        v49 = -1073741811;
      }
      else
      {
        for ( i = (unsigned __int16)Src[0]; i; i -= 2 )
        {
          v24 = i;
          if ( *((_WORD *)Src[1] + ((unsigned __int64)i >> 1) - 1) )
            break;
          LOWORD(Src[0]) = v24 - 2;
        }
      }
      if ( v49 < 0 )
      {
        v25 = KeyValueInformationClass;
      }
      else
      {
        v57[1] = v57;
        v57[0] = v57;
        v26 = KeGetCurrentThread();
        --v26->KernelApcDisable;
        if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
        {
          v28 = v49;
        }
        else
        {
          v66[0] = v52;
          v66[1] = Src;
          LODWORD(v66[2]) = KeyValueInformationClass;
          v66[3] = KeyValueInformation;
          LODWORD(v66[4]) = v21;
          v66[5] = ResultLength;
          LOBYTE(v27) = 1;
          v28 = CmpCallCallBacks(8, (unsigned int)v66, v27, 23, (__int64)v52, (__int64)v57);
        }
        if ( v28 < 0 )
        {
          if ( v28 == -1073740541 )
            v28 = 0;
          v49 = v28;
          v25 = KeyValueInformationClass;
        }
        else
        {
          v55 = 0LL;
          ValueKey = CmKeyBodyRemapToVirtualForEnum(&v52, PreviousMode, 1, &v55);
          v49 = ValueKey;
          v30 = v55;
          v25 = KeyValueInformationClass;
          if ( ValueKey >= 0
            && (!v55
             || (v63 = *(_OWORD *)Src,
                 ValueKey = CmQueryValueKey(
                              (_DWORD)v55,
                              (unsigned int)&v63,
                              KeyValueInformationClass,
                              (_DWORD)KeyValueInformation,
                              v21,
                              (__int64)ResultLength),
                 v49 = ValueKey,
                 ValueKey == -1073741772)) )
          {
            v64 = *(_OWORD *)Src;
            Object = v21;
            v31 = v52;
            ValueKey = CmQueryValueKey(
                         (_DWORD)v52,
                         (unsigned int)&v64,
                         KeyValueInformationClass,
                         (_DWORD)KeyValueInformation,
                         Object,
                         (__int64)ResultLength);
            v49 = ValueKey;
          }
          else
          {
            v31 = v52;
          }
          if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) && (_QWORD *)v57[0] != v57 )
          {
            memset(&v65[1], 0, 0x30uLL);
            v65[0] = v31;
            LODWORD(v65[1]) = ValueKey;
            LODWORD(v65[3]) = ValueKey;
            v65[2] = v66;
            CmpCallCallBacks(23, (unsigned int)v65, 0, 23, (__int64)v31, (__int64)v57);
            v49 = v65[3];
          }
          if ( v30 )
            ObfDereferenceObject(v30);
        }
        v32 = KeGetCurrentThread();
        v33 = v32->KernelApcDisable + 1;
        v32->KernelApcDisable = v33;
        if ( !v33
          && ($2B8565053CDC740D4E4887693DD8AC9E *)v32->ApcState.ApcListHead[0].Flink != &v32->152
          && !v32->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery((__int64)v32);
        }
      }
      ObfDereferenceObject(v52);
    }
    PoolWithQuotaTag = v53;
    goto LABEL_60;
  }
  v43 = (void (__fastcall *)(signed __int64, int *, __int64, _QWORD, __int64, _QWORD))CmpTraceRoutine;
  if ( CmpTraceRoutine )
  {
    if ( KeyHandle )
    {
      if ( ObReferenceObjectByHandle(
             KeyHandle,
             0,
             (POBJECT_TYPE)CmKeyObjectType,
             KeGetCurrentThread()->PreviousMode,
             &v60,
             0LL) >= 0 )
      {
        v10 = *((_QWORD *)v60 + 1);
        ObfDereferenceObject(v60);
      }
      v43 = (void (__fastcall *)(signed __int64, int *, __int64, _QWORD, __int64, _QWORD))CmpTraceRoutine;
    }
    if ( v43 )
    {
      LOBYTE(v12) = 16;
      v43(v12, &v67, 3221225485LL, (unsigned int)KeyValueInformationClass, v10, 0LL);
    }
  }
  ExReleaseRundownProtection(&CmpShutdownRundown);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v44, v45, v46);
  return -1073741811;
}
