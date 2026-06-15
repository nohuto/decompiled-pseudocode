/*
 * XREFs of _lambda_868dd1e7e0950a14e8fa44815d99784f_::operator() @ 0x180091D48
 * Callers:
 *     ??$for_each@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@std@@V_lambda_868dd1e7e0950a14e8fa44815d99784f_@@@std@@YA?AV_lambda_868dd1e7e0950a14e8fa44815d99784f_@@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@0@0V1@@Z @ 0x18009180C (--$for_each@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$ComPtr@UIStreamG_ea_18009180C.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall lambda_868dd1e7e0950a14e8fa44815d99784f_::operator()(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(CDeviceGraphManager *, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)g_DeviceGraphManager
                                                                                            + 40LL))(
             g_DeviceGraphManager,
             *a2,
             *a1,
             0LL,
             0LL);
  if ( (int)result < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    return WPP_SF_D(
             *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
             0x20u,
             (__int64)&WPP_87a960f07f9f0e33e55207b25344727f_Traceguids,
             result);
  }
  return result;
}
