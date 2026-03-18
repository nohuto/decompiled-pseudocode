/*
 * XREFs of VidSchGetDeviceFlipMode @ 0x1C0078470
 * Callers:
 *     <none>
 * Callees:
 *     VidSchIsVSyncAvailable @ 0x1C00788B0 (VidSchIsVSyncAvailable.c)
 */

__int64 __fastcall VidSchGetDeviceFlipMode(__int64 a1, __int64 a2, int *a3)
{
  int v3; // eax
  _DWORD *v4; // rbx
  int v5; // eax

  v3 = *(_DWORD *)(a1 + 736);
  v4 = *(_DWORD **)(a1 + 32);
  if ( v3 == 1 )
  {
    *a3 = 0;
    return (unsigned int)v4[537];
  }
  if ( v3 == 2 )
    *a3 = 1;
  v5 = *a3;
  if ( !*a3 )
    return (unsigned int)v4[537];
  if ( v5 != 1 && ((unsigned int)(v5 - 2) > 2 || (v4[536] & 8) == 0) )
    return 0LL;
  if ( (int)v4[538] >= 4 && !(unsigned __int8)VidSchIsVSyncAvailable(v4, a2) )
    return (unsigned int)v4[537];
  return (unsigned int)v4[538];
}
