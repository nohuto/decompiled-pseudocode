/*
 * XREFs of CmpTraceHiveRestoreStart @ 0x1405FBEF8
 * Callers:
 *     CmRestoreKey @ 0x14060C300 (CmRestoreKey.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     CmpQueryNameString @ 0x1404CC8A8 (CmpQueryNameString.c)
 */

void __fastcall CmpTraceHiveRestoreStart(void *a1, int a2)
{
  REGHANDLE v2; // rdi
  unsigned int v4; // r9d
  __int64 v5; // rax
  unsigned int v6; // r9d
  __int64 v7; // rax
  __int16 v8; // [rsp+30h] [rbp-19h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[3]; // [rsp+58h] [rbp+Fh] BYREF
  int v12; // [rsp+B8h] [rbp+6Fh] BYREF

  v12 = a2;
  v2 = EtwpRegTraceHandle;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_RESTORE_START;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
  {
    v4 = 0;
    if ( a1 )
    {
      UnicodeString.Buffer = 0LL;
      *(_DWORD *)&UnicodeString.Length = 0;
      if ( CmpQueryNameString(a1, &UnicodeString) < 0 )
        return;
      v4 = 1;
      v2 = EtwpRegTraceHandle;
      UserData[0].Ptr = (ULONGLONG)UnicodeString.Buffer;
      UserData[0].Size = UnicodeString.Length;
      UserData[0].Reserved = 0;
    }
    v5 = v4;
    v8 = 0;
    v6 = v4 + 1;
    UserData[v5].Ptr = (ULONGLONG)&v8;
    *(_QWORD *)&UserData[v5].Size = 2LL;
    v7 = v6;
    UserData[v7].Ptr = (ULONGLONG)&v12;
    *(_QWORD *)&UserData[v7].Size = 4LL;
    EtwWrite(v2, &EventDescriptor, 0LL, v6 + 1, UserData);
    if ( a1 )
      RtlFreeAnsiString(&UnicodeString);
  }
}
