/*
 * XREFs of HvpLogInvalidLogHeader @ 0x1401B6FE0
 * Callers:
 *     HvpGetLogHeader @ 0x140610B28 (HvpGetLogHeader.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvpHeaderCheckSum @ 0x140480C14 (HvpHeaderCheckSum.c)
 */

void __fastcall HvpLogInvalidLogHeader(__int64 a1, __int64 *a2, char a3, int *a4)
{
  char v4; // [rsp+30h] [rbp-D0h] BYREF
  int v5; // [rsp+34h] [rbp-CCh] BYREF
  int v6; // [rsp+38h] [rbp-C8h] BYREF
  int v7; // [rsp+3Ch] [rbp-C4h] BYREF
  int v8; // [rsp+40h] [rbp-C0h] BYREF
  int v9; // [rsp+44h] [rbp-BCh] BYREF
  int v10; // [rsp+48h] [rbp-B8h] BYREF
  int v11; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v12; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v13; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  char *v15; // [rsp+80h] [rbp-80h]
  __int64 v16; // [rsp+88h] [rbp-78h]
  int *v17; // [rsp+90h] [rbp-70h]
  __int64 v18; // [rsp+98h] [rbp-68h]
  int *v19; // [rsp+A0h] [rbp-60h]
  __int64 v20; // [rsp+A8h] [rbp-58h]
  int *v21; // [rsp+B0h] [rbp-50h]
  __int64 v22; // [rsp+B8h] [rbp-48h]
  __int64 *v23; // [rsp+C0h] [rbp-40h]
  __int64 v24; // [rsp+C8h] [rbp-38h]
  __int64 *v25; // [rsp+D0h] [rbp-30h]
  __int64 v26; // [rsp+D8h] [rbp-28h]
  int *v27; // [rsp+E0h] [rbp-20h]
  __int64 v28; // [rsp+E8h] [rbp-18h]
  int *v29; // [rsp+F0h] [rbp-10h]
  __int64 v30; // [rsp+F8h] [rbp-8h]
  int *v31; // [rsp+100h] [rbp+0h]
  __int64 v32; // [rsp+108h] [rbp+8h]
  int *v33; // [rsp+110h] [rbp+10h]
  __int64 v34; // [rsp+118h] [rbp+18h]

  if ( stru_1402F34E0.LevelPlus1 > 5 )
  {
    v5 = *a4;
    v6 = a4[1];
    v7 = a4[2];
    v12 = *(_QWORD *)(a4 + 3);
    v13 = *a2;
    v8 = a4[7];
    v9 = a4[10];
    v10 = a4[127];
    v4 = a3;
    v11 = HvpHeaderCheckSum(a4);
    v15 = &v4;
    v17 = &v5;
    v19 = &v6;
    v21 = &v7;
    v23 = &v12;
    v25 = &v13;
    v27 = &v8;
    v29 = &v9;
    v31 = &v10;
    v33 = &v11;
    v16 = 1LL;
    v18 = 4LL;
    v20 = 4LL;
    v22 = 4LL;
    v24 = 8LL;
    v26 = 8LL;
    v28 = 4LL;
    v30 = 4LL;
    v32 = 4LL;
    v34 = 4LL;
    TlgWrite(&stru_1402F34E0, &unk_14027B3EE, 0LL, 0LL, 0xCu, &pData);
  }
}
