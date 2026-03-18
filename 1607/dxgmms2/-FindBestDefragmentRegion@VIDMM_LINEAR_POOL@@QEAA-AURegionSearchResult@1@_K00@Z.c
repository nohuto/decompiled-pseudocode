/*
 * XREFs of ?FindBestDefragmentRegion@VIDMM_LINEAR_POOL@@QEAA?AURegionSearchResult@1@_K00@Z @ 0x1C009F188
 * Callers:
 *     ?MoveResourcesForAllocationPlacement@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_ALLOC@@_K1W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00995F4 (-MoveResourcesForAllocationPlacement@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_ALLOC@@_K1W4VIDMM_DEFRAGMENT_.c)
 * Callees:
 *     memset @ 0x1C0014E40 (memset.c)
 */

_QWORD *__fastcall VIDMM_LINEAR_POOL::FindBestDefragmentRegion(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  _QWORD *v5; // rdi
  _QWORD *v7; // r12
  _QWORD *v8; // rbp
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r11
  char v11; // r14
  _QWORD *v12; // rsi
  _QWORD *v13; // rdx
  unsigned __int64 v14; // r13
  _QWORD *v15; // rcx
  _QWORD *v16; // r15
  unsigned __int64 v17; // rdi
  __int64 v18; // rbx
  unsigned __int64 v19; // r8

  v5 = a2;
  memset(a2, 0, 0x20uLL);
  v7 = (_QWORD *)(a1 + 72);
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = (_QWORD *)*v7;
  v16 = (_QWORD *)*v7;
  if ( (_QWORD *)*v7 != v7 )
  {
    v17 = -1LL;
    do
    {
      v18 = *(v15 - 4);
      v19 = *(v15 - 5);
      if ( v19 + v18 > a3 )
      {
        if ( v19 >= a4 )
          break;
        if ( *((_BYTE *)v15 + 16) == 2 )
        {
          if ( !v11 )
          {
            v16 = (_QWORD *)*v15;
            v11 = 1;
          }
          if ( v16 == v7 )
          {
            if ( v9 < a5 )
              break;
          }
          else
          {
            while ( v9 < a5 )
            {
              v8 = v16 - 5;
              if ( *((_BYTE *)v16 + 16) == 2 )
                v9 += v8[1];
              else
                v10 += v8[1];
            }
          }
          if ( v10 < v17 )
          {
            v12 = v15 - 5;
            v13 = v8;
            v14 = v9;
            v17 = v10;
          }
          v9 -= v18;
        }
        else if ( v11 )
        {
          v10 -= v18;
        }
        v15 = (_QWORD *)*v15;
      }
    }
    while ( v15 != v7 );
    v5 = a2;
    if ( v12 && v13 )
    {
      *a2 = *v12;
      a2[1] = *v13 + v13[1];
      a2[2] = v14;
      *((_BYTE *)a2 + 24) = 1;
    }
  }
  return v5;
}
