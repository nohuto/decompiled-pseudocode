/*
 * XREFs of Endpoint_TransferEventHandler @ 0x1C000EED0
 * Callers:
 *     UsbDevice_TransferEventHandler @ 0x1C00016C4 (UsbDevice_TransferEventHandler.c)
 * Callees:
 *     Endpoint_HaltedCompletionCode @ 0x1C000188C (Endpoint_HaltedCompletionCode.c)
 *     TR_TransferEventHandler @ 0x1C0001974 (TR_TransferEventHandler.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0004A10 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0006BE0 (WPP_RECORDER_SF_ddd.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001E910 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001F48C (Controller_ReportFatalError.c)
 *     Endpoint_Stream_IsTransferEventLikelyDuplicate @ 0x1C0024404 (Endpoint_Stream_IsTransferEventLikelyDuplicate.c)
 *     WPP_RECORDER_SF_ddqL @ 0x1C0026168 (WPP_RECORDER_SF_ddqL.c)
 *     WPP_RECORDER_SF_ddx @ 0x1C00265E8 (WPP_RECORDER_SF_ddx.c)
 *     ESM_AddEvent @ 0x1C0039978 (ESM_AddEvent.c)
 */

char __fastcall Endpoint_TransferEventHandler(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rcx
  char result; // al
  int v7; // edx
  signed __int64 v8; // r8
  __int64 v9; // rbp
  int v10; // r9d
  __int64 v11; // rax
  signed __int64 v12; // r9
  int v13; // esi
  int v14; // edx
  int v15; // r8d
  int v16; // r9d
  int v17; // edx
  const char *v18; // rax
  void *v19; // rcx
  char v20; // [rsp+78h] [rbp+10h] BYREF

  v5 = *(_QWORD *)a2;
  if ( (_mm_srli_si128(*(__m128i *)(*(_QWORD *)a2 + 232LL), 8).m128i_u8[0] & 4) != 0
    && *(_BYTE *)(a1 + 11) == 2
    && (*(_DWORD *)(a1 + 12) & 4) == 0 )
  {
    return WPP_RECORDER_SF_ddqL(*(_QWORD *)(a2 + 80), a2, a3, 84);
  }
  v7 = *(unsigned __int8 *)(a1 + 11);
  if ( v7 == 5 || v7 == 33 || (unsigned int)(v7 - 192) <= 0x1F )
  {
    Controller_HwVerifierBreakIfEnabled(
      v5,
      *(_QWORD *)(a2 + 8),
      *(_QWORD *)(a2 + 24),
      2048,
      (__int64)"Unrecognized completion code in Transfer Event TRB",
      0LL,
      a2 + 184);
    return Controller_ReportFatalError(*(_QWORD *)a2, 2, 4112, *(_QWORD *)(a2 + 16), a2, 0LL);
  }
  if ( !*(_BYTE *)(a2 + 37) )
    return TR_TransferEventHandler((_DWORD *)a1, *(_QWORD *)(a2 + 88));
  v8 = *(_QWORD *)a1;
  v9 = *(_QWORD *)(a2 + 136);
  if ( !*(_QWORD *)a1 )
  {
    v10 = 85;
LABEL_15:
    WPP_RECORDER_SF_ddqL(*(_QWORD *)(a2 + 80), v7, v8, v10);
    goto LABEL_34;
  }
  v11 = *(_QWORD *)(v9 + 32);
  v12 = *(_QWORD *)(v11 + 24);
  if ( v8 >= v12 && v8 < v12 + *(unsigned int *)(v11 + 40) )
  {
    v10 = 86;
    goto LABEL_15;
  }
  v13 = 1;
  if ( *(_DWORD *)(v9 + 8) )
  {
    while ( !TR_TransferEventHandler(
               (_DWORD *)a1,
               *(_QWORD *)(88LL * (unsigned int)(v13 - 1) + *(_QWORD *)(a2 + 136) + 40)) )
    {
      if ( (unsigned int)++v13 > *(_DWORD *)(v9 + 8) )
        goto LABEL_19;
    }
    result = (char)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return WPP_RECORDER_SF_ddd(
               *(_QWORD *)(a2 + 80),
               5u,
               0xCu,
               0x57u,
               (__int64)&WPP_069d2c2574d53496482fd2ef12d94007_Traceguids,
               *(unsigned __int8 *)(*(_QWORD *)(a2 + 16) + 135LL),
               *(_DWORD *)(a2 + 144),
               v13 + 1);
    return result;
  }
LABEL_19:
  if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
  {
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_ddx(*(_QWORD *)(a2 + 80), v7, v8, 88);
    return Controller_ReportFatalError(*(_QWORD *)a2, 2, 4126, *(_QWORD *)(a2 + 16), a2, 0LL);
  }
  if ( (unsigned __int8)(*(_BYTE *)(a1 + 11) - 26) > 2u )
  {
    if ( (unsigned __int8)Endpoint_Stream_IsTransferEventLikelyDuplicate(a1, a2, &v20) )
    {
      if ( (*(_QWORD *)(*(_QWORD *)a2 + 232LL) & 0x4000000000LL) != 0 )
      {
        v16 = 90;
      }
      else
      {
        if ( !v20 || (unsigned int)*(unsigned __int8 *)(a1 + 11) - 26 > 2 )
        {
          LOBYTE(v14) = 2;
          WPP_RECORDER_SF_ddx(*(_QWORD *)(a2 + 80), v14, v15, 92);
          return Controller_ReportFatalError(*(_QWORD *)a2, 2, 4128, *(_QWORD *)(a2 + 16), a2, 0LL);
        }
        v16 = 91;
      }
      LOBYTE(v14) = 3;
      return WPP_RECORDER_SF_ddx(*(_QWORD *)(a2 + 80), v14, v15, v16);
    }
    LOBYTE(v14) = 2;
    WPP_RECORDER_SF_ddx(*(_QWORD *)(a2 + 80), v14, v15, 93);
    return Controller_ReportFatalError(*(_QWORD *)a2, 2, 4127, *(_QWORD *)(a2 + 16), a2, 0LL);
  }
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(a2 + 80),
    2u,
    0xCu,
    0x59u,
    (__int64)&WPP_069d2c2574d53496482fd2ef12d94007_Traceguids,
    *(unsigned __int8 *)(*(_QWORD *)(a2 + 16) + 135LL),
    *(_DWORD *)(a2 + 144));
