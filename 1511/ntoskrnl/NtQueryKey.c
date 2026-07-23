/*
 * XREFs of NtQueryKey @ 0x1404003C0
 * Callers:
 *     IopLoadDriver @ 0x1403BB9F8 (IopLoadDriver.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140513DF8 (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140608318 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x140609B14 (PiDevCfgQueryPolicyStringList.c)
 *     sub_14066C188 @ 0x14066C188 (sub_14066C188.c)
 *     sub_14076925C @ 0x14076925C (sub_14076925C.c)
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
 *     ExfReleaseRundownProtection @ 0x1400D0750 (ExfReleaseRundownProtection.c)
 *     PspUnlockThreadSecurityShared @ 0x1400D1980 (PspUnlockThreadSecurityShared.c)
 *     PspLockThreadSecurityShared @ 0x1400D19C0 (PspLockThreadSecurityShared.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400DE680 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     CmpIsSystemEntity @ 0x1403FBD30 (CmpIsSystemEntity.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     SeQueryInformationToken @ 0x1403FE580 (SeQueryInformationToken.c)
 *     CmQueryKey @ 0x1403FF980 (CmQueryKey.c)
 *     CmpCallCallBacks @ 0x140409130 (CmpCallCallBacks.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x140423B90 (CmpLockKcbShared.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     ObReferenceObjectByName @ 0x14046F95C (ObReferenceObjectByName.c)
 *     CmVirtualKCBToRealPath @ 0x1405E1C6C (CmVirtualKCBToRealPath.c)
 *     CmpReparseToVirtualPath @ 0x1405E2990 (CmpReparseToVirtualPath.c)
 *     ExRaiseAccessViolation @ 0x140673340 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryKey(
        HANDLE KeyHandle,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  __int64 v5; // rdi
  PULONG v9; // r13
  __int64 v10; // rdx
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v12; // rcx
  unsigned __int64 v13; // rtt
  KPROCESSOR_MODE PreviousMode; // r9
  unsigned __int64 v15; // rdx
  ULONG64 v16; // rcx
  unsigned __int64 v17; // rcx
  _DWORD *v18; // rcx
  NTSTATUS v19; // eax
  __int64 v20; // rcx
  _QWORD *v21; // rbx
  struct _KTHREAD *v22; // rax
  ULONG IsResourceAcquiredSharedLite; // eax
  int v24; // r8d
  char **v25; // rdi
  int v26; // eax
  int Key; // ebx
  __int64 v28; // r9
  __int64 v29; // rdx
  char **v30; // r15
  char *v31; // rcx
  __int64 v32; // r8
  struct _KTHREAD *v33; // rcx
  __int16 v34; // ax
  __int64 v35; // rdi
  BOOLEAN v36; // bl
  unsigned __int64 v37; // rtt
  struct _KTHREAD *v38; // rax
  __int16 v39; // cx
  $E81C3296F15336D9BF9B2D43BB137B25 *v40; // rcx
  bool v42; // cl
  struct _KTHREAD *v43; // rdi
  __int64 v44; // r13
  __int64 Process; // rcx
  void *v46; // rdi
  int v47; // eax
  __int64 v48; // rcx
  void (__fastcall *v49)(signed __int64, int *, __int64, _QWORD, __int64, _QWORD); // rax
  __int64 v50; // rdi
  __int64 v51; // rdx
  char *v52; // rcx
  char v53; // al
  char *v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  int v59; // ebx
  int v60; // ebx
  char v61; // [rsp+40h] [rbp-208h]
  unsigned int v62; // [rsp+44h] [rbp-204h]
  __int64 v63; // [rsp+50h] [rbp-1F8h]
  __int64 v64; // [rsp+58h] [rbp-1F0h]
  PVOID v65; // [rsp+60h] [rbp-1E8h]
  PVOID Object; // [rsp+68h] [rbp-1E0h] BYREF
  ULONG v67; // [rsp+70h] [rbp-1D8h]
  PVOID v68; // [rsp+78h] [rbp-1D0h]
  PVOID TokenInformation; // [rsp+80h] [rbp-1C8h] BYREF
  PVOID v70; // [rsp+88h] [rbp-1C0h]
  _QWORD v71[2]; // [rsp+90h] [rbp-1B8h] BYREF
  struct _KTHREAD *v72; // [rsp+A0h] [rbp-1A8h]
  PULONG v73; // [rsp+A8h] [rbp-1A0h]
  void *v74; // [rsp+B0h] [rbp-198h]
  UNICODE_STRING UnicodeString; // [rsp+B8h] [rbp-190h] BYREF
  PVOID v76; // [rsp+C8h] [rbp-180h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+D0h] [rbp-178h] BYREF
  _QWORD v78[8]; // [rsp+E0h] [rbp-168h] BYREF
  _QWORD v79[8]; // [rsp+120h] [rbp-128h] BYREF
  int v80; // [rsp+160h] [rbp-E8h]
  int v81[35]; // [rsp+164h] [rbp-E4h] BYREF
  int v82; // [rsp+1F0h] [rbp-58h] BYREF
  __int64 v83; // [rsp+1F4h] [rbp-54h]
  int v84; // [rsp+1FCh] [rbp-4Ch]

  v5 = Length;
  v67 = Length;
  v9 = ResultLength;
  v73 = ResultLength;
  memset(v78, 0, sizeof(v78));
  v68 = 0LL;
  v82 = 0;
  v83 = 0LL;
  v84 = 0;
  v10 = 0LL;
  v64 = 0LL;
  if ( CmpTraceRoutine )
  {
    EtwGetKernelTraceTimestamp((char *)&v82, (char *)0x20000);
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
    v61 = 1;
  }
  else
  {
    v36 = ExfAcquireRundownProtection(&CmpShutdownRundown);
    v61 = v36;
    if ( !v36 )
    {
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v62 = -1073741431;
      goto LABEL_86;
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
        v15 = (unsigned __int64)KeyInformation;
        if ( ((unsigned __int8)KeyInformation & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v16 = (ULONG64)KeyInformation + v5 - 1;
        if ( (unsigned __int64)KeyInformation > v16 || v16 >= MmUserProbeAddress )
        {
          if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
            ExRaiseAccessViolation();
        }
        else
        {
          v17 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          do
          {
            *(_BYTE *)v15 = *(_BYTE *)v15;
            v15 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          }
          while ( v15 != v17 );
        }
      }
      v18 = ResultLength;
      if ( (unsigned __int64)ResultLength >= MmUserProbeAddress )
        v18 = (_DWORD *)MmUserProbeAddress;
      *v18 = *v18;
    }
    v19 = ObReferenceObjectByHandle(
            KeyHandle,
            ((KeyInformationClass - 3) & 0xFFFFFFFB) != 0,
            (POBJECT_TYPE)CmKeyObjectType,
            PreviousMode,
            &Object,
            &HandleInformation);
    v21 = Object;
    v70 = Object;
    v62 = v19;
    if ( v19 >= 0 )
    {
      if ( *(_DWORD *)Object == 1803104306 )
      {
        if ( CmpTraceRoutine )
          v64 = *((_QWORD *)Object + 1);
        if ( ((KeyInformationClass - 3) & 0xFFFFFFFB) == 0 )
        {
          if ( !HandleInformation.GrantedAccess )
          {
            v62 = -1073741790;
LABEL_47:
            v35 = v64;
LABEL_48:
            ObfDereferenceObject(v70);
            v36 = v61;
LABEL_49:
            if ( CmpTraceRoutine )
            {
              LOBYTE(v20) = 13;
              CmpTraceRoutine(v20, &v82, v62, (unsigned int)KeyInformationClass, v35, 0LL);
            }
            if ( v36 )
            {
              _m_prefetchw(&CmpShutdownRundown);
              v37 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
              if ( v37 != _InterlockedCompareExchange64(
                            (volatile signed __int64 *)&CmpShutdownRundown,
                            (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                            CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
                ExfReleaseRundownProtection(&CmpShutdownRundown);
              v38 = KeGetCurrentThread();
              v39 = v38->KernelApcDisable + 1;
              v38->KernelApcDisable = v39;
              if ( !v39 )
              {
                v40 = &v38->152;
                if ( ($E81C3296F15336D9BF9B2D43BB137B25 *)v40->ApcState.ApcListHead[0].Flink != v40
                  && !v38->SpecialApcDisable )
                {
                  KiCheckForKernelApcDelivery((__int64)v40);
                }
              }
            }
            return v62;
          }
LABEL_26:
          v71[1] = v71;
          v71[0] = v71;
          v22 = KeGetCurrentThread();
          --v22->KernelApcDisable;
          if ( CmpCallBackCount )
          {
            IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(&CmpRegistryLock);
            v25 = (char **)Object;
            if ( !IsResourceAcquiredSharedLite )
            {
              v78[0] = Object;
              LODWORD(v78[1]) = KeyInformationClass;
              v78[2] = KeyInformation;
              LODWORD(v78[3]) = v67;
              v78[4] = ResultLength;
              LOBYTE(v24) = 1;
              v26 = CmpCallCallBacks(7, (unsigned int)v78, v24, 22, (__int64)Object, (__int64)v71);
              goto LABEL_29;
            }
          }
          else
          {
            v25 = (char **)Object;
          }
          v26 = v62;
LABEL_29:
          if ( v26 < 0 )
          {
            if ( v26 == -1073740541 )
              v26 = 0;
            goto LABEL_43;
          }
          Key = 0;
          memset(v81, 0, 0x84uLL);
          v68 = 0LL;
          v80 = 8;
          v29 = (unsigned __int8)CmpVEEnabled;
          if ( !CmpVEEnabled )
          {
LABEL_37:
            v62 = Key;
            if ( Key < 0 )
              goto LABEL_39;
            goto LABEL_38;
          }
          v30 = v25 + 1;
          v31 = v25[1];
          if ( (*((_WORD *)v31 + 93) & 0x200) != 0 )
            goto LABEL_35;
          v32 = *((_QWORD *)v31 + 4);
          if ( v32 == CmpMasterHive
            || (*((_DWORD *)v31 + 1) & 0x20000) == 0
            && (*((_WORD *)v31 + 93) & 0x200) == 0
            && (*(_BYTE *)(v32 + 5360) & 0x10) == 0 )
          {
            goto LABEL_35;
          }
          v42 = 1;
          if ( (v81[3] & 1) != 0 )
          {
            if ( (v81[3] & 2) != 0 )
              goto LABEL_35;
            goto LABEL_83;
          }
          if ( !KeGetCurrentThread()->PreviousMode )
          {
LABEL_64:
            if ( v42 )
              v47 = v81[3] | 3;
            else
              v47 = v81[3] | 5;
            v81[3] = v47;
            v25 = (char **)Object;
            if ( v42 )
            {
              LOBYTE(v29) = CmpVEEnabled;
LABEL_35:
              if ( !(_BYTE)v29 || (*((_WORD *)v25[1] + 93) & 0x100) == 0 || CmpIsSystemEntity(&v81[3]) )
                goto LABEL_37;
              v74 = 0LL;
              CmpLockRegistry(v56, v55, v57, v58);
              CmpLockKcbShared(v25[1]);
              v59 = CmVirtualKCBToRealPath(v25[1], &UnicodeString);
              CmpUnlockKcb(v25[1]);
              CmpUnlockRegistry();
              if ( v59 >= 0 )
              {
                *(_QWORD *)&v81[19] = v25[7];
                v60 = ObReferenceObjectByName(&UnicodeString, 576LL, 0LL);
                RtlFreeAnsiString(&UnicodeString);
                if ( v60 >= 0 )
                {
                  v68 = v25;
                  v70 = v74;
                }
                Key = 0;
                goto LABEL_37;
              }
LABEL_38:
              Key = CmQueryKey((__int64)v70, (__int64)v68, KeyInformationClass, KeyInformation, v67, v9);
              v62 = Key;
              goto LABEL_39;
            }
LABEL_83:
            v48 = (unsigned __int8)(*v30)[186];
            if ( (v48 & 0x80u) != 0LL )
            {
              CmpLockRegistry(v48, v29, v32, v28);
              CmpLockKcbShared(*v30);
              v52 = *v30;
              if ( (*((_DWORD *)*v30 + 1) & 0x20000) != 0 )
              {
                CmpUnlockKcb(v52);
                CmpUnlockRegistry();
                Key = -1073741444;
                v62 = -1073741444;
LABEL_39:
                if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite(&CmpRegistryLock) || (_QWORD *)v71[0] == v71 )
                  goto LABEL_44;
                memset(&v79[1], 0, 0x30uLL);
                v79[0] = v70;
                LODWORD(v79[1]) = Key;
                LODWORD(v79[3]) = Key;
                v79[2] = v78;
                CmpCallCallBacks(22, (unsigned int)v79, 0, 22, (__int64)v70, (__int64)v71);
                v26 = v79[3];
LABEL_43:
                v62 = v26;
LABEL_44:
                v33 = KeGetCurrentThread();
                v34 = v33->KernelApcDisable + 1;
                v33->KernelApcDisable = v34;
                if ( !v34
                  && ($E81C3296F15336D9BF9B2D43BB137B25 *)v33->ApcState.ApcListHead[0].Flink != &v33->152
                  && !v33->SpecialApcDisable )
                {
                  KiCheckForKernelApcDelivery((__int64)v33);
                }
                if ( v68 )
                  ObfDereferenceObject(v68);
                goto LABEL_47;
              }
              v53 = CmpReparseToVirtualPath(v52, v51, &UnicodeString);
              v54 = *v30;
              if ( v53 )
              {
                CmpUnlockKcb(v54);
                CmpUnlockRegistry();
                *(_QWORD *)&v81[19] = v25[7];
                Key = ObReferenceObjectByName(&UnicodeString, 576LL, 0LL);
                RtlFreeAnsiString(&UnicodeString);
                goto LABEL_37;
              }
              CmpUnlockKcb(v54);
              CmpUnlockRegistry();
            }
            goto LABEL_38;
          }
          LODWORD(TokenInformation) = 0;
          v43 = KeGetCurrentThread();
          v44 = (__int64)v43;
          Process = (__int64)v43->ApcState.Process;
          v63 = Process;
          if ( (*((_DWORD *)&v43[1].SwapListEntry + 3) & 8) != 0 )
          {
            v72 = KeGetCurrentThread();
            PspLockThreadSecurityShared((__int64)v43, (__int64)v72);
            if ( (*((_DWORD *)&v43[1].SwapListEntry + 3) & 8) != 0 )
            {
              v65 = (PVOID)(*(_QWORD *)&v43[1].SystemCallNumber & 0xFFFFFFFFFFFFFFF8uLL);
              ObfReferenceObject(v65);
            }
            else
            {
              v65 = 0LL;
            }
            PspUnlockThreadSecurityShared((__int64)v43, (__int64)v72);
            if ( v65 )
            {
              ObfDereferenceObject(v65);
LABEL_63:
              v9 = v73;
              v42 = (_BYTE)TokenInformation == 0;
              goto LABEL_64;
            }
            Process = v63;
          }
          v46 = (void *)ObFastReferenceObject((signed __int64 *)(Process + 856));
          if ( !v46 )
          {
            PspLockProcessShared(v63, v44);
            v46 = (void *)ObFastReferenceObjectLocked((_QWORD *)(v63 + 856));
            PspUnlockProcessShared(v63, v44);
          }
          SeQueryInformationToken(v46, TokenVirtualizationEnabled, &TokenInformation);
          ObFastDereferenceObject(
            (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
            (unsigned __int64)v46);
          goto LABEL_63;
        }
        if ( KeyInformationClass != KeyCachedInformation )
          goto LABEL_26;
      }
      else if ( KeyInformationClass != KeyCachedInformation )
      {
        v62 = -1073741816;
        v35 = 0LL;
        goto LABEL_48;
      }
      if ( *(_DWORD *)Object != 1803104306 )
      {
        *ResultLength = 40;
        if ( (unsigned int)v5 < 0x28 )
        {
          v62 = -1073741789;
        }
        else
        {
          memset(KeyInformation, 0, 0x28uLL);
          *((_DWORD *)KeyInformation + 5) = *(_DWORD *)(v21[1] + 96LL);
        }
        v35 = v64;
        goto LABEL_48;
      }
      goto LABEL_26;
    }
    v36 = v61;
LABEL_86:
    v35 = 0LL;
    goto LABEL_49;
  }
  v49 = (void (__fastcall *)(signed __int64, int *, __int64, _QWORD, __int64, _QWORD))CmpTraceRoutine;
  if ( CmpTraceRoutine )
  {
    if ( KeyHandle )
    {
      if ( ObReferenceObjectByHandle(
             KeyHandle,
             0,
             (POBJECT_TYPE)CmKeyObjectType,
             KeGetCurrentThread()->PreviousMode,
             &v76,
             0LL) < 0 )
      {
        v10 = 0LL;
      }
      else
      {
        v50 = *((_QWORD *)v76 + 1);
        ObfDereferenceObject(v76);
        v10 = v50;
      }
      v49 = (void (__fastcall *)(signed __int64, int *, __int64, _QWORD, __int64, _QWORD))CmpTraceRoutine;
    }
    if ( v49 )
    {
      LOBYTE(v12) = 13;
      v49(v12, &v82, 3221225485LL, (unsigned int)KeyInformationClass, v10, 0LL);
    }
  }
  ExReleaseRundownProtection_0(&CmpShutdownRundown);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return -1073741811;
}
