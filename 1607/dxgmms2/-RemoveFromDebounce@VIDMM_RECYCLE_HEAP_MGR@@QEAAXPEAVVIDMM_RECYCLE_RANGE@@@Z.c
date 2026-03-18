/*
 * XREFs of ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005F9EC
 * Callers:
 *     ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C005DE78 (-MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z.c)
 *     ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C005EC14 (-Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C005F590 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C00601E0 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 *     ?Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C0061EB0 (-Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@.c)
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C0061F78 (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z @ 0x1C0061FFC (-Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z.c)
 *     ?Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4HPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006805C (-Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6A.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct VIDMM_RECYCLE_RANGE *a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD *v6; // rcx
  int v7; // eax
  unsigned __int64 v8; // rcx
  signed __int64 v9; // rax
  _QWORD *v10; // rax

  v4 = (_QWORD *)((char *)a2 + 104);
  v5 = *((_QWORD *)a2 + 13);
  v6 = (_QWORD *)*((_QWORD *)a2 + 14);
  if ( *(struct VIDMM_RECYCLE_RANGE **)(v5 + 8) != (struct VIDMM_RECYCLE_RANGE *)((char *)a2 + 104)
    || (_QWORD *)*v6 != v4 )
  {
    __fastfail(3u);
  }
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  *v4 = 0LL;
  *((_QWORD *)a2 + 14) = 0LL;
  *((_QWORD *)a2 + 12) = 0LL;
  v7 = *((_DWORD *)a2 + 16);
  if ( v7 == 5 )
  {
    v8 = *((_QWORD *)a2 + 4) - *((_QWORD *)a2 + 5);
    v9 = _InterlockedExchangeAdd64(&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit, v8);
  }
  else
  {
    if ( (unsigned int)(v7 - 3) > 1 )
      return;
    v8 = *((_QWORD *)a2 + 4) - *((_QWORD *)a2 + 5);
    v9 = _InterlockedExchangeAdd64(&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock, v8);
  }
  if ( (__int64)(v8 + v9) < 0 )
  {
    if ( g_IsInternalRelease )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, a2, v5, a4);
      v10[3] = 270LL;
      v10[4] = 9LL;
      v10[5] = 0LL;
      v10[6] = 0LL;
      v10[7] = 0LL;
      WdLogEvent5_WdCriticalError(v10);
    }
  }
}
