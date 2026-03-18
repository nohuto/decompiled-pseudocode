/*
 * XREFs of PspIoRateEntryInitialize @ 0x1404A23C4
 * Callers:
 *     NtCreateJobObject @ 0x1404A20AC (NtCreateJobObject.c)
 *     PspSetJobIoRateControlForVolume @ 0x140680918 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140074D34 (ExWaitForRundownProtectionRelease.c)
 *     memset @ 0x1401715C0 (memset.c)
 */

__int64 __fastcall PspIoRateEntryInitialize(struct _EX_RUNDOWN_REF *a1)
{
  __int64 result; // rax

  memset(a1, 0, 0x38uLL);
  a1[4].Count = 0LL;
  ExWaitForRundownProtectionRelease(a1 + 4);
  result = _InterlockedExchange64((volatile __int64 *)&a1[4], 1LL);
  a1[2].Count = -1LL;
  return result;
}
