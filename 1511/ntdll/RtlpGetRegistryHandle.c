/*
 * XREFs of RtlpGetRegistryHandle @ 0x180046F68
 * Callers:
 *     RtlpQueryTimeZoneInformationWorker @ 0x180045EF0 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlCheckRegistryKey @ 0x180046100 (RtlCheckRegistryKey.c)
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x180046388 (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     RtlpQueryRegistryValues @ 0x1800466A4 (RtlpQueryRegistryValues.c)
 *     RtlDeleteRegistryValue @ 0x180089A90 (RtlDeleteRegistryValue.c)
 *     RtlWriteRegistryValue @ 0x18008E240 (RtlWriteRegistryValue.c)
 *     RtlCreateRegistryKey @ 0x1800DC180 (RtlCreateRegistryKey.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1800DC2C8 (RtlpSetTimeZoneInformationWorker.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x18000E310 (RtlAppendUnicodeStringToString.c)
 *     NtdllpAllocateStringRoutine @ 0x180018174 (NtdllpAllocateStringRoutine.c)
 *     RtlFormatCurrentUserKeyPath @ 0x180019080 (RtlFormatCurrentUserKeyPath.c)
 *     RtlAppendUnicodeToString @ 0x180019AF0 (RtlAppendUnicodeToString.c)
 *     RtlFreeAnsiString @ 0x18001C980 (RtlFreeAnsiString.c)
 *     NtdllpFreeStringRoutine @ 0x1800207A0 (NtdllpFreeStringRoutine.c)
 *     NtOpenKey @ 0x1800A5300 (NtOpenKey.c)
 *     ZwCreateKey @ 0x1800A5460 (ZwCreateKey.c)
 */

__int64 __fastcall RtlpGetRegistryHandle(int a1, _WORD *a2, char a3, _QWORD *a4)
{
  unsigned int v7; // ebx
  int appended; // ebx
  int v10; // eax
  int v11; // [rsp+48h] [rbp-9h] BYREF
  __int64 StringRoutine; // [rsp+50h] [rbp-1h]
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp+7h] BYREF
  int v14; // [rsp+68h] [rbp+17h] BYREF
  __int64 v15; // [rsp+70h] [rbp+1Fh]
  int *v16; // [rsp+78h] [rbp+27h]
  int v17; // [rsp+80h] [rbp+2Fh]
  __int128 v18; // [rsp+88h] [rbp+37h]

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
      StringRoutine = NtdllpAllocateStringRoutine(524LL);
      if ( StringRoutine )
      {
        v11 = 34340864;
        if ( !v7 )
          goto LABEL_12;
        if ( v7 == 5 && (int)RtlFormatCurrentUserKeyPath(&UnicodeString) >= 0 )
        {
          appended = RtlAppendUnicodeStringToString((unsigned __int16 *)&v11, (__int16 *)&UnicodeString);
          RtlFreeAnsiString(&UnicodeString);
        }
        else
        {
          appended = RtlAppendUnicodeToString((unsigned __int16 *)&v11, *((_WORD **)&RtlpRegistryPaths + v7));
        }
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeToString((unsigned __int16 *)&v11, L"\\");
          if ( appended >= 0 )
          {
LABEL_12:
            appended = RtlAppendUnicodeToString((unsigned __int16 *)&v11, a2);
            if ( appended >= 0 )
            {
              v14 = 48;
              v16 = &v11;
              v15 = 0LL;
              v17 = 576;
              v18 = 0LL;
              if ( a3 )
                v10 = ZwCreateKey(a4, 0x40000000LL, &v14, 0LL, 0LL, 0, 0LL);
              else
                v10 = NtOpenKey(a4, 2181038080LL, &v14);
              appended = v10;
            }
          }
        }
        NtdllpFreeStringRoutine(StringRoutine);
        return (unsigned int)appended;
      }
      else
      {
        return 3221225495LL;
      }
    }
  }
}
