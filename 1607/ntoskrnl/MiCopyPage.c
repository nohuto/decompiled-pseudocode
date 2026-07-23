/*
 * XREFs of MiCopyPage @ 0x1400E1100
 * Callers:
 *     MiDuplicateCloneLeaf @ 0x14000155C (MiDuplicateCloneLeaf.c)
 *     MiWaitForInPageComplete @ 0x140024D30 (MiWaitForInPageComplete.c)
 *     MiMigratePfn @ 0x140036990 (MiMigratePfn.c)
 *     MiCopyOnWriteEx @ 0x1400E05D0 (MiCopyOnWriteEx.c)
 *     MiCopyHeaderIfResident @ 0x1400FB338 (MiCopyHeaderIfResident.c)
 *     MiReplaceTransitionPage @ 0x140105244 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x140105C04 (MiStealPage.c)
 *     MiTradeActivePage @ 0x140108F04 (MiTradeActivePage.c)
 *     MiPrivateFixup @ 0x140109170 (MiPrivateFixup.c)
 *     MiSwapStackPageNoDpc @ 0x1401098D4 (MiSwapStackPageNoDpc.c)
 *     MiSplitDirectMapPage @ 0x1401ED884 (MiSplitDirectMapPage.c)
 *     MiSwapNumaStandbyPage @ 0x1401F38F8 (MiSwapNumaStandbyPage.c)
 *     MiIdealClusterPage @ 0x1401F6574 (MiIdealClusterPage.c)
 *     MiFillPerSessionProtos @ 0x140661F18 (MiFillPerSessionProtos.c)
 *     MiReloadBootLoadedDrivers @ 0x1407A57F0 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiChangePageAttribute @ 0x14001CC08 (MiChangePageAttribute.c)
 *     MiAbortCombineScan @ 0x14001D390 (MiAbortCombineScan.c)
 *     MiClearPfnImageVerified @ 0x14001D838 (MiClearPfnImageVerified.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14001D918 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiGetPteFromCopyList @ 0x140034700 (MiGetPteFromCopyList.c)
 *     MiReleasePtes @ 0x140051250 (MiReleasePtes.c)
 *     MiAllocateHyperSpace @ 0x14009D96C (MiAllocateHyperSpace.c)
 *     MiReservePtes @ 0x1400DB9F0 (MiReservePtes.c)
 *     MiGetPagePrivilege @ 0x1400E15D0 (MiGetPagePrivilege.c)
 *     MiMarkPfnVerified @ 0x140108054 (MiMarkPfnVerified.c)
 *     KeSetPagePrivilege @ 0x140147314 (KeSetPagePrivilege.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     KeCopyPage @ 0x140162490 (KeCopyPage.c)
 *     KeCopyPrivilegedPage @ 0x1401D1E6C (KeCopyPrivilegedPage.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 */

char __fastcall MiCopyPage(ULONG_PTR a1, ULONG_PTR a2, int *a3, char a4)
{
  __int64 v4; // r12
  __int64 v7; // rbx
  __int64 v8; // rsi
  int v9; // ecx
  ULONG_PTR BugCheckParameter4; // rbp
  int PagePrivilege; // eax
  __int64 v12; // r9
  unsigned __int64 v13; // r8
  int v14; // edx
  int v15; // eax
  char v16; // bl
  unsigned __int8 v17; // bp
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  int *v22; // rax
  unsigned int v23; // edx
  unsigned int v24; // ebx
  bool v25; // zf
  unsigned __int8 CurrentIrql; // al
  unsigned __int64 HyperSpace; // rax
  __int64 *PteFromCopyList; // rbx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v34; // [rsp+30h] [rbp-88h]
  __int64 v35; // [rsp+38h] [rbp-80h]
  __int128 v36; // [rsp+40h] [rbp-78h] BYREF
  __int128 v37; // [rsp+50h] [rbp-68h] BYREF
  int v38; // [rsp+60h] [rbp-58h] BYREF
  int v39; // [rsp+64h] [rbp-54h]
  __int16 v40; // [rsp+68h] [rbp-50h]
  ULONG_PTR v41; // [rsp+70h] [rbp-48h]
  unsigned int v44; // [rsp+D8h] [rbp+20h]

  v4 = a1;
  v7 = 48 * a2 - 0x58000000000LL;
  v35 = v7;
  v8 = 48 * a1 - 0x58000000000LL;
  v9 = 0;
  v34 = a4 & 4;
  if ( (a4 & 4) != 0 )
    v9 = 4;
  LODWORD(BugCheckParameter4) = -1073741823;
  v44 = v9;
  PagePrivilege = MiGetPagePrivilege(v7, a4 & 4, &v37);
  v13 = HIWORD(MiFlags);
  v14 = PagePrivilege;
  v15 = MiFlags;
  if ( v14 )
  {
    if ( (a4 & 0x12) != 0 )
    {
      v16 = 2;
    }
    else if ( (MiFlags & 0x4000) == 0
           || (a4 & 8) != 0
           || (v14 & 1) == 0
           || (v12 = 0x200000000000000LL, (*(_QWORD *)(v7 + 40) & 0x200000000000000LL) != 0) )
    {
      if ( (MiFlags & 0x10000) != 0 && (a4 & 8) == 0 && (v14 & 2) != 0 )
        v16 = 2;
      else
        v16 = 4;
    }
    else
    {
      v16 = 2;
    }
  }
  else
  {
    v16 = 0;
    if ( (a4 & 2) == 0 )
      v16 = 4;
  }
  if ( (v16 & 2) != 0 )
  {
    *((_QWORD *)&v36 + 1) = 0LL;
    if ( (MiFlags & 0x10000) != 0 )
    {
      MiFlushEntireTbDueToAttributeChange(1LL, 0xFFFFF68000000000uLL, HIWORD(MiFlags), v12);
      v15 = MiFlags;
    }
    if ( (v15 & 0x20000) != 0 )
    {
      if ( (a4 & 2) != 0 )
      {
        v36 = v37;
      }
      else
      {
        *(_QWORD *)&v36 = (__int64)(*(_QWORD *)(v8 + 8) << 25) >> 16;
        if ( (unsigned __int64)v36 < 0xFFFF800000000000uLL )
        {
          v16 |= 8u;
          *((_QWORD *)&v36 + 1) = KeGetCurrentThread()->ApcState.Process->SecurePid;
          if ( v34 )
            v17 = 17;
          else
            v17 = MiLockPageInline(v8);
          MiMarkPfnVerified(v8, 4LL);
          MiAbortCombineScan(v8, v18, v19, v20);
          if ( !v34 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v17);
          }
        }
        else
        {
          *((_QWORD *)&v36 + 1) = 0LL;
        }
      }
    }
    v21 = KeCopyPrivilegedPage(a1, (unsigned int)&v36, a2, (unsigned int)&v37, (a4 & 2) != 0);
    BugCheckParameter4 = v21;
    if ( v21 == -1073741819 )
    {
      if ( (v16 & 8) != 0 )
      {
        MiClearPfnImageVerified(v8, v44);
        v16 |= 4u;
      }
    }
    else if ( v21 >= 0 )
    {
LABEL_36:
      if ( (MiFlags & 0x10000) == 0 || (a4 & 2) != 0 )
      {
        v4 = a1;
      }
      else
      {
        v4 = a1;
        if ( (*(_QWORD *)(v8 + 8) | 0x8000000000000000uLL) < 0xFFFFF6C000000000uLL )
        {
          LODWORD(BugCheckParameter4) = KeSetPagePrivilege(a1, &v36, 4LL);
          if ( (BugCheckParameter4 & 0x80000000) != 0LL )
            KeBugCheckEx(0x1Au, 0x5150DuLL, a2, a1, 0LL);
        }
      }
      goto LABEL_42;
    }
    if ( (v16 & 4) == 0 )
      KeBugCheckEx(0x1Au, 0x5150AuLL, a2, a1, BugCheckParameter4);
    goto LABEL_36;
  }
