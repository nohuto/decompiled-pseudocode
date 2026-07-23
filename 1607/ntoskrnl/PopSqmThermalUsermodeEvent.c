/*
 * XREFs of PopSqmThermalUsermodeEvent @ 0x140676B48
 * Callers:
 *     PopThermalProcessUsermodeEvent @ 0x140670490 (PopThermalProcessUsermodeEvent.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall PopSqmThermalUsermodeEvent(__int64 a1, __int64 a2, int a3)
{
  int v5; // r9d
  int v6; // r10d
  __int16 v7; // r11
  int v8; // [rsp+30h] [rbp-41h] BYREF
  int v9; // [rsp+34h] [rbp-3Dh] BYREF
  int v10; // [rsp+38h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-31h] BYREF
  int *v12; // [rsp+60h] [rbp-11h]
  int v13; // [rsp+68h] [rbp-9h]
  int v14; // [rsp+6Ch] [rbp-5h]
  int *v15; // [rsp+70h] [rbp-1h]
  int v16; // [rsp+78h] [rbp+7h]
  int v17; // [rsp+7Ch] [rbp+Bh]
  int *v18; // [rsp+80h] [rbp+Fh]
  int v19; // [rsp+88h] [rbp+17h]
  int v20; // [rsp+8Ch] [rbp+1Bh]
  _DWORD *v21; // [rsp+90h] [rbp+1Fh]
  int v22; // [rsp+98h] [rbp+27h]
  int v23; // [rsp+9Ch] [rbp+2Bh]
  __int64 v24; // [rsp+A0h] [rbp+2Fh]
  _DWORD v25[2]; // [rsp+A8h] [rbp+37h] BYREF

  if ( hProvider.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&hProvider, 0x800000000000uLL) )
    {
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v25[1] = 0;
      v12 = &v8;
      v15 = &v9;
      v18 = &v10;
      v21 = v25;
      v25[0] = (unsigned __int16)(2 * v7);
      v8 = a3;
      v9 = v5;
      v10 = v6;
      v13 = 4;
      v16 = 4;
      v19 = 4;
      v22 = 2;
      v24 = a2;
      TlgWrite(&hProvider, &unk_14027D5C5, 0LL, 0LL, 7u, &pData);
    }
  }
}
