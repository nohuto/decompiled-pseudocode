/*
 * XREFs of HvlpDiscoverTopologyComplete @ 0x140782654
 * Callers:
 *     HvlPhase2Initialize @ 0x140142738 (HvlPhase2Initialize.c)
 * Callees:
 *     sub_1405F6990 @ 0x1405F6990 (sub_1405F6990.c)
 */

void HvlpDiscoverTopologyComplete()
{
  unsigned int v0; // ecx
  unsigned int v1; // edi
  unsigned int v2; // edx
  unsigned int *v3; // rbx
  unsigned int v4; // r8d
  unsigned int v5; // esi
  int *v6; // r14
  unsigned int v7; // ebp
  char v8; // r9
  char v9; // r10
  _DWORD *v10; // r11
  bool v11; // zf

  v0 = HvlpLogicalProcessorCount;
  v1 = 0;
  if ( HvlpLogicalProcessorCount )
  {
    v2 = dword_140332000;
    v3 = (unsigned int *)&unk_140387150;
    v4 = dword_140332004;
    do
    {
      if ( v3[2] == -1 )
      {
        sub_1405F6990();
        v0 = HvlpLogicalProcessorCount;
        v2 = dword_140332000;
        v4 = dword_140332004;
      }
      v5 = *v3;
      v6 = (int *)(v3 - 4);
      v7 = v3[1];
      v8 = 1;
      v9 = 1;
      if ( *v3 > v2 )
        v2 = *v3;
      dword_140332000 = v2;
      if ( v7 > v4 )
        v4 = v7;
      dword_140332004 = v4;
      if ( HvlpLogicalProcessorRegions == v6 )
        goto LABEL_17;
      v10 = &unk_140387154;
      do
      {
        if ( *(v10 - 1) == v5 )
          v8 = 0;
        v11 = *v10 == v7;
        v10 += 26;
        if ( v11 )
          v9 = 0;
      }
      while ( v10 - 5 != v6 );
      if ( v8 )
LABEL_17:
        ++HvlpPackageCount;
      if ( v9 )
        ++HvlpCoreCount;
      ++v1;
      v3 += 26;
    }
    while ( v1 < v0 );
  }
}
