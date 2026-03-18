/*
 * XREFs of Endpoint_ControlEndpointResetSetDequeuePointerCompletion @ 0x1C0021120
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0004A10 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C001CB34 (WPP_RECORDER_SF_ddL.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001E910 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001F48C (Controller_ReportFatalError.c)
 *     ESM_AddEvent @ 0x1C0039978 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_ControlEndpointResetSetDequeuePointerCompletion(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v3; // rbx
  unsigned __int8 v6; // al
  __int64 result; // rax
  int v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+30h] [rbp-18h]
  int v12; // [rsp+30h] [rbp-18h]
  int v13; // [rsp+30h] [rbp-18h]
  int v14; // [rsp+38h] [rbp-10h]
  int v15; // [rsp+38h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 56);
  if ( a2 == 3 )
  {
    v11 = *(_DWORD *)(v3 + 144);
    v8 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL);
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v3 + 80),
      4u,
      0xCu,
      0x4Eu,
      (__int64)&WPP_069d2c2574d53496482fd2ef12d94007_Traceguids,
      v8,
      v11);
    goto LABEL_6;
  }
  v6 = *(_BYTE *)(a1 + 68);
  if ( v6 != 1 )
  {
    v15 = v6;
    v13 = *(_DWORD *)(v3 + 144);
    v10 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL);
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v3 + 80),
      2u,
      0xCu,
      0x50u,
      (__int64)&WPP_069d2c2574d53496482fd2ef12d94007_Traceguids,
      v10,
      v13,
      v15);
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD **)v3,
      *(_QWORD *)(v3 + 8),
      *(_QWORD *)(v3 + 24),
      128LL,
      "Set Dequeue pointer command following a Reset Endpoint command failed",
      (_QWORD *)(a1 + 24),
      a3);
    Controller_ReportFatalError(*(_QWORD *)v3, 2, 4101, *(_QWORD *)(v3 + 16), v3, 0LL);
LABEL_6:
    _m_prefetchw((const void *)(v3 + 32));
    result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(v3 + 32), 2u);
    if ( (result & 2) != 0 )
      return result;
    return ESM_AddEvent((PVOID)(v3 + 272));
  }
  v14 = *(_DWORD *)(v3 + 144);
  v12 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL);
  v9 = 1;
  WPP_RECORDER_SF_ddL(
    *(_QWORD *)(v3 + 80),
    4u,
    0xCu,
    0x4Fu,
    (__int64)&WPP_069d2c2574d53496482fd2ef12d94007_Traceguids,
    v9,
    v12,
    v14);
  *(_DWORD *)(v3 + 264) = 0;
  return ESM_AddEvent((PVOID)(v3 + 272));
}
