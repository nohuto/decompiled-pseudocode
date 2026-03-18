/*
 * XREFs of SeTokenIsNoChildProcessRestricted @ 0x14007BF2C
 * Callers:
 *     NtQueryInformationProcess @ 0x140422590 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140425A10 (NtSetInformationProcess.c)
 *     SeSubProcessToken @ 0x14046EA48 (SeSubProcessToken.c)
 * Callees:
 *     <none>
 */

bool __fastcall SeTokenIsNoChildProcessRestricted(__int64 a1)
{
  return (*(_DWORD *)(a1 + 200) & 0x80000) != 0;
}
