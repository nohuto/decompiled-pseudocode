/*
 * XREFs of CmpInitCallbacks @ 0x14055B900
 * Callers:
 *     CmInitSystem1 @ 0x1407ADA6C (CmInitSystem1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 */

void CmpInitCallbacks()
{
  CmpCallBackCount = 0;
  CmpCallbackListLock = 0LL;
  CmpContextListLock = 0LL;
  CallbackListDeleteEvent = 0LL;
  qword_140322E08 = (__int64)&CallbackListHead;
  CallbackListHead = (__int64)&CallbackListHead;
  RtlInitUnicodeString(&CmLegacyAltitude, L"425000");
  CmpCallbackCookie = MEMORY[0xFFFFF78000000014];
  InitializeSListHead(&CmpCallbackContextSList);
}
