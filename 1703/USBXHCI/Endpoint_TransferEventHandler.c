/*
 * XREFs of Endpoint_TransferEventHandler @ 0x1C000FB10
 * Callers:
 *     UsbDevice_TransferEventHandler @ 0x1C0001734 (UsbDevice_TransferEventHandler.c)
 * Callees:
 *     Endpoint_HaltedCompletionCode @ 0x1C0001908 (Endpoint_HaltedCompletionCode.c)
 *     TR_TransferEventHandler @ 0x1C0001A20 (TR_TransferEventHandler.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0004D90 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0007F60 (WPP_RECORDER_SF_ddd.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001ACD8 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001B890 (Controller_ReportFatalError.c)
 *     Endpoint_Stream_IsTransferEventLikelyDuplicate @ 0x1C00207A4 (Endpoint_Stream_IsTransferEventLikelyDuplicate.c)
 *     WPP_RECORDER_SF_ddqL @ 0x1C002257C (WPP_RECORDER_SF_ddqL.c)
 *     WPP_RECORDER_SF_ddx @ 0x1C0022A10 (WPP_RECORDER_SF_ddx.c)
 *     ESM_AddEvent @ 0x1C0036A00 (ESM_AddEvent.c)
 */

char __fastcall Endpoint_TransferEventHandler(__int64 a1, _QWORD *a2, int a3)
{
  __m128i v5; // xmm0
  unsigned int v6; // eax
  int v7; // r9d
  int v8; // edx
  int v9; // r8d
  int v10; // edx
  __int64 v11; // rax
  signed __int64 v12; // rdx
  int v13; // esi
  signed __int64 v14; // r8
  __int64 v15; // rbp
  int v16; // r10d
  const char *v17; // rax
  void *v18; // rcx
  char v20; // [rsp+88h] [rbp+10h] BYREF

  v5 = *(__m128i *)(*a2 + 232LL);
  if ( (_mm_srli_si128(v5, 8).m128i_u8[0] & 4) != 0 && *(_BYTE *)(a1 + 11) == 2 && (*(_DWORD *)(a1 + 12) & 4) == 0 )
  {
    LOBYTE(v6) = WPP_RECORDER_SF_ddqL(a2[10], (_DWORD)a2, a3, 84);
    return v6;
  }
  v16 = *(unsigned __int8 *)(a1 + 11);
  if ( ((v5.m128i_i64[0] & 0x4000000000000000LL) == 0 || v16 != 199)
    && (v16 == 33 || v16 == 5 || (unsigned int)(v16 - 192) <= 0x1F) )
  {
    Controller_HwVerifierBreakIfEnabled(
      *a2,
      a2[1],
      a2[3],
      2048,
      (__int64)"Unrecognized completion code in Transfer Event TRB",
      0LL,
      (__int64)(a2 + 23));
    LOBYTE(v6) = Controller_ReportFatalError(*a2, 2, 4112, a2[2], (__int64)a2, 0LL);
    return v6;
  }
  if ( !*((_BYTE *)a2 + 37) )
  {
    LOBYTE(v6) = TR_TransferEventHandler((_DWORD *)a1, a2[11]);
    return v6;
  }
  v14 = *(_QWORD *)a1;
  v15 = a2[17];
  if ( !*(_QWORD *)a1 )
  {
    WPP_RECORDER_SF_ddqL(a2[10], 0, 0, 85);
LABEL_16:
    if ( Endpoint_HaltedCompletionCode((__int64)a2, *(unsigned __int8 *)(a1 + 11)) )
    {
      v10 = *(unsigned __int8 *)(a1 + 11);
      _m_prefetchw(a2 + 4);
      if ( (_InterlockedOr((volatile signed __int32 *)a2 + 8, 0x20u) & 0x20) == 0 )
      {
        *(_DWORD *)(a2[17] + 24LL) = v10;
        _InterlockedOr((volatile signed __int32 *)a2 + 8, 4u);
        v18 = a2 + 34;
LABEL_23:
        LOBYTE(v6) = ESM_AddEvent(v18);
        return v6;
      }
      v17 = "Received duplicate Transfer Event TRB with Halted Completion Code";
    }
    else
    {
      v6 = *(unsigned __int8 *)(a1 + 11) - 26;
      if ( v6 > 2 )
        return v6;
      _m_prefetchw(a2 + 4);
      if ( (_InterlockedOr((volatile signed __int32 *)a2 + 8, 0x10u) & 0x10) == 0 )
      {
        _m_prefetchw(a2 + 4);
        LOBYTE(v6) = _InterlockedXor((volatile signed __int32 *)a2 + 8, 8u);
        if ( (v6 & 8) == 0 )
          return v6;
        v18 = a2 + 34;
        goto LABEL_23;
      }
      v17 = "Received duplicate Stopped Transfer Events";
    }
    LOBYTE(v6) = Controller_HwVerifierBreakIfEnabled(*a2, a2[1], a2[3], 0x2000000, (__int64)v17, 0LL, 0LL);
    return v6;
  }
  v11 = *(_QWORD *)(v15 + 32);
  v12 = *(_QWORD *)(v11 + 24);
  if ( v14 >= v12 && v14 < v12 + *(unsigned int *)(v11 + 40) )
  {
    WPP_RECORDER_SF_ddqL(a2[10], v12, v14, 86);
    goto LABEL_16;
  }
  v13 = 1;
  if ( *(_DWORD *)(v15 + 8) )
  {
    while ( !TR_TransferEventHandler((_DWORD *)a1, *(_QWORD *)(88LL * (unsigned int)(v13 - 1) + a2[17] + 40)) )
    {
      if ( (unsigned int)++v13 > *(_DWORD *)(v15 + 8) )
        goto LABEL_9;
    }
    LOBYTE(v6) = (_BYTE)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      LOBYTE(v6) = WPP_RECORDER_SF_ddd(
                     a2[10],
                     5u,
                     0xCu,
                     0x57u,
                     (__int64)&WPP_dfd1540ede223d0a50a10695a1612c8d_Traceguids,
                     *(unsigned __int8 *)(a2[2] + 135LL),
                     *((_DWORD *)a2 + 36),
                     v13 + 1);
  }
  else
  {
LABEL_9:
    if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
    {
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_ddx(a2[10], v12, v14, 88);
      LOBYTE(v6) = Controller_ReportFatalError(*a2, 2, 4126, a2[2], (__int64)a2, 0LL);
      return v6;
    }
    if ( (unsigned __int8)(*(_BYTE *)(a1 + 11) - 26) <= 2u )
    {
      WPP_RECORDER_SF_dd(
        a2[10],
        2u,
        0xCu,
        0x59u,
        (__int64)&WPP_dfd1540ede223d0a50a10695a1612c8d_Traceguids,
        *(unsigned __int8 *)(a2[2] + 135LL),
        *((_DWORD *)a2 + 36));
      goto LABEL_16;
    }
    if ( (unsigned __int8)Endpoint_Stream_IsTransferEventLikelyDuplicate(a1, a2, &v20) )
    {
      if ( (*(_QWORD *)(*a2 + 232LL) & 0x4000000000LL) != 0 )
      {
        v7 = 90;
      }
      else
      {
        if ( !v20 || (unsigned int)*(unsigned __int8 *)(a1 + 11) - 26 > 2 )
        {
          LOBYTE(v8) = 2;
          WPP_RECORDER_SF_ddx(a2[10], v8, v9, 92);
          LOBYTE(v6) = Controller_ReportFatalError(*a2, 2, 4128, a2[2], (__int64)a2, 0LL);
          return v6;
        }
        v7 = 91;
      }
      LOBYTE(v8) = 3;
      LOBYTE(v6) = WPP_RECORDER_SF_ddx(a2[10], v8, v9, v7);
      return v6;
    }
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_ddx(a2[10], v8, v9, 93);
    LOBYTE(v6) = Controller_ReportFatalError(*a2, 2, 4127, a2[2], (__int64)a2, 0LL);
  }
  return v6;
}