LABEL_34:
  if ( Endpoint_HaltedCompletionCode(*(unsigned __int8 *)(a1 + 11)) )
  {
    _m_prefetchw((const void *)(a2 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(a2 + 32), 0x20u) & 0x20) != 0 )
    {
      v18 = "Received duplicate Transfer Event TRB with Halted Completion Code";
      return Controller_HwVerifierBreakIfEnabled(
               *(_QWORD *)a2,
               *(_QWORD *)(a2 + 8),
               *(_QWORD *)(a2 + 24),
               0x2000000,
               (__int64)v18,
               0LL,
               0LL);
    }
    *(_DWORD *)(*(_QWORD *)(a2 + 136) + 24LL) = v17;
    _InterlockedOr((volatile signed __int32 *)(a2 + 32), 4u);
    v19 = (void *)(a2 + 272);
    return ESM_AddEvent(v19);
  }
  result = v17 - 26;
  if ( (unsigned int)(v17 - 26) <= 2 )
  {
    _m_prefetchw((const void *)(a2 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(a2 + 32), 0x10u) & 0x10) != 0 )
    {
      v18 = "Received duplicate Stopped Transfer Events";
      return Controller_HwVerifierBreakIfEnabled(
               *(_QWORD *)a2,
               *(_QWORD *)(a2 + 8),
               *(_QWORD *)(a2 + 24),
               0x2000000,
               (__int64)v18,
               0LL,
               0LL);
    }
    _m_prefetchw((const void *)(a2 + 32));
    result = _InterlockedXor((volatile signed __int32 *)(a2 + 32), 8u);
    if ( (result & 8) != 0 )
    {
      v19 = (void *)(a2 + 272);
      return ESM_AddEvent(v19);
    }
  }
  return result;
}
