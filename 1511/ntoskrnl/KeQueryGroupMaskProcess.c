/*
 * XREFs of KeQueryGroupMaskProcess @ 0x14009B4A0
 * Callers:
 *     NtQueryInformationProcess @ 0x14041D530 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 *     PspWritePebAffinityInfo @ 0x1404645DC (PspWritePebAffinityInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryGroupMaskProcess(__int64 a1)
{
  return (*(_DWORD *)(a1 + 440) >> 8) & 0xFFFFF;
}
