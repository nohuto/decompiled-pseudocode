/*
 * XREFs of EtwpFreeRegistration @ 0x180047F28
 * Callers:
 *     EtwNotificationUnregister @ 0x180047E50 (EtwNotificationUnregister.c)
 *     EtwNotificationRegister @ 0x1800541F0 (EtwNotificationRegister.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1800A8930 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall EtwpFreeRegistration(__int64 a1)
{
  __int64 result; // rax

  memset((void *)(a1 + 88), 0, 0xA8uLL);
  result = RtlpInterlockedPushEntrySList(&EtwpFreeRegistrationList, a1);
  _InterlockedDecrement(&EtwpRegistrationCount);
  return result;
}
