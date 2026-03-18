/*
 * XREFs of PnpTraceClearDevNodeProblem @ 0x14058DECC
 * Callers:
 *     PipClearDevNodeProblem @ 0x140538C94 (PipClearDevNodeProblem.c)
 * Callees:
 *     _TlgWrite @ 0x1400EFEB0 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400EFFB0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void __fastcall PnpTraceClearDevNodeProblem(__int64 a1, __int64 a2, int a3)
{
  int v4; // r9d
  unsigned __int16 *v5; // r10
  unsigned __int16 *v6; // r11
  int v7; // [rsp+30h] [rbp-49h] BYREF
  int v8; // [rsp+34h] [rbp-45h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  _DWORD *v10; // [rsp+60h] [rbp-19h]
  __int64 v11; // [rsp+68h] [rbp-11h]
  __int64 v12; // [rsp+70h] [rbp-9h]
  _DWORD v13[2]; // [rsp+78h] [rbp-1h] BYREF
  _DWORD *v14; // [rsp+80h] [rbp+7h]
  __int64 v15; // [rsp+88h] [rbp+Fh]
  __int64 v16; // [rsp+90h] [rbp+17h]
  _DWORD v17[2]; // [rsp+98h] [rbp+1Fh] BYREF
  int *v18; // [rsp+A0h] [rbp+27h]
  __int64 v19; // [rsp+A8h] [rbp+2Fh]
  int *v20; // [rsp+B0h] [rbp+37h]
  __int64 v21; // [rsp+B8h] [rbp+3Fh]

  if ( stru_14031EF20.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_14031EF20, 0x400000000000uLL) )
    {
      v8 = a3;
      v10 = v13;
      v12 = *((_QWORD *)v6 + 1);
      v13[0] = *v6;
      v14 = v17;
      v16 = *((_QWORD *)v5 + 1);
      v17[0] = *v5;
      v18 = &v8;
      v20 = &v7;
      v7 = v4;
      v11 = 2LL;
      v13[1] = 0;
      v15 = 2LL;
      v17[1] = 0;
      v19 = 4LL;
      v21 = 4LL;
      TlgWrite(&stru_14031EF20, &unk_1402A422C, 0LL, 0LL, 8u, &pData);
    }
  }
}
