/*
 * XREFs of VidSchEscape @ 0x1C0078010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchEscape(__int64 a1, _DWORD *a2)
{
  unsigned int v3; // ecx
  int v4; // eax
  int v5; // eax
  unsigned int v6; // eax

  v3 = -1073741811;
  if ( !*a2 )
  {
    v4 = ((a2[1] != 0) ^ (unsigned __int8)*(_DWORD *)(a1 + 2144)) & 1;
    goto LABEL_15;
  }
  if ( *a2 != 2 )
  {
    if ( *a2 != 4 )
    {
      if ( *a2 == 5 )
      {
        g_TdrConfig[6] = a2[1];
        g_TdrConfig[7] = a2[2];
        return 0;
      }
      return v3;
    }
    v4 = (*(_DWORD *)(a1 + 2144) ^ ((a2[1] != 0) << 15)) & 0x8000;
LABEL_15:
    *(_DWORD *)(a1 + 2144) ^= v4;
    return 0;
  }
  v5 = a2[1];
  switch ( v5 )
  {
    case 4:
      _InterlockedAnd((volatile signed __int32 *)(a1 + 36), 0xFFFFFFEF);
      return 0;
    case 5:
      _InterlockedAnd((volatile signed __int32 *)(a1 + 36), 0xFFFFFFF8);
      return 0;
    case 8:
      v6 = a2[2];
      if ( v6 < *(_DWORD *)(a1 + 56) )
      {
        *(_QWORD *)(a1 + 360) |= 1LL << v6;
        return 0;
      }
      break;
  }
  return v3;
}
