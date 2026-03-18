/*
 * XREFs of NtQueryValueKey @ 0x140400BF0
 * Callers:
 *     IopLoadDriver @ 0x1403BB9F8 (IopLoadDriver.c)
 *     sub_140498054 @ 0x140498054 (sub_140498054.c)
 *     CmpCreateControlSet @ 0x1407433D0 (CmpCreateControlSet.c)
 *     CmpSetSystemValues @ 0x140744BE0 (CmpSetSystemValues.c)
 *     IoInitSystemPreDrivers @ 0x140757B24 (IoInitSystemPreDrivers.c)
 *     sub_14076255C @ 0x14076255C (sub_14076255C.c)
 *     sub_14076925C @ 0x14076925C (sub_14076925C.c)
 *     IopProtectSystemPartition @ 0x140771860 (IopProtectSystemPartition.c)
 *     InitSafeBoot @ 0x140781CE4 (InitSafeBoot.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x14000D5AC (ObFastReferenceObjectLocked.c)
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     PspUnlockProcessShared @ 0x14002E340 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x14002E384 (PspLockProcessShared.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14003DAD0 (ExIsResourceAcquiredSharedLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     ObFastDereferenceObject @ 0x140043280 (ObFastDereferenceObject.c)
 *     ObFastReferenceObject @ 0x140043350 (ObFastReferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExfAcquireRundownProtection @ 0x140079F60 (ExfAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14008E480 (ExAllocatePoolWithQuotaTag.c)
 *     ExfReleaseRundownProtection @ 0x1400D0750 (ExfReleaseRundownProtection.c)
 *     PspUnlockThreadSecurityShared @ 0x1400D1980 (PspUnlockThreadSecurityShared.c)
 *     PspLockThreadSecurityShared @ 0x1400D19C0 (PspLockThreadSecurityShared.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400DE680 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpIsSystemEntity @ 0x1403FBD30 (CmpIsSystemEntity.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     SeQueryInformationToken @ 0x1403FE580 (SeQueryInformationToken.c)
 *     CmQueryValueKey @ 0x140405E20 (CmQueryValueKey.c)
 *     CmpCallCallBacks @ 0x140409130 (CmpCallCallBacks.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x140423B90 (CmpLockKcbShared.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     ObReferenceObjectByName @ 0x14046F95C (ObReferenceObjectByName.c)
 *     CmVirtualKCBToRealPath @ 0x1405E1C6C (CmVirtualKCBToRealPath.c)
 *     CmpReparseToVirtualPath @ 0x1405E2990 (CmpReparseToVirtualPath.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryValueKey(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  int v10; // edi
  __int64 v11; // r14
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v13; // rcx
  unsigned __int64 v14; // rtt
  KPROCESSOR_MODE PreviousMode; // r15
  NTSTATUS v16; // ebx
  _QWORD *v17; // r14
  int v18; // eax
  wchar_t *Buffer; // rcx
  ULONG64 v20; // r8
  ULONG *v21; // rdx
  unsigned __int16 v22; // ax
  _BYTE *PoolWithQuotaTag; // rbx
  ULONG v24; // r15d
  PULONG v25; // rcx
  unsigned __int16 i; // ax
  unsigned __int16 v27; // dx
  KEY_VALUE_INFORMATION_CLASS v28; // r13d
  struct _KTHREAD *v29; // rax
  int v30; // r8d
  char **v31; // rsi
  int v32; // eax
  __int64 v33; // r9
  char **v34; // r14
  __int64 v35; // rdx
  char **v36; // r13
  char *v37; // rcx
  __int64 v38; // r8
  PULONG v39; // rbx
  struct _KTHREAD *v40; // rcx
  __int16 v41; // ax
  unsigned __int64 v42; // rtt
  struct _KTHREAD *v43; // rax
  __int16 v44; // cx
  $E81C3296F15336D9BF9B2D43BB137B25 *v45; // rcx
  bool v47; // cl
  struct _KTHREAD *v48; // rbx
  __int64 v49; // rsi
  __int64 Process; // r14
  void *v51; // rbx
  int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // rcx
  void (__fastcall *v55)(signed __int64, int *, __int64, _QWORD, __int64, _QWORD); // rax
  __int64 v56; // rdx
  char *v57; // rcx
  char v58; // al
  char *v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  int v64; // ebx
  int v65; // ebx
  void *v66; // rcx
  PVOID *Object; // [rsp+20h] [rbp-2A8h]
  _QWORD *v68; // [rsp+30h] [rbp-298h]
  void **v69; // [rsp+38h] [rbp-290h]
  NTSTATUS v70; // [rsp+40h] [rbp-288h]
  void *Src[2]; // [rsp+50h] [rbp-278h] BYREF
  PVOID v73; // [rsp+60h] [rbp-268h]
  PVOID v74; // [rsp+68h] [rbp-260h]
  char **v75; // [rsp+70h] [rbp-258h] BYREF
  PVOID TokenInformation; // [rsp+78h] [rbp-250h] BYREF
  void *v77; // [rsp+80h] [rbp-248h]
  _BYTE *v78; // [rsp+88h] [rbp-240h]
  struct _KTHREAD *v79; // [rsp+90h] [rbp-238h]
  PULONG v80; // [rsp+98h] [rbp-230h]
  _QWORD v81[2]; // [rsp+A0h] [rbp-228h] BYREF
  KEY_VALUE_INFORMATION_CLASS v82; // [rsp+B0h] [rbp-218h]
  char **v83; // [rsp+B8h] [rbp-210h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+C0h] [rbp-208h] BYREF
  PVOID v85; // [rsp+D0h] [rbp-1F8h] BYREF
  PVOID v86; // [rsp+D8h] [rbp-1F0h] BYREF
  __int128 v87; // [rsp+E0h] [rbp-1E8h]
  _QWORD v88[10]; // [rsp+F0h] [rbp-1D8h] BYREF
  __int128 v89; // [rsp+140h] [rbp-188h] BYREF
  _QWORD v90[8]; // [rsp+150h] [rbp-178h] BYREF
  __int128 v91; // [rsp+190h] [rbp-138h] BYREF
  _QWORD v92[18]; // [rsp+1A0h] [rbp-128h] BYREF
  int v93; // [rsp+230h] [rbp-98h] BYREF
  __int64 v94; // [rsp+234h] [rbp-94h]
  int v95; // [rsp+23Ch] [rbp-8Ch]
  _BYTE v96[64]; // [rsp+240h] [rbp-88h] BYREF

  v82 = KeyValueInformationClass;
  v79 = (struct _KTHREAD *)KeyValueInformation;
  v80 = ResultLength;
  v10 = 0;
  LOWORD(Src[0]) = 0;
  *(void **)((char *)Src + 2) = 0LL;
  *(_DWORD *)((char *)&Src[1] + 2) = 0;
  HIWORD(Src[1]) = 0;
  memset(v88, 0, 72);
  v78 = 0LL;
  v93 = 0;
  v94 = 0LL;
  v95 = 0;
  v11 = 0LL;
  v77 = 0LL;
  v74 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((char *)&v93, (char *)0x20000);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&CmpShutdownRundown);
  v13 = (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2;
  v14 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v14 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpShutdownRundown,
                v13,
                CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
  {
    if ( !ExfAcquireRundownProtection(&CmpShutdownRundown) )
    {
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      if ( CmpTraceRoutine )
      {
        LOBYTE(v54) = 16;
        CmpTraceRoutine(v54, &v93, 3221225865LL, (unsigned int)KeyValueInformationClass, 0LL, 0LL);
      }
      return -1073741431;
    }
    v11 = 0LL;
  }
  if ( (unsigned int)KeyValueInformationClass <= KeyValuePartialInformationAlign64 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    v16 = ObReferenceObjectByHandle(KeyHandle, 1u, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &v85, 0LL);
    v17 = v85;
    v73 = v85;
    if ( v16 >= 0 && *(_DWORD *)v85 != 1803104306 )
    {
      v16 = -1073741816;
      ObfDereferenceObject(v85);
    }
    v70 = v16;
    if ( v16 < 0 )
    {
      v28 = KeyValueInformationClass;
      goto LABEL_67;
    }
    if ( CmpTraceRoutine && v17 )
    {
      v77 = (void *)v17[1];
      v74 = v77;
    }
    if ( PreviousMode != 1 )
    {
      *(UNICODE_STRING *)Src = *ValueName;
      v24 = Length;
      goto LABEL_28;
    }
    if ( (unsigned __int64)ValueName >= MmUserProbeAddress )
      ValueName = (PUNICODE_STRING)MmUserProbeAddress;
    v18 = *(_DWORD *)&ValueName->Length;
    LODWORD(v87) = v18;
    Buffer = ValueName->Buffer;
    *((_QWORD *)&v87 + 1) = Buffer;
    *(_OWORD *)Src = v87;
    if ( (_WORD)v18 )
    {
      if ( ((unsigned __int8)Buffer & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v20 = (ULONG64)Buffer + (unsigned __int16)v18;
      v21 = (ULONG *)MmUserProbeAddress;
      if ( v20 <= MmUserProbeAddress && v20 >= (unsigned __int64)Buffer )
        goto LABEL_17;
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    v21 = (ULONG *)MmUserProbeAddress;
LABEL_17:
    v22 = (unsigned __int16)Src[0];
    if ( LOWORD(Src[0]) )
    {
      if ( LOWORD(Src[0]) > 0x40u )
      {
        PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, LOWORD(Src[0]), 0x6E764D43u);
        v78 = PoolWithQuotaTag;
        if ( !PoolWithQuotaTag )
        {
          v70 = -1073741670;
          v28 = KeyValueInformationClass;
LABEL_68:
          if ( CmpTraceRoutine )
          {
            v66 = v77;
            LOBYTE(v66) = 16;
            CmpTraceRoutine(v66, &v93, (unsigned int)v70, (unsigned int)v28, v77, Src);
          }
          if ( PoolWithQuotaTag && PoolWithQuotaTag != v96 )
            ExFreePoolWithTag(PoolWithQuotaTag, 0);
          _m_prefetchw(&CmpShutdownRundown);
          v42 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v42 != _InterlockedCompareExchange64(
                        (volatile signed __int64 *)&CmpShutdownRundown,
                        (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                        CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
            ExfReleaseRundownProtection(&CmpShutdownRundown);
          v43 = KeGetCurrentThread();
          v44 = v43->KernelApcDisable + 1;
          v43->KernelApcDisable = v44;
          if ( !v44 )
          {
            v45 = &v43->152;
            if ( ($E81C3296F15336D9BF9B2D43BB137B25 *)v45->ApcState.ApcListHead[0].Flink != v45
              && !v43->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery((__int64)v45);
            }
          }
          return v70;
        }
        v22 = (unsigned __int16)Src[0];
      }
      else
      {
        PoolWithQuotaTag = v96;
        v78 = v96;
      }
      memmove(PoolWithQuotaTag, Src[1], v22);
      Src[1] = PoolWithQuotaTag;
      v22 = (unsigned __int16)Src[0];
      v21 = (ULONG *)MmUserProbeAddress;
    }
    WORD1(Src[0]) = v22;
    v24 = Length;
    if ( Length )
    {
      if ( ((unsigned __int8)KeyValueInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (char *)KeyValueInformation + Length > (char *)v21
        || (char *)KeyValueInformation + Length < KeyValueInformation )
      {
        *(_BYTE *)v21 = 0;
        v21 = (ULONG *)MmUserProbeAddress;
      }
    }
    v25 = ResultLength;
    if ( ResultLength >= v21 )
      v25 = v21;
    *v25 = *v25;
LABEL_28:
    if ( ((__int64)Src[0] & 1) != 0 )
    {
      v70 = -1073741811;
    }
    else
    {
      for ( i = (unsigned __int16)Src[0]; i; i -= 2 )
      {
        v27 = i;
        if ( *((_WORD *)Src[1] + ((unsigned __int64)i >> 1) - 1) )
          break;
        LOWORD(Src[0]) = v27 - 2;
      }
    }
    if ( v70 < 0 )
    {
      v28 = KeyValueInformationClass;
LABEL_66:
      ObfDereferenceObject(v73);
LABEL_67:
      PoolWithQuotaTag = v78;
      goto LABEL_68;
    }
    v81[1] = v81;
    v81[0] = v81;
    v29 = KeGetCurrentThread();
    --v29->KernelApcDisable;
    if ( CmpCallBackCount )
    {
      v31 = (char **)v73;
      if ( !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
      {
        v88[0] = v73;
        v88[1] = Src;
        LODWORD(v88[2]) = KeyValueInformationClass;
        v88[3] = KeyValueInformation;
        LODWORD(v88[4]) = v24;
        v88[5] = ResultLength;
        LOBYTE(v30) = 1;
        v32 = CmpCallCallBacks(8, (unsigned int)v88, v30, 23, (__int64)v73, (__int64)v81);
        goto LABEL_48;
      }
    }
    else
    {
      v31 = (char **)v73;
    }
    v32 = v70;
LABEL_48:
    if ( v32 < 0 )
    {
      if ( v32 == -1073740541 )
        v32 = 0;
      v70 = v32;
      v28 = KeyValueInformationClass;
      goto LABEL_65;
    }
    memset((char *)v92 + 4, 0, 0x84uLL);
    v34 = 0LL;
    v75 = 0LL;
    LODWORD(v92[0]) = 8;
    v35 = (unsigned __int8)CmpVEEnabled;
    if ( !CmpVEEnabled )
      goto LABEL_56;
    v36 = v31 + 1;
    v37 = v31[1];
    if ( (*((_WORD *)v37 + 93) & 0x200) != 0 )
      goto LABEL_54;
    v38 = *((_QWORD *)v37 + 4);
    if ( v38 == CmpMasterHive
      || (*((_DWORD *)v37 + 1) & 0x20000) == 0
      && (*((_WORD *)v37 + 93) & 0x200) == 0
      && (*(_BYTE *)(v38 + 5360) & 0x10) == 0 )
    {
      goto LABEL_54;
    }
    v47 = 1;
    if ( (v92[2] & 1) != 0 )
    {
      if ( (v92[2] & 2) != 0 )
        goto LABEL_54;
    }
    else
    {
      if ( KeGetCurrentThread()->PreviousMode )
      {
        LODWORD(TokenInformation) = 0;
        v48 = KeGetCurrentThread();
        v49 = (__int64)v48;
        Process = (__int64)v48->ApcState.Process;
        if ( (*((_DWORD *)&v48[1].SwapListEntry + 3) & 8) == 0 )
          goto LABEL_81;
        v79 = KeGetCurrentThread();
        PspLockThreadSecurityShared((__int64)v48, (__int64)v79);
        if ( (*((_DWORD *)&v48[1].SwapListEntry + 3) & 8) != 0 )
        {
          v74 = (PVOID)(*(_QWORD *)&v48[1].SystemCallNumber & 0xFFFFFFFFFFFFFFF8uLL);
          ObfReferenceObject(v74);
        }
        else
        {
          v74 = 0LL;
        }
        PspUnlockThreadSecurityShared((__int64)v48, (__int64)v79);
        if ( v74 )
        {
          ObfDereferenceObject(v74);
        }
        else
        {
LABEL_81:
          v51 = (void *)ObFastReferenceObject((signed __int64 *)(Process + 856));
          if ( !v51 )
          {
            PspLockProcessShared(Process, v49);
            v51 = (void *)ObFastReferenceObjectLocked((_QWORD *)(Process + 856));
            PspUnlockProcessShared(Process, v49);
          }
          SeQueryInformationToken(v51, TokenVirtualizationEnabled, &TokenInformation);
          ObFastDereferenceObject(
            (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
            (unsigned __int64)v51);
        }
        v47 = (_BYTE)TokenInformation == 0;
      }
      if ( v47 )
        v52 = LODWORD(v92[2]) | 3;
      else
        v52 = LODWORD(v92[2]) | 5;
      LODWORD(v92[2]) = v52;
      v31 = (char **)v73;
      v34 = v75;
      if ( v47 )
      {
        LOBYTE(v35) = CmpVEEnabled;
LABEL_54:
        if ( (_BYTE)v35 && (*((_WORD *)v31[1] + 93) & 0x100) != 0 && !CmpIsSystemEntity((int *)&v92[2]) )
        {
          v83 = 0LL;
          CmpLockRegistry(v61, v60, v62, v63);
          CmpLockKcbShared(v31[1]);
          v64 = CmVirtualKCBToRealPath(v31[1], &UnicodeString);
          CmpUnlockKcb(v31[1]);
          CmpUnlockRegistry();
          if ( v64 < 0 )
            goto LABEL_57;
          v92[10] = v31[7];
          v69 = (void **)&v83;
          v68 = v92;
          HIDWORD(Object) = HIDWORD(CmKeyObjectType);
          v65 = ObReferenceObjectByName(&UnicodeString, 576LL, 0LL);
          RtlFreeAnsiString(&UnicodeString);
          if ( v65 >= 0 )
          {
            v34 = v31;
            v75 = v31;
            v31 = v83;
            v73 = v83;
          }
        }
        goto LABEL_56;
      }
    }
    v53 = (unsigned __int8)(*v36)[186];
    if ( (v53 & 0x80u) == 0LL )
      goto LABEL_57;
    CmpLockRegistry(v53, v35, v38, v33);
    CmpLockKcbShared(*v36);
    v57 = *v36;
    if ( (*((_DWORD *)*v36 + 1) & 0x20000) != 0 )
    {
      CmpUnlockKcb(v57);
      CmpUnlockRegistry();
      v10 = -1073741444;
      v70 = -1073741444;
      goto LABEL_131;
    }
    v58 = CmpReparseToVirtualPath(v57, v56, &UnicodeString);
    v59 = *v36;
    if ( !v58 )
    {
      CmpUnlockKcb(v59);
      CmpUnlockRegistry();
      goto LABEL_57;
    }
    CmpUnlockKcb(v59);
    CmpUnlockRegistry();
    v92[10] = v31[7];
    v69 = (void **)&v75;
    v68 = v92;
    HIDWORD(Object) = HIDWORD(CmKeyObjectType);
    v10 = ObReferenceObjectByName(&UnicodeString, 576LL, 0LL);
    RtlFreeAnsiString(&UnicodeString);
    v34 = v75;
LABEL_56:
    v70 = v10;
    if ( v10 >= 0 )
    {
LABEL_57:
      v39 = v80;
      v28 = KeyValueInformationClass;
      if ( !v34
        || (v91 = *(_OWORD *)Src,
            LODWORD(Object) = v24,
            v10 = CmQueryValueKey(
                    v34,
                    &v91,
                    (unsigned int)KeyValueInformationClass,
                    KeyValueInformation,
                    Object,
                    v80,
                    v68,
                    v69),
            v70 = v10,
            v10 == -1073741772) )
      {
        v89 = *(_OWORD *)Src;
        LODWORD(Object) = v24;
        v10 = CmQueryValueKey(
                v31,
                &v89,
                (unsigned int)KeyValueInformationClass,
                KeyValueInformation,
                Object,
                v39,
                v68,
                v69);
        v70 = v10;
      }
      goto LABEL_59;
    }
LABEL_131:
    v28 = KeyValueInformationClass;
LABEL_59:
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) && (_QWORD *)v81[0] != v81 )
    {
      memset(&v90[1], 0, 0x30uLL);
      v90[0] = v31;
      LODWORD(v90[1]) = v10;
      LODWORD(v90[3]) = v10;
      v90[2] = v88;
      CmpCallCallBacks(23, (unsigned int)v90, 0, 23, (__int64)v31, (__int64)v81);
      v70 = v90[3];
    }
    if ( v34 )
      ObfDereferenceObject(v34);
LABEL_65:
    v40 = KeGetCurrentThread();
    v41 = v40->KernelApcDisable + 1;
    v40->KernelApcDisable = v41;
    if ( !v41
      && ($E81C3296F15336D9BF9B2D43BB137B25 *)v40->ApcState.ApcListHead[0].Flink != &v40->152
      && !v40->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v40);
    }
    goto LABEL_66;
  }
  v55 = (void (__fastcall *)(signed __int64, int *, __int64, _QWORD, __int64, _QWORD))CmpTraceRoutine;
  if ( CmpTraceRoutine )
  {
    if ( KeyHandle )
    {
      if ( ObReferenceObjectByHandle(
             KeyHandle,
             0,
             (POBJECT_TYPE)CmKeyObjectType,
             KeGetCurrentThread()->PreviousMode,
             &v86,
             0LL) >= 0 )
      {
        v11 = *((_QWORD *)v86 + 1);
        ObfDereferenceObject(v86);
      }
      v55 = (void (__fastcall *)(signed __int64, int *, __int64, _QWORD, __int64, _QWORD))CmpTraceRoutine;
    }
    if ( v55 )
    {
      LOBYTE(v13) = 16;
      v55(v13, &v93, 3221225485LL, (unsigned int)KeyValueInformationClass, v11, 0LL);
    }
  }
  ExReleaseRundownProtection_0(&CmpShutdownRundown);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return -1073741811;
}
