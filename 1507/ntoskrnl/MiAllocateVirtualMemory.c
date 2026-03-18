/*
 * XREFs of MiAllocateVirtualMemory @ 0x1404BA9D0
 * Callers:
 *     NtAllocateVirtualMemory @ 0x1404BA980 (NtAllocateVirtualMemory.c)
 *     MmStoreAllocateVirtualMemory @ 0x140567F04 (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     MiCommitVadCfgBits @ 0x14000FE10 (MiCommitVadCfgBits.c)
 *     MiIsProcessCfgEnabled @ 0x140010004 (MiIsProcessCfgEnabled.c)
 *     MiCheckForConflictingVadExistence @ 0x140010018 (MiCheckForConflictingVadExistence.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140010380 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     MiInsertPrivateVad @ 0x14007CE90 (MiInsertPrivateVad.c)
 *     MiUnlockVad @ 0x1400894F0 (MiUnlockVad.c)
 *     MiVadDeleted @ 0x14008964C (MiVadDeleted.c)
 *     MiLockVad @ 0x140089660 (MiLockVad.c)
 *     MiReferenceVad @ 0x1400896D4 (MiReferenceVad.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140089E40 (UNLOCK_ADDRESS_SPACE.c)
 *     LOCK_ADDRESS_SPACE @ 0x14008A330 (LOCK_ADDRESS_SPACE.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14008B8B0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiDeleteVad @ 0x14008B8E0 (MiDeleteVad.c)
 *     MiGetVadWakeList @ 0x14008CFD0 (MiGetVadWakeList.c)
 *     MiMakeProtectionMask @ 0x14008E520 (MiMakeProtectionMask.c)
 *     MiUnlockAndDereferenceVad @ 0x14008E5C0 (MiUnlockAndDereferenceVad.c)
 *     MiCommitExistingVad @ 0x14008E680 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x14008FAB0 (MiSetProtectionOnSection.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     MiObtainReferencedVad @ 0x1400BF400 (MiObtainReferencedVad.c)
 *     MiAllowProtectionChange @ 0x1400DCB94 (MiAllowProtectionChange.c)
 *     MiArbitraryCodeBlocked @ 0x1400DCCF8 (MiArbitraryCodeBlocked.c)
 *     RtlFindMostSignificantBit @ 0x140111C10 (RtlFindMostSignificantBit.c)
 *     MiFlushRelease @ 0x1401198B8 (MiFlushRelease.c)
 *     MiFlushAcquire @ 0x14011997C (MiFlushAcquire.c)
 *     MiResetVirtualMemory @ 0x14012B0A4 (MiResetVirtualMemory.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiInsertAweInfo @ 0x140224760 (MiInsertAweInfo.c)
 *     MiMapUserLargePages @ 0x14022F2A8 (MiMapUserLargePages.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     MiCheckSecuredVad @ 0x1404749C8 (MiCheckSecuredVad.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 *     MmExtendSection @ 0x1404B096C (MmExtendSection.c)
 *     MiSelectUserAddress @ 0x1404B59C4 (MiSelectUserAddress.c)
 *     MiAdvanceVadHint @ 0x1404B5C80 (MiAdvanceVadHint.c)
 *     MiInsertVadCharges @ 0x1404B8410 (MiInsertVadCharges.c)
 *     MiProtectVirtualMemory @ 0x1404B9700 (MiProtectVirtualMemory.c)
 *     MiCommitPagefileBackedSection @ 0x14051ABFC (MiCommitPagefileBackedSection.c)
 *     MiCreateWriteWatchView @ 0x14051C444 (MiCreateWriteWatchView.c)
 *     MiCreateRotateView @ 0x1405563AC (MiCreateRotateView.c)
 *     MiLogMemResetInfo @ 0x1406A2A80 (MiLogMemResetInfo.c)
 *     MiFreeRotateView @ 0x1406A2FC0 (MiFreeRotateView.c)
 *     MiAllocateAweInfo @ 0x1406A5BA4 (MiAllocateAweInfo.c)
 *     MiFreeAweInfo @ 0x1406A6124 (MiFreeAweInfo.c)
 *     MiCreateLargePageVad @ 0x1406A9CA4 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x1406AA134 (MiFreeLargePageView.c)
 *     PerfInfoLogVirtualAlloc @ 0x1406E57D8 (PerfInfoLogVirtualAlloc.c)
 */

