/*
 * XREFs of EtwGetProcessAppSessionGuid @ 0x14054C480
 * Callers:
 *     MiLogCommitRequestFailed @ 0x1401ECC60 (MiLogCommitRequestFailed.c)
 * Callees:
 *     PsGetProcessSessionId @ 0x140013CD0 (PsGetProcessSessionId.c)
 */

__int64 __fastcall EtwGetProcessAppSessionGuid(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)a2 = *(_DWORD *)(a1 + 744);
  *(_WORD *)(a2 + 4) = PsGetProcessSessionId(a1);
  *(_WORD *)(a2 + 6) = MEMORY[0xFFFFF780000002C4];
  result = *(_QWORD *)(a1 + 776);
  *(_QWORD *)(a2 + 8) = result;
  return result;
}
