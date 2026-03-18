/*
 * XREFs of MiMapViewOfDataSection @ 0x140416C00
 * Callers:
 *     MiMapViewOfSection @ 0x140419680 (MiMapViewOfSection.c)
 * Callees:
 *     MiGetPdeAddress @ 0x14001A3B4 (MiGetPdeAddress.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14002E2D0 (UNLOCK_ADDRESS_SPACE.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140037DA0 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiCommitVadCfgBits @ 0x140037DF0 (MiCommitVadCfgBits.c)
 *     MiIsProcessCfgEnabled @ 0x140037FE4 (MiIsProcessCfgEnabled.c)
 *     MiCheckForConflictingVadExistence @ 0x140037FF8 (MiCheckForConflictingVadExistence.c)
 *     MiUnlockVad @ 0x140038910 (MiUnlockVad.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiGetWsAndInsertVad @ 0x140062070 (MiGetWsAndInsertVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400622C0 (LOCK_ADDRESS_SPACE.c)
 *     MiAddViewsForSection @ 0x140062470 (MiAddViewsForSection.c)
 *     MiGetControlAreaPtes @ 0x140062620 (MiGetControlAreaPtes.c)
 *     MiCheckPurgeAndUpMapCount @ 0x1400626D0 (MiCheckPurgeAndUpMapCount.c)
 *     MiUnlockAndDereferenceVad @ 0x140062910 (MiUnlockAndDereferenceVad.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiGetProcessPartition @ 0x140063890 (MiGetProcessPartition.c)
 *     MiLockVad @ 0x140063AC0 (MiLockVad.c)
 *     MiReferenceVad @ 0x140063C70 (MiReferenceVad.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiComputeContiguousSubsectionPte @ 0x1400A6520 (MiComputeContiguousSubsectionPte.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400AA020 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x1400AA5CC (MiRemoveViewsFromSectionWithPfn.c)
 *     MiLocateSubsectionNode @ 0x1400AAEC0 (MiLocateSubsectionNode.c)
 *     MiLocatePagefileSubsection @ 0x1400D5B70 (MiLocatePagefileSubsection.c)
 *     MiDereferenceControlArea @ 0x1400EF460 (MiDereferenceControlArea.c)
 *     MiDereferenceExtendInfo @ 0x14010384C (MiDereferenceExtendInfo.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWriteLargePde @ 0x1401E2CA4 (MiWriteLargePde.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiSecureVad @ 0x140415A20 (MiSecureVad.c)
 *     MiInsertVadCharges @ 0x140415EF0 (MiInsertVadCharges.c)
 *     MiUnmapVad @ 0x14041B2F0 (MiUnmapVad.c)
 *     MiInsertSharedCommitNode @ 0x14041B4F0 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x14041B910 (MiRemoveSharedCommitNode.c)
 *     MiSelectUserAddress @ 0x14047A0C0 (MiSelectUserAddress.c)
 *     MiFindEmptyAddressRange @ 0x14047A1A0 (MiFindEmptyAddressRange.c)
 *     MiAddSecureEntry @ 0x14047B4A0 (MiAddSecureEntry.c)
 *     MiChargeSegmentCommit @ 0x14049C650 (MiChargeSegmentCommit.c)
 *     MiAdvanceVadHint @ 0x14049D2A0 (MiAdvanceVadHint.c)
 *     MiFindEmptyAddressRangeDown @ 0x1404A5C28 (MiFindEmptyAddressRangeDown.c)
 *     MiLogMapFileEvent @ 0x140621288 (MiLogMapFileEvent.c)
 */

