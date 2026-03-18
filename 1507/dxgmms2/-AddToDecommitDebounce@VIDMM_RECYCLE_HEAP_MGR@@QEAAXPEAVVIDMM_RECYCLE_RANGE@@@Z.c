/*
 * XREFs of ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0064F14
 * Callers:
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ @ 0x1C00664D8 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ.c)
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C006666C (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C0066818 (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C0068270 (-MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_K@Z @ 0x1C006A234 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct VIDMM_RECYCLE_RANGE *a2)
{
  VIDMM_RECYCLE_HEAP_MGR *v3; // rax
  VIDMM_RECYCLE_HEAP_MGR **v4; // r8

  *((_QWORD *)a2 + 12) = *((_QWORD *)this + 82) + (unsigned int)dword_1C0027300;
  v3 = (struct VIDMM_RECYCLE_RANGE *)((char *)a2 + 104);
  v4 = (VIDMM_RECYCLE_HEAP_MGR **)*((_QWORD *)this + 81);
  *((_QWORD *)a2 + 13) = (char *)this + 640;
  *((_QWORD *)a2 + 14) = v4;
  if ( *v4 != (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 640) )
    __fastfail(3u);
  *v4 = v3;
  *((_QWORD *)this + 81) = v3;
  if ( !_InterlockedExchange((volatile __int32 *)this + 154, 1) && !*((_DWORD *)this + 166) )
    KeSetTimer((PKTIMER)((char *)this + 456), (LARGE_INTEGER)-2000000LL, (PKDPC)((char *)this + 520));
  _InterlockedExchangeAdd64(
    &VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit,
    *((_QWORD *)a2 + 5) - *((_QWORD *)a2 + 4));
}
