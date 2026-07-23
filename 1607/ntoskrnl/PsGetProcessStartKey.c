/*
 * XREFs of PsGetProcessStartKey @ 0x14020EF58
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PsGetProcessStartKey(__int64 a1)
{
  return *(_QWORD *)(a1 + 1856) | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
}
