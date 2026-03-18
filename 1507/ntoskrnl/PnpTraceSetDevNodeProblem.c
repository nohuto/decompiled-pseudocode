/*
 * XREFs of PnpTraceSetDevNodeProblem @ 0x140538B60
 * Callers:
 *     PipSetDevNodeProblem @ 0x140538A88 (PipSetDevNodeProblem.c)
 * Callees:
 *     _TlgWrite @ 0x1400EFEB0 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400EFFB0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void __fastcall PnpTraceSetDevNodeProblem(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, int a6)
{
  int v7; // r9d
  unsigned __int16 *v8; // r10
  unsigned __int16 *v9; // r11
  int v10; // [rsp+30h] [rbp-79h] BYREF
  int v11; // [rsp+34h] [rbp-75h] BYREF
  int v12; // [rsp+38h] [rbp-71h] BYREF
  int v13; // [rsp+3Ch] [rbp-6Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-69h] BYREF
  _DWORD *v15; // [rsp+60h] [rbp-49h]
  __int64 v16; // [rsp+68h] [rbp-41h]
  __int64 v17; // [rsp+70h] [rbp-39h]
  _DWORD v18[2]; // [rsp+78h] [rbp-31h] BYREF
  _DWORD *v19; // [rsp+80h] [rbp-29h]
  __int64 v20; // [rsp+88h] [rbp-21h]
  __int64 v21; // [rsp+90h] [rbp-19h]
  _DWORD v22[2]; // [rsp+98h] [rbp-11h] BYREF
  int *v23; // [rsp+A0h] [rbp-9h]
  __int64 v24; // [rsp+A8h] [rbp-1h]
  int *v25; // [rsp+B0h] [rbp+7h]
  __int64 v26; // [rsp+B8h] [rbp+Fh]
  int *v27; // [rsp+C0h] [rbp+17h]
  __int64 v28; // [rsp+C8h] [rbp+1Fh]
  int *v29; // [rsp+D0h] [rbp+27h]
  __int64 v30; // [rsp+D8h] [rbp+2Fh]

  if ( stru_14031EF20.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_14031EF20, 0x400000000000uLL) )
    {
      v10 = a5;
      v12 = a6;
      v15 = v18;
      v17 = *((_QWORD *)v9 + 1);
      v18[0] = *v9;
      v19 = v22;
      v21 = *((_QWORD *)v8 + 1);
      v22[0] = *v8;
      v23 = &v11;
      v25 = &v13;
      v27 = &v10;
      v29 = &v12;
      v11 = a3;
      v13 = v7;
      v16 = 2LL;
      v18[1] = 0;
      v20 = 2LL;
      v22[1] = 0;
      v24 = 4LL;
      v26 = 4LL;
      v28 = 4LL;
      v30 = 4LL;
      TlgWrite(&stru_14031EF20, &unk_1402A41B1, 0LL, 0LL, 0xAu, &pData);
    }
  }
}
