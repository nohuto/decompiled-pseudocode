/*
 * XREFs of MmUnmapViewInSystemCache @ 0x140048E40
 * Callers:
 *     CcUnmapVacb @ 0x14042A530 (CcUnmapVacb.c)
 * Callees:
 *     MiManageSubsectionView @ 0x1400138A0 (MiManageSubsectionView.c)
 *     MiCaptureDirtyBitToPfn @ 0x1400158E0 (MiCaptureDirtyBitToPfn.c)
 *     MiReleaseSystemCacheView @ 0x140017EF4 (MiReleaseSystemCacheView.c)
 *     MiGetSystemCacheReverseMap @ 0x140019690 (MiGetSystemCacheReverseMap.c)
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001B870 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiRemoveViewsFromSection @ 0x140022364 (MiRemoveViewsFromSection.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026AF0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiCheckControlArea @ 0x140027A60 (MiCheckControlArea.c)
 *     MiSectionControlArea @ 0x14002C050 (MiSectionControlArea.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiDecrementAndInsertStandbyPages @ 0x1400357F0 (MiDecrementAndInsertStandbyPages.c)
 *     MiLocateWsle @ 0x1400466D0 (MiLocateWsle.c)
 *     MiRemoveWsle @ 0x140046A90 (MiRemoveWsle.c)
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     MiLogPageAccess @ 0x1400484C0 (MiLogPageAccess.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     MiRemoveLockedPageFromWorkingSet @ 0x1400B899C (MiRemoveLockedPageFromWorkingSet.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x1400BBC00 (MiUpdateWorkingSetPrivateSize.c)
 *     MiDecrementShareCount @ 0x1400E2F40 (MiDecrementShareCount.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetContainingPageTable @ 0x1401F241C (MiGetContainingPageTable.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     MiMakeLinkedListPte @ 0x1401F256C (MiMakeLinkedListPte.c)
 *     MiUpdateLinkedListInPte @ 0x1401F281C (MiUpdateLinkedListInPte.c)
 *     MiReturnSubsectionCharges @ 0x1401F513C (MiReturnSubsectionCharges.c)
 */

