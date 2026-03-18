/*
 * XREFs of ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005A23C
 * Callers:
 *     ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C005AE90 (-MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_K@Z @ 0x1C005D458 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_K@Z.c)
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C005D70C (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ @ 0x1C005D7CC (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ.c)
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C005DA7C (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct VIDMM_RECYCLE_RANGE *a2)
{
  VIDMM_RECYCLE_HEAP_MGR *v3; // rax
  VIDMM_RECYCLE_HEAP_MGR **v4; // r8

  *((_QWORD *)a2 + 12) = *((_QWORD *)this + 85) + (unsigned int)dword_1C002F328;
  v3 = (struct VIDMM_RECYCLE_RANGE *)((char *)a2 + 104);
  v4 = (VIDMM_RECYCLE_HEAP_MGR **)*((_QWORD *)this + 84);
  *((_QWORD *)a2 + 13) = (char *)this + 664;
  *((_QWORD *)a2 + 14) = v4;
  if ( *v4 != (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 664) )
    __fastfail(3u);
  *v4 = v3;
  *((_QWORD *)this + 84) = v3;
  if ( !_InterlockedExchange((volatile __int32 *)this + 160, 1) && !*((_DWORD *)this + 172) )
    KeSetTimer((PKTIMER)((char *)this + 480), (LARGE_INTEGER)-2000000LL, (PKDPC)((char *)this + 544));
  _InterlockedExchangeAdd64(
    &VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit,
    *((_QWORD *)a2 + 5) - *((_QWORD *)a2 + 4));
}
