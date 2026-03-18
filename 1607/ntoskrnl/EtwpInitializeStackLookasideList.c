/*
 * XREFs of EtwpInitializeStackLookasideList @ 0x14058170C
 * Callers:
 *     EtwpInitialize @ 0x1407A0D3C (EtwpInitialize.c)
 * Callees:
 *     InitializeSListHead @ 0x140002B3C (InitializeSListHead.c)
 */

void EtwpInitializeStackLookasideList()
{
  InitializeSListHead(&EtwpStackLookAsideList);
  dword_1403292D0 = 0;
  dword_1403292D4 = 0;
}
