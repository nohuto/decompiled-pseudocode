/*
 * XREFs of Endpoint_OnCancelStopCompletion @ 0x1C0018F40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00023E0 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0013130 (WPP_RECORDER_SF_ddL.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0014F6C (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001595C (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_ddLLx @ 0x1C001C28C (WPP_RECORDER_SF_ddLLx.c)
 *     UsbDevice_GetEndpointState @ 0x1C002F930 (UsbDevice_GetEndpointState.c)
 *     ESM_AddEvent @ 0x1C00383C8 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_OnCancelStopCompletion(__int64 a1, int a2, _QWORD *a3)
{
  _QWORD **v3; // rbx
  __int64 result; // rax
  int EndpointState; // eax
  __int64 v8; // r9
  int v9; // r10d
  __int64 v10; // r8
  int v11; // edi
  __int64 v12; // r8
  __int64 v13; // r8
  int v14; // edi
  int v15; // edi
  int v16; // [rsp+40h] [rbp-18h]
  __int64 v17; // [rsp+48h] [rbp-10h]

  v3 = *(_QWORD ***)(a1 + 56);
  if ( a2 == 3 )
  {
    WPP_RECORDER_SF_dd(
      (__int64)v3[10],
      4u,
      0xCu,
      0x4Au,
      (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids,
      *((unsigned __int8 *)v3[2] + 135),
      *((_DWORD *)v3 + 36));
    _m_prefetchw(v3 + 4);
    result = (unsigned int)_InterlockedOr((volatile signed __int32 *)v3 + 8, 2u);
    goto LABEL_3;
  }
  EndpointState = UsbDevice_GetEndpointState(v3[2], *((unsigned int *)v3 + 36));
  v10 = (unsigned int)(v9 - 1) + 1LL;
  v11 = EndpointState;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 80LL) + 104LL) & 4) != 0 )
    v12 = v10 << 6;
  else
    v12 = 32 * v10;
  v13 = *(_QWORD *)(*(_QWORD *)(v8 + 424) + 16LL) + v12;
  v17 = *(_QWORD *)(v13 + 8);
  v16 = EndpointState;
  WPP_RECORDER_SF_ddLLx((unsigned int)v3[10], *(unsigned __int8 *)(v8 + 135), v13, v8);
  if ( *(_BYTE *)(a1 + 68) == 1 )
  {
    if ( v11 == 3 )
      return ESM_AddEvent(v3 + 34);
    WPP_RECORDER_SF_ddL(
      (__int64)v3[10],
      2u,
      0xCu,
      0x4Cu,
      (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids,
      *((unsigned __int8 *)v3[2] + 135),
      *((_DWORD *)v3 + 36),
      v11,
      v16,
      v17);
    Controller_ReportFatalError((__int64)*v3, 2, 4131, (__int64)v3[2], (__int64)v3, 0LL);
    _m_prefetchw(v3 + 4);
    result = (unsigned int)_InterlockedOr((volatile signed __int32 *)v3 + 8, 2u);
    goto LABEL_3;
  }
  if ( *(_BYTE *)(a1 + 68) != 19 )
  {
    WPP_RECORDER_SF_ddL(
      (__int64)v3[10],
      2u,
      0xCu,
      0x4Du,
      (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids,
      *((unsigned __int8 *)v3[2] + 135),
      *((_DWORD *)v3 + 36),
      *(unsigned __int8 *)(a1 + 68),
      v16,
      v17);
    Controller_HwVerifierBreakIfEnabled(
      *v3,
      (int)v3[1],
      (int)v3[3],
      0x800000LL,
      "Stop Endpoint Command failed",
      (_QWORD *)(a1 + 24),
      a3);
    Controller_ReportFatalError((__int64)*v3, 2, 4099, (__int64)v3[2], (__int64)v3, 0LL);
    _m_prefetchw(v3 + 4);
    result = (unsigned int)_InterlockedOr((volatile signed __int32 *)v3 + 8, 2u);
    goto LABEL_3;
  }
  v14 = v11 - 1;
  if ( !v14 )
    return ESM_AddEvent(v3 + 34);
  v15 = v14 - 1;
  if ( !v15 )
  {
    if ( (*((_BYTE *)v3 + 99) & 3) != 1 )
      return ESM_AddEvent(v3 + 34);
    Controller_ReportFatalError((__int64)*v3, 2, 4099, (__int64)v3[2], (__int64)v3, 0LL);
    _m_prefetchw(v3 + 4);
    result = (unsigned int)_InterlockedOr((volatile signed __int32 *)v3 + 8, 2u);
LABEL_3:
    if ( (result & 2) != 0 )
      return result;
    return ESM_AddEvent(v3 + 34);
  }
  if ( v15 != 1 )
  {
    Controller_ReportFatalError((__int64)*v3, 2, 4100, (__int64)v3[2], (__int64)v3, 0LL);
    _m_prefetchw(v3 + 4);
    result = (unsigned int)_InterlockedOr((volatile signed __int32 *)v3 + 8, 2u);
    goto LABEL_3;
  }
  return ESM_AddEvent(v3 + 34);
}
