/*
 * XREFs of MiMapViewOfDataSection @ 0x1404B64E0
 * Callers:
 *     MiMapViewOfSection @ 0x1404BA540 (MiMapViewOfSection.c)
 * Callees:
 *     MiCommitVadCfgBits @ 0x14000FE10 (MiCommitVadCfgBits.c)
 *     MiIsProcessCfgEnabled @ 0x140010004 (MiIsProcessCfgEnabled.c)
 *     MiCheckForConflictingVadExistence @ 0x140010018 (MiCheckForConflictingVadExistence.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140010380 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiDereferenceControlArea @ 0x140025CDC (MiDereferenceControlArea.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x140054170 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiLocateSubsectionNode @ 0x140085A20 (MiLocateSubsectionNode.c)
 *     MiUnlockVad @ 0x1400894F0 (MiUnlockVad.c)
 *     MiLockVad @ 0x140089660 (MiLockVad.c)
 *     MiReferenceVad @ 0x1400896D4 (MiReferenceVad.c)
 *     MiLocatePagefileSubsection @ 0x140089C20 (MiLocatePagefileSubsection.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140089E40 (UNLOCK_ADDRESS_SPACE.c)
 *     LOCK_ADDRESS_SPACE @ 0x14008A330 (LOCK_ADDRESS_SPACE.c)
 *     MiAddViewsForSection @ 0x14008A3B0 (MiAddViewsForSection.c)
 *     MiGetControlAreaPtes @ 0x14008A830 (MiGetControlAreaPtes.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14008A920 (MiCheckPurgeAndUpMapCount.c)
 *     MiGetWsAndInsertVad @ 0x14008A9F0 (MiGetWsAndInsertVad.c)
 *     MiUnlockAndDereferenceVad @ 0x14008E5C0 (MiUnlockAndDereferenceVad.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiGetProcessPartition @ 0x14008F8A0 (MiGetProcessPartition.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     MiDereferenceExtendInfo @ 0x140133614 (MiDereferenceExtendInfo.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWriteLargePde @ 0x1402302C0 (MiWriteLargePde.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MiSecureVad @ 0x140477960 (MiSecureVad.c)
 *     MiSelectUserAddress @ 0x1404B59C4 (MiSelectUserAddress.c)
 *     MiAddSecureEntry @ 0x1404B5A90 (MiAddSecureEntry.c)
 *     MiAdvanceVadHint @ 0x1404B5C80 (MiAdvanceVadHint.c)
 *     MiFindEmptyAddressRange @ 0x1404B61A0 (MiFindEmptyAddressRange.c)
 *     MiUnmapVad @ 0x1404B7570 (MiUnmapVad.c)
 *     MiInsertSharedCommitNode @ 0x1404B7640 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x1404B7A60 (MiRemoveSharedCommitNode.c)
 *     MiInsertVadCharges @ 0x1404B8410 (MiInsertVadCharges.c)
 *     MiChargeSegmentCommit @ 0x14051AD20 (MiChargeSegmentCommit.c)
 *     MiFindEmptyAddressRangeDown @ 0x140527984 (MiFindEmptyAddressRangeDown.c)
 *     MiLogMapFileEvent @ 0x1406A091C (MiLogMapFileEvent.c)
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
  __int64 v16; // r13
  __int64 v18; // r15
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int64 v21; // rsi
  unsigned __int64 v22; // rbx
  __int64 v23; // rdx
  int inserted; // edi
  __int64 v25; // r8
  __int64 v26; // r9
  void *v27; // rcx
  bool v28; // di
  _QWORD *SubsectionNode; // r9
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rax
  int v32; // edi
  int v33; // ebx
  char v34; // bl
  PVOID PoolWithTag; // rax
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned int v38; // edx
  char v39; // cl
  __int64 v40; // rbx
  void *v41; // rbx
  struct _KTHREAD *v42; // rcx
  _BYTE *v43; // rdx
  unsigned __int64 v44; // r10
  char *v45; // rax
  _KPROCESS *Process; // rcx
  int EmptyAddressRangeDown; // eax
  int v48; // ecx
  int v49; // eax
  unsigned __int64 v50; // r12
  unsigned __int64 v51; // rdi
  struct _KTHREAD *v52; // r14
  unsigned __int64 v53; // r8
  __int64 v54; // r9
  bool v55; // zf
  __int64 v56; // rax
  __int64 v57; // r9
  __int64 v58; // rdi
  __int64 v59; // r12
  _DWORD *v60; // rdi
  int v61; // eax
  _DWORD *v62; // rax
  __int16 v63; // ax
  unsigned __int64 v64; // rax
  __int16 v65; // ax
  int v66; // ebx
  unsigned __int64 v67; // rdx
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rdi
  __int64 v72; // r9
  __int64 *v73; // r14
  ULONG_PTR v74; // r15
  __int64 v75; // rdi
  unsigned __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rdi
  BOOL v80; // eax
  __int16 *v81; // rsi
  BOOL v82; // r13d
  __int64 PteShadow; // rbx
  __int64 v84; // r8
  char v85; // di
  __int64 v86; // r13
  unsigned int v87; // r15d
  int v88; // eax
  unsigned int v89; // r15d
  char v90; // [rsp+40h] [rbp-C0h]
  int v91; // [rsp+44h] [rbp-BCh] BYREF
  int v92; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v93; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v94; // [rsp+58h] [rbp-A8h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-A0h]
  unsigned __int64 ControlAreaPtes; // [rsp+68h] [rbp-98h]
  _QWORD *v97; // [rsp+70h] [rbp-90h]
  unsigned int v98; // [rsp+78h] [rbp-88h]
  __int64 v99; // [rsp+80h] [rbp-80h]
  unsigned __int64 v100; // [rsp+88h] [rbp-78h]
  int v101; // [rsp+90h] [rbp-70h]
  unsigned __int64 v102; // [rsp+98h] [rbp-68h]
  __int16 *ProcessPartition; // [rsp+A0h] [rbp-60h]
  __int64 v104; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v105; // [rsp+B0h] [rbp-50h]
  __int64 v106; // [rsp+B8h] [rbp-48h]
  PVOID P; // [rsp+C0h] [rbp-40h]
  __int64 v108; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v109; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v110; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v111; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v112; // [rsp+E8h] [rbp-18h]
  __int64 v113; // [rsp+F0h] [rbp-10h] BYREF

  v99 = *a1;
  v16 = (__int64)a1;
  v106 = 0LL;
  v109 = 0LL;
  v98 = a11 & 0x7F;
  if ( v98 > (unsigned __int16)KeNumberNodes )
    return 3221225719LL;
  v92 = a11 & 0x2000;
  if ( (a11 & 0x2000) != 0 && !a1[8] )
    return 3221225719LL;
  LODWORD(v94) = a11 & 0x40000000;
  if ( (a11 & 0x40000000) != 0 )
  {
    if ( (a11 & 0x2000) != 0 || !*a3 )
      return 3221225713LL;
    v18 = 4096LL;
  }
  else
  {
    v18 = 0x10000LL;
  }
  v19 = *a5;
  if ( *a5 )
  {
    v20 = *(unsigned int *)a4 & (unsigned __int64)(v18 - 1);
    if ( v19 + v20 < v20 )
      return 3221225503LL;
    *a5 = v19 + v20;
    *(_DWORD *)a4 &= ~(v18 - 1);
  }
  else
  {
    *(_DWORD *)a4 &= ~(v18 - 1);
    *a5 = *(_QWORD *)(a6 + 48) - *a4;
  }
  if ( *a5 > (unsigned __int64)MmHighestUserAddress - *a3 - 0xFFFF
    || *a5 <= 0
    || (a11 & 0x2000) != 0 && *a4 >= 0x10000000000LL )
  {
    return 3221225503LL;
  }
  v21 = 0LL;
  P = 0LL;
  v101 = 0;
  ProcessPartition = MiGetProcessPartition(a2);
  CurrentThread = KeGetCurrentThread();
  MiCheckPurgeAndUpMapCount(v16);
  v22 = (__int64)*a4 >> 12;
  v105 = (*a4 + *a5 + 4095) >> 12;
  v100 = v22;
  ControlAreaPtes = MiGetControlAreaPtes(v16);
  if ( v22 >= ControlAreaPtes )
  {
    inserted = -1073741793;
LABEL_22:
    MiDereferenceControlArea(v16, v23);
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v21 )
    {
      if ( *(__int64 *)(v21 + 120) < 0 )
        MiDereferenceExtendInfo(v21, v16, v25, v26);
      v27 = *(void **)(v21 + 128);
      if ( v27 )
        ObfDereferenceObject(v27);
      ExFreePoolWithTag((PVOID)v21, 0);
    }
    if ( v109 )
      MiReturnCommit((__int64)ProcessPartition, v109);
    return (unsigned int)inserted;
  }
  v28 = 0;
  if ( *(_QWORD *)(v16 + 64) )
  {
    SubsectionNode = MiLocateSubsectionNode((volatile signed __int32 *)v16, *a4, 0);
    v97 = SubsectionNode;
  }
  else
  {
    v111 = v100;
    v97 = MiLocatePagefileSubsection((unsigned int *)(v16 + 120), &v111);
    SubsectionNode = v97;
    if ( !a9 && a8 == 24 )
      v28 = (*(_DWORD *)(v16 + 56) & 0x1000) != 0;
  }
  v30 = *((unsigned int *)SubsectionNode + 9) | ((unsigned __int64)((_WORD)SubsectionNode[4] & 0xFFC0) << 26);
  v100 -= v30;
  v31 = v105 - v30;
  if ( v28 )
    v31 = 1LL;
  v105 = v31;
  inserted = MiAddViewsForSection((__int64)SubsectionNode, v31, 0);
  if ( inserted < 0 )
    goto LABEL_22;
  v104 = v97[1] + 8 * v100;
  if ( !*(_QWORD *)(v16 + 64) && a9 && *(_QWORD *)(v99 + 16) < ControlAreaPtes )
    v106 = (__int64)(8 * (((a9 & 0xFFF) != 0) + (a9 >> 12))) >> 3;
  v32 = v92;
  v91 = 0;
  v33 = *(_DWORD *)(a6 + 56) >> 11;
  ControlAreaPtes = *(_QWORD *)(a6 + 24) << 12;
  v34 = v33 & 1;
  if ( (*(_WORD *)(v99 + 12) & 0x1000) != 0
    && (*(_DWORD *)a5 & 0x1FFFFF) == 0
    && !v92
    && (a8 & 0xFFFFFFF8) != 0x10
    && a8 != 24
    && (a8 & 5) != 5 )
  {
    v18 = 0x200000LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x20646156u);
  v112 = (__int64)PoolWithTag;
  v21 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    inserted = -1073741670;
LABEL_138:
    if ( *(_QWORD *)(v16 + 64) )
      MiRemoveViewsFromSectionWithPfn(v97, v105);
    goto LABEL_22;
  }
  memset(PoolWithTag, 0, 0x88uLL);
  v38 = v98;
  v39 = v98;
  *(_QWORD *)(v21 + 80) = v104;
  *(_QWORD *)(v21 + 72) = v97;
  *(_QWORD *)(v21 + 16) = -2LL;
  *(_DWORD *)(v21 + 64) = *(_DWORD *)(v21 + 64) & 0xF3FFFFFF | (((a7 == 1) | (2 * (v34 & 1))) << 26);
  *(_DWORD *)(v21 + 48) = *(_DWORD *)(v21 + 48) & 0xFFFFC007 | (8 * (a8 & 0x1F | (32 * (v39 & 0x3F))));
  if ( v38 )
    MEMORY[0xFFFFF58010804250] = 1;
  if ( *(_QWORD *)(v16 + 64) && !v32 )
    *(_DWORD *)(v21 + 64) |= 0x2000000u;
  *(_QWORD *)(v21 + 40) = 0LL;
  *(_DWORD *)(v21 + 64) ^= (*(_DWORD *)(v21 + 64) ^ ((__int64)*a4 >> 16)) & 0xFFFFFF;
  v40 = *(_QWORD *)(a6 + 40);
  if ( (v40 & 3) != 0 )
  {
    v41 = (void *)(v40 & 0xFFFFFFFFFFFFFFFCuLL);
    ObfReferenceObject(v41);
  }
  else
  {
    v41 = 0LL;
  }
  v42 = CurrentThread;
  *(_QWORD *)(v21 + 128) = v41;
  v90 = 1;
  LOCK_ADDRESS_SPACE((__int64)v42, a2, v36, v37);
  if ( (*(_DWORD *)(a2 + 772) & 0x20) != 0 )
  {
    inserted = -1073741558;
    goto LABEL_136;
  }
  if ( *a3 )
  {
    v50 = *a3 & ~(v18 - 1);
  }
  else
  {
    if ( !ControlAreaPtes )
    {
      v43 = (char *)MmHighestUserAddress - 0x10000;
      v91 = 0;
      v44 = *a5;
      v93 = 0LL;
      if ( a10 )
      {
        v45 = (char *)(0xFFFFFFFFFFFFFFFFuLL >> a10);
        if ( 0xFFFFFFFFFFFFFFFFuLL >> a10 > (unsigned __int64)v43 )
          v45 = (char *)MmHighestUserAddress - 0x10000;
        v43 = v45;
      }
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( (a11 & 0x100000) != 0 || (Process[1].DirectoryTableBase & 0x20000000000000LL) != 0 )
        EmptyAddressRangeDown = MiFindEmptyAddressRangeDown(
                                  (int)Process + 1544,
                                  v44,
                                  v18,
                                  (_DWORD)v43,
                                  a8,
                                  (__int64)&v93);
      else
        EmptyAddressRangeDown = MiFindEmptyAddressRange(v44, v18, v43, a8, &v93, &v91);
      inserted = EmptyAddressRangeDown;
      v48 = 0x10000;
      v49 = v91;
      if ( v18 != 0x10000 )
        v49 = 0;
      v91 = v49;
      if ( inserted < 0 )
      {
        if ( v18 == 0x200000 )
        {
          if ( (_DWORD)v94 )
            v48 = 4096;
          v18 = v48;
          inserted = MiSelectUserAddress(a11, a10, *a5, v48, a8, &v91, &v93);
        }
        if ( inserted < 0 )
          goto LABEL_136;
      }
      v50 = v93;
      v102 = v93;
      v51 = (*a5 + v93 - 1) | 0xFFF;
      v94 = v51;
      goto LABEL_83;
    }
    v50 = ControlAreaPtes + *a4;
  }
  v61 = 0x10000;
  v93 = v50;
  v102 = v50;
  if ( v50 < 0x10000 && !*(_QWORD *)(a2 + 1784) )
  {
    inserted = -1073741583;
    goto LABEL_136;
  }
  if ( (v50 & 0x1FFFFF) != 0 )
  {
    if ( (_DWORD)v94 )
      v61 = 4096;
    v18 = v61;
  }
  v51 = (v50 + *a5 - 1) | 0xFFF;
  v94 = v51;
  if ( MiCheckForConflictingVadExistence() )
  {
    inserted = -1073741800;
    goto LABEL_136;
  }
LABEL_83:
  v52 = CurrentThread;
  v53 = v50 >> 12;
  v54 = v51 >> 12;
  *(_BYTE *)(v21 + 32) = v50 >> 44;
  v55 = v92 == 0;
  ControlAreaPtes = v50 >> 12;
  v110 = v51 >> 12;
  *(_DWORD *)(v21 + 24) = v50 >> 12;
  *(_DWORD *)(v21 + 28) = v51 >> 12;
  *(_BYTE *)(v21 + 33) = v51 >> 44;
  if ( !v55 )
  {
    --v52->SpecialApcDisable;
    v56 = KeAbPreAcquire((ULONG_PTR)&qword_14034E7A0, 0LL, 0LL, v54);
    v58 = v56;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_14034E7A0, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_14034E7A0, v56, (ULONG_PTR)&qword_14034E7A0, v57);
    if ( v58 )
      *(_BYTE *)(v58 + 26) |= 1u;
    v59 = v99;
    v60 = *(_DWORD **)(v99 + 32);
    if ( v60 )
    {
      ++v60[2];
    }
    else
    {
      v62 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x78436D4Du);
      v60 = v62;
      if ( !v62 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14034E7A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_14034E7A0);
        KeAbPostRelease((ULONG_PTR)&qword_14034E7A0);
        v63 = v52->SpecialApcDisable + 1;
        v52->SpecialApcDisable = v63;
        if ( !v63 && ($CD287064E7C9F7953DE243E927CFCB99 *)v52->ApcState.ApcListHead[0].Flink != &v52->152 )
          KiCheckForKernelApcDelivery();
        inserted = -1073741670;
        goto LABEL_136;
      }
      v62[2] = 1;
      *(_QWORD *)v62 = _InterlockedCompareExchange64((volatile signed __int64 *)(v59 + 24), -1LL, -1LL);
      *(_QWORD *)(v59 + 32) = v62;
    }
    v64 = *(_QWORD *)(a6 + 48);
    if ( *(_QWORD *)v60 < v64 )
      *(_QWORD *)v60 = v64;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14034E7A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14034E7A0);
    KeAbPostRelease((ULONG_PTR)&qword_14034E7A0);
    v65 = v52->SpecialApcDisable + 1;
    v52->SpecialApcDisable = v65;
    if ( !v65 && ($CD287064E7C9F7953DE243E927CFCB99 *)v52->ApcState.ApcListHead[0].Flink != &v52->152 )
      KiCheckForKernelApcDelivery();
    v50 = v93;
    v53 = ControlAreaPtes;
    v54 = v110;
    *(_QWORD *)(v21 + 120) = v60;
    v51 = v94;
    v102 = v50;
  }
  v66 = a8;
  if ( (a8 & 5) == 5 )
  {
    v67 = (*(unsigned int *)(v21 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 33) << 32))
        - (*(unsigned int *)(v21 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 32) << 32))
        + 1;
    *(_DWORD *)(v21 + 52) ^= (*(_DWORD *)(v21 + 52) ^ (*(_DWORD *)(v21 + 28) - *(_DWORD *)(v21 + 24) + 1)) & 0x7FFFFFFF;
    *(_BYTE *)(v21 + 34) = v67 >> 31;
  }
  v68 = v54 - v53 + v100;
  v69 = *((unsigned int *)v97 + 11);
  if ( v68 >= v69 )
    v70 = v97[1] + 8LL * (unsigned int)(*((_DWORD *)v97 + 13) - 1 + v69);
  else
    v70 = v97[1] + 8 * v68;
  *(_QWORD *)(v21 + 88) = v70;
  if ( (a11 & 0x400000) != 0 || (*(_DWORD *)(a6 + 56) & 0x4000) != 0 )
  {
    P = MiAddSecureEntry(v21, v50, v51, 0x80000000, 0);
    if ( !P )
    {
      inserted = -1073741670;
      goto LABEL_136;
    }
  }
  v71 = v106;
  if ( v106 )
  {
    if ( !(unsigned int)MiChargeCommit((__int64)ProcessPartition, v106, 0) )
    {
      inserted = -1073741523;
      goto LABEL_136;
    }
    v109 = v71;
  }
  if ( v18 == 0x200000 )
  {
    *(_DWORD *)(v21 + 48) |= 7u;
    *(_DWORD *)(v21 + 64) |= 0x1000000u;
  }
  if ( !*(_QWORD *)(v16 + 64) )
  {
    inserted = MiInsertSharedCommitNode(v16, a2, 0LL);
    if ( inserted < 0 )
      goto LABEL_136;
    v101 = 1;
  }
  inserted = MiInsertVadCharges(v21, a2);
  if ( inserted < 0 )
  {
LABEL_136:
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, a2);
    if ( v101 == 1 )
      MiRemoveSharedCommitNode(v16, a2, 0LL);
    goto LABEL_138;
  }
  MiGetWsAndInsertVad(v21);
  if ( v18 == 0x200000 )
  {
    v73 = (__int64 *)v104;
    ProcessPartition = (__int16 *)(((v94 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    v74 = ((v50 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v75 = MmProtectToPteMask[a8] | 0xFFFFFFFFF021LL;
    v76 = ((v50 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( v76 + 0x904C0000000LL <= 0x3FFFFFFF )
      v75 &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
    if ( v76 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
      && v76 >= 0xFFFFF68000000000uLL
      || v76 >= 0xFFFFF6FB40000000uLL
      && v76 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
      || v76 >= 0xFFFFF6FB7DA00000uLL
      && v76 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
      || v76 >= 0xFFFFF6FB7DBED000uLL
      && v76 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
    {
      v75 |= 4uLL;
    }
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v76) )
      v75 |= 0x100uLL;
    if ( (v75 & 0x800) != 0 )
      v75 |= 0x62uLL;
    v79 = v75 | 0x80;
    MiLockVad((__int64)CurrentThread, v21, v77, v78);
    v80 = MiPteInShadowRange((__int64)&v108);
    v81 = ProcessPartition;
    v82 = v80;
    do
    {
      PteShadow = *v73;
      if ( MiPteInShadowRange((__int64)v73) )
        PteShadow = MiReadPteShadow((__int64)v73, PteShadow);
      v108 = PteShadow;
      if ( v82 )
        PteShadow = MiReadPteShadow((__int64)&v108, PteShadow);
      v79 ^= (v79 ^ PteShadow) & 0xFFFFFFFFF000LL;
      MiWriteLargePde(a2, v74, v79, v98);
      v74 += 8LL;
      v73 += 512;
    }
    while ( v74 <= (unsigned __int64)v81 );
    v21 = v112;
    v52 = CurrentThread;
    MiUnlockVad((__int64)CurrentThread, v112);
    v50 = v102;
    v16 = (__int64)a1;
    v66 = a8;
  }
  if ( !*(_QWORD *)(v16 + 64) && !*(_QWORD *)(v99 + 56) )
    *(_QWORD *)(v99 + 56) = v50;
  v84 = v106;
  if ( v106 )
    MiChargeSegmentCommit(v97, v104, v106, 1LL);
  if ( v91 == 1 )
    MiAdvanceVadHint(ControlAreaPtes, v110);
  *a5 = v94 - v50 + 1;
  *a3 = v50;
  if ( ((v66 - 4) & 0xFFFFFFFD) == 0 && *(_QWORD *)(v16 + 64) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 92));
    v50 = v93;
  }
  if ( (PerfGlobalGroupMask & 0x8000) != 0 )
    MiLogMapFileEvent(v21, 1061LL, v84, v72);
  if ( a14 )
    MiReferenceVad(v21);
  v85 = 0;
  if ( (a8 & 2) != 0 && MiIsProcessCfgEnabled() )
  {
    MiLockVad((__int64)v52, v21, v84, v72);
    v86 = a2;
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)v52, a2);
    v90 = 0;
    v85 = 1;
    v87 = MiCommitVadCfgBits(v21, 0LL, a13);
    if ( (v87 & 0x80000000) != 0 )
    {
      if ( !a14 )
        MiReferenceVad(v21);
      MiUnmapVad(v21, 0LL);
      return v87;
    }
  }
  else
  {
    v86 = a2;
    v87 = 0;
  }
  if ( a14 )
  {
    if ( v85 != 1 )
      MiLockVad((__int64)v52, v21, v84, v72);
    if ( v90 == 1 )
      UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)v52, v86);
    if ( (unsigned int)(a12 - 1) <= 1 || a12 == -2147483647 || a12 == 4 )
    {
      v88 = MiSecureVad(v21, v50, *a5, a12, &v113);
      if ( v88 >= 0 )
      {
        MiUnlockAndDereferenceVad((char *)v21);
        *a14 = v113;
        return v87;
      }
    }
    else
    {
      v88 = -1073741755;
    }
    v89 = v88;
    MiUnmapVad(v21, 0LL);
    return v89;
  }
  if ( v85 == 1 )
    MiUnlockVad((__int64)v52, v21);
  if ( v90 == 1 )
    UNLOCK_ADDRESS_SPACE((__int64)v52, v86);
  return v87;
}
