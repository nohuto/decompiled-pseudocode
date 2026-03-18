/*
 * XREFs of ?_GetVotPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_VOT_PREFERENCE@1@AEBVDXGADAPTER@@W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@E@Z @ 0x1C01AE780
 * Callers:
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00B6EE4 (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGET@@PEBV3@@Z @ 0x1C01AE818 (-_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_GetVotPreference(__int64 a1, int a2, int a3, char a4)
{
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx

  if ( a2 <= 4 )
  {
    if ( a2 == 4 )
    {
      if ( *(_DWORD *)(a1 + 276) != 4098 || a3 != 3 )
        return 6LL;
    }
    else
    {
      if ( a2 == 0x80000000 )
        return 1LL;
      if ( a2 )
      {
        switch ( a2 )
        {
          case 1:
            return 10LL;
          case 2:
            return 11LL;
          case 3:
            return 9LL;
        }
        return 13LL;
      }
    }
    return 7LL;
  }
  v5 = a2 - 5;
  if ( !v5 )
    return 5LL;
  v6 = v5 - 5;
  if ( !v6 )
    return 4LL;
  v7 = v6 - 1;
  if ( !v7 )
    return 2LL;
  v8 = v7 - 3;
  if ( !v8 )
    return 12LL;
  if ( v8 != 1 )
    return 13LL;
  return a4 != 0 ? 8 : 3;
}
