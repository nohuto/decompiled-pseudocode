/*
 * XREFs of Microsoft::WRL::Details::InvokeHelper_SpatialInteractionDevices::IHapticsTimerCallback__lambda_77dca828cc74180f62f751716ffcfc7f__1_1_::Invoke @ 0x18009B910
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StopHapticsFeedback@SpatialInteractionController@SpatialInteractionDevices@@QEAAJXZ @ 0x18009B000 (-StopHapticsFeedback@SpatialInteractionController@SpatialInteractionDevices@@QEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::InvokeHelper_SpatialInteractionDevices::IHapticsTimerCallback__lambda_77dca828cc74180f62f751716ffcfc7f__1_1_::Invoke(
        __int64 a1,
        unsigned __int64 a2)
{
  SpatialInteractionDevices::SpatialInteractionController *v2; // rcx
  unsigned __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(SpatialInteractionDevices::SpatialInteractionController **)(a1 + 16);
  v3 = *((_QWORD *)v2 + 72);
  if ( v3
    && a2 >= v3
    && (v4 = SpatialInteractionDevices::SpatialInteractionController::StopHapticsFeedback(v2), v5 = v4, v4 < 0) )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x2BE,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractioncontroller.cpp",
      (const char *)(unsigned int)v4);
  }
  else
  {
    return 0;
  }
  return v5;
}
