/*
 * XREFs of KeVerifyGroupAffinity @ 0x1401230CC
 * Callers:
 *     NtSetInformationThread @ 0x140425860 (NtSetInformationThread.c)
 *     PspBuildCreateProcessContext @ 0x14044629C (PspBuildCreateProcessContext.c)
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 *     IopConnectInterrupt @ 0x140503334 (IopConnectInterrupt.c)
 *     IopConnectInterruptFullySpecified @ 0x14054625C (IopConnectInterruptFullySpecified.c)
 *     ExpProfileCreate @ 0x1406752BC (ExpProfileCreate.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeVerifyGroupAffinity(__int64 a1, char a2)
{
  unsigned __int16 v2; // ax

  v2 = *(_WORD *)(a1 + 8);
  return v2 < (unsigned __int16)KiActiveGroups
      && (a2 || *(_QWORD *)a1)
      && (qword_1403825B8[v2] & *(_QWORD *)a1) == *(_QWORD *)a1
      && !(*(_WORD *)(a1 + 10) | (unsigned __int16)(*(_WORD *)(a1 + 12) | *(_WORD *)(a1 + 14)));
}
