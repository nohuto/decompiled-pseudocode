/*
 * XREFs of NtQueryKey @ 0x14043A170
 * Callers:
 *     IopLoadDriver @ 0x140516794 (IopLoadDriver.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140635B98 (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1406383DC (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14063D290 (PiDevCfgQueryPolicyStringList.c)
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
 *     CmQueryKey @ 0x1404396E0 (CmQueryKey.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacks @ 0x1404518D0 (CmpCallCallBacks.c)
 *     ExRaiseAccessViolation @ 0x1406B6180 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryKey(
        HANDLE KeyHandle,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  __int64 v5; // rbx
  ACCESS_MASK v9; // r14d
  __int64 v10; // rdx
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v12; // rcx
  unsigned __int64 v13; // rtt
  BOOLEAN v14; // r13
  KPROCESSOR_MODE PreviousMode; // r15
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  __int64 v19; // rcx
  NTSTATUS v20; // eax
  __int64 v21; // rcx
  _QWORD *v22; // rbx
  int v23; // ecx
  struct _KTHREAD *v24; // rax
  int v25; // r8d
  int v26; // eax
  int Key; // ebx
  _DWORD *v28; // r9
  PVOID v29; // rsi
  struct _KTHREAD *v30; // rcx
  __int16 v31; // ax
  __int64 v32; // rbx
  unsigned __int64 v33; // rtt
  struct _KTHREAD *v34; // rax
  __int16 v35; // cx
  $2B8565053CDC740D4E4887693DD8AC9E *v36; // rcx
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  void (__fastcall *v41)(signed __int64, int *, __int64, _QWORD, __int64, _QWORD, char); // rax
  __int64 v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  char v46; // [rsp+30h] [rbp-148h]
  unsigned int v47; // [rsp+34h] [rbp-144h]
  __int64 v48; // [rsp+40h] [rbp-138h]
  PVOID v50; // [rsp+58h] [rbp-120h] BYREF
  __int64 v51; // [rsp+60h] [rbp-118h]
  PVOID v52; // [rsp+68h] [rbp-110h] BYREF
  _QWORD v53[2]; // [rsp+70h] [rbp-108h] BYREF
  PVOID Object; // [rsp+80h] [rbp-F8h] BYREF
  PVOID v55; // [rsp+88h] [rbp-F0h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-E8h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+98h] [rbp-E0h] BYREF
  _QWORD v58[7]; // [rsp+A8h] [rbp-D0h] BYREF
  _QWORD v59[8]; // [rsp+E0h] [rbp-98h] BYREF
  int v60; // [rsp+120h] [rbp-58h] BYREF
  __int64 v61; // [rsp+124h] [rbp-54h]
  int v62; // [rsp+12Ch] [rbp-4Ch]

  v5 = Length;
  Handle = KeyHandle;
  memset(v59, 0, sizeof(v59));
  v9 = 0;
  v52 = 0LL;
  v60 = 0;
  v61 = 0LL;
  v62 = 0;
  v10 = 0LL;
  v48 = 0LL;
  v51 = 0LL;
  if ( CmpTraceRoutine )
  {
    EtwGetKernelTraceTimestamp((char *)&v60, 0x20000uLL);
    v10 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&CmpShutdownRundown);
  v12 = (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2;
  v13 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v13 == _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpShutdownRundown,
                v12,
                CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
  {
    v14 = 1;
    v46 = 1;
  }
  else
  {
    v14 = ExfAcquireRundownProtection(&CmpShutdownRundown);
    v46 = v14;
    if ( !v14 )
    {
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v38, v39, v40);
      v47 = -1073741431;
      goto LABEL_62;
    }
    v10 = 0LL;
  }
  if ( (unsigned int)KeyInformationClass <= KeyTrustInformation )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode == 1 )
    {
      if ( (_DWORD)v5 )
      {
        v16 = (unsigned __int64)KeyInformation;
        if ( ((unsigned __int8)KeyInformation & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v17 = (unsigned __int64)KeyInformation + v5 - 1;
        if ( (unsigned __int64)KeyInformation > v17 || v17 >= 0x7FFFFFFF0000LL )
        {
          if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
            ExRaiseAccessViolation();
        }
        else
        {
          v18 = (v17 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          do
          {
            *(_BYTE *)v16 = *(_BYTE *)v16;
            v16 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          }
          while ( v16 != v18 );
        }
      }
      v19 = (__int64)ResultLength;
      if ( (unsigned __int64)ResultLength >= 0x7FFFFFFF0000LL )
        v19 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v19 = *(_DWORD *)v19;
    }
    if ( ((KeyInformationClass - 3) & 0xFFFFFFFB) != 0 )
      v9 = 1;
    v20 = ObReferenceObjectByHandle(
            Handle,
            v9,
            (POBJECT_TYPE)CmKeyObjectType,
            PreviousMode,
            &Object,
            &HandleInformation);
    v22 = Object;
    v50 = Object;
    v47 = v20;
    if ( v20 >= 0 )
    {
      v23 = *(_DWORD *)Object;
      if ( *(_DWORD *)Object == 1803104306 )
      {
        if ( CmpTraceRoutine )
        {
          v48 = *((_QWORD *)Object + 1);
          v51 = v48;
        }
        if ( ((KeyInformationClass - 3) & 0xFFFFFFFB) == 0 )
        {
          if ( HandleInformation.GrantedAccess )
            goto LABEL_29;
          v47 = -1073741790;
LABEL_43:
          v32 = v48;
LABEL_44:
          ObfDereferenceObject(v50);
LABEL_45:
          if ( CmpTraceRoutine )
          {
            LOBYTE(v21) = 13;
            CmpTraceRoutine(v21, &v60, v47, (unsigned int)KeyInformationClass, v32, 0LL);
          }
          if ( v14 )
          {
            _m_prefetchw(&CmpShutdownRundown);
            v33 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
            if ( v33 != _InterlockedCompareExchange64(
                          (volatile signed __int64 *)&CmpShutdownRundown,
                          (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                          CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
              ExfReleaseRundownProtection(&CmpShutdownRundown);
            v34 = KeGetCurrentThread();
            v35 = v34->KernelApcDisable + 1;
            v34->KernelApcDisable = v35;
            if ( !v35 )
            {
              v36 = &v34->152;
              if ( ($2B8565053CDC740D4E4887693DD8AC9E *)v36->ApcState.ApcListHead[0].Flink != v36
                && !v34->SpecialApcDisable )
              {
                KiCheckForKernelApcDelivery((__int64)v36);
              }
            }
          }
          return v47;
        }
        if ( KeyInformationClass != KeyCachedInformation )
          goto LABEL_29;
      }
      else if ( KeyInformationClass != KeyCachedInformation )
      {
        v47 = -1073741816;
        goto LABEL_43;
      }
      if ( v23 != 1803104306 )
      {
        *ResultLength = 40;
        if ( Length < 0x28 )
        {
          v47 = -1073741789;
        }
        else
        {
          memset(KeyInformation, 0, 0x28uLL);
          *((_DWORD *)KeyInformation + 5) = *(_DWORD *)(v22[1] + 88LL);
        }
        v32 = v48;
        goto LABEL_44;
      }
LABEL_29:
      v53[1] = v53;
      v53[0] = v53;
      v24 = KeGetCurrentThread();
      --v24->KernelApcDisable;
      if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
      {
        v26 = v47;
      }
      else
      {
        v59[0] = Object;
        LODWORD(v59[1]) = KeyInformationClass;
        v59[2] = KeyInformation;
        LODWORD(v59[3]) = Length;
        v59[4] = ResultLength;
        LOBYTE(v25) = 1;
        v26 = CmpCallCallBacks(7, (unsigned int)v59, v25, 22, (__int64)Object, (__int64)v53);
      }
      if ( v26 < 0 )
      {
        if ( v26 == -1073740541 )
          v26 = 0;
      }
      else
      {
        Key = CmKeyBodyRemapToVirtualForEnum(&v50, PreviousMode, v9, &v52);
        v47 = Key;
        if ( Key < 0 )
        {
          v29 = v50;
        }
        else
        {
          v28 = KeyInformation;
          v29 = v50;
          Key = CmQueryKey((__int64)v50, (__int64)v52, KeyInformationClass, v28, Length, ResultLength);
          v47 = Key;
        }
        if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite(&CmpRegistryLock) || (_QWORD *)v53[0] == v53 )
          goto LABEL_40;
        memset(&v58[1], 0, 0x30uLL);
        v58[0] = v29;
        LODWORD(v58[1]) = Key;
        LODWORD(v58[3]) = Key;
        v58[2] = v59;
        CmpCallCallBacks(22, (unsigned int)v58, 0, 22, (__int64)v29, (__int64)v53);
        v26 = v58[3];
      }
      v47 = v26;
LABEL_40:
      v30 = KeGetCurrentThread();
      v31 = v30->KernelApcDisable + 1;
      v30->KernelApcDisable = v31;
      if ( !v31
        && ($2B8565053CDC740D4E4887693DD8AC9E *)v30->ApcState.ApcListHead[0].Flink != &v30->152
        && !v30->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery((__int64)v30);
      }
      if ( v52 )
        ObfDereferenceObject(v52);
      goto LABEL_43;
    }
LABEL_62:
    v32 = 0LL;
    goto LABEL_45;
  }
  v41 = (void (__fastcall *)(signed __int64, int *, __int64, _QWORD, __int64, _QWORD, char))CmpTraceRoutine;
  if ( CmpTraceRoutine )
  {
    if ( KeyHandle )
    {
      if ( ObReferenceObjectByHandle(
             KeyHandle,
             0,
             (POBJECT_TYPE)CmKeyObjectType,
             KeGetCurrentThread()->PreviousMode,
             &v55,
             0LL) < 0 )
      {
        v10 = 0LL;
      }
      else
      {
        v42 = *((_QWORD *)v55 + 1);
        ObfDereferenceObject(v55);
        v10 = v42;
      }
      v41 = (void (__fastcall *)(signed __int64, int *, __int64, _QWORD, __int64, _QWORD, char))CmpTraceRoutine;
    }
    if ( v41 )
    {
      LOBYTE(v12) = 13;
      v41(v12, &v60, 3221225485LL, (unsigned int)KeyInformationClass, v10, 0LL, v46);
    }
  }
  ExReleaseRundownProtection(&CmpShutdownRundown);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v43, v44, v45);
  return -1073741811;
}
