/*
 * XREFs of MiGetNodeStandbyPageCount @ 0x14022D998
 * Callers:
 *     MiGetFreeOrZeroPage @ 0x1400BD9E0 (MiGetFreeOrZeroPage.c)
 *     MiFreeZeroPagesNeeded @ 0x14022D920 (MiFreeZeroPagesNeeded.c)
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
  v4 = *(_QWORD *)(a1 + 40);
  v5 = 8LL;
  v6 = (_QWORD *)(192LL * a3 + 1336LL * a2 + v4 + 400);
  do
  {
    v3 += *v6;
    v6 += 3;
    --v5;
  }
  while ( v5 );
  return v3;
}
