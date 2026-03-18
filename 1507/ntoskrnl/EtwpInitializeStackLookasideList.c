/*
 * XREFs of EtwpInitializeStackLookasideList @ 0x1405C2C40
 * Callers:
 *     EtwpInitialize @ 0x1407C0848 (EtwpInitialize.c)
 * Callees:
 *     InitializeSListHead @ 0x1400D9F4C (InitializeSListHead.c)
 */

void EtwpInitializeStackLookasideList()
{
  InitializeSListHead(&EtwpStackLookAsideList);
  dword_1403565B0 = 0;
  dword_1403565B4 = 0;
}
