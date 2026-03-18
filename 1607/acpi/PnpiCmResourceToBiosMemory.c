/*
 * XREFs of PnpiCmResourceToBiosMemory @ 0x1C00A05CC
 * Callers:
 *     PnpCmResourcesToBiosResources @ 0x1C00841D8 (PnpCmResourcesToBiosResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpiCmResourceToBiosMemory(__int64 a1, __int64 a2)
{
  int v4; // edx
  unsigned int v5; // r9d
  __int64 i; // rcx
  int v7; // eax

  *(_BYTE *)(a1 + 3) = 0;
  *(_QWORD *)(a1 + 4) = 0LL;
  v4 = 0;
  v5 = *(_DWORD *)(a2 + 16);
  if ( v5 )
  {
    for ( i = a2 + 20; *(_BYTE *)i != 3 || (*(_BYTE *)(i + 2) & 0x10) == 0; i += 20LL )
    {
      if ( ++v4 >= v5 )
        return 0LL;
    }
    v7 = *(_DWORD *)(i + 4) >> 8;
    *(_WORD *)(a1 + 6) = v7;
    *(_WORD *)(a1 + 4) = v7;
    *(_WORD *)(a1 + 10) = *(_DWORD *)(i + 12) >> 8;
    *(_BYTE *)(a1 + 3) = (*(_BYTE *)(i + 2) & 1) == 0;
    *(_BYTE *)i = 0;
  }
  return 0LL;
}