NTSTATUS __fastcall MiAllocateVirtualMemory(
        __int64 a1,
        void *a2,
        void *a3,
        unsigned __int64 *a4,
        int a5,
        unsigned int a6,
        KPROCESSOR_MODE a7,
        char a8,
        _QWORD *a9)
{
  unsigned __int64 v9; // rax
  int v10; // eax
  unsigned __int64 v11; // r12
  NTSTATUS result; // eax
  char v13; // bl
  unsigned int v14; // r14d
  unsigned int v15; // r15d
  _KPROCESS *v16; // r8
  unsigned __int64 *v17; // r9
  LARGE_INTEGER *v18; // r10
  void *v19; // r11
  KPROCESSOR_MODE v20; // dl
  _QWORD *v21; // rcx
  _QWORD *p_QuadPart; // rcx
  unsigned __int64 v23; // rsi
  unsigned __int64 QuadPart; // r13
  _KPROCESS *v25; // rdi
  int inserted; // edi
  _KPROCESS *v27; // r15
  __int64 v28; // rcx
  __int64 v29; // rdi
  int v30; // r15d
  __int64 v31; // r15
  _QWORD *PoolWithTag; // rax
  __int64 v33; // rsi
  __int64 v34; // r8
  unsigned __int64 v35; // rdx
  unsigned int v36; // r10d
  __int64 v37; // r9
  ULONG_PTR v38; // r15
  __int64 AweInfo; // rdi
  _QWORD *v40; // rcx
  unsigned __int64 v41; // r8
  __int64 v42; // r9
  int v43; // eax
  unsigned __int64 v44; // rdi
  __int64 *VadWakeList; // rax
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rcx
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rax
  ULONG_PTR v51; // rsi
  int v52; // r8d
  __int64 v53; // rax
  int v54; // eax
  unsigned int v55; // eax
  char v56; // cl
  int v57; // eax
  _QWORD *v58; // r9
  unsigned __int64 v59; // rdi
  void *v60; // rax
  __int64 v61; // r8
  __int64 v62; // r9
  ULONG_PTR v63; // rcx
  unsigned __int64 v64; // r8
  unsigned __int64 v65; // r9
  unsigned int Tag; // [rsp+20h] [rbp-1B8h]
  unsigned int Taga; // [rsp+20h] [rbp-1B8h]
  int Tagb; // [rsp+20h] [rbp-1B8h]
  int Object; // [rsp+28h] [rbp-1B0h]
  int HandleInformation; // [rsp+30h] [rbp-1A8h]
  _KPROCESS *v71; // [rsp+50h] [rbp-188h]
  unsigned __int8 v72; // [rsp+58h] [rbp-180h] BYREF
  char v73; // [rsp+59h] [rbp-17Fh]
  unsigned int ProtectionMask; // [rsp+5Ch] [rbp-17Ch]
  unsigned __int64 v75; // [rsp+68h] [rbp-170h] BYREF
  __int64 v76; // [rsp+70h] [rbp-168h] BYREF
  int v77; // [rsp+78h] [rbp-160h] BYREF
  int v78; // [rsp+7Ch] [rbp-15Ch] BYREF
  PVOID v79; // [rsp+80h] [rbp-158h] BYREF
  __int64 Process; // [rsp+88h] [rbp-150h]
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-148h]
  _QWORD *v82; // [rsp+98h] [rbp-140h]
  PVOID v83; // [rsp+A0h] [rbp-138h]
  unsigned __int64 v84; // [rsp+A8h] [rbp-130h] BYREF
  unsigned int v85; // [rsp+B0h] [rbp-128h]
  int v86; // [rsp+B4h] [rbp-124h] BYREF
  unsigned __int64 v87; // [rsp+B8h] [rbp-120h]
  int v88; // [rsp+C0h] [rbp-118h] BYREF
  PVOID P; // [rsp+C8h] [rbp-110h]
  __int64 v90; // [rsp+D0h] [rbp-108h]
  LARGE_INTEGER v91; // [rsp+D8h] [rbp-100h] BYREF
  unsigned __int64 *v92; // [rsp+E0h] [rbp-F8h]
  unsigned __int64 v93; // [rsp+E8h] [rbp-F0h] BYREF
  ULONG_PTR v94[2]; // [rsp+F0h] [rbp-E8h] BYREF
  _QWORD v95[5]; // [rsp+100h] [rbp-D8h] BYREF
  __int64 v96; // [rsp+128h] [rbp-B0h]
  __int64 v97; // [rsp+130h] [rbp-A8h]
  __int64 v98; // [rsp+138h] [rbp-A0h]
  unsigned __int64 v99[2]; // [rsp+140h] [rbp-98h] BYREF
  LARGE_INTEGER v100; // [rsp+150h] [rbp-88h]
  unsigned __int64 v101; // [rsp+158h] [rbp-80h]
  _BYTE v102[48]; // [rsp+160h] [rbp-78h] BYREF

  v92 = a4;
  v83 = a3;
  P = a2;
  v90 = a1;
  v82 = a9;
  if ( a3
    && ((unsigned __int64)a3 < 0x20
      ? (v9 = (unsigned __int64)a3 + 32)
      : (v9 = 63 - RtlFindMostSignificantBit((ULONGLONG)a3)),
        v83 = (PVOID)v9,
        v9 > 0x35) )
  {
    v10 = -1073741811;
    v11 = 0LL;
  }
  else
  {
    v11 = 0LL;
    v10 = 0;
  }
  LODWORD(v76) = v10;
  if ( v10 < 0 )
    return -1073741583;
  v13 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v85 = a5 & 0x7F;
  if ( v85 > (unsigned __int16)KeNumberNodes )
    return -1073741581;
  v14 = a5 & 0xFFFFFF80;
  if ( (a5 & 0xDE07CF80) != 0 || (a5 & 0x1083000) == 0 )
    return -1073741581;
  if ( (a5 & 0x21E80000) == 0 )
  {
LABEL_35:
    v15 = a6;
LABEL_36:
    v72 = 1;
    v73 = 0;
    if ( (v15 & 0x40000000) == 0 )
      goto LABEL_39;
    if ( (v15 & 0xF0) != 0 )
    {
      v15 &= ~0x40000000u;
      v72 = 0;
LABEL_39:
      ProtectionMask = MiMakeProtectionMask(v15);
      if ( ProtectionMask != -1 )
      {
        v20 = a7;
        if ( a7 )
        {
          v21 = v17;
          if ( (unsigned __int64)v17 >= MmUserProbeAddress )
            v21 = (_QWORD *)MmUserProbeAddress;
          *v21 = *v21;
          p_QuadPart = &v18->QuadPart;
          if ( (unsigned __int64)v18 >= MmUserProbeAddress )
            p_QuadPart = (_QWORD *)MmUserProbeAddress;
          *p_QuadPart = *p_QuadPart;
        }
        v23 = *v17;
        v87 = v23;
        v101 = v23;
        v100 = *v18;
        QuadPart = v100.QuadPart;
        v91 = v100;
        if ( (char *)v23 > (char *)MmHighestUserAddress - 0x10000 )
          return -1073741584;
        if ( (unsigned __int64)MmHighestUserAddress - v23 - 0xFFFF < v100.QuadPart || !v100.QuadPart )
          return -1073741582;
        if ( v19 == (void *)-1LL )
        {
          v25 = v16;
          v71 = v16;
        }
        else
        {
          result = ObReferenceObjectByHandleWithTag(v19, 8u, (POBJECT_TYPE)PsProcessType, a7, 0x6D566D4Du, &v79, 0LL);
          LODWORD(v76) = result;
          if ( result < 0 )
            return result;
          v25 = (_KPROCESS *)v79;
          v71 = (_KPROCESS *)v79;
          v20 = a7;
        }
        v84 = 0LL;
        if ( (a5 & 0x20000000) != 0 && !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, v20) )
        {
          inserted = -1073741727;
          v27 = v71;
          goto LABEL_244;
        }
        v28 = Process;
        if ( (_KPROCESS *)Process != v25 )
        {
          KiStackAttachProcess(v25, 0, (__int64)v102);
          v13 = 2;
          v28 = Process;
        }
        v79 = 0LL;
        if ( (a5 & 0x1000) != 0 && !v23 )
          v14 = a5 & 0xFFFFDF80 | 0x2000;
        if ( (v14 & 0x2000) != 0 )
        {
          if ( (v15 & 0x88) == 0 )
          {
            v86 = ProtectionMask & 2;
            if ( (ProtectionMask & 2) != 0 )
            {
              inserted = MiArbitraryCodeBlocked(v28);
              if ( inserted < 0 )
              {
LABEL_95:
                v27 = v71;
                goto LABEL_244;
              }
              v25 = v71;
            }
            Process = 0x10000LL;
            if ( v23 )
            {
              if ( v23 < 0x10000 && !v25[2].ActiveProcessors.Bitmap[6] )
              {
                inserted = -1073741584;
                v27 = v71;
                goto LABEL_244;
              }
              v77 = v14 & 0x20000000;
              if ( (v14 & 0x20000000) != 0 )
              {
                if ( (QuadPart & 0x1FFFFF) != 0 )
                {
                  inserted = -1073741582;
                  v27 = v71;
                  goto LABEL_244;
                }
                Process = 0x200000LL;
                v11 = v23 & 0xFFFFFFFFFFE00000uLL;
                v31 = (v23 & 0xFFFFFFFFFFE00000uLL) + QuadPart - 1;
              }
              else
              {
                v11 = v23 & 0xFFFFFFFFFFFF0000uLL;
                v31 = (QuadPart + v23 - 1) | 0xFFF;
              }
              v75 = v31;
              v84 = v11;
              v29 = (((v31 - v11) & 0xFFF) != 0) + ((__int64)(v31 - v11) >> 12);
              v30 = v77;
            }
            else
            {
              QuadPart = (QuadPart + 4095) & 0xFFFFFFFFFFFFF000uLL;
              v29 = ((QuadPart & 0xFFF) != 0) + (QuadPart >> 12);
              v75 = 0LL;
              v30 = v14 & 0x20000000;
              v77 = v14 & 0x20000000;
              if ( (v14 & 0x20000000) != 0 )
              {
                if ( (QuadPart & 0x1FFFFF) != 0 )
                {
                  inserted = -1073741582;
                  v27 = v71;
                  goto LABEL_244;
                }
                Process = 0x200000LL;
              }
            }
            PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x53646156u);
            v33 = (__int64)PoolWithTag;
            if ( !PoolWithTag )
            {
              inserted = -1073741670;
              v27 = v71;
              goto LABEL_244;
            }
            *PoolWithTag = 0LL;
            PoolWithTag[1] = 0LL;
            PoolWithTag[3] = 0LL;
            PoolWithTag[4] = 0LL;
            PoolWithTag[6] = 0LL;
            PoolWithTag[7] = 0LL;
            PoolWithTag[2] = -2LL;
            PoolWithTag[5] = 0LL;
            v34 = v85;
            *((_DWORD *)PoolWithTag + 12) ^= (*((_DWORD *)PoolWithTag + 12) ^ (v85 << 8)) & 0x3F00;
            if ( (_DWORD)v34 )
              MEMORY[0xFFFFF58010804250] = 1;
            if ( (v14 & 0x1000) != 0 )
            {
              v35 = v29;
              *((_DWORD *)PoolWithTag + 13) |= 0x80000000;
            }
            else
            {
              v35 = (unsigned __int64)v79;
            }
            v36 = ProtectionMask;
            *((_DWORD *)PoolWithTag + 12) = PoolWithTag[6] & 0xFFFFFF07 | (8 * (ProtectionMask & 0x1F | 0x1000));
            v37 = 0x7FFFFFFFELL;
            if ( (a8 & 1) != 0 )
              v35 = 0x7FFFFFFFELL;
            *((_DWORD *)PoolWithTag + 13) ^= (v35 ^ *((_DWORD *)PoolWithTag + 13)) & 0x7FFFFFFF;
            *((_BYTE *)PoolWithTag + 34) = v35 >> 31;
            v79 = 0LL;
            v76 = 0LL;
            v85 = v14 & 0x400000;
            if ( (v14 & 0x400000) != 0 )
            {
              v38 = (ULONG_PTR)v71;
              if ( v71[1].ActiveProcessors.Bitmap[3] )
              {
                AweInfo = v76;
              }
              else
              {
                AweInfo = MiAllocateAweInfo();
                v76 = AweInfo;
                if ( !AweInfo )
                {
LABEL_94:
                  ExFreePoolWithTag((PVOID)v33, 0);
                  inserted = -1073741670;
                  goto LABEL_95;
                }
              }
              v40 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x76706D4Du);
              v79 = v40;
              if ( !v40 )
              {
                if ( AweInfo )
                  MiFreeAweInfo(AweInfo);
                goto LABEL_94;
              }
              *(_DWORD *)(v33 + 48) = *(_DWORD *)(v33 + 48) & 0xFFFFFFF8 | 3;
              v40[3] = v33;
LABEL_112:
              v78 = 0;
              v88 = 0;
              LOCK_ADDRESS_SPACE((__int64)CurrentThread, v38, v34, v37);
              if ( (*(_DWORD *)(v38 + 772) & 0x20) != 0 )
              {
                inserted = -1073741558;
                if ( v76 )
                  MiFreeAweInfo(v76);
                goto LABEL_125;
              }
              if ( v76 )
                MiInsertAweInfo(v38, v76);
              if ( v87 )
              {
                v44 = v75;
                if ( !MiCheckForConflictingVadExistence() )
                  goto LABEL_124;
                inserted = -1073741800;
              }
              else
              {
                inserted = MiSelectUserAddress(v14, (__int64)v83, QuadPart, Process, ProtectionMask, &v88, &v84);
                v11 = v84;
                if ( inserted >= 0 )
                {
                  v43 = v88;
                  if ( v77 )
                    v43 = 0;
                  v78 = v43;
                  v75 = (QuadPart + v84 - 1) | 0xFFF;
                  v44 = v75;
LABEL_124:
                  Process = v11 >> 12;
                  *(_DWORD *)(v33 + 24) = v11 >> 12;
                  *(_BYTE *)(v33 + 32) = v11 >> 44;
                  v83 = (PVOID)(v44 >> 12);
                  *(_DWORD *)(v33 + 28) = v44 >> 12;
                  *(_BYTE *)(v33 + 33) = v44 >> 44;
                  inserted = MiInsertVadCharges(v33, (struct _KPROCESS *)v38, v41, v42);
                  LODWORD(v76) = inserted;
                  if ( inserted < 0 )
                    goto LABEL_125;
                  MiInsertPrivateVad(v33, (__int64)v79, v38);
                  if ( (*(_BYTE *)(v33 + 48) & 7) == 5 )
                    MiMapUserLargePages(v33, (*(_DWORD *)(v33 + 48) >> 8) & 0x3F, v38);
                  if ( v78 == 1 )
                    MiAdvanceVadHint(Process, (unsigned __int64)v83);
                  QuadPart = v75 - v11 + 1;
                  v13 |= 1u;
                  if ( v86 && MiIsProcessCfgEnabled() )
                  {
                    MiLockVad((__int64)CurrentThread, v33, v46, v47);
                    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v38);
                    v13 &= ~1u;
                    inserted = MiCommitVadCfgBits(v33, 0LL, &v72);
                    LODWORD(v76) = inserted;
                    if ( inserted < 0 )
                    {
                      MiReferenceVad(v33);
                      MiDeleteVad(v48, 0);
                      goto LABEL_95;
                    }
                    if ( v82 )
                    {
LABEL_147:
                      UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v38);
                      v13 &= ~1u;
                      MiReferenceVad(v33);
                      *v82 = v33;
LABEL_148:
                      if ( (v13 & 1) != 0 )
                        UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, v38);
                      goto LABEL_231;
                    }
                    MiUnlockVad((__int64)CurrentThread, v33);
                  }
                  else
                  {
                    if ( !v82 )
                      goto LABEL_148;
                    MiLockVad((__int64)CurrentThread, v33, v46, v47);
                  }
                  if ( !v82 )
                    goto LABEL_148;
                  goto LABEL_147;
                }
              }
