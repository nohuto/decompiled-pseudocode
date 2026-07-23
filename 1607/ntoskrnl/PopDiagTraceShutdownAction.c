/*
 * XREFs of PopDiagTraceShutdownAction @ 0x1402091BC
 * Callers:
 *     PopExecutePowerAction @ 0x140530CA8 (PopExecutePowerAction.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceShutdownAction(int a1, int a2, int a3)
{
  _UNKNOWN **v3; // rax
  REGHANDLE v6; // rbx
  int v8; // [rsp+30h] [rbp-40h] BYREF
  int v9; // [rsp+34h] [rbp-3Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  int *v11; // [rsp+48h] [rbp-28h]
  int v12; // [rsp+50h] [rbp-20h]
  int v13; // [rsp+54h] [rbp-1Ch]
  int *v14; // [rsp+58h] [rbp-18h]
  int v15; // [rsp+60h] [rbp-10h]
  int v16; // [rsp+64h] [rbp-Ch]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+8h] BYREF
  int v18; // [rsp+88h] [rbp+18h] BYREF

  v3 = &retaddr;
  v18 = a2;
  if ( PopDiagHandleRegistered )
  {
    v6 = PopDiagHandle;
    LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SHUTDOWN_ACTION);
    if ( (_BYTE)v3 )
    {
      UserData.Reserved = 0;
      v13 = 0;
      v16 = 0;
      UserData.Ptr = (ULONGLONG)&v8;
      UserData.Size = 4;
      v11 = &v18;
      v14 = &v9;
      v12 = 4;
      v15 = 4;
      v8 = a1;
      v9 = a3;
      LOBYTE(v3) = EtwWrite(v6, &POP_ETW_EVENT_SHUTDOWN_ACTION, 0LL, 3u, &UserData);
    }
  }
  return (char)v3;
}
