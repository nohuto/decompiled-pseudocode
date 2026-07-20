/*
 * XREFs of SmExecPgmEx @ 0x140003328
 * Callers:
 *     SmscpExecuteInitialCommand @ 0x140003280 (SmscpExecuteInitialCommand.c)
 *     SmscpLoadSubSystem @ 0x1400033EC (SmscpLoadSubSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x14000C1E0 (__security_check_cookie.c)
 *     memset_0 @ 0x14000C6C8 (memset_0.c)
 */

__int64 __fastcall SmExecPgmEx(__int64 a1, __int128 *a2)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int16 v10; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v11[38]; // [rsp+22h] [rbp-DEh] BYREF
  int v12; // [rsp+48h] [rbp-B8h]
  __int128 v13; // [rsp+50h] [rbp-B0h]
  __int128 v14; // [rsp+60h] [rbp-A0h]
  __int128 v15; // [rsp+70h] [rbp-90h]
  __int128 v16; // [rsp+80h] [rbp-80h]
  __int128 v17; // [rsp+90h] [rbp-70h]
  __int128 v18; // [rsp+A0h] [rbp-60h]
  __int64 v19; // [rsp+B0h] [rbp-50h]
  char v20; // [rsp+B8h] [rbp-48h]

  v10 = 0;
  memset_0(v11, 0, 0x146uLL);
  v3 = *a2;
  v4 = a2[1];
  v20 = 0;
  v13 = v3;
  v5 = a2[2];
  v12 = 3;
  v14 = v4;
  v6 = a2[3];
  v15 = v5;
  v7 = a2[4];
  v16 = v6;
  v8 = a2[5];
  v17 = v7;
  v19 = *((_QWORD *)a2 + 12);
  v18 = v8;
  return RtlSendMsgToSm(SmpApiConnectionPort, &v10);
}
