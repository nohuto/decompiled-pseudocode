/*
 * XREFs of IopInitializeSessionNotifications @ 0x1407E870C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1407C116C (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ExCreateCallback @ 0x1405544CC (ExCreateCallback.c)
 */

NTSTATUS IopInitializeSessionNotifications()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  IopSessionNotificationLock = 0LL;
  qword_14034B5D8 = (__int64)&IopSessionNotificationQueueHead;
  IopSessionNotificationQueueHead = &IopSessionNotificationQueueHead;
  RtlInitUnicodeString(&DestinationString, L"\\Callback\\IoSessionNotifications");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 80;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ExCreateCallback((PCALLBACK_OBJECT *)&IopSessionCallbackObject, &ObjectAttributes, 1u, 1u);
}
