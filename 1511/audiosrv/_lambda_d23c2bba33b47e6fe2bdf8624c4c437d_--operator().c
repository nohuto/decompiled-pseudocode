/*
 * XREFs of _lambda_d23c2bba33b47e6fe2bdf8624c4c437d_::operator() @ 0x18008F578
 * Callers:
 *     ??$for_each@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@std@@V_lambda_d23c2bba33b47e6fe2bdf8624c4c437d_@@@std@@YA?AV_lambda_d23c2bba33b47e6fe2bdf8624c4c437d_@@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@0@0V1@@Z @ 0x18008F0B0 (--$for_each@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$ComPtr@UIStreamG_ea_18008F0B0.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall lambda_d23c2bba33b47e6fe2bdf8624c4c437d_::operator()(_QWORD *a1, _QWORD *a2)
{
  char v4; // al
  __int64 result; // rax

  v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 208LL))(*a2);
  result = (*(__int64 (__fastcall **)(CDeviceGraphManager *, _QWORD, _QWORD, bool, _QWORD))(*(_QWORD *)g_DeviceGraphManager
                                                                                          + 40LL))(
             g_DeviceGraphManager,
             *a2,
             *a1,
             v4 == 0,
             0LL);
  if ( (int)result < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    return WPP_SF_D(
             *((_QWORD *)WPP_GLOBAL_Control + 2),
             0x31u,
             (__int64)&WPP_18ace55440119747b554b8cf58a0f74c_Traceguids,
             result);
  }
  return result;
}
