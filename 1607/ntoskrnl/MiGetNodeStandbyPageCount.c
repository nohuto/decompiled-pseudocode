/*
 * XREFs of MiGetNodeStandbyPageCount @ 0x1401F3048
 * Callers:
 *     MiGetFreeOrZeroPage @ 0x14003D800 (MiGetFreeOrZeroPage.c)
 *     MiRebalanceZeroFreeLists @ 0x1401F37C4 (MiRebalanceZeroFreeLists.c)
 *     MiRebuildLargePage @ 0x1401FD6F8 (MiRebuildLargePage.c)
 *     MiRebuildLargePages @ 0x1401FD95C (MiRebuildLargePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetNodeStandbyPageCount(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r10
  __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rax

  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 48);
  v5 = 8LL;
  v6 = (_QWORD *)(192LL * a3 + 2184LL * a2 + v4 + 1240);
  do
  {
    v3 += *v6;
    v6 += 3;
    --v5;
  }
  while ( v5 );
  return v3;
}
