/*
 * XREFs of PpmEventTraceParkNodeRundown @ 0x140673FC0
 * Callers:
 *     PpmEventTraceControlCallback @ 0x140581BF8 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall PpmEventTraceParkNodeRundown(__int64 a1)
{
  REGHANDLE v2; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-9h] BYREF
  __int64 v4; // [rsp+40h] [rbp+7h]
  int v5; // [rsp+48h] [rbp+Fh]
  int v6; // [rsp+4Ch] [rbp+13h]
  __int64 v7; // [rsp+50h] [rbp+17h]
  int v8; // [rsp+58h] [rbp+1Fh]
  int v9; // [rsp+5Ch] [rbp+23h]
  __int64 v10; // [rsp+60h] [rbp+27h]
  int v11; // [rsp+68h] [rbp+2Fh]
  int v12; // [rsp+6Ch] [rbp+33h]
  __int64 v13; // [rsp+70h] [rbp+37h]
  int v14; // [rsp+78h] [rbp+3Fh]
  int v15; // [rsp+7Ch] [rbp+43h]

  if ( PpmEtwRegistered )
  {
    v2 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PARK_NODE_RUNDOWN) )
    {
      UserData.Reserved = 0;
      v6 = 0;
      v9 = 0;
      v12 = 0;
      v15 = 0;
      UserData.Ptr = a1 + 4;
      v4 = a1 + 8;
      v7 = a1 + 32;
      v5 = 8;
      v8 = 8;
      v10 = a1 + 102;
      v13 = a1 + 104;
      v11 = 1;
      v14 = 1;
      UserData.Size = 2;
      EtwWrite(v2, &PPM_ETW_PARK_NODE_RUNDOWN, 0LL, 5u, &UserData);
    }
  }
}
