/*
 * XREFs of CmpTraceHiveFlushWrotePrimaryFile @ 0x140482A3C
 * Callers:
 *     HvWriteHivePrimaryFile @ 0x1404827F8 (HvWriteHivePrimaryFile.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall CmpTraceHiveFlushWrotePrimaryFile(int a1, int a2)
{
  REGHANDLE v2; // rbx
  BOOLEAN result; // al
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-30h] BYREF
  int *v6; // [rsp+50h] [rbp-20h]
  int v7; // [rsp+58h] [rbp-18h]
  int v8; // [rsp+5Ch] [rbp-14h]
  int v9; // [rsp+80h] [rbp+10h] BYREF
  int v10; // [rsp+88h] [rbp+18h] BYREF

  v10 = a2;
  v9 = a1;
  v2 = EtwpRegTraceHandle;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_FLUSH_WROTE_PRIMARY_FILE;
  result = EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor);
  if ( result )
  {
    UserData.Reserved = 0;
    v8 = 0;
    UserData.Ptr = (ULONGLONG)&v9;
    UserData.Size = 4;
    v6 = &v10;
    v7 = 4;
    return EtwWrite(v2, &EventDescriptor, 0LL, 2u, &UserData);
  }
  return result;
}
