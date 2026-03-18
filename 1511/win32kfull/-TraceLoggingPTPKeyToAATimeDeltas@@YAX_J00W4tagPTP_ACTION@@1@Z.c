/*
 * XREFs of ?TraceLoggingPTPKeyToAATimeDeltas@@YAX_J00W4tagPTP_ACTION@@1@Z @ 0x1C022595C
 * Callers:
 *     ?TPAAPOnKeyPress@@YAXH@Z @ 0x1C01F2434 (-TPAAPOnKeyPress@@YAXH@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0091E04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0091E28 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingPTPKeyToAATimeDeltas(
        const struct _TlgProvider_t *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  const GUID *v7; // r9
  int v8; // r10d
  int v9; // [rsp+30h] [rbp-51h] BYREF
  int v10; // [rsp+34h] [rbp-4Dh] BYREF
  int v11; // [rsp+38h] [rbp-49h] BYREF
  int v12; // [rsp+3Ch] [rbp-45h] BYREF
  int v13; // [rsp+40h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-31h] BYREF
  int *v15; // [rsp+70h] [rbp-11h]
  __int64 v16; // [rsp+78h] [rbp-9h]
  int *v17; // [rsp+80h] [rbp-1h]
  __int64 v18; // [rsp+88h] [rbp+7h]
  int *v19; // [rsp+90h] [rbp+Fh]
  __int64 v20; // [rsp+98h] [rbp+17h]
  int *v21; // [rsp+A0h] [rbp+1Fh]
  __int64 v22; // [rsp+A8h] [rbp+27h]
  int *v23; // [rsp+B0h] [rbp+2Fh]
  __int64 v24; // [rsp+B8h] [rbp+37h]

  if ( (unsigned int)dword_1C031B280 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x400000000000uLL) )
    {
      v13 = (int)v5;
      v15 = &v13;
      v17 = &v11;
      v19 = &v9;
      v21 = &v10;
      v12 = a5;
      v23 = &v12;
      v16 = 4LL;
      v11 = v8;
      v18 = 4LL;
      v9 = (int)v6;
      v20 = 4LL;
      v10 = (int)v7;
      v22 = 4LL;
      v24 = 4LL;
      TlgWrite(v5, &unk_1C02E9767, v6, v7, 7u, &pData);
    }
  }
}
