/*
 * XREFs of PnpiCmResourceToBiosIrq @ 0x1C0073018
 * Callers:
 *     PnpCmResourcesToBiosResources @ 0x1C0072EE4 (PnpCmResourcesToBiosResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpiCmResourceToBiosIrq(__int64 a1, __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  __int64 i; // rdx

  *(_WORD *)(a1 + 1) = 0;
  v3 = 0;
  v4 = *(_DWORD *)(a2 + 16);
  if ( v4 )
  {
    for ( i = a2 + 20; *(_BYTE *)i != 2 || *(_WORD *)(i + 4) >= 0x10u; i += 20LL )
    {
      if ( ++v3 >= v4 )
        return 0LL;
    }
    *(_WORD *)(a1 + 1) = 1 << *(_BYTE *)(i + 4);
    if ( (*(_BYTE *)a1 & 7) == 3 )
    {
      *(_BYTE *)(a1 + 3) = 0;
      *(_BYTE *)(a1 + 3) = (*(_BYTE *)(i + 2) & 1) != 0 ? 1 : 8;
      if ( *(_BYTE *)(i + 1) == 3 )
        *(_BYTE *)(a1 + 3) |= 0x10u;
    }
    *(_BYTE *)i = 0;
  }
  return 0LL;
}
