/*
 * XREFs of MiMapViewOfDataSection @ 0x140434390
 * Callers:
 *     MiMapViewOfSection @ 0x140431EE0 (MiMapViewOfSection.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiIsProcessCfgEnabled @ 0x140013E84 (MiIsProcessCfgEnabled.c)
 *     MiCheckForConflictingVadExistence @ 0x140013E98 (MiCheckForConflictingVadExistence.c)
 *     MiUnlockVad @ 0x140014020 (MiUnlockVad.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1400141A4 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiLocateSubsectionNode @ 0x140021740 (MiLocateSubsectionNode.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x14002228C (MiRemoveViewsFromSectionWithPfn.c)
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     MiGetProcessPartition @ 0x14002B670 (MiGetProcessPartition.c)
 *     MiUnlockAndDereferenceVad @ 0x14002B920 (MiUnlockAndDereferenceVad.c)
 *     MiLockVad @ 0x14002BB30 (MiLockVad.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     MiReferenceVad @ 0x14002BEFC (MiReferenceVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x14002BF10 (LOCK_ADDRESS_SPACE.c)
 *     MiAddViewsForSection @ 0x14002C210 (MiAddViewsForSection.c)
 *     MiGetControlAreaPtes @ 0x14002C3F0 (MiGetControlAreaPtes.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14002C4A0 (MiCheckPurgeAndUpMapCount.c)
 *     MiComputeContiguousSubsectionPte @ 0x14002C580 (MiComputeContiguousSubsectionPte.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14002CB50 (UNLOCK_ADDRESS_SPACE.c)
 *     MiLocatePagefileSubsection @ 0x14002CBC0 (MiLocatePagefileSubsection.c)
 *     MiGetWsAndInsertVad @ 0x140030660 (MiGetWsAndInsertVad.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400368B0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     MiGetPdeAddress @ 0x1400847A4 (MiGetPdeAddress.c)
 *     MiDereferenceControlArea @ 0x1400B32FC (MiDereferenceControlArea.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     MiDereferenceExtendInfo @ 0x14010F008 (MiDereferenceExtendInfo.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiWriteLargePde @ 0x1401F5DD4 (MiWriteLargePde.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiCommitVadCfgBits @ 0x140428720 (MiCommitVadCfgBits.c)
 *     MiSecureVad @ 0x140429950 (MiSecureVad.c)
 *     MiAddSecureEntry @ 0x140429A00 (MiAddSecureEntry.c)
 *     MiInsertSharedCommitNode @ 0x14042D550 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x14042D940 (MiRemoveSharedCommitNode.c)
 *     MiUnmapVad @ 0x14042DDC0 (MiUnmapVad.c)
 *     MiInsertVadCharges @ 0x14042ED10 (MiInsertVadCharges.c)
 *     MiFindEmptyAddressRange @ 0x1404352A0 (MiFindEmptyAddressRange.c)
 *     MiAdvanceVadHint @ 0x140435A80 (MiAdvanceVadHint.c)
 *     MiChargeSegmentCommit @ 0x1404A6130 (MiChargeSegmentCommit.c)
 *     MiSelectUserAddress @ 0x1404A67C0 (MiSelectUserAddress.c)
 *     MiFindEmptyAddressRangeDown @ 0x1404A68E4 (MiFindEmptyAddressRangeDown.c)
 *     MiLogMapFileEvent @ 0x140657214 (MiLogMapFileEvent.c)
 */

