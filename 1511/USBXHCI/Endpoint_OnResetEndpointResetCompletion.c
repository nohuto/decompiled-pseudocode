/*
 * XREFs of Endpoint_OnResetEndpointResetCompletion @ 0x1C0022F00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005540 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C001C6D0 (WPP_RECORDER_SF_ddL.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001E4B0 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001F02C (Controller_ReportFatalError.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x1C00230E0 (Endpoint_OnResetSetDequeuePointer.c)
 *     UsbDevice_GetEndpointState @ 0x1C0030B40 (UsbDevice_GetEndpointState.c)
 *     ESM_AddEvent @ 0x1C00393A8 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_OnResetEndpointResetCompletion(__int64 a1, int a2, _QWORD *a3)
{
  __int64 *v3; // rsi
  __int64 v6; // rbx
  unsigned __int8 v7; // al
  __int64 result; // rax
  __int64 v9; // rcx
  int v10; // r10d
  unsigned int v11; // edi
  int v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+28h] [rbp-20h]
  int v14; // [rsp+28h] [rbp-20h]
  int v15; // [rsp+30h] [rbp-18h]
  int v16; // [rsp+30h] [rbp-18h]
  int v17; // [rsp+30h] [rbp-18h]
  int v18; // [rsp+38h] [rbp-10h]
  int EndpointState; // [rsp+38h] [rbp-10h]

  v3 = *(__int64 **)(a1 + 56);
  v6 = *v3;
  if ( a2 == 3 )
  {
    v15 = *(_DWORD *)(v6 + 144);
    v12 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL);
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v6 + 80),
      4u,
      0xCu,
      0x2Bu,
      (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids,
      v12,
      v15);
    goto LABEL_5;
  }
  v7 = *(_BYTE *)(a1 + 68);
  if ( v7 != 1 )
  {
    v18 = v7;
    v16 = *(_DWORD *)(v6 + 144);
    v13 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL);
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v6 + 80),
      2u,
      0xCu,
      0x2Cu,
      (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids,
      v13,
      v16,
      v18);
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD **)v6,
      *(_QWORD *)(v6 + 8),
      *(_QWORD *)(v6 + 24),
      256LL,
      "Endpoint Reset Command failed",
      (_QWORD *)(a1 + 24),
      a3);
    Controller_ReportFatalError(*(_QWORD *)v6, 2, 4123, *(_QWORD *)(v6 + 16), v6, 0LL);
LABEL_5:
    *(_DWORD *)(v6 + 264) = -1073741823;
    _m_prefetchw((const void *)(v6 + 32));
    result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(v6 + 32), 2u);
    if ( (result & 2) == 0 )
      return ESM_AddEvent((PVOID)(v6 + 272));
    return result;
  }
  EndpointState = UsbDevice_GetEndpointState(*(_QWORD *)(v6 + 16), *(unsigned int *)(v6 + 144));
  v17 = v10;
  v14 = *(unsigned __int8 *)(v9 + 135);
  WPP_RECORDER_SF_ddL(
    *(_QWORD *)(v6 + 80),
    4u,
    0xCu,
    0x2Du,
    (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids,
    v14,
    v17,
    EndpointState);
  if ( !*(_BYTE *)(v6 + 37) )
    return Endpoint_OnResetSetDequeuePointer(v3, 0LL);
  v11 = 1;
  *(_DWORD *)(*(_QWORD *)(v6 + 136) + 20LL) = 0;
  result = *(_QWORD *)(v6 + 136);
  if ( *(_DWORD *)(result + 8) )
  {
    do
    {
      Endpoint_OnResetSetDequeuePointer(v3, v11);
      result = *(_QWORD *)(v6 + 136);
      ++v11;
    }
    while ( v11 <= *(_DWORD *)(result + 8) );
  }
  return result;
}
