/*
 * XREFs of MiRebuildLargePages @ 0x140484180
 * Callers:
 *     <none>
 * Callees:
 *     MiNodeFreeZeroPages @ 0x140012CF0 (MiNodeFreeZeroPages.c)
 *     MiRebuildLargePage @ 0x1400BE1B0 (MiRebuildLargePage.c)
 */

void __fastcall MiRebuildLargePages(_DWORD *P)
{
  unsigned __int16 v2; // cx
  unsigned int v3; // ebp
  unsigned int v4; // r14d
  unsigned int v5; // esi
  __int64 v6; // r15
  __int64 v7; // rdi
  unsigned __int8 v8; // al

  v2 = KeNumberNodes;
  v3 = 0;
  if ( KeNumberNodes )
  {
    v4 = MmNumberOfChannels;
    do
    {
      v5 = 0;
      v6 = *((_QWORD *)P + 5) + 1336LL * v3;
      if ( v4 )
      {
        do
        {
          v7 = 4LL * v3 + v5;
          if ( !*((_BYTE *)P + 2 * v7 + 4372) )
          {
            if ( (unsigned __int64)MiNodeFreeZeroPages(v6, v5, 0) < 0x2000 )
            {
              *((_WORD *)P + v7 + 2186) = 2056;
            }
            else
            {
              if ( (unsigned int)MiRebuildLargePage((__int64)P, v3, v5) == 1 )
              {
                *((_BYTE *)P + 2 * v7 + 4373) = 8;
              }
              else
              {
                v8 = *((_BYTE *)P + 2 * v7 + 4373);
                if ( v8 >= 0x80u )
                  *((_BYTE *)P + 2 * v7 + 4373) = -1;
                else
                  *((_BYTE *)P + 2 * v7 + 4373) = 2 * v8;
              }
              v4 = MmNumberOfChannels;
              *((_BYTE *)P + 2 * v7 + 4372) = *((_BYTE *)P + 2 * v7 + 4373);
            }
          }
          ++v5;
        }
        while ( v5 < v4 );
        v2 = KeNumberNodes;
      }
      ++v3;
    }
    while ( v3 < v2 );
  }
  _InterlockedDecrement(P + 1092);
  MiDereferencePartition(P);
}
