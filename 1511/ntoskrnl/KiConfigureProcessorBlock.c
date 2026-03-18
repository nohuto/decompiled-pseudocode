/*
 * XREFs of KiConfigureProcessorBlock @ 0x1403A90CC
 * Callers:
 *     KiInitializeKernel @ 0x1403A9234 (KiInitializeKernel.c)
 *     KiInitializeDynamicProcessorDpc @ 0x1403B10E8 (KiInitializeDynamicProcessorDpc.c)
 *     KeStartAllProcessors @ 0x140762F20 (KeStartAllProcessors.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiConfigureProcessorBlock(__int64 a1)
{
  __int64 v1; // r11
  unsigned int v2; // ecx
  unsigned __int64 v3; // r10
  unsigned __int64 v4; // rax
  unsigned int v5; // r8d
  unsigned __int64 v6; // r9
  int v7; // edx
  unsigned __int64 result; // rax
  __int16 v9; // r11
  __int64 v10; // rdx
  __int64 *v11; // r8
  __int64 v12; // r10

  v1 = *(_QWORD *)(a1 + 1600);
  v2 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)];
  v3 = *(_QWORD *)(v1 + 136) | (1LL << (v2 & 0x3F));
  _BitScanForward64(&v4, v3);
  v5 = v2 >> 6 << 6;
  *(_QWORD *)(v1 + 136) = v3;
  _BitScanReverse64(&v6, v3);
  v7 = KiProcessorNumberToIndexMappingTable[v5 + (unsigned int)v4];
  *(_DWORD *)(v1 + 164) = v7;
  *(_DWORD *)(v1 + 168) = KiProcessorNumberToIndexMappingTable[v5 + (unsigned int)v6];
  result = v3 - 1;
  *(_DWORD *)(v1 + 92) = v7;
  v9 = *(_WORD *)(v1 + 146);
  if ( ((v3 - 1) & v3) == 0 )
  {
    result = (unsigned __int16)KeNumberNodes;
    v10 = 0LL;
    if ( KeNumberNodes )
    {
      v11 = KeNodeBlock;
      v12 = (unsigned __int16)KeNumberNodes;
      do
      {
        result = *(unsigned __int16 *)(*v11 + 144);
        if ( (_DWORD)result == v2 >> 6 )
        {
          if ( !v10 )
            v10 = *v11;
          *(_DWORD *)(*v11 + 128) = *(_DWORD *)(v10 + 128) | (1 << v9);
        }
        ++v11;
        --v12;
      }
      while ( v12 );
    }
  }
  return result;
}
