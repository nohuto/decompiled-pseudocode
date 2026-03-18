/*
 * XREFs of DpiMiracastCbSendUserModeMessage @ 0x1C016D4C0
 * Callers:
 *     <none>
 * Callees:
 *     DpiMiracastAddRefMiracastDeviceContext @ 0x1C00125C0 (DpiMiracastAddRefMiracastDeviceContext.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C0024AE0 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     Template_xqqppq @ 0x1C0027C30 (Template_xqqppq.c)
 *     DpiMiracastSendAsyncUserModeRequest @ 0x1C016E5A0 (DpiMiracastSendAsyncUserModeRequest.c)
 */

__int64 __fastcall DpiMiracastCbSendUserModeMessage(
        int *P,
        size_t Size,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  int v8; // esi
  int v9; // r12d
  int v11; // ecx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rsi
  _QWORD *v16; // rax
  _QWORD *v18; // rax
  size_t Sizea; // [rsp+20h] [rbp-58h]
  int Sizec; // [rsp+20h] [rbp-58h]
  size_t Sizeb; // [rsp+20h] [rbp-58h]
  __int64 v23; // [rsp+28h] [rbp-50h]
  int v24; // [rsp+40h] [rbp-38h]
  __int64 v25; // [rsp+40h] [rbp-38h]

  v8 = a3;
  v9 = Size;
  if ( P && P[4] == 1953656900 && P[5] == 14 && *((_QWORD *)P + 39) )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000) != 0 )
    {
      v24 = 0;
      Sizec = Size;
      Template_xqqppq((__int64)P, &EventEnterDxgkCbSendUserModeMessage, a3, *((_QWORD *)P + 12), Sizec, a4, a6, a7, v24);
    }
    DpiMiracastAddRefMiracastDeviceContext((__int64)P, (unsigned int)DpiMiracastCbSendUserModeMessage);
    LODWORD(Sizea) = v9;
    v12 = DpiMiracastSendAsyncUserModeRequest(v11, 0, 2295820, v8, Sizea, a5, a4, a6, a7, 0LL, 0LL);
    v15 = v12;
    if ( v12 < 0 )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v13);
      v16[4] = DpiMiracastSendAsyncUserModeRequest;
      v16[3] = DpiMiracastCbSendUserModeMessage;
      v16[5] = v15;
      WdLogEvent5_WdError(v16);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000) != 0 )
    {
      LODWORD(v25) = v15;
      LODWORD(v23) = a4;
      LODWORD(Sizeb) = v9;
      Template_xqqppq(v13, &EventLeaveDxgkCbSendUserModeMessage, v14, *((_QWORD *)P + 12), Sizeb, v23, a6, a7, v25);
    }
    DpiMiracastReleaseMiracastDeviceContext(P, (unsigned int)DpiMiracastCbSendUserModeMessage);
    return (unsigned int)v15;
  }
  else
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(P);
    v18[4] = P;
    v18[5] = -1073741585LL;
    v18[3] = DpiMiracastCbSendUserModeMessage;
    WdLogEvent5_WdError(v18);
    return 3221225711LL;
  }
}
