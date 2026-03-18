/*
 * XREFs of PnprRecopyMappingReserve @ 0x1401FCD44
 * Callers:
 *     PnprRecopyMirrorPages @ 0x1401FCDFC (PnprRecopyMirrorPages.c)
 * Callees:
 *     PnprRecopyAddress @ 0x1401FCCF4 (PnprRecopyAddress.c)
 *     MmContainingPageForReservedMapping @ 0x140214D0C (MmContainingPageForReservedMapping.c)
 *     PnprMarkOrMirrorPages @ 0x140400594 (PnprMarkOrMirrorPages.c)
 */

__int64 __fastcall PnprRecopyMappingReserve(__int64 *a1)
{
  __int64 v1; // rbp
  unsigned int v3; // edi
  __int64 v4; // rax
  __int64 v5; // r8
  int v6; // edx
  SIZE_T v8; // rcx
  int v9; // eax
  int v10; // eax

  v1 = 0LL;
  v3 = 0;
  while ( 1 )
  {
    v4 = MmContainingPageForReservedMapping(a1[1] + v3);
    if ( v4 != v1 )
    {
      v1 = v4;
      LOBYTE(v5) = 1;
      v6 = PnprMarkOrMirrorPages(v4 << 12, 4096LL, v5);
      if ( v6 < 0 )
        break;
    }
    v3 += 4096;
    if ( v3 >= 0x10000 )
    {
      PnprRecopyAddress(*a1, 0x30u);
      return 0LL;
    }
  }
  v8 = PnprContext;
  v9 = *(_DWORD *)(PnprContext + 10744);
  if ( !v9 )
    v9 = 5712;
  *(_DWORD *)(PnprContext + 10744) = v9;
  v10 = *(_DWORD *)(v8 + 10748);
  if ( !v10 )
    v10 = 1;
  *(_DWORD *)(v8 + 10748) = v10;
  return (unsigned int)v6;
}
