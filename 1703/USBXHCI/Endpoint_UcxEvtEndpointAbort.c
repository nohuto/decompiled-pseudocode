/*
 * XREFs of Endpoint_UcxEvtEndpointAbort @ 0x1C0020CD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ddq @ 0x1C00222DC (WPP_RECORDER_SF_ddq.c)
 *     WPP_RECORDER_SF_ddqL @ 0x1C002257C (WPP_RECORDER_SF_ddqL.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointAbort(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // edx
  __int64 v5; // rbx
  __int64 v6; // rdi
  int v7; // edx
  __int64 result; // rax
  unsigned int i; // ebp

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a2,
         off_1C0045188);
  v5 = v3;
  if ( *(_BYTE *)(v3 + 37) )
  {
    v6 = *(_QWORD *)(v3 + 136);
    v7 = *(_DWORD *)(v6 + 8);
    *(_DWORD *)(v6 + 16) = v7;
    result = WPP_RECORDER_SF_ddqL(*(_QWORD *)(v3 + 80), v7, *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL), 37);
    for ( i = 1; i <= *(_DWORD *)(v6 + 8); ++i )
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(), __int64))(WdfFunctions_01015 + 3344))(
                 WdfDriverGlobals,
                 *(_QWORD *)(*(_QWORD *)(88LL * (i - 1) + *(_QWORD *)(v5 + 136) + 40) + 72LL),
                 Endpoint_WdfEvtAbortComplete,
                 a2);
  }
  else
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_ddq(
      *(_QWORD *)(v3 + 80),
      v4,
      12,
      38,
      (__int64)&WPP_dfd1540ede223d0a50a10695a1612c8d_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v3 + 16) + 135LL),
      *(_DWORD *)(v3 + 144),
      a2);
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(), __int64))(WdfFunctions_01015 + 3344))(
             WdfDriverGlobals,
             *(_QWORD *)(*(_QWORD *)(v5 + 88) + 72LL),
             Endpoint_WdfEvtAbortComplete,
             a2);
  }
  return result;
}
