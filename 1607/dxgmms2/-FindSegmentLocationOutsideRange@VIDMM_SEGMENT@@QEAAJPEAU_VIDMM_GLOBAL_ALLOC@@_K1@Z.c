/*
 * XREFs of ?FindSegmentLocationOutsideRange@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C00989FC
 * Callers:
 *     ?ReserveOutsideRangeIfDisplayableCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C0099E50 (-ReserveOutsideRangeIfDisplayableCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     ?ReserveLocationOutsideRange@VIDMM_LINEAR_POOL@@QEAAJ_K00PEAPEAXPEAT_LARGE_INTEGER@@@Z @ 0x1C009F7AC (-ReserveLocationOutsideRange@VIDMM_LINEAR_POOL@@QEAAJ_K00PEAPEAXPEAT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::FindSegmentLocationOutsideRange(
        VIDMM_LINEAR_POOL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax

  v6 = VIDMM_LINEAR_POOL::ReserveLocationOutsideRange(
         this[18],
         a3,
         a4,
         *((_QWORD *)a2 + 2),
         (void **)a2 + 26,
         (union _LARGE_INTEGER *)a2 + 27);
  v8 = v6;
  if ( v6 >= 0 )
  {
    *((_QWORD *)a2 + 28) = this;
    return 0LL;
  }
  else
  {
    v9 = WdLogNewEntry5_WdWarning(v7);
    *(_QWORD *)(v9 + 24) = v8;
    WdLogEvent5_WdWarning(v9);
    return (unsigned int)v8;
  }
}
