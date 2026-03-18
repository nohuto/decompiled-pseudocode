/*
 * XREFs of EtwpInitializeStackLookasideList @ 0x140524484
 * Callers:
 *     EtwpInitialize @ 0x140757334 (EtwpInitialize.c)
 * Callees:
 *     InitializeSListHead @ 0x1400F8DC8 (InitializeSListHead.c)
 */

void EtwpInitializeStackLookasideList()
{
  InitializeSListHead(&EtwpStackLookAsideList);
  dword_1403062B0 = 0;
  dword_1403062B4 = 0;
}
