/*
 * XREFs of ?CreateDesktopNotificationEvent@@YAJPEAX@Z @ 0x1C013C3E8
 * Callers:
 *     xxxCreateWindowStation @ 0x1C0138EEC (xxxCreateWindowStation.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00DCB5C (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall CreateDesktopNotificationEvent(void *a1)
{
  __int64 result; // rax
  WCHAR *v3; // rdx
  NTSTATUS v4; // ebx
  void *EventHandle; // [rsp+40h] [rbp-C0h] BYREF
  void *DirectoryHandle; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+90h] [rbp-70h] BYREF
  WCHAR SourceString[256]; // [rsp+A0h] [rbp-60h] BYREF

  if ( gbRemoteSession )
  {
    result = RtlStringCchPrintfW(SourceString, 256LL, L"\\Sessions\\%ld\\BaseNamedObjects", gSessionId);
    if ( (int)result < 0 )
      return result;
    v3 = SourceString;
  }
  else
  {
    v3 = L"\\BaseNamedObjects";
  }
  RtlInitUnicodeString(&DestinationString, v3);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenDirectoryObject(&DirectoryHandle, 0x2000Fu, &ObjectAttributes);
  if ( v4 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"WinSta0_DesktopSwitch");
    ObjectAttributes.SecurityQualityOfService = 0LL;
    ObjectAttributes.SecurityDescriptor = a1;
    ObjectAttributes.RootDirectory = DirectoryHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 640;
    v4 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
    ZwClose(DirectoryHandle);
    if ( v4 >= 0 )
    {
      v4 = ObReferenceObjectByHandle(EventHandle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
      gpEventSwitchDesktop = (PRKEVENT)Object;
      if ( v4 >= 0 )
      {
        KeAttachProcess(gpepCSRSS);
        v4 = ObOpenObjectByPointer(gpEventSwitchDesktop, 0, 0LL, 0x1F0003u, 0LL, 0, &ghEventSwitchDesktop);
        KeDetachProcess();
      }
      ZwClose(EventHandle);
    }
  }
  return (unsigned int)v4;
}
