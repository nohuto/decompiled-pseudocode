/*
 * XREFs of EtwpGetProcessStartKey @ 0x1404CFF60
 * Callers:
 *     EtwpEventWriteFull @ 0x140073860 (EtwpEventWriteFull.c)
 *     EtwpTiFillProcessIdentity @ 0x140171E6C (EtwpTiFillProcessIdentity.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall EtwpGetProcessStartKey(__int64 a1)
{
  return *(_QWORD *)(a1 + 1856) | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
}
