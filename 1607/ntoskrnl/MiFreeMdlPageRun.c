/*
 * XREFs of MiFreeMdlPageRun @ 0x1400225B4
 * Callers:
 *     MiFreePagesFromMdl @ 0x1400996F8 (MiFreePagesFromMdl.c)
 *     MiFreePartitionPageRun @ 0x1401F184C (MiFreePartitionPageRun.c)
 *     MiCleanPhysicalProcessPages @ 0x14065C3F0 (MiCleanPhysicalProcessPages.c)
 * Callees:
 *     MiFreeSmallPageFromMdl @ 0x140022670 (MiFreeSmallPageFromMdl.c)
 *     MiFreeLargePageMemory @ 0x1400900D0 (MiFreeLargePageMemory.c)
 */

__int64 __fastcall MiFreeMdlPageRun(ULONG_PTR a1, unsigned __int64 a2, char a3)
{
  unsigned int v3; // r15d
  unsigned __int64 v4; // rsi
  __int64 v6; // rbp
  __int64 v8; // rbx
  unsigned __int64 v9; // r14

  v3 = a3 & 1;
  v4 = a2;
  v6 = 0LL;
  while ( v4 )
  {
    if ( (a1 & 0x1FF) != 0 )
    {
LABEL_3:
      v6 += MiFreeSmallPageFromMdl(a1++);
      --v4;
    }
    else
    {
      v8 = (KeFeatureBits & 0x2000000000LL) == 0;
      while ( 1 )
      {
        v9 = MiLargePageSizes[v8];
        if ( ((v9 - 1) & a1) == 0 && v4 >= v9 )
          break;
        v8 = (unsigned int)(v8 + 1);
        if ( (unsigned int)v8 > 1 )
          goto LABEL_3;
      }
      v6 += MiFreeLargePageMemory(a1, (unsigned int)v8, v3);
      a1 += v9;
      v4 -= v9;
    }
  }
  return v6;
}