__int64 __fastcall MiMapViewOfDataSection(
        __int64 *a1,
        unsigned __int64 a2,
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
        __int64 a13,
        _QWORD *a14)
{
  unsigned int v14; // r13d
  __int64 v17; // r12
  __int64 v19; // r15
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 *v22; // rsi
  unsigned __int64 v23; // rdi
  unsigned __int64 ControlAreaPtes; // rbp
  int inserted; // edi
  void *v26; // rcx
  bool v27; // di
  __int64 *SubsectionNode; // r9
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rax
  int v31; // ebx
  __int64 v32; // rdi
  PVOID PoolWithTag; // rax
  unsigned int v34; // edx
  char v35; // cl
  __int64 v36; // rbx
  void *v37; // rbx
  struct _KTHREAD *v38; // rcx
  __int64 v39; // rbp
  int v40; // r14d
  unsigned __int64 v41; // r8
  unsigned __int64 v42; // rax
  _KPROCESS *Process; // r15
  int v44; // r12d
  int v45; // esi
  int v46; // eax
  int v47; // eax
  int v48; // ecx
  __int64 v49; // r14
  unsigned __int64 v50; // rbp
  unsigned __int64 v51; // r15
  unsigned __int64 v52; // r8
  unsigned __int64 v53; // r9
  _BYTE *v54; // rax
  _BYTE *v55; // rdi
  __int64 v56; // rbp
  _DWORD *v57; // rdi
  int v58; // eax
  _DWORD *v59; // rax
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rdx
  unsigned __int64 v62; // rbx
  ULONG_PTR PdeAddress; // rdi
  unsigned __int64 v64; // r13
  unsigned __int64 v65; // r14
  __int64 v66; // rbx
  unsigned __int64 PteAddress; // rdx
  unsigned __int64 v68; // rax
  unsigned __int64 v69; // rdx
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // rdx
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // r8
  unsigned __int64 v74; // rax
  __int64 v75; // rbx
  unsigned int v76; // esi
  char v77; // dl
  char v78; // di
  BOOL IsProcessCfgEnabled; // eax
  struct _KTHREAD *v80; // r15
  __int64 v81; // r14
  char v82; // r12
  int v83; // [rsp+40h] [rbp-E8h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-E0h]
  int v85; // [rsp+50h] [rbp-D8h]
  unsigned __int64 v86; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v87; // [rsp+60h] [rbp-C8h]
  __int64 v88; // [rsp+68h] [rbp-C0h]
  __int64 *v89; // [rsp+70h] [rbp-B8h]
  unsigned __int64 v90; // [rsp+78h] [rbp-B0h]
  int v91; // [rsp+80h] [rbp-A8h]
  unsigned int v92; // [rsp+84h] [rbp-A4h]
  unsigned __int64 v93; // [rsp+88h] [rbp-A0h]
  __int64 v94; // [rsp+90h] [rbp-98h]
  unsigned __int64 v95; // [rsp+98h] [rbp-90h]
  unsigned __int64 v96; // [rsp+A0h] [rbp-88h]
  unsigned __int64 v97; // [rsp+A8h] [rbp-80h]
  __int64 v98; // [rsp+B0h] [rbp-78h]
  PVOID v99; // [rsp+B8h] [rbp-70h]
  PVOID P; // [rsp+C0h] [rbp-68h]
  unsigned __int64 v101; // [rsp+C8h] [rbp-60h]
  int *ProcessPartition; // [rsp+D0h] [rbp-58h]
  unsigned __int64 v103; // [rsp+D8h] [rbp-50h] BYREF
  __int64 v104; // [rsp+E0h] [rbp-48h] BYREF
  __int64 v105; // [rsp+E8h] [rbp-40h] BYREF

  v14 = 0;
  v94 = *a1;
  v17 = (__int64)a1;
  v97 = 0LL;
  v101 = 0LL;
  v92 = a11 & 0x7F;
  if ( v92 > (unsigned __int16)KeNumberNodes )
    return 3221225719LL;
  v85 = a11 & 0x2000;
  if ( (a11 & 0x2000) != 0 && !a1[8] )
    return 3221225719LL;
  LODWORD(v90) = a11 & 0x40000000;
  if ( (a11 & 0x40000000) != 0 )
  {
    if ( (a11 & 0x2000) != 0 || !*(_QWORD *)(a2 + 1808) && !*a3 )
      return 3221225713LL;
    v19 = 4096LL;
    v87 = 4096LL;
  }
  else
  {
    v19 = 0x10000LL;
    v87 = 0x10000LL;
  }
  v20 = *a5;
  if ( *a5 )
  {
    v21 = *(unsigned int *)a4 & (unsigned __int64)(v19 - 1);
    if ( v20 + v21 < v21 )
      return 3221225503LL;
    *a5 = v20 + v21;
    *(_DWORD *)a4 &= ~(v19 - 1);
  }
  else
  {
    *(_DWORD *)a4 &= ~(v19 - 1);
    *a5 = *(_QWORD *)(a6 + 48) - *a4;
  }
  if ( *a5 > 0x7FFFFFFE0000LL - *a3 || *a5 <= 0 || (a11 & 0x2000) != 0 && *a4 >= 0x10000000000LL )
    return 3221225503LL;
  v22 = 0LL;
  P = 0LL;
  v91 = 0;
  ProcessPartition = MiGetProcessPartition(a2);
  CurrentThread = KeGetCurrentThread();
  MiCheckPurgeAndUpMapCount(v17);
  v23 = *a4 >> 12;
  v96 = (*a4 + *a5 + 4095) >> 12;
  v93 = v23;
  ControlAreaPtes = MiGetControlAreaPtes(v17);
  if ( v23 >= ControlAreaPtes )
  {
    inserted = -1073741793;
LABEL_23:
    MiDereferenceControlArea(v17);
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v22 )
    {
      if ( v22[15] < 0 )
        MiDereferenceExtendInfo((__int64)v22, v17);
      v26 = (void *)v22[16];
      if ( v26 )
        ObfDereferenceObject(v26);
      ExFreePoolWithTag(v22, 0);
    }
    if ( v101 )
      MiReturnCommit((__int64)ProcessPartition, v101);
    return (unsigned int)inserted;
  }
  v27 = 0;
  if ( *(_QWORD *)(v17 + 64) )
  {
    SubsectionNode = MiLocateSubsectionNode(v17, *a4, 0);
    v89 = SubsectionNode;
  }
  else
  {
    v103 = v93;
    v89 = (__int64 *)MiLocatePagefileSubsection(v17 + 128, &v103);
    SubsectionNode = v89;
    if ( !a9 && a8 == 24 )
      v27 = (*(_DWORD *)(v17 + 56) & 0x1000) != 0;
  }
  v29 = *((unsigned int *)SubsectionNode + 9) | ((unsigned __int64)((_WORD)SubsectionNode[4] & 0xFFC0) << 26);
  v93 -= v29;
  v30 = v96 - v29;
  if ( v27 )
    v30 = 1LL;
  v96 = v30;
  inserted = MiAddViewsForSection(SubsectionNode, v30, 0);
  if ( inserted < 0 )
    goto LABEL_23;
  v98 = v89[1] + 8 * v93;
  if ( !*(_QWORD *)(v17 + 64) && a9 && *(_QWORD *)(v94 + 16) < ControlAreaPtes )
    v97 = (__int64)(8 * (((a9 & 0xFFF) != 0) + (a9 >> 12))) >> 3;
  v31 = v85;
  v83 = 0;
  v32 = *(_QWORD *)(a6 + 24) << 12;
  if ( (*(_WORD *)(v94 + 12) & 0x1000) != 0
    && (*(_DWORD *)a5 & 0x1FFFFF) == 0
    && !v85
    && (a8 & 0xFFFFFFF8) != 0x10
    && a8 != 24 )
  {
    if ( (a8 & 5) != 5 )
      v19 = 0x200000LL;
    v87 = v19;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x20646156u);
  v99 = PoolWithTag;
  v22 = (__int64 *)PoolWithTag;
  if ( !PoolWithTag )
  {
    inserted = -1073741670;
LABEL_139:
    if ( *(_QWORD *)(v17 + 64) )
      MiRemoveViewsFromSectionWithPfn(v89, v96);
    goto LABEL_23;
  }
  memset(PoolWithTag, 0, 0x88uLL);
  v34 = v92;
  v35 = v92;
  v22[10] = v98;
  v22[9] = (__int64)v89;
  v22[2] = -2LL;
  *((_DWORD *)v22 + 16) ^= (*((_DWORD *)v22 + 16) ^ ((a7 == 1) << 26)) & 0x4000000;
  *((_DWORD *)v22 + 12) = v22[6] & 0xFFFFC007 | (8 * (a8 & 0x1F | (32 * (v35 & 0x3F))));
  if ( v34 )
    *(_BYTE *)(qword_140327FD0 + 276840624) = 1;
  if ( *(_QWORD *)(v17 + 64) && !v31 )
    *((_DWORD *)v22 + 16) |= 0x2000000u;
  v22[5] = 0LL;
  *((_DWORD *)v22 + 16) ^= (*((_DWORD *)v22 + 16) ^ ((__int64)*a4 >> 16)) & 0xFFFFFF;
  v36 = *(_QWORD *)(a6 + 40);
  if ( (v36 & 3) != 0 )
  {
    v37 = (void *)(v36 & 0xFFFFFFFFFFFFFFFCuLL);
    ObfReferenceObject(v37);
  }
  else
  {
    v37 = 0LL;
  }
  v38 = CurrentThread;
  v22[16] = (__int64)v37;
  LOCK_ADDRESS_SPACE((__int64)v38, a2);
  if ( (*(_DWORD *)(a2 + 772) & 0x20) != 0 )
  {
    inserted = -1073741558;
    goto LABEL_137;
  }
  if ( *a3 )
  {
    v50 = *a3 & ~(v19 - 1);
  }
  else
  {
    if ( !v32 )
    {
      v39 = v19;
      v83 = 0;
      v40 = 0;
      v86 = 0LL;
      v41 = *a5;
      v88 = 0x7FFFFFFDFFFFLL;
      if ( a10 )
      {
        v42 = 0xFFFFFFFFFFFFFFFFuLL >> a10;
        if ( 0xFFFFFFFFFFFFFFFFuLL >> a10 > 0x7FFFFFFDFFFFLL )
          v42 = 0x7FFFFFFDFFFFLL;
        v88 = v42;
      }
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( (a11 & 0x20000000) != 0 && v41 >= 0x40000000 )
      {
        v39 = 0x40000000LL;
        v40 = 1;
      }
      v44 = v88;
      v45 = v41;
      while ( 1 )
      {
        v46 = (a11 & 0x100000) != 0 || (Process[1].DirectoryTableBase & 0x20000000000000LL) != 0
            ? MiFindEmptyAddressRangeDown((int)Process + 1568, v45, v39, v44, a8, (__int64)&v86)
            : MiFindEmptyAddressRange(v45, v39, v44, a8, 0, (__int64)&v86, (__int64)&v83);
        inserted = v46;
        if ( v46 >= 0 || v40 != 1 )
          break;
        v40 = 0;
        v39 = 0x200000LL;
      }
      v47 = v83;
      v48 = 0x10000;
      v22 = (__int64 *)v99;
      v17 = (__int64)a1;
      v49 = v87;
      if ( v39 != 0x10000 )
        v47 = 0;
      v83 = v47;
      if ( inserted < 0 )
      {
        if ( v87 == 0x200000 )
        {
          if ( (_DWORD)v90 )
            v48 = 4096;
          v49 = v48;
          inserted = MiSelectUserAddress(a11, a10, *a5, v48, a8, 0, (__int64)&v83, (__int64)&v86);
        }
        if ( inserted < 0 )
          goto LABEL_137;
      }
      v50 = v86;
      v88 = v86;
      v51 = (*a5 + v86 - 1) | 0xFFF;
      v87 = v51;
      goto LABEL_92;
    }
    v50 = v32 + *a4;
  }
  v58 = 0x10000;
  v86 = v50;
  v88 = v50;
  if ( v50 < 0x10000 && !*(_QWORD *)(a2 + 1808) )
  {
    inserted = -1073741583;
    goto LABEL_137;
  }
  if ( (v50 & 0x1FFFFF) != 0 )
  {
    if ( (_DWORD)v90 )
      v58 = 4096;
    v49 = v58;
  }
  else
  {
    v49 = v87;
  }
  v51 = (v50 + *a5 - 1) | 0xFFF;
  v87 = v51;
  if ( MiCheckForConflictingVadExistence() )
  {
    inserted = -1073741800;
    goto LABEL_137;
  }
