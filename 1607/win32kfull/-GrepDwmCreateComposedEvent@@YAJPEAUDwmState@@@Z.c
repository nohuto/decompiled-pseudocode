/*
 * XREFs of ?GrepDwmCreateComposedEvent@@YAJPEAUDwmState@@@Z @ 0x1C00EEF98
 * Callers:
 *     GreDwmStartup @ 0x1C00EE868 (GreDwmStartup.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00DAA3C (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?RtlStringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x1C00EF14C (-RtlStringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 */

int __fastcall GrepDwmCreateComposedEvent(wchar_t *a1)
{
  const WCHAR *v1; // rsi
  unsigned int v3; // edi
  NTSTATUS v4; // ebx
  unsigned __int16 *v5; // rsi
  unsigned __int64 v6; // r14
  wchar_t *v7; // rsi
  int result; // eax
  void *v9; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-9h] BYREF
  void *EventHandle; // [rsp+C0h] [rbp+67h] BYREF
  void *DirectoryHandle; // [rsp+C8h] [rbp+6Fh] BYREF
  unsigned __int16 *v14; // [rsp+D0h] [rbp+77h] BYREF
  unsigned __int64 v15; // [rsp+D8h] [rbp+7Fh] BYREF

  v1 = a1 + 96;
  DirectoryHandle = 0LL;
  EventHandle = 0LL;
  v3 = ++*(_DWORD *)(gpGdiSharedMemory + 1573020LL);
  v4 = RtlStringCchPrintfExW(a1 + 96, 0x44uLL, &v14, &v15, 0x1000u, L"\\Sessions\\%ld\\BaseNamedObjects", gSessionId);
  if ( v4 < 0
    || (RtlInitUnicodeString(&DestinationString, v1),
        ObjectAttributes.RootDirectory = 0LL,
        ObjectAttributes.ObjectName = &DestinationString,
        ObjectAttributes.Length = 48,
        ObjectAttributes.Attributes = 576,
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        v4 = ZwOpenDirectoryObject(&DirectoryHandle, 0x2000Fu, &ObjectAttributes),
        v4 < 0) )
  {
    v9 = EventHandle;
LABEL_8:
    if ( v9 )
      ObCloseHandle(v9, 0);
    if ( DirectoryHandle )
      ObCloseHandle(DirectoryHandle, 0);
    return v4;
  }
  else
  {
    v5 = v14;
    v6 = v15;
    *v14 = 92;
    v7 = v5 + 1;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    ObjectAttributes.RootDirectory = DirectoryHandle;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.SecurityDescriptor = &gComposeEventCompiledSd;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    while ( 1 )
    {
      result = RtlStringCchPrintfW(v7, v6 - 1, L"DwmComposedEvent_%x", v3);
      if ( result < 0 )
        break;
      RtlInitUnicodeString(&DestinationString, v7);
      result = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
      v4 = result;
      if ( result != -1073741771 )
      {
        if ( result < 0 )
          return result;
        *(_DWORD *)(gpGdiSharedMemory + 1573020LL) = v3;
        v9 = 0LL;
        *((_QWORD *)a1 + 41) = EventHandle;
        EventHandle = 0LL;
        goto LABEL_8;
      }
      ++v3;
    }
  }
  return result;
}
