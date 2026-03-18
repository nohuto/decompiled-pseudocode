/*
 * XREFs of EtwpGetProcessStartKey @ 0x1404B479C
 * Callers:
 *     EtwpEventWriteFull @ 0x14009E960 (EtwpEventWriteFull.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall EtwpGetProcessStartKey(__int64 a1)
{
  return *(_QWORD *)(a1 + 1840) | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
}
