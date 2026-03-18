/*
 * XREFs of Endpoint_TransferEventHandler @ 0x1C001A8E4
 * Callers:
 *     UsbDevice_TransferEventHandler @ 0x1C00305FC (UsbDevice_TransferEventHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00023E0 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0003980 (WPP_RECORDER_SF_ddd.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0014F6C (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001595C (Controller_ReportFatalError.c)
 *     Endpoint_HaltedCompletionCode @ 0x1C00186B4 (Endpoint_HaltedCompletionCode.c)
 *     Endpoint_Stream_IsTransferEventLikelyDuplicate @ 0x1C001A714 (Endpoint_Stream_IsTransferEventLikelyDuplicate.c)
 *     WPP_RECORDER_SF_ddqL @ 0x1C001C868 (WPP_RECORDER_SF_ddqL.c)
 *     WPP_RECORDER_SF_ddx @ 0x1C001CCE8 (WPP_RECORDER_SF_ddx.c)
 *     TR_TransferEventHandler @ 0x1C0020AB0 (TR_TransferEventHandler.c)
 *     ESM_AddEvent @ 0x1C00383C8 (ESM_AddEvent.c)
 */

void __fastcall Endpoint_TransferEventHandler(__int64 a1, _QWORD **a2)
{
  int v4; // edx
  signed __int64 v5; // r8
  _QWORD *v6; // r14
  int v7; // r9d
  __int64 v8; // rax
  signed __int64 v9; // r9
  int v10; // ebp
  int v11; // r8d
  int v12; // edx
  int v13; // r8d
  int v14; // r9d
  int v15; // edx
  const char *v16; // rax
  char v17; // [rsp+70h] [rbp+8h] BYREF

  v4 = *(unsigned __int8 *)(a1 + 11);
  if ( v4 == 33 || v4 == 5 || (unsigned int)(v4 - 192) <= 0x1F )
  {
    Controller_HwVerifierBreakIfEnabled(
      *a2,
      (int)a2[1],
      (int)a2[3],
      2048LL,
      "Unrecognized completion code in Transfer Event TRB",
      0LL,
      a2 + 23);
    v11 = 4112;
    goto LABEL_42;
  }
  if ( !*((_BYTE *)a2 + 37) )
  {
    TR_TransferEventHandler(a1, a2[11]);
    return;
  }
  v5 = *(_QWORD *)a1;
  v6 = a2[17];
  if ( *(_QWORD *)a1 )
  {
    v8 = v6[4];
    v9 = *(_QWORD *)(v8 + 24);
    if ( v5 >= v9 && v5 < v9 + *(unsigned int *)(v8 + 40) )
    {
      v7 = 85;
      goto LABEL_11;
    }
    v10 = 1;
    if ( *((_DWORD *)v6 + 2) )
    {
      while ( !(unsigned __int8)TR_TransferEventHandler(a1, a2[17][11 * (unsigned int)(v10 - 1) + 5]) )
      {
        if ( (unsigned int)++v10 > *((_DWORD *)v6 + 2) )
          goto LABEL_15;
      }
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_ddd(
          (__int64)a2[10],
          5u,
          0xCu,
          0x56u,
          (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids,
          *((unsigned __int8 *)a2[2] + 135),
          *((_DWORD *)a2 + 36),
          v10 + 1);
      return;
    }
LABEL_15:
    if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
    {
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_ddx((unsigned int)a2[10], v4, v5, 87);
      v11 = 4126;
LABEL_42:
      Controller_ReportFatalError((__int64)*a2, 2, v11, (__int64)a2[2], (__int64)a2, 0LL);
      return;
    }
    if ( (unsigned __int8)(*(_BYTE *)(a1 + 11) - 26) <= 2u )
    {
      WPP_RECORDER_SF_dd(
        (__int64)a2[10],
        2u,
        0xCu,
        0x58u,
        (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids,
        *((unsigned __int8 *)a2[2] + 135),
        *((_DWORD *)a2 + 36));
      goto LABEL_30;
    }
    if ( !Endpoint_Stream_IsTransferEventLikelyDuplicate((_QWORD *)a1, (__int64)a2, &v17) )
    {
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_ddx((unsigned int)a2[10], v12, v13, 92);
      v11 = 4127;
      goto LABEL_42;
    }
    if ( ((*a2)[29] & 0x4000000000LL) != 0 )
    {
      v14 = 89;
    }
    else
    {
      if ( !v17 || (unsigned int)*(unsigned __int8 *)(a1 + 11) - 26 > 2 )
      {
        LOBYTE(v12) = 2;
        WPP_RECORDER_SF_ddx((unsigned int)a2[10], v12, v13, 91);
        v11 = 4128;
        goto LABEL_42;
      }
      v14 = 90;
    }
    LOBYTE(v12) = 3;
    WPP_RECORDER_SF_ddx((unsigned int)a2[10], v12, v13, v14);
    return;
  }
  v7 = 84;
LABEL_11:
  WPP_RECORDER_SF_ddqL((unsigned int)a2[10], v4, v5, v7);
LABEL_30:
  if ( Endpoint_HaltedCompletionCode(*(unsigned __int8 *)(a1 + 11)) )
  {
    _m_prefetchw(a2 + 4);
    if ( (_InterlockedOr((volatile signed __int32 *)a2 + 8, 0x20u) & 0x20) != 0 )
    {
      v16 = "Received duplicate Transfer Event TRB with Halted Completion Code";
LABEL_33:
      Controller_HwVerifierBreakIfEnabled(*a2, (int)a2[1], (int)a2[3], 0x2000000LL, v16, 0LL, 0LL);
      return;
    }
    *((_DWORD *)a2[17] + 6) = v15;
    _InterlockedOr((volatile signed __int32 *)a2 + 8, 4u);
LABEL_35:
    ESM_AddEvent(a2 + 34);
    return;
  }
  if ( (unsigned int)(v15 - 26) <= 2 )
  {
    _m_prefetchw(a2 + 4);
    if ( (_InterlockedOr((volatile signed __int32 *)a2 + 8, 0x10u) & 0x10) != 0 )
    {
      v16 = "Received duplicate Stopped Transfer Events";
      goto LABEL_33;
    }
    _m_prefetchw(a2 + 4);
    if ( (_InterlockedXor((volatile signed __int32 *)a2 + 8, 8u) & 8) != 0 )
      goto LABEL_35;
  }
}
