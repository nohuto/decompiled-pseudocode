/*
 * XREFs of Endpoint_OnCancelSetDequeuePointerCompletion @ 0x1C0018DB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C0003980 (WPP_RECORDER_SF_ddd.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0014F6C (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001595C (Controller_ReportFatalError.c)
 *     Endpoint_StreamsOnCancelSetDequeuePointerComplete @ 0x1C001A79C (Endpoint_StreamsOnCancelSetDequeuePointerComplete.c)
 *     WPP_RECORDER_SF_dddL @ 0x1C001C3BC (WPP_RECORDER_SF_dddL.c)
 *     ESM_AddEvent @ 0x1C00383C8 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_OnCancelSetDequeuePointerCompletion(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v3; // rdi
  int v6; // edx
  __int64 result; // rax
  int v8; // edx
  int v9; // [rsp+28h] [rbp-30h]
  int v10; // [rsp+30h] [rbp-28h]
  int v11; // [rsp+38h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 56);
  if ( a2 == 3 )
  {
    v11 = *(unsigned __int16 *)(a1 + 34);
    v10 = *(_DWORD *)(v3 + 144);
    v9 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL);
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(v3 + 80),
      4u,
      0xCu,
      0x3Bu,
      (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids,
      v9,
      v10,
      v11);
    goto LABEL_5;
  }
  if ( *(_BYTE *)(a1 + 68) != 1 )
  {
    v6 = *(unsigned __int16 *)(a1 + 34);
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_dddL(*(_QWORD *)(v3 + 80), v6, *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL), 60);
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD **)v3,
      *(_QWORD *)(v3 + 8),
      *(_QWORD *)(v3 + 24),
      512LL,
      "Set Dequeue Pointer command following a Stop Endpoint command failed",
      (_QWORD *)(a1 + 24),
      a3);
    Controller_ReportFatalError(*(_QWORD *)v3, 2, 4106, *(_QWORD *)(v3 + 16), v3, 0LL);
LABEL_5:
    _m_prefetchw((const void *)(v3 + 32));
    result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(v3 + 32), 2u);
    if ( (result & 2) != 0 )
      return result;
    return ESM_AddEvent((PVOID)(v3 + 272));
  }
  v8 = *(unsigned __int16 *)(a1 + 34);
  LOBYTE(v8) = 4;
  WPP_RECORDER_SF_dddL(*(_QWORD *)(v3 + 80), v8, *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL), 61);
  if ( *(_BYTE *)(v3 + 37) )
    return Endpoint_StreamsOnCancelSetDequeuePointerComplete(v3, *(unsigned __int16 *)(a1 + 34));
  return ESM_AddEvent((PVOID)(v3 + 272));
}
