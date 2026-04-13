/*
 * XREFs of sub_180004240 @ 0x180004240
 * Callers:
 *     unknown_libname_12 @ 0x180026B86 (unknown_libname_12.c)
 *     unknown_libname_13 @ 0x180026B92 (unknown_libname_13.c)
 *     sub_1800272C3 @ 0x1800272C3 (sub_1800272C3.c)
 *     sub_180027311 @ 0x180027311 (sub_180027311.c)
 *     sub_180027353 @ 0x180027353 (sub_180027353.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180004240(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
}
