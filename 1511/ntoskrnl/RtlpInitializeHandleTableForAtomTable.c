/*
 * XREFs of RtlpInitializeHandleTableForAtomTable @ 0x140460B20
 * Callers:
 *     RtlCreateAtomTableEx @ 0x14009A2A8 (RtlCreateAtomTableEx.c)
 * Callees:
 *     ExCreateHandleTable @ 0x140460B44 (ExCreateHandleTable.c)
 */

bool __fastcall RtlpInitializeHandleTableForAtomTable(__int64 a1)
{
  __int64 HandleTable; // rax

  HandleTable = ExCreateHandleTable(0LL, 0LL);
  *(_QWORD *)(a1 + 16) = HandleTable;
  return HandleTable != 0;
}
