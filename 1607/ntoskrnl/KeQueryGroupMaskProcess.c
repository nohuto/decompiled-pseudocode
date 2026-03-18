/*
 * XREFs of KeQueryGroupMaskProcess @ 0x1400F72D8
 * Callers:
 *     NtQueryInformationProcess @ 0x140422590 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140425A10 (NtSetInformationProcess.c)
 *     PspWritePebAffinityInfo @ 0x14051ACD0 (PspWritePebAffinityInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryGroupMaskProcess(__int64 a1)
{
  return (*(_DWORD *)(a1 + 440) >> 8) & 0xFFFFF;
}
