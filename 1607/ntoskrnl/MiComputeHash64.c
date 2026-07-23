/*
 * XREFs of MiComputeHash64 @ 0x1400B0EC4
 * Callers:
 *     MiCombineWorkingSet @ 0x1401F7EFC (MiCombineWorkingSet.c)
 *     MiPerformCombineScan @ 0x1401F9F98 (MiPerformCombineScan.c)
 *     MiSharePages @ 0x1401FA710 (MiSharePages.c)
 *     MiMapDummyPages @ 0x14078EE84 (MiMapDummyPages.c)
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiComputeHash64(__int64 a1)
{
  unsigned __int64 v2; // r8
  unsigned int i; // r9d
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r8

  v2 = 0xDE5DF13F878608F5uLL;
  for ( i = 510; i != -2; i -= 8 )
  {
    v4 = i - 6;
    v5 = i - 5;
    v6 = __ROR8__(
           *(_QWORD *)(a1 + 8LL * (i - 4))
         + __ROR8__(
             *(_QWORD *)(a1 + 8LL * (i - 3)) ^ __ROR8__(
                                                 *(_QWORD *)(a1 + 8LL * (i - 2))
                                               + __ROR8__(
                                                   *(_QWORD *)(a1 + 8LL * (i - 1))
                                                 + __ROR8__(
                                                     *(_QWORD *)(a1 + 8LL * i)
                                                   + __ROR8__(*(_QWORD *)(a1 + 8LL * (i + 1)) + __ROR8__(v2, 2), 3),
                                                     5),
                                                   7),
                                                 11),
             13),
           17);
    v2 = *(_QWORD *)(a1 + 8 * v4) + __ROR8__(*(_QWORD *)(a1 + 8 * v5) + v6, 19);
  }
  return v2;
}
