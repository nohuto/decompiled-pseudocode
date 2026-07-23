/*
 * XREFs of RtlpGetRegistryHandle @ 0x18000E020
 * Callers:
 *     RtlpQueryTimeZoneInformationWorker @ 0x18000CFA0 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x18000D3F8 (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     RtlCheckRegistryKey @ 0x18000D540 (RtlCheckRegistryKey.c)
 *     RtlpQueryRegistryValues @ 0x18000D754 (RtlpQueryRegistryValues.c)
 *     RtlWriteRegistryValue @ 0x18007EE60 (RtlWriteRegistryValue.c)
 *     RtlDeleteRegistryValue @ 0x180081A80 (RtlDeleteRegistryValue.c)
 *     RtlCreateRegistryKey @ 0x1800D3FD0 (RtlCreateRegistryKey.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1800D4118 (RtlpSetTimeZoneInformationWorker.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x18001FA60 (RtlAppendUnicodeToString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x18001FB60 (RtlFormatCurrentUserKeyPath.c)
 *     NtdllpAllocateStringRoutine @ 0x180024358 (NtdllpAllocateStringRoutine.c)
 *     RtlFreeAnsiString @ 0x180027410 (RtlFreeAnsiString.c)
 *     NtdllpFreeStringRoutine @ 0x18002A210 (NtdllpFreeStringRoutine.c)
 *     RtlAppendUnicodeStringToString @ 0x180040100 (RtlAppendUnicodeStringToString.c)
 *     NtOpenKey @ 0x180093A20 (NtOpenKey.c)
 *     ZwCreateKey @ 0x180093AD0 (ZwCreateKey.c)
 */

__int64 __fastcall RtlpGetRegistryHandle(int a1, const WCHAR *a2, char a3, HANDLE *a4)
{
  unsigned int v7; // ebx
  __int64 v9; // rdx
  NTSTATUS appended; // ebx
  __int64 v11; // r8
  NTSTATUS v12; // eax
  _UNICODE_STRING Destination; // [rsp+48h] [rbp-9h] BYREF
  _UNICODE_STRING CurrentUserKeyPath; // [rsp+58h] [rbp+7h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+17h] BYREF

  v7 = a1;
  if ( (a1 & 0x40000000) != 0 )
  {
    *a4 = (HANDLE)a2;
    return 0LL;
  }
  else
  {
    if ( a1 < 0 )
      v7 = a1 & 0x7FFFFFFF;
    if ( v7 >= 6 )
    {
      return 3221225485LL;
    }
    else
    {
      Destination.Buffer = (unsigned __int16 *)NtdllpAllocateStringRoutine(524LL, a2);
      if ( Destination.Buffer )
      {
        *(_DWORD *)&Destination.Length = 34340864;
        if ( !v7 )
          goto LABEL_12;
        if ( v7 == 5 && RtlFormatCurrentUserKeyPath(&CurrentUserKeyPath) >= 0 )
        {
          appended = RtlAppendUnicodeStringToString(&Destination, &CurrentUserKeyPath);
          RtlFreeAnsiString(&CurrentUserKeyPath);
        }
        else
        {
          appended = RtlAppendUnicodeToString(&Destination, RtlpRegistryPaths[v7]);
        }
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeToString(&Destination, L"\\");
          if ( appended >= 0 )
          {
LABEL_12:
            appended = RtlAppendUnicodeToString(&Destination, a2);
            if ( appended >= 0 )
            {
              ObjectAttributes.Length = 48;
              ObjectAttributes.ObjectName = &Destination;
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.Attributes = 576;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              if ( a3 )
                v12 = ZwCreateKey(a4, 0x40000000u, &ObjectAttributes, 0, 0LL, 0, 0LL);
              else
                v12 = NtOpenKey(a4, 0x82000000, &ObjectAttributes);
              appended = v12;
            }
          }
        }
        NtdllpFreeStringRoutine(Destination.Buffer, v9, v11);
        return (unsigned int)appended;
      }
      else
      {
        return 3221225495LL;
      }
    }
  }
}
