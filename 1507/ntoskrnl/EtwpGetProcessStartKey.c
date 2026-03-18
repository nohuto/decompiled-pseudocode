/*
 * XREFs of EtwpGetProcessStartKey @ 0x14054D95C
 * Callers:
 *     EtwpEventWriteFull @ 0x1400182F0 (EtwpEventWriteFull.c)
 *     EtwpTiFillProcessIdentity @ 0x140195E68 (EtwpTiFillProcessIdentity.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall EtwpGetProcessStartKey(__int64 a1)
{
  return *(_QWORD *)(a1 + 1856) | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
}
