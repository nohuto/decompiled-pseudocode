/*
 * XREFs of HUBDTX_SetSelUsingControlTransfer @ 0x1C0022D80
 * Callers:
 *     HUBDSM_SettingSEL @ 0x1C001BB10 (HUBDSM_SettingSEL.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009730 (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C0026FD8 (HUBMISC_ControlTransfer.c)
 */

void __fastcall HUBDTX_SetSelUsingControlTransfer(unsigned __int16 *a1)
{
  __int64 v1; // r10
  unsigned __int16 v3; // r9
  int v4; // edi
  unsigned __int16 v5; // dx
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // r9
  unsigned __int16 v8; // dx
  int v9; // edx
  int v10; // eax
  __int64 v11; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)a1;
  v3 = *(_WORD *)(*(_QWORD *)a1 + 2418LL);
  v4 = *(unsigned __int8 *)(*(_QWORD *)a1 + 216LL);
  if ( a1[1088] > v3 )
    v3 = a1[1088];
  v5 = *(_WORD *)(v1 + 2422) + (1000 * (v4 - *(unsigned __int8 *)(v1 + 2424)) + 500) / 1000;
  if ( v3 <= v5 )
  {
    *((_BYTE *)a1 + 2181) = v5;
  }
  else
  {
    *((_BYTE *)a1 + 2181) = v3;
    _InterlockedOr((volatile signed __int32 *)a1 + 550, 1u);
  }
  v6 = a1[1089];
  a1[1093] = v3 + *(_WORD *)(v1 + 2430) + (*(unsigned __int8 *)(*(_QWORD *)a1 + 1131LL) + 5) / 10;
  v7 = *(_WORD *)(v1 + 2420);
  if ( v6 > v7 )
    v7 = v6;
  v8 = *(_WORD *)(v1 + 2426) + (1000 * (v4 - *(unsigned __int8 *)(v1 + 2428)) + 500) / 1000;
  if ( v7 <= v8 )
  {
    a1[1092] = v8;
  }
  else
  {
    a1[1092] = v7;
    _InterlockedOr((volatile signed __int32 *)a1 + 550, 2u);
  }
  a1[1094] = v7 + *(_WORD *)(v1 + 2432) + (*(unsigned __int8 *)(*(_QWORD *)a1 + 1131LL) + 5) / 10;
  if ( (_BYTE)v4 )
    v9 = (800 * v4 + 2200 + (v4 + 1) * (a1[1278] + a1[1279])) / 1000;
  else
    LOWORD(v9) = a1[1278] + a1[1279];
  *((_BYTE *)a1 + 2180) = *((_BYTE *)a1 + 2181) + v9 + 5;
  a1[1091] = v9 + a1[1092] + 5;
  *((_BYTE *)a1 + 384) &= 0x1Cu;
  *((_BYTE *)a1 + 385) = 48;
  *((_DWORD *)a1 + 97) = 393216;
  a1[193] = 0;
  v10 = HUBMISC_ControlTransfer(
          *(_QWORD *)a1,
          *((_QWORD *)a1 + 3),
          (_DWORD)a1,
          (int)a1 + 232,
          (__int64)HUBDTX_ControlTransferComplete,
          (__int64)(a1 + 1090),
          6,
          1,
          *((_BYTE *)a1 + 1496));
  if ( v10 < 0 )
  {
    LODWORD(v11) = v10;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*((_QWORD *)a1 + 1) + 1432LL),
      2u,
      5u,
      0x62u,
      (__int64)&WPP_f73478d826785beb676296ba3ee7c315_Traceguids,
      v11);
    HUBSM_AddEvent((__int64)(a1 + 244), 0xFA4u);
  }
}
