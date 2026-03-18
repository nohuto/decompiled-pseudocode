/*
 * XREFs of KeAlertResumeThread @ 0x1401C2F08
 * Callers:
 *     NtAlertResumeThread @ 0x140643608 (NtAlertResumeThread.c)
 * Callees:
 *     KeAlertThread @ 0x140030D64 (KeAlertThread.c)
 *     KeResumeThread @ 0x1400E2E00 (KeResumeThread.c)
 */

__int64 __fastcall KeAlertResumeThread(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KeAlertThread(a1, 0);
  result = KeResumeThread(a1, v3, v4);
  __writecr8(CurrentIrql);
  return result;
}
