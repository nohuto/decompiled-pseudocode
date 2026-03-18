/*
 * XREFs of ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0068BDC
 * Callers:
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C0037030 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 *     ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z @ 0x1C0065BE4 (-Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z.c)
 *     ?Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C00677A0 (-Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@.c)
 *     ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C0068270 (-MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C00689C8 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ?Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4HPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0069710 (-Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6A.c)
 *     ?UpdateUnlockAgingOnTransition@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C006AF54 (-UpdateUnlockAgingOnTransition@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct VIDMM_RECYCLE_RANGE *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  _QWORD *v4; // rcx
  int v5; // eax

  v2 = (_QWORD *)((char *)a2 + 104);
  v3 = *((_QWORD *)a2 + 13);
  v4 = (_QWORD *)*((_QWORD *)a2 + 14);
  if ( *(struct VIDMM_RECYCLE_RANGE **)(v3 + 8) != (struct VIDMM_RECYCLE_RANGE *)((char *)a2 + 104)
    || (_QWORD *)*v4 != v2 )
  {
    __fastfail(3u);
  }
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  *v2 = 0LL;
  v5 = *((_DWORD *)a2 + 16);
  *((_QWORD *)a2 + 14) = 0LL;
  *((_QWORD *)a2 + 12) = 0LL;
  if ( v5 == 5 )
  {
    _InterlockedExchangeAdd64(
      &VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit,
      *((_QWORD *)a2 + 4) - *((_QWORD *)a2 + 5));
  }
  else if ( (unsigned int)(v5 - 3) <= 1 )
  {
    _InterlockedExchangeAdd64(
      &VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock,
      *((_QWORD *)a2 + 4) - *((_QWORD *)a2 + 5));
  }
}