LABEL_92:
  v52 = v50 >> 12;
  v53 = v51 >> 12;
  *((_BYTE *)v22 + 32) = v50 >> 44;
  v95 = v50 >> 12;
  v90 = v51 >> 12;
  *((_DWORD *)v22 + 6) = v50 >> 12;
  *((_DWORD *)v22 + 7) = v51 >> 12;
  *((_BYTE *)v22 + 33) = v51 >> 44;
  if ( v85 )
  {
    --CurrentThread->SpecialApcDisable;
    v54 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_1403265A0, 0LL, 0);
    v55 = v54;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_1403265A0, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_1403265A0, v54, (ULONG_PTR)&qword_1403265A0);
    if ( v55 )
      v55[26] |= 1u;
    v56 = v94;
    v57 = *(_DWORD **)(v94 + 32);
    if ( v57 )
    {
      ++v57[2];
    }
    else
    {
      v59 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x78436D4Du);
      v57 = v59;
      if ( !v59 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403265A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403265A0);
        KeAbPostRelease((ULONG_PTR)&qword_1403265A0);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        inserted = -1073741670;
        goto LABEL_137;
      }
      v59[2] = 1;
      *(_QWORD *)v59 = _InterlockedCompareExchange64((volatile signed __int64 *)(v56 + 24), -1LL, -1LL);
      *(_QWORD *)(v56 + 32) = v59;
    }
    v60 = *(_QWORD *)(a6 + 48);
    if ( *(_QWORD *)v57 < v60 )
      *(_QWORD *)v57 = v60;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403265A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403265A0);
    KeAbPostRelease((ULONG_PTR)&qword_1403265A0);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    v50 = v86;
    v52 = v95;
    v53 = v90;
    v88 = v86;
    v22[15] = (__int64)v57;
  }
  if ( (a8 & 5) == 5 )
  {
    v61 = (*((unsigned int *)v22 + 7) | ((unsigned __int64)*((unsigned __int8 *)v22 + 33) << 32))
        - (*((unsigned int *)v22 + 6) | ((unsigned __int64)*((unsigned __int8 *)v22 + 32) << 32))
        + 1;
    *((_DWORD *)v22 + 13) ^= (*((_DWORD *)v22 + 13) ^ (*((_DWORD *)v22 + 7) - *((_DWORD *)v22 + 6) + 1)) & 0x7FFFFFFF;
    *((_BYTE *)v22 + 34) = v61 >> 31;
  }
  v22[11] = MiComputeContiguousSubsectionPte((__int64)v89, v93 + v53 - v52);
  if ( (a11 & 0x400000) != 0 || (*(_DWORD *)(a6 + 56) & 0x4000) != 0 )
  {
    P = MiAddSecureEntry((__int64)v22, v50, v51, 0x80000000, 0);
    if ( !P )
    {
      inserted = -1073741670;
      goto LABEL_137;
    }
  }
  v62 = v97;
  if ( v97 )
  {
    if ( !(unsigned int)MiChargeCommit((__int64)ProcessPartition, v97, 0) )
    {
      inserted = -1073741523;
      goto LABEL_137;
    }
    v101 = v62;
  }
  if ( v49 == 0x200000 )
  {
    *((_DWORD *)v22 + 12) |= 7u;
    *((_DWORD *)v22 + 16) |= 0x1000000u;
  }
  if ( !*(_QWORD *)(v17 + 64) )
  {
    inserted = MiInsertSharedCommitNode(v17, a2, 0);
    if ( inserted < 0 )
      goto LABEL_137;
    v91 = 1;
  }
  inserted = MiInsertVadCharges((__int64)v22, (struct _KPROCESS *)a2);
  if ( inserted < 0 )
  {
LABEL_137:
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, a2);
    if ( v91 == 1 )
      MiRemoveSharedCommitNode(v17, a2, 0);
    goto LABEL_139;
  }
  if ( !*(_QWORD *)(v17 + 64) && *(int *)(v17 + 56) < 0 )
  {
    *((_DWORD *)v22 + 12) |= 0x100000u;
    ++*(_QWORD *)(qword_140327FD0 + 276840656);
  }
  MiGetWsAndInsertVad((__int64)v22);
  if ( v49 == 0x200000 )
  {
    PdeAddress = MiGetPdeAddress(v50);
    v64 = MiGetPdeAddress(v51);
    v65 = v98;
    v66 = MmProtectToPteMask[a8] | 0xFFFFFFFFF021LL;
    PteAddress = MiGetPteAddress(v50);
    if ( PteAddress >= 0xFFFFF6FB40000000uLL && PteAddress <= 0xFFFFF6FB7FFFFFFFuLL )
      v66 &= ~qword_1403A9350 & 0x7FFFFFFFFFFFFFFFLL;
    v68 = MiGetPteAddress(0x7FFFFFFEFFFFuLL);
    if ( v69 <= v68 && (v70 = MiGetPteAddress(0LL), v71 >= v70)
      || (v72 = MiGetPdeAddress(0LL), v71 >= v72) && (v74 = MiGetPdeAddress(v73), v71 <= v74)
      || v71 >= 0xFFFFF6FB7DA00000uLL && v71 <= 0xFFFFF6FB7DAFFFF8uLL
      || v71 >= 0xFFFFF6FB7DBED000uLL && v71 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v66 |= 4uLL;
    }
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v71) )
      v66 |= 0x100uLL;
    if ( (v66 & 0x800) != 0 )
      v66 |= 0x62uLL;
    v75 = v66 | 0x80;
    MiLockVad((__int64)CurrentThread, (__int64)v22);
    v76 = v92;
    do
    {
      v104 = MI_READ_PTE_LOCK_FREE(v65);
      v75 ^= (v75 ^ MI_READ_PTE_LOCK_FREE((unsigned __int64)&v104)) & 0xFFFFFFFFF000LL;
      MiWriteLargePde(a2, PdeAddress, v75, v76);
      PdeAddress += 8LL;
      v65 += 4096LL;
    }
    while ( PdeAddress <= v64 );
    v22 = (__int64 *)v99;
    MiUnlockVad((__int64)CurrentThread, (__int64)v99);
    v50 = v88;
    v14 = 0;
    v51 = v87;
    v17 = (__int64)a1;
  }
  if ( !*(_QWORD *)(v17 + 64) && !*(_QWORD *)(v94 + 56) )
    *(_QWORD *)(v94 + 56) = v50;
  if ( v97 )
    MiChargeSegmentCommit(v89, v98, v97, 1LL);
  if ( v83 == 1 )
    MiAdvanceVadHint(v95, v90, 0LL);
  v77 = a8;
  *a5 = v51 - v50 + 1;
  if ( ((a8 - 4) & 0xFFFFFFFD) == 0 && *(_QWORD *)(v17 + 64) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v17 + 92));
    v50 = v86;
  }
  if ( (PerfGlobalGroupMask & 0x8000) != 0 )
  {
    MiLogMapFileEvent(v22, 1061LL);
    v77 = a8;
  }
  if ( a14 )
    MiReferenceVad((__int64)v22);
  v78 = 0;
  if ( (v77 & 2) == 0 )
  {
    v80 = CurrentThread;
    goto LABEL_185;
  }
  IsProcessCfgEnabled = MiIsProcessCfgEnabled();
  v80 = CurrentThread;
  if ( !IsProcessCfgEnabled )
  {
LABEL_185:
    v81 = a2;
    v82 = 1;
    goto LABEL_186;
  }
  MiLockVad((__int64)CurrentThread, (__int64)v22);
  v81 = a2;
  UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)v80, a2);
  v82 = 0;
  v78 = 1;
  v14 = MiCommitVadCfgBits((__int64)v22, 0LL, a13);
  if ( (v14 & 0x80000000) != 0 )
  {
    if ( !a14 )
      MiReferenceVad((__int64)v22);
    MiUnmapVad((__int64)v22, 0);
    return v14;
  }
LABEL_186:
  if ( a14 )
  {
    if ( v78 != 1 )
      MiLockVad((__int64)v80, (__int64)v22);
    if ( v82 == 1 )
      UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)v80, v81);
    if ( (unsigned int)(a12 - 1) <= 1 || a12 == -2147483647 || a12 == 4 )
    {
      inserted = MiSecureVad((ULONG_PTR)v22, v50, *a5, a12, &v105);
      if ( inserted >= 0 )
      {
        MiUnlockAndDereferenceVad((char *)v22);
        *a14 = v105;
        *a3 = v50;
        return v14;
      }
    }
    else
    {
      inserted = -1073741755;
    }
    MiUnmapVad((__int64)v22, 0);
    return (unsigned int)inserted;
  }
  if ( v78 == 1 )
    MiUnlockVad((__int64)v80, (__int64)v22);
  if ( v82 == 1 )
    UNLOCK_ADDRESS_SPACE((__int64)v80, v81);
  *a3 = v50;
  return v14;
}
