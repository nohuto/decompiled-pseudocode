/*
 * XREFs of PnpiCmResourceToBiosMemory32 @ 0x1C007EBDC
 * Callers:
 *     PnpCmResourcesToBiosResources @ 0x1C0072DA8 (PnpCmResourcesToBiosResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpiCmResourceToBiosMemory32(__int64 a1, __int64 a2)
{
  int v3; // eax
  unsigned int v4; // r9d
  __int64 i; // rcx
  int v6; // eax

  *(_BYTE *)(a1 + 3) = 0;
  v3 = 0;
  *(_QWORD *)(a1 + 4) = 0LL;
  *(_QWORD *)(a1 + 12) = 0LL;
  v4 = *(_DWORD *)(a2 + 16);
  if ( v4 )
  {
    for ( i = a2 + 20; *(_BYTE *)i != 3; i += 20LL )
    {
      if ( ++v3 >= v4 )
        return 0LL;
    }
    *(_DWORD *)(a1 + 16) = *(_DWORD *)(i + 12);
    v6 = *(_DWORD *)(i + 4);
    *(_DWORD *)(a1 + 8) = v6;
    *(_DWORD *)(a1 + 4) = v6;
    *(_BYTE *)(a1 + 3) = (*(_BYTE *)(i + 2) & 1) == 0;
    *(_BYTE *)i = 0;
  }
  return 0LL;
}
