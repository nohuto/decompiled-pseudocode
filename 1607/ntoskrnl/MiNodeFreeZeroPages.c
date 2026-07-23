/*
 * XREFs of MiNodeFreeZeroPages @ 0x140066170
 * Callers:
 *     MiGetFreeOrZeroPage @ 0x14003D800 (MiGetFreeOrZeroPage.c)
 *     MiReplenishPageSlist @ 0x140063EB0 (MiReplenishPageSlist.c)
 *     MiSignalLargePageRebuild @ 0x1400BC5CC (MiSignalLargePageRebuild.c)
 *     MiPruneStandbyPages @ 0x1401F35CC (MiPruneStandbyPages.c)
 *     MiRebalanceZeroFreeLists @ 0x1401F37C4 (MiRebalanceZeroFreeLists.c)
 *     MiRebuildLargePage @ 0x1401FD6F8 (MiRebuildLargePage.c)
 *     MiRebuildLargePages @ 0x1401FD95C (MiRebuildLargePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiNodeFreeZeroPages(_QWORD *a1, unsigned int a2, __int16 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // r11
  int v6; // r12d
  __int64 v7; // r13
  unsigned int v8; // eax
  __int64 v9; // r9
  __int64 *v10; // rdx
  _QWORD *v11; // rdi
  __int64 v12; // r8
  __int64 *v13; // rsi
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rax

  v3 = a2;
  v4 = 0LL;
  v5 = 0LL;
  v6 = a3 & 0x400;
  v7 = (a3 & 2) == 0;
  v8 = MmNumberOfChannels;
  do
  {
    if ( v8 > 1 )
    {
      v8 = MmNumberOfChannels;
      v4 += a1[2 * v3 + 259 + v5];
    }
    else
    {
      v4 += a1[v5 + 251];
    }
    if ( v6 )
    {
      v9 = 0LL;
      v10 = MiLargePageSizes;
      v11 = a1;
      v12 = 4 * v5;
      v13 = &a1[v5];
      v14 = 3LL;
      do
      {
        if ( (_DWORD)v3 == 4 )
        {
          if ( v5 == 2 )
            v15 = *v11 + v11[1];
          else
            v15 = *v13;
        }
        else
        {
          v15 = a1[v12 + 102 + v3] + a1[v12 + 110 + v3];
        }
        v16 = *v10++ * v15;
        v11 += 2;
        v9 += v16;
        v13 += 2;
        v12 += 16LL;
        --v14;
      }
      while ( v14 );
      v8 = MmNumberOfChannels;
      v4 += v9;
    }
    ++v5;
  }
  while ( v5 <= v7 );
  return v4;
}