LABEL_125:
              UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, v38);
              if ( (v13 & 8) != 0 )
              {
                VadWakeList = MiGetVadWakeList(v33, 4);
                P = VadWakeList;
                if ( VadWakeList )
                {
                  PsReturnProcessNonPagedPoolQuota(
                    v38,
                    8 * (((VadWakeList[2] & 0x3F) != 0) + ((unsigned __int64)VadWakeList[2] >> 6)) + 40);
                  ExFreePoolWithTag(P, 0);
                }
              }
              else if ( (v14 & 0x800000) != 0 )
              {
                MiFreeRotateView(v33);
              }
              else if ( v77 )
              {
                MiFreeLargePageView(v38, v33, 0LL);
              }
              ExFreePoolWithTag((PVOID)v33, 0);
              if ( v85 )
                ExFreePoolWithTag(v79, 0);
              goto LABEL_95;
            }
            if ( v30 )
            {
              v38 = (ULONG_PTR)v71;
              inserted = MiCreateLargePageVad(v71, PoolWithTag, v34, v36);
              if ( inserted >= 0 )
              {
                *(_DWORD *)(v33 + 48) = *(_DWORD *)(v33 + 48) & 0xFFFFFFF8 | 5;
                goto LABEL_112;
              }
              goto LABEL_103;
            }
            if ( (v14 & 0x800000) != 0 )
            {
              if ( !(unsigned int)MiCreateRotateView(PoolWithTag) )
                goto LABEL_94;
              *(_DWORD *)(v33 + 48) = *(_DWORD *)(v33 + 48) & 0xFFFFFFF8 | 6;
            }
            else if ( (v14 & 0x200000) != 0 )
            {
              v38 = (ULONG_PTR)v71;
              inserted = MiCreateWriteWatchView(v71, PoolWithTag, v29);
              if ( inserted >= 0 )
              {
                *(_DWORD *)(v33 + 48) = *(_DWORD *)(v33 + 48) & 0xFFFFFFF8 | 4;
                v13 |= 8u;
                goto LABEL_112;
              }
LABEL_103:
              ExFreePoolWithTag((PVOID)v33, 0);
              goto LABEL_95;
            }
            v38 = (ULONG_PTR)v71;
            goto LABEL_112;
          }
          inserted = -1073741755;
          v27 = v71;
