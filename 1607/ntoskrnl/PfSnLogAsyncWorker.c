/*
 * XREFs of PfSnLogAsyncWorker @ 0x1404D7D54
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1404D7A84 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall PfSnLogAsyncWorker(__int64 a1, const EVENT_DESCRIPTOR *a2)
{
  REGHANDLE v2; // rdi
  __int64 v5; // rax
  ULONG v6; // r9d
  __int16 v7; // [rsp+30h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-19h] BYREF
  __int64 v9; // [rsp+50h] [rbp-9h]
  int v10; // [rsp+58h] [rbp-1h]
  int v11; // [rsp+5Ch] [rbp+3h]
  __int64 v12; // [rsp+60h] [rbp+7h]
  __int64 v13; // [rsp+68h] [rbp+Fh]
  __int64 v14; // [rsp+70h] [rbp+17h]
  __int64 v15; // [rsp+78h] [rbp+1Fh]
  __int64 v16; // [rsp+80h] [rbp+27h]
  __int64 v17; // [rsp+88h] [rbp+2Fh]

  if ( a1 )
  {
    v2 = RegHandle;
    if ( RegHandle )
    {
      if ( EtwEventEnabled(RegHandle, a2) )
      {
        v5 = -1LL;
        do
          ++v5;
        while ( *(_WORD *)(a1 + 16 + 2 * v5) );
        v7 = v5;
        v6 = 4;
        UserData.Ptr = (ULONGLONG)&v7;
        v10 = 2 * (unsigned __int16)v5;
        v12 = a1 + 76;
        v14 = a1 + 80;
        *(_QWORD *)&UserData.Size = 2LL;
        v9 = a1 + 16;
        v11 = 0;
        v13 = 4LL;
        v15 = 4LL;
        if ( a2 == (const EVENT_DESCRIPTOR *)&PfSnEvt_AsyncWorker_Start )
        {
          v17 = 4LL;
          v16 = a1 + 124;
          v6 = 5;
        }
        EtwWrite(v2, a2, 0LL, v6, &UserData);
      }
    }
  }
}
