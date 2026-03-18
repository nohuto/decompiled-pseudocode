/*
 * XREFs of PpProfileInit @ 0x1407E8784
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1407BF6F0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     <none>
 */

LIST_ENTRY *PpProfileInit()
{
  LIST_ENTRY *result; // rax

  byte_1403493DA = 6;
  LODWORD(PiProfileDeviceListLock) = 1;
  qword_1403493C8 = 0LL;
  qword_1403493A8 = (__int64)&PiProfileDeviceListHead;
  PiProfileDeviceListHead = (__int64)&PiProfileDeviceListHead;
  qword_1403493E8 = (__int64)&qword_1403493E0;
  qword_1403493E0 = (__int64)&qword_1403493E0;
  result = &PiProfileChangeSemaphore.Header.WaitListHead;
  PiProfileChangeSemaphore.Header.WaitListHead.Blink = &PiProfileChangeSemaphore.Header.WaitListHead;
  PiProfileChangeSemaphore.Header.WaitListHead.Flink = &PiProfileChangeSemaphore.Header.WaitListHead;
  dword_1403493D0 = 0;
  word_1403493D8 = 1;
  dword_1403493DC = 0;
  PiProfileDeviceCount = 0;
  PiProfileChangeSemaphore.Header.Type = 5;
  PiProfileChangeSemaphore.Header.Size = 8;
  PiProfileChangeSemaphore.Header.SignalState = 1;
  PiProfileChangeSemaphore.Limit = 1;
  return result;
}
