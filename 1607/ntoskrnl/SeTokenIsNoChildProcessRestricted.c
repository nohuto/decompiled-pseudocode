/*
 * XREFs of SeTokenIsNoChildProcessRestricted @ 0x14007BFAC
 * Callers:
 *     NtQueryInformationProcess @ 0x140421450 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 *     SeSubProcessToken @ 0x14046D918 (SeSubProcessToken.c)
 * Callees:
 *     <none>
 */

bool __fastcall SeTokenIsNoChildProcessRestricted(__int64 a1)
{
  return (*(_DWORD *)(a1 + 200) & 0x80000) != 0;
}
