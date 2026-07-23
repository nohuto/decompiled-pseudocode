/*
 * XREFs of PopDiagTraceDevicesLevel @ 0x1403CF0BC
 * Callers:
 *     PoBroadcastSystemState @ 0x1403CEBF8 (PoBroadcastSystemState.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceDevicesLevel(int a1, int a2, char a3, char a4)
{
  const EVENT_DESCRIPTOR *v4; // rbx
  const EVENT_DESCRIPTOR *v5; // rax
  REGHANDLE v6; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  char *v9; // [rsp+40h] [rbp-28h]
  int v10; // [rsp+48h] [rbp-20h]
  int v11; // [rsp+4Ch] [rbp-1Ch]
  int v12; // [rsp+70h] [rbp+8h] BYREF
  char v13; // [rsp+80h] [rbp+18h] BYREF

  v13 = a3;
  v12 = a1;
  if ( a2 )
  {
    v4 = (const EVENT_DESCRIPTOR *)&POP_ETW_EVENT_DEVICESWAKELEVEL;
    v5 = (const EVENT_DESCRIPTOR *)&POP_ETW_EVENT_DEVICESWAKELEVEL_END;
  }
  else
  {
    v4 = (const EVENT_DESCRIPTOR *)&POP_ETW_EVENT_DEVICESSUSPENDLEVEL;
    v5 = &POP_ETW_EVENT_DEVICESSUSPENDLEVEL_END;
  }
  if ( !a4 )
    v4 = v5;
  if ( PopDiagHandleRegistered )
  {
    v6 = PopDiagHandle;
    LOBYTE(v5) = EtwEventEnabled(PopDiagHandle, v4);
    if ( (_BYTE)v5 )
    {
      UserData.Reserved = 0;
      v11 = 0;
      UserData.Ptr = (ULONGLONG)&v12;
      UserData.Size = 4;
      v9 = &v13;
      v10 = 1;
      LOBYTE(v5) = EtwWrite(v6, v4, 0LL, 2u, &UserData);
    }
  }
  return (char)v5;
}
