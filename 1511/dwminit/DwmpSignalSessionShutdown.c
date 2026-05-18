/*
 * XREFs of DwmpSignalSessionShutdown @ 0x1800046A0
 * Callers:
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x18000290C (-CleanupOldDwmProcess@@YAJXZ.c)
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002A90 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001228 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?DoStackCapture@@YAXJI@Z @ 0x180003D40 (-DoStackCapture@@YAXJI@Z.c)
 *     __security_check_cookie @ 0x1800067F0 (__security_check_cookie.c)
 */

__int64 DwmpSignalSessionShutdown()
{
  int v0; // eax
  unsigned int v1; // ebx
  int v2; // edx
  int v3; // ecx
  NTSTATUS v4; // eax
  void *EventHandle; // [rsp+20h] [rbp-79h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-71h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-61h] BYREF
  WCHAR SourceString[56]; // [rsp+70h] [rbp-29h] BYREF

  EventHandle = 0LL;
  v0 = StringCchPrintfW(
         SourceString,
         53LL,
         L"\\Sessions\\%d\\Windows\\DwmCatastrophicShutdown",
         NtCurrentPeb()->SessionId);
  v1 = v0;
  if ( v0 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 0;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = NtOpenEvent(&EventHandle, 2u, &ObjectAttributes);
    if ( v4 >= 0 )
    {
      v4 = NtSetEvent(EventHandle, 0LL);
      if ( v4 >= 0 )
        goto LABEL_9;
      v2 = 118;
    }
    else
    {
      v2 = 116;
    }
    v1 = v4 | 0x10000000;
    v3 = v4 | 0x10000000;
  }
  else
  {
    v2 = 104;
    v3 = v0;
  }
  DoStackCapture(v3, v2);
LABEL_9:
  if ( EventHandle )
    NtClose(EventHandle);
  return v1;
}
