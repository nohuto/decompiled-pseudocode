/*
 * XREFs of KeAlertResumeThread @ 0x1401FECBC
 * Callers:
 *     NtAlertResumeThread @ 0x1406C63A4 (NtAlertResumeThread.c)
 * Callees:
 *     KeAlertThread @ 0x14000C1F0 (KeAlertThread.c)
 *     KeResumeThread @ 0x14000C8A4 (KeResumeThread.c)
 */

__int64 __fastcall KeAlertResumeThread(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KeAlertThread(a1, 0);
  result = KeResumeThread(a1);
  __writecr8(CurrentIrql);
  return result;
}
