/*
 * XREFs of ?ReclaimAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA_KPEAH@Z @ 0x1C0051A68
 * Callers:
 *     ?VidMmReclaimAllocation@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA_KPEAH@Z @ 0x1C0011950 (-VidMmReclaimAllocation@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::ReclaimAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct _VIDMM_MULTI_ALLOC *a3,
        unsigned __int64 *a4,
        int *a5)
{
  int v5; // r10d

  v5 = dword_1C002F3D0;
  if ( dword_1C002F3D0 == -1 )
    v5 = *((_DWORD *)this + 8) >= 0x5022u ? 2 : 0;
  if ( a5 )
    *a5 = (gVidMmGlobalFault >> 14) & 1;
  if ( !v5 )
    return 0LL;
  if ( v5 == 1 )
  {
    if ( !a2 )
    {
      a2 = (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(*((_QWORD *)a3 + 1) + 80LL)
                                       + 160LL * (*(_DWORD *)(**(_QWORD **)a3 + 76LL) & 0x3F));
      a4 = 0LL;
      return VIDMM_GLOBAL::ReclaimOneAllocation(this, a2, (__int64 **)a3, a4, a5);
    }
  }
  else if ( v5 == 2 && a2 )
  {
    return VIDMM_GLOBAL::ReclaimOneAllocation(this, a2, (__int64 **)a3, a4, a5);
  }
  return 3221225473LL;
}
