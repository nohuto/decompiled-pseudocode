/*
 * XREFs of MiInitializeForkMaps @ 0x140001E10
 * Callers:
 *     MiCloneVads @ 0x140001EE4 (MiCloneVads.c)
 * Callees:
 *     MiMapSinglePage @ 0x140003778 (MiMapSinglePage.c)
 *     memset @ 0x140195A80 (memset.c)
 */

_BOOL8 __fastcall MiInitializeForkMaps(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax

  memset(a2, 0, 0x48uLL);
  a2[1] = -1LL;
  a2[2] = -1LL;
  a2[3] = -1LL;
  *a2 = a1;
  v4 = MiMapSinglePage(0LL, *(_QWORD *)(a1 + 864), 1073741856LL);
  a2[7] = v4;
  return v4 != 0;
}
