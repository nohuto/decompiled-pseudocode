/*
 * XREFs of EtwpFreeRegistration @ 0x18000E448
 * Callers:
 *     EtwNotificationUnregister @ 0x18000E370 (EtwNotificationUnregister.c)
 *     EtwNotificationRegister @ 0x180038BC0 (EtwNotificationRegister.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1800955A0 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x180098540 (memset.c)
 */

__int64 __fastcall EtwpFreeRegistration(__int64 a1)
{
  __int64 result; // rax

  memset((void *)(a1 + 88), 0, 0xA8uLL);
  result = RtlpInterlockedPushEntrySList(&EtwpFreeRegistrationList, a1);
  _InterlockedDecrement(&EtwpRegistrationCount);
  return result;
}
