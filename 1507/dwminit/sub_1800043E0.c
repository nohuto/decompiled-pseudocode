/*
 * XREFs of sub_1800043E0 @ 0x1800043E0
 * Callers:
 *     sub_180002764 @ 0x180002764 (sub_180002764.c)
 *     StartAddress @ 0x1800028C0 (StartAddress.c)
 * Callees:
 *     sub_180001228 @ 0x180001228 (sub_180001228.c)
 *     sub_180003A80 @ 0x180003A80 (sub_180003A80.c)
 *     __security_check_cookie @ 0x1800063A0 (__security_check_cookie.c)
 */

__int64 sub_1800043E0()
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
  v0 = sub_180001228(SourceString, 53LL, L"\\Sessions\\%d\\Windows\\DwmCatastrophicShutdown", NtCurrentPeb()->SessionId);
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
  sub_180003A80(v3, v2);
LABEL_9:
  if ( EventHandle )
    NtClose(EventHandle);
  return v1;
}
