/*
 * XREFs of MiReturnSystemVa @ 0x1400BE760
 * Callers:
 *     MiReleaseSystemCacheView @ 0x140017EF4 (MiReleaseSystemCacheView.c)
 *     MiFreePagedPoolPages @ 0x14004B720 (MiFreePagedPoolPages.c)
 *     MiExpandPagedPool @ 0x1400A1294 (MiExpandPagedPool.c)
 *     MiExpandSystemCache @ 0x1400A1428 (MiExpandSystemCache.c)
 *     MiExpandPtes @ 0x1400A1590 (MiExpandPtes.c)
 *     MiReturnSystemPtes @ 0x1400BE660 (MiReturnSystemPtes.c)
 *     MiExpandNonPagedPool @ 0x1400FF5A4 (MiExpandNonPagedPool.c)
 *     MiReturnNonPagedPoolVa @ 0x1401013F0 (MiReturnNonPagedPoolVa.c)
 *     MiReleaseLargePteMappings @ 0x1401264F4 (MiReleaseLargePteMappings.c)
 *     MiMapWithLargePages @ 0x14012E7FC (MiMapWithLargePages.c)
 *     MiDeleteBootRange @ 0x140139274 (MiDeleteBootRange.c)
 *     MiGetLargePageWorkMapping @ 0x14013B330 (MiGetLargePageWorkMapping.c)
 *     MiDeleteZeroThreadContext @ 0x14013F75C (MiDeleteZeroThreadContext.c)
 *     MiExpandSpecialPool @ 0x1401EB444 (MiExpandSpecialPool.c)
 *     MiRemoveSpecialPoolRange @ 0x1401EB748 (MiRemoveSpecialPoolRange.c)
 *     MiUnmapLargePages @ 0x1401F5770 (MiUnmapLargePages.c)
 *     MiScrubNodeLargePageList @ 0x1401FBAD4 (MiScrubNodeLargePageList.c)
 *     MiReserveDriverPtes @ 0x1404B2B08 (MiReserveDriverPtes.c)
 *     MiReleaseDriverPtes @ 0x140544E78 (MiReleaseDriverPtes.c)
 *     MiReloadBootLoadedDrivers @ 0x1407A57F0 (MiReloadBootLoadedDrivers.c)
 *     MiMapBBTMemory @ 0x1407A6948 (MiMapBBTMemory.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlClearBitsEx @ 0x1400137E8 (RtlClearBitsEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     MiReleaseSessionVa @ 0x1400AC378 (MiReleaseSessionVa.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiFreeUnmappedPageTables @ 0x1400E1870 (MiFreeUnmappedPageTables.c)
 *     MiNonPagedPoolToNode @ 0x140101AE0 (MiNonPagedPoolToNode.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiReturnSystemVa(unsigned __int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  int v4; // esi
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdi
  ULONG_PTR v7; // r8
  ULONG_PTR v8; // r12
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rdi
  int v12; // eax
  _QWORD *v13; // r14
  __int64 v14; // rsi
  unsigned __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // r14
  unsigned __int8 v18; // al
  __int64 v19; // rdx
  unsigned __int8 v20; // r8
  char v21; // al
  __int64 v22; // rdx
  KIRQL i; // r10
  __int64 v24; // rcx
  __int64 v25; // r9
  __int64 v26; // rcx
  signed __int64 v27; // rdi
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  __int64 *p_Region; // rdi
  __int64 *v31; // r13
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // r15
  unsigned __int64 v34; // r11
  unsigned __int8 v35; // al
  __int64 v36; // rcx
  _QWORD *v37; // r9
  _QWORD *v38; // r10
  bool j; // zf
  __int64 v40; // [rsp+30h] [rbp-59h]
  __int64 v41; // [rsp+38h] [rbp-51h] BYREF
  __int64 v42; // [rsp+40h] [rbp-49h] BYREF
  __int64 v43; // [rsp+48h] [rbp-41h]
  __int64 v44; // [rsp+50h] [rbp-39h]
  signed __int64 v45; // [rsp+58h] [rbp-31h]
  ULONG_PTR v46; // [rsp+60h] [rbp-29h]
  _QWORD v47[2]; // [rsp+70h] [rbp-19h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-9h] BYREF
  int v49; // [rsp+F0h] [rbp+67h]
  ULONG_PTR BugCheckParameter2; // [rsp+F8h] [rbp+6Fh]

  v43 = 0LL;
  v42 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v4 = a3;
  v5 = (((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFF001LL) & 0xFFFFFFFFFFFFF000uLL;
  v6 = (((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0xFFFFFFFFFFFFF000uLL;
  if ( v5 >= v6 )
    return;
  v40 = 0LL;
  v7 = (__int64)(v5 << 25) >> 16;
  v8 = ((__int64)(v6 << 25) >> 16) - v7;
  v46 = v8;
  BugCheckParameter2 = v7;
  v9 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = v9;
  v11 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = 0;
  v13 = (_QWORD *)v9;
  if ( v4 == 1 )
    v12 = 2;
  v49 = v12;
  if ( !a4 )
    goto LABEL_24;
  MiInsertTbFlushEntry(a4, (__int64)(v9 << 25) >> 16, (unsigned int)(v8 >> 21));
  if ( v9 >= v11 )
    goto LABEL_15;
  v14 = 0LL;
  v15 = v9;
  do
  {
    v16 = MI_READ_PTE_LOCK_FREE(v15);
    v41 = v16;
    if ( (v16 & 1) != 0 && (v16 & 0x80u) == 0LL )
    {
      v17 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v41) - 0x58000000000LL;
      v18 = MiLockPageInline(v17);
      v19 = *(_QWORD *)(v17 + 24);
      v20 = v18;
      if ( (v19 & 0x3FFFFFFFFFFFFFFFLL) != 1 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v18);
        continue;
      }
      *(_QWORD *)v17 = v14;
      v14 = v17;
      v21 = *(_BYTE *)(v17 + 34) & 0xFD;
      *(_QWORD *)(v17 + 24) = v19 | 0x4000000000000000LL;
      *(_BYTE *)(v17 + 34) = v21 | 5;
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v20);
    }
    v15 += 8LL;
    v10 += 8LL;
  }
  while ( v10 < v11 );
  v8 = v46;
  v40 = v14;
  v13 = (_QWORD *)v9;
  v4 = a3;
LABEL_15:
  for ( i = ExAcquireSpinLockExclusive(&dword_140326D78); v9 < v11; v9 += 8LL )
  {
    *(_QWORD *)v9 = 0LL;
    if ( (unsigned int)MiPteInShadowRange(v9, v22) )
      MiWritePteShadow(v24, 0LL);
    if ( v25 == 2 )
    {
      *v13 = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v13, v22) )
        MiWritePteShadow(v26, 0LL);
      ++v13;
    }
  }
  ExReleaseSpinLockExclusive(&dword_140326D78, i);
  MiFlushTbList(a4);
  v7 = BugCheckParameter2;
LABEL_24:
  if ( v4 == 1 )
  {
    MiReleaseSessionVa(v7, v8 >> 21);
    goto LABEL_26;
  }
  if ( v4 != 3 )
  {
    switch ( v4 )
    {
      case 8:
        p_Region = &qword_140326CA0;
        break;
      case 5:
        p_Region = (__int64 *)&qword_1403269F0[26 * (unsigned int)MiNonPagedPoolToNode(v7) + 11].Region;
        break;
      case 6:
        p_Region = (__int64 *)&unk_140326C00;
        break;
      case 9:
      case 15:
        p_Region = &qword_140326B10;
        break;
      case 12:
        p_Region = &qword_140326B60;
        break;
      default:
        p_Region = (__int64 *)&unk_140326BB0;
        if ( v4 != 11 )
          p_Region = &qword_140326C50;
        break;
    }
    v31 = p_Region;
    v32 = (BugCheckParameter2 - p_Region[4]) >> 21;
    v33 = v8 >> 21;
    if ( v4 == 15 )
    {
      v31 = v47;
      v47[1] = p_Region[1];
      v47[0] = p_Region[2];
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)p_Region + 8, &LockHandle);
    v34 = v32 + v33 - 1;
    if ( v34 >= *v31 )
      goto LABEL_71;
    if ( v33 <= 1 )
    {
      if ( v33 == 1 )
      {
        v35 = _bittest64((const signed __int64 *)v31[1], v32);
        goto LABEL_59;
      }
      goto LABEL_71;
    }
    v36 = v31[1];
    v37 = (_QWORD *)(v36 + 8 * (v32 >> 6));
    v38 = (_QWORD *)(v36 + 8 * (v34 >> 6));
    if ( v37 == v38 )
    {
      if ( (*v37 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v33) << v32)) != 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v33) << v32 )
        goto LABEL_71;
    }
    else
    {
      for ( j = (*v37 & (-1LL << v32)) == -1LL << v32; ; j = *v37 == -1LL )
      {
        if ( !j )
          goto LABEL_71;
        if ( ++v37 == v38 )
          break;
      }
      if ( (*v37 & (0xFFFFFFFFFFFFFFFFuLL >> -(char)(v32 + v33))) != 0xFFFFFFFFFFFFFFFFuLL >> -(char)(v32 + v33) )
      {
        v35 = 0;
LABEL_59:
        if ( !v35 )
LABEL_71:
          KeBugCheckEx(0x1Au, 0x2104uLL, BugCheckParameter2, v8, v4);
      }
    }
    RtlClearBitsEx((__int64)v31, v32, v8 >> 21);
    if ( v4 == 15 )
    {
      v4 = 9;
      if ( v32 < p_Region[6] )
        p_Region[6] = v32;
    }
    else if ( v32 < p_Region[3] )
    {
      p_Region[3] = v32;
    }
    _InterlockedExchangeAdd64(&MiState[v4 + 846], -(__int64)v33);
    if ( v4 == 8 )
      qword_140326B08 += v8;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
LABEL_26:
  MiFreeUnmappedPageTables(v40, &v42);
  v27 = v45;
  if ( v45 && qword_140325228 )
  {
    MiReturnCommit((__int64)MiSystemPartition, v45 - v43);
    if ( v49 == 2 )
    {
      v28 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
      v29 = -v45;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 40), -v45);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 48), v29);
    }
    else
    {
      _InterlockedExchangeAdd64(&qword_140327930, -v27);
    }
    MiReturnResidentAvailable(v45);
  }
}
