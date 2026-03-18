/*
 * XREFs of ?ValidateSegmentForAcquisitionOfResource@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@IW4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C003A854
 * Callers:
 *     ?AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C003A6D8 (-AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMEN.c)
 *     ?AcquireGPUResourcesFromPreferredSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@KK@Z @ 0x1C004B60C (-AcquireGPUResourcesFromPreferredSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM.c)
 * Callees:
 *     ?IsSoftGPU@DXGADAPTER@@QEBAEXZ @ 0x1C0006AE4 (-IsSoftGPU@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ValidateSegmentForAcquisitionOfResource(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        char a5)
{
  __int64 v5; // r11
  __int64 v6; // r8
  unsigned int v9; // r9d
  int v10; // r10d
  int v11; // r10d

  v5 = a3;
  v6 = a1;
  if ( a4 == 1 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 3712) + 8 * v5) + 56LL) & 0x1001) != 0 )
      return 3221225473LL;
  }
  else if ( a4 == 2 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 3712) + 8 * v5) + 56LL) & 0x1001) == 0 )
  {
    return 3221225473LL;
  }
  v9 = 0;
  if ( *(_DWORD *)(a2 + 336) )
  {
    v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 3712) + 8 * v5) + 56LL);
    if ( (v10 & 0x1001) == 0 )
    {
      if ( (*(_DWORD *)(a2 + 84) & 0x20) != 0 )
      {
        if ( (**(_DWORD **)(a2 + 472) & 4) != 0 && !DXGADAPTER::IsSoftGPU(*(DXGADAPTER **)(a1 + 24))
          || (v10 & 0x2004) == 0 )
        {
          return 3221225473LL;
        }
      }
      else if ( a4 != 1 )
      {
        return 3221225473LL;
      }
    }
  }
  if ( a5 == (_BYTE)v9 )
    v11 = *(_DWORD *)(a2 + 68);
  else
    v11 = *(_DWORD *)(a2 + 64);
  if ( !_bittest(
          &v11,
          (unsigned __int8)(v5 - *(_BYTE *)(456LL * (*(_DWORD *)(a2 + 76) & 0x3F) + *(_QWORD *)(v6 + 39992) + 4))) )
    return (unsigned int)-1073741823;
  return v9;
}
