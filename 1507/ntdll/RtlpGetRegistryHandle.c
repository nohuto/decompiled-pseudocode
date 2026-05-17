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

__int64 __fastcall RtlpGetRegistryHandle(int a1, __int64 a2, char a3, _QWORD *a4)
{
  unsigned int v7; // ebx
  __int64 v9; // rdx
  int appended; // ebx
  __int64 v11; // r8
  int v12; // eax
  int v13; // [rsp+48h] [rbp-9h] BYREF
  __int64 StringRoutine; // [rsp+50h] [rbp-1h]
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp+7h] BYREF
  int v16; // [rsp+68h] [rbp+17h] BYREF
  __int64 v17; // [rsp+70h] [rbp+1Fh]
  int *v18; // [rsp+78h] [rbp+27h]
  int v19; // [rsp+80h] [rbp+2Fh]
  __int128 v20; // [rsp+88h] [rbp+37h]

  v7 = a1;
  if ( (a1 & 0x40000000) != 0 )
  {
    *a4 = a2;
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
      StringRoutine = NtdllpAllocateStringRoutine(524LL, a2);
      if ( StringRoutine )
      {
        v13 = 34340864;
        if ( !v7 )
          goto LABEL_12;
        if ( v7 == 5 && (int)RtlFormatCurrentUserKeyPath(&UnicodeString) >= 0 )
        {
          appended = RtlAppendUnicodeStringToString(&v13, &UnicodeString);
          RtlFreeAnsiString(&UnicodeString);
        }
        else
        {
          appended = RtlAppendUnicodeToString(&v13, RtlpRegistryPaths[v7]);
        }
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeToString(&v13, L"\\");
          if ( appended >= 0 )
          {
LABEL_12:
            appended = RtlAppendUnicodeToString(&v13, a2);
            if ( appended >= 0 )
            {
              v16 = 48;
              v18 = &v13;
              v17 = 0LL;
              v19 = 576;
              v20 = 0LL;
              if ( a3 )
                v12 = ZwCreateKey(a4, 0x40000000LL, &v16, 0LL, 0LL, 0, 0LL);
              else
                v12 = NtOpenKey(a4, 2181038080LL, &v16);
              appended = v12;
            }
          }
        }
        NtdllpFreeStringRoutine(StringRoutine, v9, v11);
        return (unsigned int)appended;
      }
      else
      {
        return 3221225495LL;
      }
    }
  }
}
