/*
 * XREFs of KiIsNodeFull @ 0x140139B50
 * Callers:
 *     KiQueryProcessorNode @ 0x140139A1C (KiQueryProcessorNode.c)
 *     KiFindFirstAvailableNode @ 0x140139AF4 (KiFindFirstAvailableNode.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsNodeFull(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 136) - ((*(_QWORD *)(a1 + 136) >> 1) & 0x5555555555555555LL);
  return (0x101010101010101LL
        * (((v1 & 0x3333333333333333LL)
          + ((v1 >> 2) & 0x3333333333333333LL)
          + (((v1 & 0x3333333333333333LL) + ((v1 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56 == *(_BYTE *)(a1 + 172);
}
