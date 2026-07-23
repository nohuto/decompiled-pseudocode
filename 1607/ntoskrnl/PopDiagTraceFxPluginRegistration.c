/*
 * XREFs of PopDiagTraceFxPluginRegistration @ 0x140671740
 * Callers:
 *     PopDiagTraceFxRundown @ 0x140110D6C (PopDiagTraceFxRundown.c)
 *     PopFxRegisterPluginEx @ 0x140203328 (PopFxRegisterPluginEx.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceFxPluginRegistration(__int64 a1, __int64 a2, char a3)
{
  const EVENT_DESCRIPTOR *v3; // rbx
  const EVENT_DESCRIPTOR *v4; // rax
  REGHANDLE v5; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v8; // [rsp+40h] [rbp-28h]
  int v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+4Ch] [rbp-1Ch]
  __int64 v11; // [rsp+70h] [rbp+8h] BYREF
  __int64 v12; // [rsp+78h] [rbp+10h] BYREF

  v12 = a2;
  v11 = a1;
  v3 = (const EVENT_DESCRIPTOR *)&POP_ETW_EVENT_PLUGIN_REGISTRATION_RUNDOWN;
  v4 = &POP_ETW_EVENT_PLUGIN_REGISTRATION;
  if ( !a3 )
    v3 = &POP_ETW_EVENT_PLUGIN_REGISTRATION;
  if ( PopDiagHandleRegistered )
  {
    v5 = PopDiagHandle;
    LOBYTE(v4) = EtwEventEnabled(PopDiagHandle, v3);
    if ( (_BYTE)v4 )
    {
      UserData.Reserved = 0;
      v10 = 0;
      UserData.Ptr = (ULONGLONG)&v11;
      UserData.Size = 8;
      v8 = &v12;
      v9 = 8;
      LOBYTE(v4) = EtwWrite(v5, v3, 0LL, 2u, &UserData);
    }
  }
  return (char)v4;
}
