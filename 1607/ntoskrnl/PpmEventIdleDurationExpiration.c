/*
 * XREFs of PpmEventIdleDurationExpiration @ 0x14020BE04
 * Callers:
 *     PpmIdleDurationExpiration @ 0x1402003A4 (PpmIdleDurationExpiration.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall PpmEventIdleDurationExpiration(unsigned __int16 *a1)
{
  REGHANDLE v2; // rdi
  unsigned __int16 v3; // r10
  unsigned __int16 v4; // cx
  unsigned __int16 v5; // dx
  __int64 v6; // r8
  __int64 v7; // r9
  ULONG v8; // r9d
  _QWORD *v9; // r10
  __int64 v10; // r11
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int16 v13; // [rsp+30h] [rbp-3F8h] BYREF
  _QWORD v14[40]; // [rsp+40h] [rbp-3E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[41]; // [rsp+180h] [rbp-2A8h] BYREF

  if ( PpmEtwRegistered )
  {
    v2 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_IDLE_DURATION_EXPIRATION) )
    {
      v3 = *a1;
      v4 = 0;
      v5 = 0;
      v13 = 0;
      do
      {
        v6 = 2LL * v4;
        v14[v6] = 0LL;
        v14[v6 + 1] = 0LL;
        LOWORD(v14[v6 + 1]) = v5;
        if ( v5 >= v3 )
          v7 = 0LL;
        else
          v7 = *(_QWORD *)&a1[4 * v5 + 4];
        v14[2 * v4] = v7;
        if ( v7 )
          ++v4;
        ++v5;
      }
      while ( v5 < 0x14u );
      v13 = v4;
      UserData[0].Ptr = (ULONGLONG)&v13;
      *(_QWORD *)&UserData[0].Size = 2LL;
      v8 = 1;
      if ( v4 )
      {
        v9 = v14;
        v10 = v4;
        do
        {
          v11 = v8;
          v12 = v8 + 1;
          v8 += 2;
          UserData[v11].Ptr = (ULONGLONG)(v9 + 1);
          *(_QWORD *)&UserData[v11].Size = 2LL;
          UserData[v12].Ptr = (ULONGLONG)v9;
          v9 += 2;
          *(_QWORD *)&UserData[v12].Size = 8LL;
          --v10;
        }
        while ( v10 );
      }
      EtwWrite(v2, &PPM_ETW_IDLE_DURATION_EXPIRATION, 0LL, v8, UserData);
    }
  }
}
