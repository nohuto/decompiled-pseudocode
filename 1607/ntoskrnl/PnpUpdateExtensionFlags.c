/*
 * XREFs of PnpUpdateExtensionFlags @ 0x1400859FC
 * Callers:
 *     PnpIsChainDereferenced @ 0x1400858E0 (PnpIsChainDereferenced.c)
 * Callees:
 *     <none>
 */

void __fastcall PnpUpdateExtensionFlags(__int64 *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 i; // rdx
  __int64 v5; // rax

  for ( i = *a1; i; i = *(_QWORD *)(i + 24) )
  {
    v5 = *(_QWORD *)(i + 312);
    if ( a4 )
      *(_DWORD *)(v5 + 32) |= 4u;
    else
      *(_DWORD *)(v5 + 32) &= ~4u;
  }
}
