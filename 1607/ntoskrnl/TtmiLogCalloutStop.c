/*
 * XREFs of TtmiLogCalloutStop @ 0x14067A5DC
 * Callers:
 *     TtmpStopCallout @ 0x1406777A0 (TtmpStopCallout.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall TtmiLogCalloutStop(int a1, __int64 a2, int a3, int a4, __int64 a5)
{
  _UNKNOWN **v5; // rax
  int SessionId; // eax
  int v11; // [rsp+38h] [rbp-71h] BYREF
  int v12; // [rsp+3Ch] [rbp-6Dh] BYREF
  int v13; // [rsp+40h] [rbp-69h] BYREF
  __int64 v14; // [rsp+48h] [rbp-61h] BYREF
  __int64 v15; // [rsp+50h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-51h] BYREF
  int *v17; // [rsp+78h] [rbp-31h]
  int v18; // [rsp+80h] [rbp-29h]
  int v19; // [rsp+84h] [rbp-25h]
  int *v20; // [rsp+88h] [rbp-21h]
  int v21; // [rsp+90h] [rbp-19h]
  int v22; // [rsp+94h] [rbp-15h]
  __int64 *v23; // [rsp+98h] [rbp-11h]
  int v24; // [rsp+A0h] [rbp-9h]
  int v25; // [rsp+A4h] [rbp-5h]
  _DWORD *v26; // [rsp+A8h] [rbp-1h]
  int v27; // [rsp+B0h] [rbp+7h]
  int v28; // [rsp+B4h] [rbp+Bh]
  int *v29; // [rsp+B8h] [rbp+Fh]
  _DWORD v30[2]; // [rsp+C0h] [rbp+17h] BYREF
  int *v31; // [rsp+C8h] [rbp+1Fh]
  int v32; // [rsp+D0h] [rbp+27h]
  int v33; // [rsp+D4h] [rbp+2Bh]
  __int64 *v34; // [rsp+D8h] [rbp+2Fh]
  int v35; // [rsp+E0h] [rbp+37h]
  int v36; // [rsp+E4h] [rbp+3Bh]
  _UNKNOWN *retaddr; // [rsp+100h] [rbp+57h] BYREF
  int v38; // [rsp+118h] [rbp+6Fh] BYREF

  v5 = &retaddr;
  v38 = a3;
  if ( stru_1407478B0.LevelPlus1 > 5 )
  {
    LOBYTE(v5) = TlgKeywordOn(&stru_1407478B0, 1uLL);
    if ( (_BYTE)v5 )
    {
      SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v28 = 0;
      v30[1] = 0;
      v33 = 0;
      v36 = 0;
      v11 = SessionId;
      v15 = a5;
      v17 = &v11;
      v20 = &v12;
      v23 = &v14;
      v26 = v30;
      v29 = &v38;
      v31 = &v13;
      v34 = &v15;
      v12 = a1;
      v14 = a2;
      v13 = a4;
      v18 = 4;
      v21 = 4;
      v24 = 8;
      v27 = 2;
      v30[0] = 4;
      v32 = 4;
      v35 = 8;
      LOBYTE(v5) = TlgWrite(&stru_1407478B0, &unk_14027DF60, 0LL, 0LL, 9u, &pData);
    }
  }
  return (char)v5;
}
