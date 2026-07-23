/*
 * XREFs of HvlpDiscoverTopologyComplete @ 0x1407CDEF4
 * Callers:
 *     HvlPhase2Initialize @ 0x14014CA18 (HvlPhase2Initialize.c)
 * Callees:
 *     HvlpDiscoverTopologyWorker @ 0x1406205F4 (HvlpDiscoverTopologyWorker.c)
 */

int *HvlpDiscoverTopologyComplete()
{
  unsigned int v0; // r9d
  unsigned int v1; // edi
  unsigned int v2; // edx
  unsigned int *v3; // rbx
  unsigned int v4; // r8d
  int *result; // rax
  unsigned int v6; // ebp
  unsigned int v7; // r14d
  char v8; // r10
  char v9; // r11
  _DWORD *v10; // rcx

  v0 = HvlpLogicalProcessorCount;
  v1 = 0;
  if ( (_DWORD)HvlpLogicalProcessorCount )
  {
    v2 = dword_140326180;
    v3 = (unsigned int *)&unk_1403AF030;
    v4 = dword_140326184;
    do
    {
      if ( v3[2] == -1 )
      {
        result = (int *)HvlpDiscoverTopologyWorker();
        v0 = HvlpLogicalProcessorCount;
        v2 = dword_140326180;
        v4 = dword_140326184;
      }
      v6 = *v3;
      v7 = v3[1];
      if ( *v3 > v2 )
        v2 = *v3;
      dword_140326180 = v2;
      if ( v7 > v4 )
        v4 = v7;
      dword_140326184 = v4;
      if ( *((_BYTE *)v3 + 88) )
      {
        v8 = 1;
        result = HvlpLogicalProcessorRegions;
        v9 = 1;
        if ( HvlpLogicalProcessorRegions == (int *)(v3 - 4) )
          goto LABEL_19;
        v10 = &unk_1403AF030;
        do
        {
          if ( *((_BYTE *)v10 + 88) )
          {
            if ( *v10 == v6 )
              v8 = 0;
            if ( v10[1] == v7 )
              v9 = 0;
          }
          v10 += 28;
          result = v10 - 4;
        }
        while ( v10 - 4 != v3 - 4 );
        if ( v8 )
LABEL_19:
          ++HvlpPackageCount;
        if ( v9 )
          ++HvlpCoreCount;
      }
      ++v1;
      v3 += 28;
    }
    while ( v1 < v0 );
  }
  return result;
}
