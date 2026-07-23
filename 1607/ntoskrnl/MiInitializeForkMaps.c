/*
 * XREFs of MiInitializeForkMaps @ 0x14010A2F4
 * Callers:
 *     MiCloneVads @ 0x1400BA3F0 (MiCloneVads.c)
 * Callees:
 *     MiMapSinglePage @ 0x140107F04 (MiMapSinglePage.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

_BOOL8 __fastcall MiInitializeForkMaps(__int64 a1, _QWORD *a2)
{
  ULONG_PTR v4; // rax

  memset(a2, 0, 0x48uLL);
  a2[1] = -1LL;
  a2[2] = -1LL;
  a2[3] = -1LL;
  *a2 = a1;
  v4 = MiMapSinglePage(0LL, *(_QWORD *)(a1 + 864), 0x40000020uLL);
  a2[7] = v4;
  return v4 != 0;
}
