/*
 * XREFs of ClientPrinterThunk @ 0x1C0147038
 * Callers:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0146F48 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 * Callees:
 *     pppUserModeCallback @ 0x1C01470CC (pppUserModeCallback.c)
 */

__int64 __fastcall ClientPrinterThunk(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ecx

  if ( ExIsResourceAcquiredExclusiveLite(gpresUser) || ExIsResourceAcquiredSharedLite(gpresUser) )
    return 0xFFFFFFFFLL;
  *(_DWORD *)(a1 + 8) = a4;
  *(_DWORD *)(a1 + 12) = 0;
  v9 = pppUserModeCallback(v8, a1, a2, a3, a4);
  v10 = -1;
  if ( v9 >= 0 )
    return 0;
  return v10;
}
