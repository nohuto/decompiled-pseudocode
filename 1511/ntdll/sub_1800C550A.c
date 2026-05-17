/*
 * XREFs of sub_1800C550A @ 0x1800C550A
 * Callers:
 *     TppCritResetThread @ 0x180081BB0 (TppCritResetThread.c)
 * Callees:
 *     NtSetInformationThread @ 0x1800A5260 (NtSetInformationThread.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtSetInformationObject @ 0x1800A5C30 (NtSetInformationObject.c)
 */

__int64 __fastcall sub_1800C550A(void *a1)
{
  NtSetInformationThread();
  NtSetInformationThread();
  NtSetInformationObject();
  NtClose(a1);
  return NtSetInformationThread();
}
