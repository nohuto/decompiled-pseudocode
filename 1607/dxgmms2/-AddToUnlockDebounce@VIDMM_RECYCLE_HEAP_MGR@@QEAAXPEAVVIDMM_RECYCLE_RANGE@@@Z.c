/*
 * XREFs of ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005FA6C
 * Callers:
 *     ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C005DE78 (-MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z.c)
 *     ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C005EC14 (-Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C005F590 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_K@Z @ 0x1C0061940 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_K@Z.c)
 *     ?Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C0061E64 (-Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C0061F78 (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z @ 0x1C0061FFC (-Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z.c)
 *     ?Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4HPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006805C (-Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6A.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct VIDMM_RECYCLE_RANGE *a2,
        __int64 a3,
        __int64 a4)
{
  VIDMM_RECYCLE_HEAP_MGR **v5; // r8
  VIDMM_RECYCLE_HEAP_MGR *v6; // rdx
  unsigned __int64 v7; // rcx
  _QWORD *v8; // rax

  *((_QWORD *)a2 + 12) = *((_QWORD *)this + 142) + (unsigned int)dword_1C0035334;
  v5 = (VIDMM_RECYCLE_HEAP_MGR **)*((_QWORD *)this + 139);
  v6 = (struct VIDMM_RECYCLE_RANGE *)((char *)a2 + 104);
  if ( *v5 != (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1104) )
    __fastfail(3u);
  *(_QWORD *)v6 = (char *)this + 1104;
  *((_QWORD *)v6 + 1) = v5;
  *v5 = v6;
  *((_QWORD *)this + 139) = v6;
  if ( !_InterlockedExchange((volatile __int32 *)this + 274, 1) && !*((_DWORD *)this + 286) )
    KeSetTimer((PKTIMER)((char *)this + 936), (LARGE_INTEGER)-2000000LL, (PKDPC)((char *)this + 1000));
  v7 = *((_QWORD *)a2 + 5) - *((_QWORD *)a2 + 4);
  if ( (__int64)(v7 + _InterlockedExchangeAdd64(&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock, v7)) < 0 )
  {
    if ( g_IsInternalRelease )
    {
      v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6, v5, a4);
      v8[5] = 0LL;
      v8[6] = 0LL;
      v8[7] = 0LL;
      v8[3] = 270LL;
      v8[4] = 9LL;
      WdLogEvent5_WdCriticalError(v8);
    }
  }
}
