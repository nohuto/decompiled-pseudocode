/*
 * XREFs of ?StopHapticsFeedback@SpatialInteractionController@SpatialInteractionDevices@@QEAAJXZ @ 0x18009B000
 * Callers:
 *     ?SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z @ 0x180071350 (-SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z.c)
 *     Microsoft::WRL::Details::InvokeHelper_SpatialInteractionDevices::IHapticsTimerCallback__lambda_77dca828cc74180f62f751716ffcfc7f__1_1_::Invoke @ 0x18009B910 (Microsoft--WRL--Details--InvokeHelper_SpatialInteractionDevices--IHapticsTimerCallback__lambda_7.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x180063F5C (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?StopHapticsFeedback_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKK@Z @ 0x18009920C (-StopHapticsFeedback_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialInteractionDevices::SpatialInteractionController::StopHapticsFeedback(
        SpatialInteractionDevices::SpatialInteractionController *this)
{
  _DWORD *v2; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v3; // rcx
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( v2 && *v2 )
  {
    SpatialInteractionDevices::SpatialInteractionTrace::Instance();
    SpatialInteractionDevices::SpatialInteractionTrace::StopHapticsFeedback_(
      v3,
      *((_DWORD *)this + 66),
      *((_DWORD *)this + 67));
  }
  *((_QWORD *)this + 72) = 0LL;
  v4 = *((_QWORD *)this + 71);
  if ( !v4 )
    return 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 96LL))(v4);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x2D3,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractioncontroller.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
