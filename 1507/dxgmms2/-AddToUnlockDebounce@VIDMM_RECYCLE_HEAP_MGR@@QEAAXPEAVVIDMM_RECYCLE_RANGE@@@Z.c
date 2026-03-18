/*
 * XREFs of ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0064FA4
 * Callers:
 *     ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C0068270 (-MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C00689C8 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ?Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4HPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0069710 (-Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6A.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_K@Z @ 0x1C006A234 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_K@Z.c)
 *     ?Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C006A744 (-Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?UpdateUnlockAgingOnTransition@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C006AF54 (-UpdateUnlockAgingOnTransition@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct VIDMM_RECYCLE_RANGE *a2)
{
  VIDMM_RECYCLE_HEAP_MGR *v3; // rax
  VIDMM_RECYCLE_HEAP_MGR **v4; // r8

  *((_QWORD *)a2 + 12) = *((_QWORD *)this + 82) + (unsigned int)dword_1C00272FC;
  v3 = (struct VIDMM_RECYCLE_RANGE *)((char *)a2 + 104);
  v4 = (VIDMM_RECYCLE_HEAP_MGR **)*((_QWORD *)this + 79);
  *((_QWORD *)a2 + 13) = (char *)this + 624;
  *((_QWORD *)a2 + 14) = v4;
  if ( *v4 != (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 624) )
    __fastfail(3u);
  *v4 = v3;
  *((_QWORD *)this + 79) = v3;
  if ( !_InterlockedExchange((volatile __int32 *)this + 154, 1) && !*((_DWORD *)this + 166) )
    KeSetTimer((PKTIMER)((char *)this + 456), (LARGE_INTEGER)-2000000LL, (PKDPC)((char *)this + 520));
  _InterlockedExchangeAdd64(
    &VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock,
    *((_QWORD *)a2 + 5) - *((_QWORD *)a2 + 4));
}
