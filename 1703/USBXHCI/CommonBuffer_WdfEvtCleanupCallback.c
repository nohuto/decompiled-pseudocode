/*
 * XREFs of CommonBuffer_WdfEvtCleanupCallback @ 0x1C0019EF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0004D90 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_q @ 0x1C0009BA0 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CommonBuffer_WdfEvtCleanupCallback(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  struct _PCW_INSTANCE *v4; // rcx
  __int64 v5; // [rsp+28h] [rbp-20h]
  __int64 v6; // [rsp+30h] [rbp-18h]

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             a1,
             off_1C0045228);
  v3 = result;
  if ( *(_QWORD *)result == a1 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_q(
        *(_QWORD *)(*(_QWORD *)(result + 8) + 64LL),
        5u,
        7u,
        0xFu,
        (__int64)&WPP_cd940d3c41c233e2944b46db56fe2ea3_Traceguids,
        a1);
    v4 = *(struct _PCW_INSTANCE **)(v3 + 32);
    if ( v4 )
      PcwCloseInstance(v4);
    if ( *(_DWORD *)(v3 + 112) != *(_DWORD *)(v3 + 116) )
    {
      LODWORD(v5) = *(_DWORD *)(v3 + 112);
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
        3u,
        7u,
        0x10u,
        (__int64)&WPP_cd940d3c41c233e2944b46db56fe2ea3_Traceguids,
        v5,
        *(_DWORD *)(v3 + 116));
    }
    result = *(unsigned int *)(v3 + 160);
    if ( (_DWORD)result != *(_DWORD *)(v3 + 164) )
    {
      LODWORD(v6) = *(_DWORD *)(v3 + 164);
      LODWORD(v5) = *(_DWORD *)(v3 + 160);
      return WPP_RECORDER_SF_dd(
               *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
               3u,
               7u,
               0x11u,
               (__int64)&WPP_cd940d3c41c233e2944b46db56fe2ea3_Traceguids,
               v5,
               v6);
    }
  }
  return result;
}