LABEL_42:
  LOBYTE(v22) = (*(_QWORD *)(v35 + 40) >> 54) & 7;
  if ( (_BYTE)v22 == 3 )
  {
    if ( (a4 & 2) != 0 )
      LOBYTE(v22) = MiClearPfnImageVerified(v35, v44);
    if ( (v16 & 4) == 0 )
    {
      LOBYTE(v22) = (*(_QWORD *)(v8 + 40) >> 54) & 7;
      if ( (_BYTE)v22 != 3 )
        LOBYTE(v22) = MiMarkPfnVerified(v8, v44);
    }
  }
  if ( (BugCheckParameter4 & 0x80000000) != 0LL )
  {
    v23 = *(unsigned __int8 *)(v35 + 34) >> 6;
    if ( *(unsigned __int8 *)(v8 + 34) >> 6 != v23 )
      MiChangePageAttribute(v8, v23, 0);
    if ( !a3 )
    {
      if ( (a4 & 1) != 0 )
        v16 |= 1u;
      a3 = &v38;
      if ( (v16 & 1) == 0 )
        goto LABEL_60;
      v24 = 2;
      v38 = 0;
      v39 = 2;
      v40 = 17;
      while ( 1 )
      {
        v41 = MiReservePtes((__int64)&qword_1403278B0, v24, v13);
        if ( v41 )
          break;
        v25 = v24 == 2;
        v24 -= 2;
        v39 = v24;
        if ( v25 )
          goto LABEL_60;
      }
      if ( !v24 )
      {
LABEL_60:
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        LOBYTE(v40) = CurrentIrql;
        v38 = 0;
        v39 = 2;
        HyperSpace = MiAllocateHyperSpace(2uLL);
        HIBYTE(v40) = 1;
        v41 = ((HyperSpace >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
    }
    PteFromCopyList = MiGetPteFromCopyList((unsigned int *)a3, v4, a2);
    KeCopyPage((__int64)((_QWORD)PteFromCopyList << 25) >> 16, ((__int64)((_QWORD)PteFromCopyList << 25) >> 16) + 4096);
    *PteFromCopyList = 0LL;
    if ( (unsigned int)MiPteInShadowRange(PteFromCopyList, v29) )
      MiWritePteShadow(v31, 0LL);
    PteFromCopyList[1] = 0LL;
    if ( (unsigned int)MiPteInShadowRange(PteFromCopyList + 1, v30) )
      MiWritePteShadow(v32, 0LL);
    v22 = &v38;
    if ( a3 == &v38 )
    {
      LOBYTE(v22) = *((_BYTE *)a3 + 8);
      if ( (_BYTE)v22 == 17 )
        LOBYTE(v22) = MiReleasePtes((__int64)&qword_1403278B0, *((_QWORD *)a3 + 2), 2u);
      else
        __writecr8((unsigned __int8)v22);
    }
  }
  return (char)v22;
}
