/*
 * XREFs of EtwpInitializeStackLookasideList @ 0x140581BB8
 * Callers:
 *     EtwpInitialize @ 0x1407A0D3C (EtwpInitialize.c)
 * Callees:
 *     InitializeSListHead @ 0x140002CB0 (InitializeSListHead.c)
 */

void EtwpInitializeStackLookasideList()
{
  InitializeSListHead(&EtwpStackLookAsideList);
  dword_140329310 = 0;
  dword_140329314 = 0;
}