__int64 __fastcall MiMapViewOfDataSection(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        __int64 *a5,
        __int64 a6,
        int a7,
        int a8,
        unsigned __int64 a9,
        __int64 a10,
        int a11,
        int a12,
        unsigned __int8 *a13,
        _QWORD *a14)
{
  unsigned int v14; // r12d
  __int64 v18; // r14
  __int64 v20; // r13
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 *v23; // rsi
  int *ProcessPartition; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  unsigned __int64 v27; // rbx
  int inserted; // edi
  void *v29; // rcx
  bool v30; // di
  unsigned int *SubsectionNode; // r9
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rax
  int v34; // ebx
  char v35; // bl
  PVOID PoolWithTag; // rax
  unsigned int v37; // edx
  char v38; // cl
  __int64 v39; // rbx
  void *v40; // rbx
  struct _KTHREAD *v41; // rdi
  struct _KTHREAD *v42; // rbx
  char *v43; // rdx
  __int64 v44; // r10
  unsigned __int64 v45; // rax
  _KPROCESS *Process; // rcx
  int EmptyAddressRangeDown; // eax
  int v48; // ecx
  int v49; // eax
  __int64 v50; // rax
  unsigned __int64 v51; // rbp
  unsigned __int64 v52; // r15
  unsigned __int64 v53; // r8
  unsigned __int64 v54; // r9
  __int64 v55; // rax
  __int64 v56; // rdi
  __int64 v57; // rbp
  _DWORD *v58; // rdi
  int v59; // eax
  _DWORD *v60; // rax
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rdx
  unsigned __int64 v63; // rdi
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r8
  unsigned __int64 PdeAddress; // rdi
  __int64 v68; // rax
  __int64 *v69; // r12
  __int64 v70; // rbx
  unsigned __int64 PteAddress; // r15
  __int64 v72; // rbx
  unsigned __int64 v73; // r15
  unsigned int v74; // r14d
  struct _KTHREAD *v75; // r13
  char v76; // dl
  char v77; // di
  __int64 v78; // r14
  char v79; // r15
  int v80; // [rsp+40h] [rbp-E8h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-E0h]
  unsigned __int64 v82; // [rsp+50h] [rbp-D8h] BYREF
  unsigned __int64 ControlAreaPtes; // [rsp+58h] [rbp-D0h]
  unsigned int *v84; // [rsp+60h] [rbp-C8h]
  unsigned __int64 v85; // [rsp+68h] [rbp-C0h]
  __int64 v86; // [rsp+70h] [rbp-B8h]
  unsigned __int64 v87; // [rsp+78h] [rbp-B0h]
  int v88; // [rsp+80h] [rbp-A8h]
  unsigned int v89; // [rsp+84h] [rbp-A4h]
  unsigned __int64 v90; // [rsp+88h] [rbp-A0h]
  unsigned __int64 v91; // [rsp+90h] [rbp-98h]
  unsigned __int64 v92; // [rsp+98h] [rbp-90h]
  int v93; // [rsp+A0h] [rbp-88h]
  unsigned __int64 v94; // [rsp+A8h] [rbp-80h]
  __int64 v95; // [rsp+B0h] [rbp-78h]
  unsigned __int64 v96; // [rsp+B8h] [rbp-70h]
  unsigned __int64 v97; // [rsp+C0h] [rbp-68h]
  PVOID P; // [rsp+C8h] [rbp-60h]
  unsigned __int64 v99; // [rsp+D0h] [rbp-58h] BYREF
  PVOID v100; // [rsp+D8h] [rbp-50h]
  __int64 v101; // [rsp+E0h] [rbp-48h] BYREF
  __int64 v102; // [rsp+E8h] [rbp-40h] BYREF

  v14 = 0;
  v86 = *a1;
  v94 = 0LL;
  v18 = (__int64)a1;
  v96 = 0LL;
  v89 = a11 & 0x7F;
  if ( v89 > (unsigned __int16)KeNumberNodes )
    return 3221225719LL;
  v93 = a11 & 0x2000;
  if ( (a11 & 0x2000) != 0 && !a1[8] )
    return 3221225719LL;
  LODWORD(v87) = a11 & 0x40000000;
  if ( (a11 & 0x40000000) != 0 )
  {
    if ( (a11 & 0x2000) != 0 || !*a3 )
      return 3221225713LL;
    v20 = 4096LL;
  }
  else
  {
    v20 = 0x10000LL;
  }
  v21 = *a5;
  if ( *a5 )
  {
    v22 = *(unsigned int *)a4 & (unsigned __int64)(v20 - 1);
    if ( v21 + v22 < v22 )
      return 3221225503LL;
    *a5 = v21 + v22;
    *(_DWORD *)a4 &= ~(v20 - 1);
  }
  else
  {
    *(_DWORD *)a4 &= ~(v20 - 1);
    *a5 = *(_QWORD *)(a6 + 48) - *a4;
  }
  if ( *a5 > (unsigned __int64)MmHighestUserAddress - *a3 - 0xFFFF
    || *a5 <= 0
    || (a11 & 0x2000) != 0 && *a4 >= 0x10000000000LL )
  {
    return 3221225503LL;
  }
  v23 = 0LL;
  P = 0LL;
  v88 = 0;
  ProcessPartition = MiGetProcessPartition(a2);
  CurrentThread = KeGetCurrentThread();
  v91 = (unsigned __int64)ProcessPartition;
  MiCheckPurgeAndUpMapCount(v18, v25, v26);
  v27 = (__int64)*a4 >> 12;
  v92 = (*a4 + *a5 + 4095) >> 12;
  v85 = v27;
  ControlAreaPtes = MiGetControlAreaPtes(v18);
  if ( v27 >= ControlAreaPtes )
  {
    inserted = -1073741793;
LABEL_23:
    MiDereferenceControlArea(v18);
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v23 )
    {
      if ( v23[15] < 0 )
        MiDereferenceExtendInfo((__int64)v23, v18);
      v29 = (void *)v23[16];
      if ( v29 )
        ObfDereferenceObject(v29);
      ExFreePoolWithTag(v23, 0);
    }
    if ( v96 )
      MiReturnCommit(v91, v96);
    return (unsigned int)inserted;
  }
  v30 = 0;
  if ( *(_QWORD *)(v18 + 64) )
  {
    SubsectionNode = (unsigned int *)MiLocateSubsectionNode(v18, *a4, 0);
    v84 = SubsectionNode;
  }
  else
  {
    v99 = v85;
    v84 = MiLocatePagefileSubsection((unsigned int *)(v18 + 120), &v99);
    SubsectionNode = v84;
    if ( !a9 && a8 == 24 )
      v30 = (*(_DWORD *)(v18 + 56) & 0x1000) != 0;
  }
  v32 = SubsectionNode[9] | ((unsigned __int64)((_WORD)SubsectionNode[8] & 0xFFC0) << 26);
  v85 -= v32;
  v33 = v92 - v32;
  if ( v30 )
    v33 = 1LL;
  v92 = v33;
  inserted = MiAddViewsForSection((__int64 *)SubsectionNode, v33, 0LL);
  if ( inserted < 0 )
    goto LABEL_23;
  v95 = *((_QWORD *)v84 + 1) + 8 * v85;
  if ( !*(_QWORD *)(v18 + 64) && a9 && *(_QWORD *)(v86 + 16) < ControlAreaPtes )
    v94 = (__int64)(8 * (((a9 & 0xFFF) != 0) + (a9 >> 12))) >> 3;
  v80 = 0;
  v34 = *(_DWORD *)(a6 + 56) >> 11;
  ControlAreaPtes = *(_QWORD *)(a6 + 24) << 12;
  v35 = v34 & 1;
  if ( (*(_WORD *)(v86 + 12) & 0x1000) != 0
    && (*(_DWORD *)a5 & 0x1FFFFF) == 0
    && (a11 & 0x2000) == 0
    && (a8 & 0xFFFFFFF8) != 0x10
    && a8 != 24
    && (a8 & 5) != 5 )
  {
    v20 = 0x200000LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x20646156u);
  v100 = PoolWithTag;
  v23 = (__int64 *)PoolWithTag;
  if ( !PoolWithTag )
  {
    inserted = -1073741670;
LABEL_68:
    if ( *(_QWORD *)(v18 + 64) )
      MiRemoveViewsFromSectionWithPfn((__int64)v84, v92);
    goto LABEL_23;
  }
  memset(PoolWithTag, 0, 0x88uLL);
  v37 = v89;
  v38 = v89;
  v23[10] = v95;
  v23[9] = (__int64)v84;
  v23[2] = -2LL;
  *((_DWORD *)v23 + 16) = v23[8] & 0xF3FFFFFF | (((a7 == 1) | (2 * (v35 & 1))) << 26);
  *((_DWORD *)v23 + 12) = v23[6] & 0xFFFFC007 | (8 * (a8 & 0x1F | (32 * (v38 & 0x3F))));
  if ( v37 )
    MEMORY[0xFFFFF580108042A8] = 1;
  if ( *(_QWORD *)(v18 + 64) && (a11 & 0x2000) == 0 )
    *((_DWORD *)v23 + 16) |= 0x2000000u;
  v23[5] = 0LL;
  *((_DWORD *)v23 + 16) ^= (*((_DWORD *)v23 + 16) ^ ((__int64)*a4 >> 16)) & 0xFFFFFF;
  v39 = *(_QWORD *)(a6 + 40);
  if ( (v39 & 3) != 0 )
  {
    v40 = (void *)(v39 & 0xFFFFFFFFFFFFFFFCuLL);
    ObfReferenceObject(v40);
  }
  else
  {
    v40 = 0LL;
  }
  v41 = CurrentThread;
  v23[16] = (__int64)v40;
  LOCK_ADDRESS_SPACE((__int64)v41, a2);
  if ( (*(_DWORD *)(a2 + 772) & 0x20) != 0 )
  {
    inserted = -1073741558;
LABEL_65:
    v42 = CurrentThread;
    goto LABEL_66;
  }
  if ( *a3 )
  {
    v51 = *a3 & ~(v20 - 1);
  }
  else
  {
    if ( !ControlAreaPtes )
    {
      v43 = (char *)MmHighestUserAddress - 0x10000;
      v80 = 0;
      v44 = *a5;
      v82 = 0LL;
      if ( a10 )
      {
        v45 = 0xFFFFFFFFFFFFFFFFuLL >> a10;
        if ( 0xFFFFFFFFFFFFFFFFuLL >> a10 > (unsigned __int64)v43 )
          LODWORD(v45) = (_DWORD)MmHighestUserAddress - 0x10000;
        LODWORD(v43) = v45;
      }
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( (a11 & 0x100000) != 0 || (Process[1].DirectoryTableBase & 0x20000000000000LL) != 0 )
        EmptyAddressRangeDown = MiFindEmptyAddressRangeDown(
                                  (int)Process + 1552,
                                  v44,
                                  v20,
                                  (_DWORD)v43,
                                  a8,
                                  (__int64)&v82);
      else
        EmptyAddressRangeDown = MiFindEmptyAddressRange(v44, v20, (_DWORD)v43, a8, 0, (__int64)&v82, (__int64)&v80);
      inserted = EmptyAddressRangeDown;
      v48 = 0x10000;
      v49 = v80;
      if ( v20 != 0x10000 )
        v49 = 0;
      v80 = v49;
      if ( inserted < 0 )
      {
        if ( v20 == 0x200000 )
        {
          if ( (_DWORD)v87 )
            v48 = 4096;
          v20 = v48;
          inserted = MiSelectUserAddress(a11, a10, *a5, v48, a8, 0, (__int64)&v80, (__int64)&v82);
        }
        if ( inserted < 0 )
          goto LABEL_65;
      }
      v50 = *a5;
      v51 = v82;
      v41 = CurrentThread;
      v90 = v82;
      v52 = (v50 + v82 - 1) | 0xFFF;
      v87 = v52;
      goto LABEL_89;
    }
    v51 = ControlAreaPtes + *a4;
  }
  v59 = 0x10000;
  v82 = v51;
  v90 = v51;
  if ( v51 < 0x10000 && !*(_QWORD *)(a2 + 1792) )
  {
    inserted = -1073741583;
    goto LABEL_65;
  }
  if ( (v51 & 0x1FFFFF) != 0 )
  {
    if ( (_DWORD)v87 )
      v59 = 4096;
    v20 = v59;
  }
  v52 = (v51 + *a5 - 1) | 0xFFF;
  v87 = v52;
  if ( MiCheckForConflictingVadExistence() )
  {
    inserted = -1073741800;
    goto LABEL_65;
  }
