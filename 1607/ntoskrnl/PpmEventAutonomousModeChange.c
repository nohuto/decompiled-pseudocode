/*
 * XREFs of PpmEventAutonomousModeChange @ 0x14020B7F8
 * Callers:
 *     PpmUpdateTargetProcessorPolicy @ 0x14020519C (PpmUpdateTargetProcessorPolicy.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall PpmEventAutonomousModeChange(__int64 a1, int a2)
{
  REGHANDLE v3; // rbx
  __int16 v4; // ax
  __int16 v5; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  __int64 v7; // [rsp+48h] [rbp-28h]
  int v8; // [rsp+50h] [rbp-20h]
  int v9; // [rsp+54h] [rbp-1Ch]
  int *v10; // [rsp+58h] [rbp-18h]
  int v11; // [rsp+60h] [rbp-10h]
  int v12; // [rsp+64h] [rbp-Ch]
  int v13; // [rsp+88h] [rbp+18h] BYREF

  v13 = a2;
  if ( PpmEtwRegistered )
  {
    v3 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_AUTONOMOUS_MODE_CHANGE) )
    {
      v4 = *(unsigned __int8 *)(a1 + 1616);
      UserData.Reserved = 0;
      v9 = 0;
      v12 = 0;
      v5 = v4;
      UserData.Ptr = (ULONGLONG)&v5;
      v7 = a1 + 1617;
      v10 = &v13;
      UserData.Size = 2;
      v8 = 1;
      v11 = 4;
      EtwWrite(v3, &PPM_ETW_AUTONOMOUS_MODE_CHANGE, 0LL, 3u, &UserData);
    }
  }
}
