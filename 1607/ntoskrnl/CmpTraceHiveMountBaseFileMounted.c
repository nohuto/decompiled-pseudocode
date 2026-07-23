/*
 * XREFs of CmpTraceHiveMountBaseFileMounted @ 0x14047DDB4
 * Callers:
 *     HvLoadHive @ 0x14047DA4C (HvLoadHive.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     CmpQueryNameString @ 0x1404CC8A8 (CmpQueryNameString.c)
 */

void __fastcall CmpTraceHiveMountBaseFileMounted(__int64 a1, int a2)
{
  __int16 v3; // [rsp+38h] [rbp-9h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-1h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp+1Fh] BYREF
  __int16 *v7; // [rsp+70h] [rbp+2Fh]
  __int64 v8; // [rsp+78h] [rbp+37h]
  int *v9; // [rsp+80h] [rbp+3Fh]
  __int64 v10; // [rsp+88h] [rbp+47h]
  int v11; // [rsp+B0h] [rbp+6Fh] BYREF

  v11 = a2;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_MOUNT_BASE_FILE_MOUNTED;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
  {
    UnicodeString.Buffer = 0LL;
    *(_DWORD *)&UnicodeString.Length = 0;
    if ( (int)CmpQueryNameString(a1, &UnicodeString) >= 0 )
    {
      UserData.Ptr = (ULONGLONG)UnicodeString.Buffer;
      UserData.Size = UnicodeString.Length;
      v7 = &v3;
      v9 = &v11;
      UserData.Reserved = 0;
      v3 = 0;
      v8 = 2LL;
      v10 = 4LL;
      EtwWrite(EtwpRegTraceHandle, &EventDescriptor, 0LL, 3u, &UserData);
      RtlFreeAnsiString(&UnicodeString);
    }
  }
}