LABEL_244:
          if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 && (v14 & 0x1000000) != 0 && inserted == -1073740748 )
            MiLogMemResetInfo(v11, QuadPart, 0LL);
          if ( (v13 & 2) != 0 )
            KiUnstackDetachProcess((struct _KTHREAD *)v102, 0);
          if ( v90 != -1 )
            ObfDereferenceObjectWithTag(v27, 0x6D566D4Du);
          return inserted;
        }
        if ( v14 == 0x80000 || v14 == 0x1000000 )
        {
          if ( v23 + QuadPart < 0x1000 )
          {
            inserted = -1073741800;
            goto LABEL_95;
          }
          v49 = ((v23 + QuadPart) & 0xFFFFFFFFFFFFF000uLL) - 1;
          v75 = v49;
          v11 = (v23 + 4095) & 0xFFFFFFFFFFFFF000uLL;
          if ( v11 > v49 )
          {
            inserted = -1073741800;
            goto LABEL_95;
          }
        }
        else
        {
          v49 = (QuadPart + v23 - 1) | 0xFFF;
          v75 = v49;
          v11 = v23 & 0xFFFFFFFFFFFFF000uLL;
        }
        QuadPart = v49 - v11 + 1;
        v84 = v11 >> 12;
        v82 = (_QWORD *)(v49 >> 12);
        v50 = MiObtainReferencedVad(v11, &v76);
        v51 = v50;
        if ( !v50 )
        {
          inserted = v76;
          if ( (_DWORD)v76 == -1073741664 )
            inserted = -1073741800;
          goto LABEL_95;
        }
        if ( (unsigned __int64)v82 > (*(unsigned int *)(v50 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v50 + 33) << 32)) )
        {
          inserted = -1073741800;
          goto LABEL_242;
        }
        v52 = *(_DWORD *)(v50 + 48);
        if ( ((1 << (*(_BYTE *)(v50 + 48) & 7)) & 0x55) == 0 )
        {
          inserted = -1073741800;
          goto LABEL_242;
        }
        v53 = *(unsigned int *)(v50 + 52);
        LODWORD(v53) = v53 & 0x7FFFFFFF;
        if ( (v53 | ((unsigned __int64)*(unsigned __int8 *)(v51 + 34) << 31)) >= 0x7FFFFFFFELL )
        {
          inserted = -1073741800;
          goto LABEL_242;
        }
        if ( (v52 & 7) == 6 )
        {
          v15 &= 0xFFFFF9FF;
          v54 = (unsigned __int8)v52 >> 6;
          if ( v54 == 3 && (v52 & 0x38) != 0 )
          {
            v15 |= 0x400u;
          }
          else if ( v54 == 1 )
          {
            v15 |= 0x200u;
          }
          v55 = MiMakeProtectionMask(v15);
          v56 = v55;
          ProtectionMask = v55;
          if ( v55 == -1 )
            goto LABEL_241;
        }
        else
        {
          v56 = ProtectionMask;
        }
        if ( (v14 & 0x1080000) != 0 )
        {
          inserted = MiResetVirtualMemory(v11, v75, v51, v14);
          LODWORD(v76) = inserted;
          MiUnlockAndDereferenceVad((char *)v51);
          if ( inserted < 0 )
            goto LABEL_95;
LABEL_230:
          v38 = (ULONG_PTR)v71;
          goto LABEL_231;
        }
        v13 &= ~4u;
        if ( (v56 & 2) != 0 )
        {
          inserted = MiAllowProtectionChange((__int64)v25, Process, v51, v56, v11, v75);
          if ( inserted < 0 )
            goto LABEL_242;
          if ( (!v72 || (*(_DWORD *)(v51 + 48) & 0x10) == 0) && MiIsProcessCfgEnabled() )
          {
            if ( (*(_DWORD *)(v51 + 48) & 0x4000) != 0 )
            {
              inserted = MiCheckSecuredVad(v51, v87, QuadPart, ProtectionMask);
              if ( inserted < 0 )
                goto LABEL_242;
              v13 |= 4u;
            }
            v99[0] = v11;
            v99[1] = v75;
            inserted = MiCommitVadCfgBits(v51, v99, &v72);
            if ( inserted < 0 )
              goto LABEL_242;
            v73 = 1;
          }
        }
        v57 = *(_DWORD *)(v51 + 48);
        if ( (v57 & 0x8000) != 0 )
        {
          if ( (v15 & 0x88) == 0 && ((v57 & 7) != 6 || (v15 & 0xFFFFF9F9) == 0) )
          {
            v78 = 0;
            inserted = MiCommitExistingVad(v51, v87, v91.QuadPart, v15, &v78);
            LODWORD(v76) = inserted;
            if ( inserted < 0 )
              goto LABEL_242;
            MiUnlockAndDereferenceVad((char *)v51);
            if ( v78 == 1 )
            {
              v93 = v11;
              v94[0] = QuadPart;
              if ( v73 && !v72 )
                v15 |= 0x40000000u;
              Tagb = v15;
              v38 = (ULONG_PTR)v71;
              MiProtectVirtualMemory(Process, (__int64)v71, &v93, v94, Tagb, &v75);
              goto LABEL_231;
            }
            goto LABEL_230;
          }
        }
        else if ( (v15 & 0x600) == 0 )
        {
          if ( (v57 & 0x4000) != 0 && (v13 & 4) == 0 )
          {
            inserted = MiCheckSecuredVad(v51, v87, QuadPart, ProtectionMask);
            if ( inserted < 0 )
              goto LABEL_242;
          }
          v58 = **(_QWORD ***)(v51 + 72);
          v79 = v58;
          if ( v58[8] )
          {
            if ( *(__int64 *)(v51 + 120) < 0 )
            {
              v91.QuadPart = v75
                           + 1
                           + ((unsigned __int64)(*(_DWORD *)(v51 + 64) & 0xFFFFFF) << 16)
                           - ((*(unsigned int *)(v51 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v51 + 32) << 32)) << 12);
              if ( (unsigned int)MiFlushAcquire((__int64)v58, 0LL, 0LL) )
              {
                v59 = 0LL;
                v83 = 0LL;
                if ( (*(_DWORD *)(v51 + 48) & 0x8000) == 0 )
                {
                  v60 = *(void **)(v51 + 128);
                  if ( v60 )
                  {
                    v59 = *(_QWORD *)(v51 + 128);
                    v83 = (PVOID)v59;
                    ObfReferenceObject(v60);
                  }
                }
                MiUnlockVad((__int64)CurrentThread, v51);
                memset(v95, 0, sizeof(v95));
                v96 = 0LL;
                v97 = 0LL;
                v98 = 0LL;
                if ( v59 )
                {
                  if ( (*((_DWORD *)v79 + 14) & 0x20) != 0 )
                    v96 = v59 | 1;
                  else
                    v96 = v59 | 2;
                }
                else
                {
                  v96 = (__int64)v79;
                }
                LODWORD(v98) = *((_DWORD *)v79 + 14);
                HIDWORD(v98) = HIDWORD(v98) & 0xFFFFF000 | 4;
                inserted = MmExtendSection((__int64)v95, &v91, 0);
                if ( v83 )
                  ObfDereferenceObject(v83);
                MiLockVad((__int64)CurrentThread, v51, v61, v62);
                MiFlushRelease((__int64)v79, 0LL, 0LL);
                if ( inserted >= 0
                  && (unsigned int)MiVadDeleted(v51) != 1
                  && v84 >= v65
                  && v84 <= v64
                  && (unsigned __int64)v82 <= v64
                  && (unsigned __int64)v82 >= v65
                  && ((*(_DWORD *)(v51 + 48) & 0x4000) == 0
                   || (int)MiCheckSecuredVad(v63, v87, QuadPart, ProtectionMask) >= 0)
                  && *(__int64 *)(v51 + 120) < 0 )
                {
                  Tag = v15;
                  v27 = v71;
                  inserted = MiSetProtectionOnSection((__int64)v71, v51, v11, v75, Tag, 0, &v77, &v86);
LABEL_243:
                  MiUnlockAndDereferenceVad((char *)v51);
                  goto LABEL_244;
                }
              }
              else
              {
                inserted = -1073741670;
              }
            }
            else
            {
              inserted = -1073741791;
            }
LABEL_242:
            v27 = v71;
            goto LABEL_243;
          }
          Taga = v15;
          v38 = (ULONG_PTR)v71;
          inserted = MiCommitPagefileBackedSection(
                       (_DWORD)v71,
                       v51,
                       v11,
                       v75,
                       Taga,
                       Object,
                       HandleInformation,
                       (__int64)&v77,
                       (__int64)&v86);
          LODWORD(v76) = inserted;
          if ( inserted < 0 )
            goto LABEL_242;
          MiUnlockAndDereferenceVad((char *)v51);
