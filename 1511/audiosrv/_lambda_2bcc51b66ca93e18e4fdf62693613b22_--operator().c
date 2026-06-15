/*
 * XREFs of _lambda_2bcc51b66ca93e18e4fdf62693613b22_::operator() @ 0x18008F2D8
 * Callers:
 *     ??$for_each@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@std@@V_lambda_2bcc51b66ca93e18e4fdf62693613b22_@@@std@@YA?AV_lambda_2bcc51b66ca93e18e4fdf62693613b22_@@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@0@0V1@@Z @ 0x18008EF10 (--$for_each@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$ComPtr@UIStreamG_ea_18008EF10.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall lambda_2bcc51b66ca93e18e4fdf62693613b22_::operator()(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(CDeviceGraphManager *, _QWORD, _QWORD))(*(_QWORD *)g_DeviceGraphManager + 48LL))(
             g_DeviceGraphManager,
             *a2,
             *a1);
  if ( (int)result < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    return WPP_SF_D(
             *((_QWORD *)WPP_GLOBAL_Control + 2),
             0x1Fu,
             (__int64)&WPP_18ace55440119747b554b8cf58a0f74c_Traceguids,
             result);
  }
  return result;
}
