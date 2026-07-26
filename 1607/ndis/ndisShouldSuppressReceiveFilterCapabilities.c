/*
 * XREFs of ndisShouldSuppressReceiveFilterCapabilities @ 0x1C00B2A64
 * Callers:
 *     ndisMSetReceiveFilterAttributes @ 0x1C00B2864 (ndisMSetReceiveFilterAttributes.c)
 * Callees:
 *     WPP_SF_qdDd @ 0x1C005D318 (WPP_SF_qdDd.c)
 */

bool __fastcall ndisShouldSuppressReceiveFilterCapabilities(__int64 a1, __int64 a2)
{
  bool v2; // bl
  unsigned int v4; // [rsp+20h] [rbp-18h]

  v2 = 0;
  if ( (*(_DWORD *)(a1 + 12) & 1) != 0 )
    v2 = (*(_BYTE *)(a1 + 20) & 8) == 0;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
  {
    v4 = *(_DWORD *)(a1 + 20);
    WPP_SF_qdDd(v4, a2, a1, *(unsigned __int8 *)(a1 + 1), v4, v2);
  }
  return v2;
}
