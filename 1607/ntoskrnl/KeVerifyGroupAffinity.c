/*
 * XREFs of KeVerifyGroupAffinity @ 0x140133128
 * Callers:
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 *     PspBuildCreateProcessContext @ 0x1404588B8 (PspBuildCreateProcessContext.c)
 *     NtSetInformationThread @ 0x1404F1560 (NtSetInformationThread.c)
 *     IopConnectInterrupt @ 0x14053A12C (IopConnectInterrupt.c)
 *     IopConnectInterruptFullySpecified @ 0x14057A874 (IopConnectInterruptFullySpecified.c)
 *     ExpProfileCreate @ 0x1406B7D44 (ExpProfileCreate.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeVerifyGroupAffinity(__int64 a1, char a2)
{
  unsigned __int16 v2; // ax

  v2 = *(_WORD *)(a1 + 8);
  return v2 < (unsigned __int16)KiActiveGroups
      && (a2 || *(_QWORD *)a1)
      && (qword_1403AA618[v2] & *(_QWORD *)a1) == *(_QWORD *)a1
      && !(*(_WORD *)(a1 + 10) | (unsigned __int16)(*(_WORD *)(a1 + 12) | *(_WORD *)(a1 + 14)));
}