void __fastcall MmUnmapViewInSystemCache(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, int a3)
{
  ULONG_PTR v3; // r15
  _BYTE *v4; // r14
  __int64 v5; // r11
  __int16 v6; // cx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KEVENT *v10; // rax
  __int64 p_Blink; // r13
  ULONG_PTR *SharedWorkingSetList; // rbp
  ULONG_PTR SystemCacheReverseMap; // rax
  __int64 v14; // r10
  ULONG_PTR v15; // r11
  unsigned __int64 v16; // rsi
  LONG *SharedVm; // rbx
  int v18; // esi
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // r10
  __int64 *v22; // r9
  __int64 v23; // rbx
  __int64 v24; // r11
  unsigned __int64 Wsle; // rsi
  char v26; // dl
  ULONG_PTR *v27; // rbp
  ULONG_PTR v28; // r12
  char v29; // cl
  ULONG_PTR *v30; // r14
  ULONG_PTR v31; // r8
  unsigned __int64 v32; // rax
  ULONG_PTR *v33; // rdx
  ULONG_PTR v34; // r15
  __int64 v35; // rbp
  __int64 v36; // r10
  __int64 v37; // r8
  __int64 v38; // rbp
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rdx
  __int64 v41; // r11
  __int64 v42; // r9
  __int64 v43; // rsi
  ULONG_PTR v44; // rdx
  ULONG_PTR v45; // r8
  __int64 v46; // r9
  int v47; // eax
  unsigned __int16 v48; // ax
  int *v49; // r15
  __int64 v50; // rbp
  __int64 v51; // rsi
  __int64 v52; // rcx
  _QWORD *v53; // rax
  int **v54; // rcx
  ULONG_PTR v55; // r9
  _QWORD *v56; // rdx
  int v57; // ecx
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // r9
  _QWORD *v61; // r12
  char v62; // bl
  __int64 v63; // r15
  unsigned int v64; // ebp
  __int64 v65; // r13
  unsigned __int8 v66; // r12
  __int64 v67; // r14
  int v68; // ecx
  unsigned __int64 v69; // rbx
  __int64 v70; // rsi
  __int64 v71; // rbx
  __int64 v72; // rax
  __int64 v73; // r14
  __int64 v74; // rbx
  __int64 *v75; // rsi
  __int64 v76; // r8
  __int64 v77; // r9
  unsigned __int64 v78; // rbp
  __int64 v79; // rax
  unsigned __int64 v80; // rcx
  __int64 v81; // rdx
  __int64 LinkedListPte; // rax
  _BYTE *v83; // rcx
  __int64 v84; // rdx
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r9
  __int64 v88; // r10
  __int64 v89; // rcx
  __int64 v90; // r9
  __int64 v91; // rdx
  __int64 updated; // rax
  __int64 v93; // r10
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r10
  signed __int32 v97[8]; // [rsp+0h] [rbp-348h] BYREF
  KIRQL v98; // [rsp+30h] [rbp-318h]
  int v99; // [rsp+34h] [rbp-314h]
  int v100; // [rsp+38h] [rbp-310h]
  int v101; // [rsp+3Ch] [rbp-30Ch]
  int v102; // [rsp+40h] [rbp-308h]
  int v103; // [rsp+44h] [rbp-304h]
  unsigned __int64 v104; // [rsp+48h] [rbp-300h]
  __int64 v105; // [rsp+50h] [rbp-2F8h] BYREF
  int v106; // [rsp+58h] [rbp-2F0h] BYREF
  int v107; // [rsp+5Ch] [rbp-2ECh]
  __int64 *v108; // [rsp+60h] [rbp-2E8h]
  unsigned __int64 PrototypePteDirect; // [rsp+68h] [rbp-2E0h]
  ULONG_PTR BugCheckParameter3; // [rsp+70h] [rbp-2D8h]
  ULONG_PTR *v111; // [rsp+78h] [rbp-2D0h]
  ULONG_PTR *v112; // [rsp+80h] [rbp-2C8h]
  _BYTE *v113; // [rsp+88h] [rbp-2C0h]
  ULONG_PTR *v114; // [rsp+90h] [rbp-2B8h]
  __int64 v115; // [rsp+98h] [rbp-2B0h]
  _BYTE *v116; // [rsp+A0h] [rbp-2A8h]
  _QWORD *v117; // [rsp+A8h] [rbp-2A0h]
  struct _KEVENT *v118; // [rsp+B0h] [rbp-298h]
  __int64 v119; // [rsp+B8h] [rbp-290h]
  __int64 v120; // [rsp+C0h] [rbp-288h]
  ULONG_PTR BugCheckParameter4; // [rsp+C8h] [rbp-280h]
  _BYTE *v122; // [rsp+D0h] [rbp-278h]
  __int64 v123; // [rsp+D8h] [rbp-270h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+E0h] [rbp-268h] BYREF
  ULONG_PTR BugCheckParameter2a[64]; // [rsp+100h] [rbp-248h] BYREF

  v102 = a3 & 1;
  v107 = a3;
  BugCheckParameter4 = a2;
  v3 = BugCheckParameter2;
  BugCheckParameter3 = BugCheckParameter2;
  v4 = (_BYTE *)(((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v113 = v4;
  v122 = v4;
  v116 = v4 + 512;
  v119 = 48 * MiGetContainingPageTable(v4) - 0x58000000000LL;
  v120 = MiSectionControlArea(v5);
  v6 = *(_WORD *)(v120 + 60);
  v104 = *(_QWORD *)(v120 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  v10 = (struct _KEVENT *)MiPartitionIdToPointer(v6 & 0x3FF, v7, v8, v9);
  v118 = v10;
  v100 = 0;
  p_Blink = (__int64)&v10[274].Header.WaitListHead.Blink;
  v99 = 0;
  v101 = 0;
  PrototypePteDirect = 0LL;
  v103 = 2;
  if ( dword_1403271C8 )
    SharedWorkingSetList = MiGetSharedWorkingSetList((__int64)&v10[274].Header.WaitListHead.Blink);
  else
    SharedWorkingSetList = 0LL;
  v114 = SharedWorkingSetList;
  SystemCacheReverseMap = MiGetSystemCacheReverseMap(v3);
  v117 = (_QWORD *)SystemCacheReverseMap;
  v16 = *(_QWORD *)(SystemCacheReverseMap + 24);
  v108 = (__int64 *)v16;
  if ( v16 )
  {
    if ( (v16 & 1) != 0 )
    {
      v16 &= ~1uLL;
      v103 = 4;
      v108 = (__int64 *)v16;
      *(_QWORD *)(SystemCacheReverseMap + 24) = v16;
    }
    if ( *(_QWORD *)v16 != v14 )
      KeBugCheckEx(0x1Au, 0x782uLL, SystemCacheReverseMap, v3, v15);
  }
  SharedVm = MiGetSharedVm(p_Blink);
  v98 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v115 = 0xF000000000000LL;
  v112 = BugCheckParameter2a;
  v18 = 0;
  while ( 1 )
  {
    v19 = MI_READ_PTE_LOCK_FREE(v4);
    v105 = v19;
    *v22 = v19;
    if ( (v19 & 1) != 0 )
    {
      v23 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v105) - 0x58000000000LL;
      Wsle = *(_QWORD *)v23;
      if ( SharedWorkingSetList )
      {
        Wsle = MiLocateWsle(v3, p_Blink, *(_QWORD *)v23);
        if ( (*v4 & 0x20) != 0
          && (*(_DWORD *)(Wsle * *((unsigned int *)SharedWorkingSetList + 8) + SharedWorkingSetList[10]) & 0xE00) != 0xE00LL )
        {
          MiLogPageAccess(p_Blink, (__int64)v4);
        }
        v24 = 0x3FFFFFFFFFFFFFFFLL;
      }
      if ( v102 == 1 && (v24 & *(_QWORD *)(v23 + 24)) == 1 )
      {
        v26 = *(_BYTE *)(v23 + 35);
        if ( ((v26 & 8) != 0 || (v26 & 7u) > 2) && ((v26 & 8) != 0 || (v26 & 7u) <= 5) )
        {
          v106 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v106);
            while ( (*(_QWORD *)(v23 + 24) & 0x8000000000000000uLL) != 0 );
          }
          *(_BYTE *)(v23 + 35) = *(_BYTE *)(v23 + 35) & 0xF8 | 2;
          _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
      if ( (*(_BYTE *)(p_Blink + 184) & 7) == 2 )
        v27 = &::BugCheckParameter2;
      else
        v27 = (ULONG_PTR *)(*(_QWORD *)(p_Blink + 16) + 416LL);
      v111 = v27;
      v28 = MiLocateWsle(v3, p_Blink, Wsle);
      v123 = *(_QWORD *)(v28 * *((unsigned int *)v27 + 8) + v27[10]);
      if ( (v123 & 8) != 0
        && (*(_QWORD *)(MI_GET_PFN_FROM_PTE(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) + 40) & 0x200000000000000LL) == 0 )
      {
        MiUpdateWorkingSetPrivateSize(p_Blink, v3, -1LL);
      }
      MiRemoveWsle(v28, p_Blink);
      v29 = *(_BYTE *)(p_Blink + 184) & 7;
      if ( v29 == 2 )
        v30 = &::BugCheckParameter2;
      else
        v30 = (ULONG_PTR *)(*(_QWORD *)(p_Blink + 16) + 416LL);
      if ( v28 >= v30[1] )
      {
        v31 = v30[10] + v28 * *((unsigned int *)v30 + 8);
        v32 = *(_QWORD *)v31;
        if ( v29 == 2 )
          v33 = &::BugCheckParameter2;
        else
          v33 = (ULONG_PTR *)(*(_QWORD *)(p_Blink + 16) + 416LL);
        if ( *((_DWORD *)v33 + 8) == 16 )
        {
          v34 = v33[10];
          if ( (__int64)(v31 - v34) >> 4 >= v33[1] )
          {
            v35 = *(unsigned int *)(v31 + 12);
            v36 = (v32 >> 16) & 0xF00000000LL | *(unsigned int *)(v31 + 8);
            v37 = 2 * ((unsigned int)(v32 >> 9) & 7);
            v38 = (v32 >> 20) & 0xF00000000LL | v35;
            if ( (v32 & 0x800000000000LL) != 0 )
              v39 = v32 | 0xFFFF000000000000uLL;
            else
              v39 = v32 & 0xFFFFFFFFFFFFLL;
            if ( v39 < 0xFFFFF68000000000uLL
              || ((v32 & 0x800000000000LL) == 0 ? (v40 = v32 & 0xFFFFFFFFFFFFLL) : (v40 = v32 | 0xFFFF000000000000uLL),
                  v40 > 0xFFFFF6FFFFFFFFFFuLL) )
            {
              v37 = (unsigned int)(v37 + 1);
            }
            v41 = *(_QWORD *)(p_Blink + 16);
            v42 = v37 + 10;
            v43 = (unsigned int)v37;
            v44 = v34 + 16 * v38;
            v45 = v34 + 16 * v36;
            v46 = 2 * v42;
            if ( v38 == 0xFFFFFFFFFLL )
            {
              *(_QWORD *)(v41 + 8 * v46) = v36;
            }
            else
            {
              *(_DWORD *)(v44 + 8) = v36;
              *(_QWORD *)v44 ^= v115 & (*(_QWORD *)v44 ^ (v36 << 16));
            }
            if ( v36 == 0xFFFFFFFFFLL )
            {
              *(_QWORD *)(v41 + 8 * v46 + 8) = v38;
            }
            else
            {
              *(_DWORD *)(v45 + 12) = v38;
              *(_QWORD *)v45 ^= (*(_QWORD *)v45 ^ (v38 << 20)) & 0xF0000000000000LL;
            }
            --*(_QWORD *)(v41 + 8 * v43 + 32);
          }
        }
        v47 = (v32 >> 9) & 7;
        if ( v47 )
        {
          --*(_QWORD *)(p_Blink + 8LL * (unsigned int)(v47 - 1) + 40);
          if ( v47 == 7 )
          {
            v48 = *(_WORD *)(p_Blink + 164);
            v49 = v48 == 1023 ? MiSystemPartition : *(int **)(qword_140327038 + 8LL * v48);
            v50 = *((_QWORD *)v49 + 781);
            if ( *(_QWORD *)(p_Blink + 88) < *(_QWORD *)(v50 + 64) )
            {
              v51 = p_Blink + 24;
              if ( *(_QWORD *)(p_Blink + 24) )
              {
                if ( *((_QWORD *)v49 + 783) != v51 )
                {
                  KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_140327780, &LockHandle);
                  if ( *(_BYTE *)(v50 + 53) || !*(_QWORD *)v51 )
                  {
                    *(_BYTE *)(v50 + 54) = 1;
                  }
                  else
                  {
                    v52 = *(_QWORD *)v51;
                    v53 = *(_QWORD **)(p_Blink + 32);
                    if ( *(_QWORD *)(*(_QWORD *)v51 + 8LL) != v51 || *v53 != v51 )
                      __fastfail(3u);
                    *v53 = v52;
                    *(_QWORD *)(v52 + 8) = v53;
                    v54 = (int **)*((_QWORD *)v49 + 783);
                    if ( *v54 != v49 + 1564 )
                      __fastfail(3u);
                    *(_QWORD *)v51 = v49 + 1564;
                    *(_QWORD *)(p_Blink + 32) = v54;
                    *v54 = (int *)v51;
                    *((_QWORD *)v49 + 783) = v51;
                  }
                  KxReleaseQueuedSpinLock(&LockHandle);
                }
              }
            }
          }
        }
      }
      v55 = *v30;
      if ( *v30 != 0xFFFFFFFFFLL )
      {
        if ( v55 < v30[1] || v55 > v30[3] )
          KeBugCheckEx(0x1Au, 0x5004uLL, (ULONG_PTR)v30, v55, v30[3]);
        v56 = (_QWORD *)(v30[10] + v55 * *((unsigned int *)v30 + 8));
        *v56 ^= (*(_DWORD *)v56 ^ (2 * (_DWORD)v28)) & 0xFFFFFFE;
      }
      v20 = 0xFFFFF68000000000uLL;
      *(_QWORD *)(v28 * *((unsigned int *)v30 + 8) + v30[10]) = (v55 << 28) | 0xFFFFFFE;
      *v30 = v28;
      --*(_QWORD *)(p_Blink + 128);
      v3 = BugCheckParameter3;
      if ( BugCheckParameter3 < 0xFFFFF68000000000uLL || BugCheckParameter3 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        --*(_QWORD *)(p_Blink + 112);
        v57 = 1;
      }
      else
      {
        v57 = 0;
      }
      if ( (*(_BYTE *)(p_Blink + 184) & 7) == 2 )
      {
        --qword_140327D48;
        if ( v57 == 1 )
          --qword_140327D50;
      }
      if ( v28 < v111[1] )
      {
        v58 = MI_GET_PFN_FROM_PTE(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        MiRemoveLockedPageFromWorkingSet(p_Blink, v3, v28, v58);
      }
      if ( v104 )
        PrototypePteDirect = *(_QWORD *)(v23 + 8) | 0x8000000000000000uLL;
      ++v101;
      v4 = v113;
    }
    else
    {
      if ( (v19 & 0x400) == 0 )
        break;
      if ( v21 )
        PrototypePteDirect = MiGetPrototypePteDirect(v19);
    }
    *(_QWORD *)v4 = 0LL;
    if ( (unsigned int)MiPteInShadowRange(v4, v20) )
      MiWritePteShadow(v59, 0LL);
    v18 = v100 + 1;
    v112 = (ULONG_PTR *)(v60 + 8);
    v4 += 8;
    ++v100;
    v3 += 4096LL;
    v113 = v4;
    BugCheckParameter3 = v3;
    if ( v4 >= v116 )
      break;
    SharedWorkingSetList = v114;
  }
  v61 = v117;
  if ( v117[2] )
  {
    v117[2] = 0LL;
    v62 = 1;
  }
  else
  {
    v62 = 0;
  }
  MiUnlockWorkingSetExclusive(p_Blink, v98);
  if ( v62 == 1 )
    MiManageSubsectionView(v108, v61, v103);
  _InterlockedOr(v97, 0);
  v63 = 0LL;
  v102 = KiTbFlushTimeStamp;
  v64 = 0;
  v65 = v18;
  v66 = 17;
  v67 = 0LL;
  if ( v18 <= 0 )
    goto LABEL_127;
  v68 = 0;
  do
  {
    if ( (BugCheckParameter2a[v67] & 1) == 0 )
      goto LABEL_114;
    ++v63;
    v69 = 0LL;
    v70 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&BugCheckParameter2a[v99]) - 0x58000000000LL;
    if ( !v64 )
    {
      v66 = MiLockPageInline(v70);
LABEL_107:
      if ( (BugCheckParameter2a[v67] & 0x42) != 0 )
      {
        v69 = MiCaptureDirtyBitToPfn(v70);
      }
      else if ( (*(_QWORD *)(v70 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
             && *(_WORD *)(v70 + 32) == 1
             && (*(_QWORD *)(v70 + 24) & 0x4000000000000000LL) == 0
             && (*(_BYTE *)(v70 + 35) & 0x40) == 0
             && (*(_BYTE *)(v70 + 34) & 0x10) == 0 )
      {
        v72 = v64++;
        BugCheckParameter2a[v72] = v70;
LABEL_113:
        v68 = v99;
        goto LABEL_114;
      }
      if ( v64 )
      {
        MiDecrementAndInsertStandbyPages((__int64)BugCheckParameter2a, v64, 0x11u);
        v64 = 0;
      }
      MiDecrementShareCount(v70);
      _InterlockedAnd64((volatile signed __int64 *)(v70 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v66);
      if ( v69 )
        MiReleasePageFileInfo(v118, v69, 0);
      goto LABEL_113;
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v70 + 24), 0x3FuLL) )
      goto LABEL_107;
    MiDecrementAndInsertStandbyPages((__int64)BugCheckParameter2a, v64, v66);
    --v67;
    v68 = v99 - 1;
    v64 = 0;
    --v63;
LABEL_114:
    ++v68;
    ++v67;
    v99 = v68;
  }
  while ( v67 < v65 );
  if ( v64 )
    MiDecrementAndInsertStandbyPages((__int64)BugCheckParameter2a, v64, v66);
  if ( v63 )
  {
    v71 = v119;
    MiLockPageInline(v119);
    *(_QWORD *)(v71 + 24) ^= (*(_QWORD *)(v71 + 24) ^ (*(_QWORD *)(v71 + 24) - v63)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v71 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_128;
  }
LABEL_127:
  __writecr8(2uLL);
LABEL_128:
  v73 = v120;
  v74 = 0LL;
  v75 = v108;
  if ( !v104 )
    v75 = 0LL;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v120 + 72));
  if ( v75 )
  {
    v78 = PrototypePteDirect;
    while ( 1 )
    {
      v79 = MiRemoveViewsFromSection((__int64)v75, *((unsigned int *)v75 + 11), 2);
      v80 = v75[1];
      v74 += v79;
      if ( v78 >= v80 && v78 < v80 + 8LL * *((unsigned int *)v75 + 11) )
        break;
      v75 = (__int64 *)v75[2];
      if ( !v75 )
        KeBugCheckEx(0x1Au, 0x783uLL, (ULONG_PTR)BugCheckParameter2a, BugCheckParameter3, BugCheckParameter4);
    }
  }
  v81 = v98;
  --*(_QWORD *)(v73 + 40);
  --*(_DWORD *)(v73 + 88);
  MiCheckControlArea(v73, v81, v76, v77);
  if ( v74 )
    MiReturnSubsectionCharges(v74);
  LinkedListPte = MiMakeLinkedListPte(v102 & 0xFFFFF);
  v83 = v122 + 16;
  v105 = LinkedListPte;
  *((_QWORD *)v122 + 2) = LinkedListPte;
  if ( (unsigned int)MiPteInShadowRange(v83, v84) )
    MiWritePteShadow(v86, v87);
  *(_QWORD *)(v88 + 8) = 0LL;
  if ( (unsigned int)MiPteInShadowRange(v88 + 8, v85) )
    MiWritePteShadow(v89, 0LL);
  if ( v101 )
    v91 = 2LL;
  else
    v91 = 0LL;
  updated = MiUpdateLinkedListInPte(v90, v91);
  v105 = updated;
  *(_QWORD *)(v93 + 24) = updated;
  if ( (unsigned int)MiPteInShadowRange(v93 + 24, updated) )
    MiWritePteShadow(v95, v94);
  if ( (v107 & 2) == 0 )
    MiReleaseSystemCacheView(v96, v94);
}
