/*
 * XREFs of IopInitializeSessionNotifications @ 0x140771C70
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140757B24 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     ExCreateCallback @ 0x1404BF200 (ExCreateCallback.c)
 */

NTSTATUS IopInitializeSessionNotifications()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  IopSessionNotificationLock = 0LL;
  qword_1402FB158 = (__int64)&IopSessionNotificationQueueHead;
  IopSessionNotificationQueueHead = &IopSessionNotificationQueueHead;
  RtlInitUnicodeString(&DestinationString, L"\\Callback\\IoSessionNotifications");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 80;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ExCreateCallback((PCALLBACK_OBJECT *)&IopSessionCallbackObject, &ObjectAttributes, 1u, 1u);
}
