/*
 * XREFs of TtmiLogExitProximity @ 0x14067B014
 * Callers:
 *     TtmpExitProximity @ 0x140678100 (TtmpExitProximity.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall TtmiLogExitProximity(int a1, unsigned int a2, char a3)
{
  _UNKNOWN **v3; // rax
  __int64 v5; // rdi
  int SessionId; // eax
  char v9; // [rsp+38h] [rbp-39h] BYREF
  int v10; // [rsp+3Ch] [rbp-35h] BYREF
  int v11; // [rsp+40h] [rbp-31h] BYREF
  __int64 v12; // [rsp+48h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-19h] BYREF
  int *v14; // [rsp+78h] [rbp+7h]
  int v15; // [rsp+80h] [rbp+Fh]
  int v16; // [rsp+84h] [rbp+13h]
  int *v17; // [rsp+88h] [rbp+17h]
  int v18; // [rsp+90h] [rbp+1Fh]
  int v19; // [rsp+94h] [rbp+23h]
  __int64 *v20; // [rsp+98h] [rbp+27h]
  int v21; // [rsp+A0h] [rbp+2Fh]
  int v22; // [rsp+A4h] [rbp+33h]
  char *v23; // [rsp+A8h] [rbp+37h]
  int v24; // [rsp+B0h] [rbp+3Fh]
  int v25; // [rsp+B4h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+5Fh] BYREF

  v3 = &retaddr;
  v5 = a2;
  if ( stru_1407478B0.LevelPlus1 > 5 )
  {
    LOBYTE(v3) = TlgKeywordOn(&stru_1407478B0, 0x400000000001uLL);
    if ( (_BYTE)v3 )
    {
      SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v10 = SessionId;
      v14 = &v10;
      v17 = &v11;
      v20 = &v12;
      v23 = &v9;
      v11 = a1;
      v12 = v5;
      v9 = a3;
      v15 = 4;
      v18 = 4;
      v21 = 8;
      v24 = 1;
      LOBYTE(v3) = TlgWrite(&stru_1407478B0, &unk_14027E11C, 0LL, 0LL, 6u, &pData);
    }
  }
  return (char)v3;
}
