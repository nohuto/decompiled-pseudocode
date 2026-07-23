/*
 * XREFs of CmpTraceHiveUnloadStart @ 0x140517A80
 * Callers:
 *     CmUnloadKey @ 0x140517C64 (CmUnloadKey.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall CmpTraceHiveUnloadStart(unsigned __int16 *a1, unsigned __int16 *a2)
{
  REGHANDLE v2; // rsi
  BOOLEAN result; // al
  ULONGLONG v6; // rax
  unsigned int v7; // r9d
  __int64 v8; // rax
  unsigned int v9; // r9d
  ULONGLONG v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int16 v13; // [rsp+38h] [rbp-19h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[4]; // [rsp+58h] [rbp+7h] BYREF

  v2 = EtwpRegTraceHandle;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_UNLOAD_START;
  result = EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor);
  if ( result )
  {
    v6 = *((_QWORD *)a1 + 1);
    v7 = 0;
    v13 = 0;
    if ( v6 )
    {
      UserData[0].Ptr = v6;
      v7 = 1;
      UserData[0].Size = *a1;
      UserData[0].Reserved = 0;
    }
    v8 = v7;
    v9 = v7 + 1;
    UserData[v8].Ptr = (ULONGLONG)&v13;
    *(_QWORD *)&UserData[v8].Size = 2LL;
    v10 = *((_QWORD *)a2 + 1);
    if ( v10 )
    {
      v11 = v9++;
      UserData[v11].Ptr = v10;
      UserData[v11].Size = *a2;
      *(&UserData[0].Reserved + 1 * v11) = 0;
    }
    v12 = v9;
    UserData[v12].Ptr = (ULONGLONG)&v13;
    *(_QWORD *)&UserData[v12].Size = 2LL;
    return EtwWrite(v2, &EventDescriptor, 0LL, v9 + 1, UserData);
  }
  return result;
}
