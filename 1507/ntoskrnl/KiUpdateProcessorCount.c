/*
 * XREFs of KiUpdateProcessorCount @ 0x1403FA6B8
 * Callers:
 *     KiUpdateNumberProcessorsIpi @ 0x140401B08 (KiUpdateNumberProcessorsIpi.c)
 *     KeStartAllProcessors @ 0x1407D3888 (KeStartAllProcessors.c)
 * Callees:
 *     KiGetCurrentGroupCount @ 0x140131C20 (KiGetCurrentGroupCount.c)
 */

char KiUpdateProcessorCount()
{
  int v0; // r9d
  int v1; // ecx
  unsigned int v2; // ecx
  char v3; // r8
  __int64 v4; // rcx
  volatile CCHAR v5; // al
  char result; // al

  KiActiveGroups = KiGetCurrentGroupCount();
  _disable();
  LODWORD(KeNumberProcessors_0) = KeNumberProcessors_0 + 1;
  v2 = KiProcessorIndexToNumberMappingTable[v1];
  v3 = v2 & 0x3F;
  v4 = v2 >> 6;
  if ( LOWORD(KeActiveProcessors[0]) <= (unsigned int)v4 )
    LOWORD(KeActiveProcessors[0]) = v4 + 1;
  qword_1403D15E8[(unsigned int)v4] = qword_1403D15E8[v4] | (1LL << v3);
  _enable();
  if ( !v0 )
  {
    v5 = KeNumberProcessorsGroup0[0];
    KeNumberProcessorsGroup0[0] = v5 + 1;
  }
  ++MEMORY[0xFFFFF780000003C0];
  ++MEMORY[0xFFFFF7800000036A];
  result = KiActiveGroups;
  MEMORY[0xFFFFF780000003C4] = KiActiveGroups;
  return result;
}