LABEL_231:
          if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 )
          {
            if ( (v14 & 0x3000) != 0 )
            {
              PerfInfoLogVirtualAlloc(v11, QuadPart, v38, v14);
            }
            else if ( (v14 & 0x1080000) != 0 )
            {
              MiLogMemResetInfo(v11, QuadPart, v14);
            }
          }
          if ( (v13 & 2) != 0 )
            KiUnstackDetachProcess((struct _KTHREAD *)v102, 0);
          if ( v90 != -1 )
            ObfDereferenceObjectWithTag((PVOID)v38, 0x6D566D4Du);
          *v92 = QuadPart;
          *(_QWORD *)P = v11;
          return inserted;
        }
LABEL_241:
        inserted = -1073741755;
        goto LABEL_242;
      }
      return -1073741755;
    }
    return -1073741580;
  }
  if ( (a5 & 0x80000) != 0 && v14 != 0x80000 || (a5 & 0x1000000) != 0 && v14 != 0x1000000 )
    return -1073741581;
  if ( (a5 & 0x20000000) != 0 )
  {
    if ( (a5 & 0x1000) == 0 || (a5 & 0xE00000) != 0 )
      return -1073741581;
    goto LABEL_35;
  }
  if ( (a5 & 0x800000) == 0 )
  {
    if ( (a5 & 0x200000) != 0 )
    {
      if ( (a5 & 0x400000) != 0 || (a5 & 0x2000) == 0 )
        return -1073741581;
    }
    else if ( (a5 & 0x400000) != 0 )
    {
      if ( (a5 & 0x2000) == 0 || (a5 & 0xFFAFDF80) != 0 )
        return -1073741581;
      v15 = a6;
      if ( a6 != 4 )
        return -1073741580;
      goto LABEL_36;
    }
    goto LABEL_35;
  }
  if ( (a5 & 0x600000) == 0 )
  {
    v15 = a6;
    if ( (a6 & 0xFFFFF9F9) != 0 )
      return -1073741755;
    goto LABEL_36;
  }
  return -1073741581;
}
