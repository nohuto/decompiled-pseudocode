/*
 * XREFs of sub_1800B7722 @ 0x1800B7722
 * Callers:
 *     TppCritResetThread @ 0x18007521C (TppCritResetThread.c)
 * Callees:
 *     NtSetInformationThread @ 0x1800939D0 (NtSetInformationThread.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtSetInformationObject @ 0x180093EC0 (NtSetInformationObject.c)
 */

__int64 __fastcall sub_1800B7722(void *a1)
{
  NtSetInformationThread();
  NtSetInformationThread();
  NtSetInformationObject();
  NtClose(a1);
  return NtSetInformationThread();
}
