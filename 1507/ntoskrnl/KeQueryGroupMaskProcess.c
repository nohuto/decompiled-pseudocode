/*
 * XREFs of KeQueryGroupMaskProcess @ 0x1400F08FC
 * Callers:
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 *     PspWritePebAffinityInfo @ 0x1404668C8 (PspWritePebAffinityInfo.c)
 *     NtQueryInformationProcess @ 0x14050D9A0 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryGroupMaskProcess(__int64 a1)
{
  return (*(_DWORD *)(a1 + 440) >> 8) & 0xFFFFF;
}
