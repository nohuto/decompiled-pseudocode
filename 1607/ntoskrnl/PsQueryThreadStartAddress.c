/*
 * XREFs of PsQueryThreadStartAddress @ 0x140074C20
 * Callers:
 *     PspAllocateThread @ 0x1404F8890 (PspAllocateThread.c)
 *     NtQueryInformationThread @ 0x1404FCA40 (NtQueryInformationThread.c)
 *     EtwpPsProvTraceThread @ 0x14054B710 (EtwpPsProvTraceThread.c)
 *     sub_14078DFA4 @ 0x14078DFA4 (sub_14078DFA4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsQueryThreadStartAddress(__int64 a1, int a2)
{
  __int64 v3; // rdx
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( (*(_DWORD *)(a1 + 116) & 0x400) != 0 || !a2 )
    return *(_QWORD *)(a1 + 1672);
  if ( (*(_BYTE *)(a1 + 1736) & 8) != 0 )
    return 0LL;
  v3 = *(_QWORD *)(a1 + 1544);
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  if ( (*(_BYTE *)(a1 + 1736) & 8) != 0 )
    return 0LL;
  return v3;
}
