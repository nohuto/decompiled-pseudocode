/*
 * XREFs of HUBDTX_SetSelUsingControlTransfer @ 0x1C00250C0
 * Callers:
 *     HUBDSM_SettingSEL @ 0x1C001DB10 (HUBDSM_SettingSEL.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009BF8 (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C002956C (HUBMISC_ControlTransfer.c)
 */

void __fastcall HUBDTX_SetSelUsingControlTransfer(unsigned __int16 *a1)
{
  __int64 v1; // r10
  _BYTE *v2; // r8
  unsigned __int16 v4; // r9
  int v5; // edi
  unsigned __int16 v6; // dx
  unsigned __int16 v7; // ax
  unsigned __int16 v8; // r9
  unsigned __int16 v9; // dx
  unsigned int v10; // edx
  char v11; // al
  __int16 v12; // dx
  int v13; // eax
  __int64 v14; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)a1;
  v2 = a1 + 1090;
  v4 = *(_WORD *)(*(_QWORD *)a1 + 2442LL);
  v5 = *(unsigned __int8 *)(*(_QWORD *)a1 + 232LL);
  if ( a1[1088] > v4 )
    v4 = a1[1088];
  v6 = *(_WORD *)(v1 + 2446) + (1000 * (v5 - *(unsigned __int8 *)(v1 + 2448)) + 500) / 1000;
  if ( v4 <= v6 )
  {
    *((_BYTE *)a1 + 2181) = v6;
  }
  else
  {
    *((_BYTE *)a1 + 2181) = v4;
    _InterlockedOr((volatile signed __int32 *)a1 + 550, 1u);
  }
  v7 = a1[1089];
  a1[1093] = v4 + *(_WORD *)(v1 + 2454) + ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)a1 + 1155LL) + 5) / 0xA;
  v8 = *(_WORD *)(v1 + 2444);
  if ( v7 > v8 )
    v8 = v7;
  v9 = *(_WORD *)(v1 + 2450) + (1000 * (v5 - *(unsigned __int8 *)(v1 + 2452)) + 500) / 1000;
  if ( v8 <= v9 )
  {
    a1[1092] = v9;
  }
  else
  {
    a1[1092] = v8;
    _InterlockedOr((volatile signed __int32 *)a1 + 550, 2u);
  }
  a1[1094] = v8 + *(_WORD *)(v1 + 2456) + ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)a1 + 1155LL) + 5) / 0xA;
  if ( (_BYTE)v5 )
    v10 = (800 * v5 + 2200 + (v5 + 1) * (a1[1278] + (unsigned int)a1[1279])) / 0x3E8;
  else
    LOWORD(v10) = a1[1278] + a1[1279];
  v11 = *((_BYTE *)a1 + 2181) + v10;
  v12 = a1[1092] + v10;
  *v2 = v11 + 5;
  a1[1091] = v12 + 5;
  *((_BYTE *)a1 + 384) &= 0x1Cu;
  *((_BYTE *)a1 + 385) = 48;
  *((_DWORD *)a1 + 97) = 393216;
  a1[193] = 0;
  v13 = HUBMISC_ControlTransfer(
          *(_QWORD *)a1,
          *((_QWORD *)a1 + 3),
          (_DWORD)a1,
          (int)a1 + 232,
          (__int64)HUBDTX_ControlTransferComplete,
          (__int64)v2,
          6,
          1,
          *((_BYTE *)a1 + 1496));
  if ( v13 < 0 )
  {
    LODWORD(v14) = v13;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*((_QWORD *)a1 + 1) + 1432LL),
      2u,
      5u,
      0x62u,
      (__int64)&WPP_1456c6ef7b533877ee207863935bf626_Traceguids,
      v14);
    HUBSM_AddEvent((__int64)(a1 + 244), 4004);
  }
}
