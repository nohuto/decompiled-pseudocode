/*
 * XREFs of EtwpGetProcessStartKey @ 0x1404EDE94
 * Callers:
 *     EtwpEventWriteFull @ 0x140073CE0 (EtwpEventWriteFull.c)
 *     EtwpTiFillProcessIdentity @ 0x14017196C (EtwpTiFillProcessIdentity.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall EtwpGetProcessStartKey(__int64 a1)
{
  return *(_QWORD *)(a1 + 1856) | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
}
