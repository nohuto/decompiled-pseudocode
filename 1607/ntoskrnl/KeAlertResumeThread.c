/*
 * XREFs of KeAlertResumeThread @ 0x1401D2A68
 * Callers:
 *     NtAlertResumeThread @ 0x140681ECC (NtAlertResumeThread.c)
 * Callees:
 *     KeResumeThread @ 0x1400A1168 (KeResumeThread.c)
 *     KeAlertThread @ 0x1400C7B94 (KeAlertThread.c)
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
