/*
 * XREFs of CmpInitCallbacks @ 0x14051CC68
 * Callers:
 *     CmInitSystem1 @ 0x1407450EC (CmInitSystem1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 */

void CmpInitCallbacks()
{
  CmpCallBackCount = 0;
  CmpCallbackListLock = 0LL;
  CmpContextListLock = 0LL;
  CallbackListDeleteEvent = 0LL;
  qword_1402FD808 = (__int64)&CallbackListHead;
  CallbackListHead = (__int64)&CallbackListHead;
  RtlInitUnicodeString(&CmLegacyAltitude, L"425000");
  CmpCallbackCookie = MEMORY[0xFFFFF78000000014];
  InitializeSListHead(&CmpCallbackContextSList);
}
