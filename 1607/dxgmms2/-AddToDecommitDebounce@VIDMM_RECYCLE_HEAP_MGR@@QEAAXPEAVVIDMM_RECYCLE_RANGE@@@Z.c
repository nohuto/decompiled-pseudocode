/*
 * XREFs of ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005FB08
 * Callers:
 *     ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C005DE78 (-MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_K@Z @ 0x1C0061940 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_K@Z.c)
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C0061C04 (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ @ 0x1C0061CCC (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ.c)
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C0061F78 (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct VIDMM_RECYCLE_RANGE *a2,
        __int64 a3,
        __int64 a4)
{
  VIDMM_RECYCLE_HEAP_MGR **v5; // r8
  VIDMM_RECYCLE_HEAP_MGR *v6; // rdx
  unsigned __int64 v7; // rcx
  _QWORD *v8; // rax

  *((_QWORD *)a2 + 12) = *((_QWORD *)this + 142) + (unsigned int)dword_1C0035338;
  v5 = (VIDMM_RECYCLE_HEAP_MGR **)*((_QWORD *)this + 141);
  v6 = (struct VIDMM_RECYCLE_RANGE *)((char *)a2 + 104);
  if ( *v5 != (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1120) )
    __fastfail(3u);
  *(_QWORD *)v6 = (char *)this + 1120;
  *((_QWORD *)v6 + 1) = v5;
  *v5 = v6;
  *((_QWORD *)this + 141) = v6;
  if ( !_InterlockedExchange((volatile __int32 *)this + 274, 1) && !*((_DWORD *)this + 286) )
    KeSetTimer((PKTIMER)((char *)this + 936), (LARGE_INTEGER)-2000000LL, (PKDPC)((char *)this + 1000));
  v7 = *((_QWORD *)a2 + 5) - *((_QWORD *)a2 + 4);
  if ( (__int64)(v7 + _InterlockedExchangeAdd64(&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit, v7)) < 0 )
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
