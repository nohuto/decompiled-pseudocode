/*
 * XREFs of KeAlertResumeThread @ 0x1401D2C3C
 * Callers:
 *     NtAlertResumeThread @ 0x140681DE8 (NtAlertResumeThread.c)
 * Callees:
 *     KeResumeThread @ 0x1400A2840 (KeResumeThread.c)
 *     KeAlertThread @ 0x1400C9CF4 (KeAlertThread.c)
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