LABEL_89:
  v53 = v51 >> 12;
  v54 = v52 >> 12;
  *((_BYTE *)v23 + 32) = v51 >> 44;
  ControlAreaPtes = v51 >> 12;
  v97 = v52 >> 12;
  *((_DWORD *)v23 + 6) = v51 >> 12;
  *((_DWORD *)v23 + 7) = v52 >> 12;
  *((_BYTE *)v23 + 33) = v52 >> 44;
  if ( v93 )
  {
    --v41->SpecialApcDisable;
    v55 = KeAbPreAcquire((ULONG_PTR)&qword_1402FE2A0, 0LL, 0LL);
    v56 = v55;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_1402FE2A0, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_1402FE2A0, v55, (ULONG_PTR)&qword_1402FE2A0);
    if ( v56 )
      *(_BYTE *)(v56 + 26) |= 1u;
    v57 = v86;
    v58 = *(_DWORD **)(v86 + 32);
    if ( v58 )
    {
      ++v58[2];
    }
    else
    {
      v60 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x78436D4Du);
      v58 = v60;
      if ( !v60 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1402FE2A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_1402FE2A0);
        KeAbPostRelease((ULONG_PTR)&qword_1402FE2A0);
        v42 = CurrentThread;
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        inserted = -1073741670;
        goto LABEL_66;
      }
      v60[2] = 1;
      *(_QWORD *)v60 = _InterlockedCompareExchange64((volatile signed __int64 *)(v57 + 24), -1LL, -1LL);
      *(_QWORD *)(v57 + 32) = v60;
    }
    v61 = *(_QWORD *)(a6 + 48);
    if ( *(_QWORD *)v58 < v61 )
      *(_QWORD *)v58 = v61;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1402FE2A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1402FE2A0);
    KeAbPostRelease((ULONG_PTR)&qword_1402FE2A0);
    v42 = CurrentThread;
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    v51 = v82;
    v53 = ControlAreaPtes;
    v54 = v97;
    v90 = v82;
    v23[15] = (__int64)v58;
  }
  else
  {
    v42 = CurrentThread;
  }
  if ( (a8 & 5) == 5 )
  {
    v62 = (*((unsigned int *)v23 + 7) | ((unsigned __int64)*((unsigned __int8 *)v23 + 33) << 32))
        - (*((unsigned int *)v23 + 6) | ((unsigned __int64)*((unsigned __int8 *)v23 + 32) << 32))
        + 1;
    *((_DWORD *)v23 + 13) ^= (*((_DWORD *)v23 + 13) ^ (*((_DWORD *)v23 + 7) - *((_DWORD *)v23 + 6) + 1)) & 0x7FFFFFFF;
    *((_BYTE *)v23 + 34) = v62 >> 31;
  }
  v23[11] = MiComputeContiguousSubsectionPte((__int64)v84, v85 + v54 - v53);
  if ( (a11 & 0x400000) != 0 || (*(_DWORD *)(a6 + 56) & 0x4000) != 0 )
  {
    P = (PVOID)MiAddSecureEntry((_DWORD)v23, v51, v52, 0x80000000, 0);
    if ( !P )
    {
      inserted = -1073741670;
      goto LABEL_66;
    }
  }
  v63 = v94;
  if ( v94 )
  {
    if ( !(unsigned int)MiChargeCommit(v91, v94, 0LL) )
    {
      inserted = -1073741523;
      goto LABEL_66;
    }
    v96 = v63;
  }
  if ( v20 == 0x200000 )
  {
    *((_DWORD *)v23 + 12) |= 7u;
    *((_DWORD *)v23 + 16) |= 0x1000000u;
  }
  if ( !*(_QWORD *)(v18 + 64) )
  {
    inserted = MiInsertSharedCommitNode(v18, a2, 0LL);
    if ( inserted < 0 )
      goto LABEL_66;
    v88 = 1;
  }
  inserted = MiInsertVadCharges((__int64)v23, (struct _KPROCESS *)a2);
  if ( inserted < 0 )
  {
LABEL_66:
    UNLOCK_ADDRESS_SPACE((__int64)v42, a2);
    if ( v88 == 1 )
      MiRemoveSharedCommitNode(v18, a2, 0LL);
    goto LABEL_68;
  }
  MiGetWsAndInsertVad((unsigned __int64)v23, v64, v65);
  if ( v20 == 0x200000 )
  {
    PdeAddress = MiGetPdeAddress(v51);
    v68 = MiGetPdeAddress(v52);
    v69 = (__int64 *)v95;
    v91 = v68;
    v70 = MmProtectToPteMask[a8] | 0xFFFFFFFFF021LL;
    PteAddress = MiGetPteAddress(v51);
    if ( PteAddress + 0x904C0000000LL <= 0x3FFFFFFF )
      v70 &= ~qword_140381310 & 0x7FFFFFFFFFFFFFFFLL;
    if ( PteAddress <= MiGetPteAddress((unsigned __int64)MmHighestUserAddress) && PteAddress >= MiGetPteAddress(0LL)
      || PteAddress >= MiGetPdeAddress(0LL) && PteAddress <= MiGetPdeAddress((unsigned __int64)MmHighestUserAddress)
      || PteAddress >= 0xFFFFF6FB7DA00000uLL
      && PteAddress <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
      || PteAddress >= 0xFFFFF6FB7DBED000uLL
      && PteAddress <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
    {
      v70 |= 4uLL;
    }
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(PteAddress) )
      v70 |= 0x100uLL;
    if ( (v70 & 0x800) != 0 )
      v70 |= 0x62uLL;
    v72 = v70 | 0x80;
    MiLockVad((__int64)CurrentThread, (__int64)v23);
    v73 = v91;
    v74 = v89;
    do
    {
      v101 = MI_READ_PTE_LOCK_FREE(v69);
      v72 ^= (v72 ^ MI_READ_PTE_LOCK_FREE(&v101)) & 0xFFFFFFFFF000LL;
      MiWriteLargePde(a2, PdeAddress, v72, v74);
      PdeAddress += 8LL;
      v69 += 512;
    }
    while ( PdeAddress <= v73 );
    v23 = (__int64 *)v100;
    v75 = CurrentThread;
    MiUnlockVad((__int64)CurrentThread, (__int64)v100);
    v51 = v90;
    v14 = 0;
    v18 = (__int64)a1;
    v52 = v87;
  }
  else
  {
    v75 = CurrentThread;
  }
  if ( !*(_QWORD *)(v18 + 64) && !*(_QWORD *)(v86 + 56) )
    *(_QWORD *)(v86 + 56) = v51;
  if ( v94 )
    MiChargeSegmentCommit(v84, v95, v94, 1LL);
  if ( v80 == 1 )
    MiAdvanceVadHint(ControlAreaPtes, v97, 0LL);
  v76 = a8;
  *a5 = v52 - v51 + 1;
  if ( ((a8 - 4) & 0xFFFFFFFD) == 0 && *(_QWORD *)(v18 + 64) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v18 + 92));
    v51 = v82;
  }
  if ( (PerfGlobalGroupMask & 0x8000) != 0 )
  {
    MiLogMapFileEvent(v23, 1061LL, v66);
    v76 = a8;
  }
  if ( a14 )
    MiReferenceVad((__int64)v23);
  v77 = 0;
  if ( (v76 & 2) != 0 && MiIsProcessCfgEnabled() )
  {
    MiLockVad((__int64)v75, (__int64)v23);
    v78 = a2;
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)v75, a2);
    v79 = 0;
    v77 = 1;
    v14 = MiCommitVadCfgBits((__int64)v23, 0LL, a13);
    if ( (v14 & 0x80000000) != 0 )
    {
      if ( !a14 )
        MiReferenceVad((__int64)v23);
      MiUnmapVad(v23, 0LL);
      return v14;
    }
  }
  else
  {
    v78 = a2;
    v79 = 1;
  }
  if ( a14 )
  {
    if ( v77 != 1 )
      MiLockVad((__int64)v75, (__int64)v23);
    if ( v79 == 1 )
      UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)v75, v78);
    if ( (unsigned int)(a12 - 1) <= 1 || a12 == -2147483647 || a12 == 4 )
    {
      inserted = MiSecureVad((ULONG_PTR)v23, v51, *a5, a12, &v102);
      if ( inserted >= 0 )
      {
        MiUnlockAndDereferenceVad(v23);
        *a14 = v102;
        *a3 = v51;
        return v14;
      }
    }
    else
    {
      inserted = -1073741755;
    }
    MiUnmapVad(v23, 0LL);
    return (unsigned int)inserted;
  }
  if ( v77 == 1 )
    MiUnlockVad((__int64)v75, (__int64)v23);
  if ( v79 == 1 )
    UNLOCK_ADDRESS_SPACE((__int64)v75, v78);
  *a3 = v51;
  return v14;
}
