/*
 * XREFs of MiNodeLargeFreeZeroPages @ 0x1400BEC6C
 * Callers:
 *     MiGetFreeOrZeroPage @ 0x14003D800 (MiGetFreeOrZeroPage.c)
 *     MiSignalLargePageRebuild @ 0x1400BC5CC (MiSignalLargePageRebuild.c)
 *     MiRebuildLargePages @ 0x1401FD95C (MiRebuildLargePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiNodeLargeFreeZeroPages(_QWORD *a1, unsigned int a2, int a3)
{
  __int64 v3; // r9
  __int64 *v4; // r11
  __int64 v6; // rsi
  __int64 v7; // rdi
  _QWORD *v8; // r10
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v13; // rcx

  v3 = 0LL;
  v4 = MiLargePageSizes;
  v6 = 0LL;
  v7 = 0LL;
  v8 = a1;
  v9 = 3LL;
  do
  {
    if ( a2 == 4 )
    {
      if ( a3 == 2 )
        v10 = *v8 + v8[1];
      else
        v10 = a1[v7 + a3];
    }
    else
    {
      v13 = a2 + 4 * (v6 + a3);
      v10 = a1[v13 + 102] + a1[v13 + 110];
    }
    v11 = *v4++ * v10;
    v8 += 2;
    v3 += v11;
    v7 += 2LL;
    v6 += 4LL;
    --v9;
  }
  while ( v9 );
  return v3;
}
