/*
 * XREFs of ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x1800075AC
 * Callers:
 *     ?SetPosition@DWMCursor@@UEAAJJJ@Z @ 0x18001F860 (-SetPosition@DWMCursor@@UEAAJJJ@Z.c)
 *     ?Set3DHitData@DWMCursor@@UEAAJAEAUCursor3DHitData@@@Z @ 0x18001FBC0 (-Set3DHitData@DWMCursor@@UEAAJAEAUCursor3DHitData@@@Z.c)
 *     ??0MPCHolographicInputManager@@AEAA@XZ @ 0x18004A9E0 (--0MPCHolographicInputManager@@AEAA@XZ.c)
 *     ?OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z @ 0x18004D480 (-OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z.c)
 *     ?RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z @ 0x180053948 (-RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z.c)
 *     ??1MPCRawInputProvider@@MEAA@XZ @ 0x180053B5C (--1MPCRawInputProvider@@MEAA@XZ.c)
 *     ?On3DCompositorRunningChanged@MPCHeadUpdateListener@@AEAAX_N@Z @ 0x1800566B0 (-On3DCompositorRunningChanged@MPCHeadUpdateListener@@AEAAX_N@Z.c)
 *     ?Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x1800840A8 (-Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 *     ?On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z @ 0x180085570 (-On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x1800073B4 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x180007414 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void MPC3DStateHelper::GetInstance(void)
{
  const char *v0; // r9
  std::exception_ptr *v1; // rax
  _BYTE v2[16]; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v3[2]; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v4[24]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  char v6; // [rsp+70h] [rbp+10h] BYREF

  v6 = 0;
  __ExceptionPtrCreate(v2);
  v3[0] = v2;
  v3[1] = &v6;
  if ( std::_Execute_once(
         (struct std::once_flag *)&MPC3DStateHelper::s_singletonCreated,
         (int (*)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_4bfd0116db80ce4255855ce8af72e9c8_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>,
         v3) )
  {
    __ExceptionPtrDestroy(v2);
    if ( MPC3DStateHelper::s_instance )
      return;
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x2A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpc3dstatehelper.cpp",
      v0);
  }
  if ( __ExceptionPtrToBool(v2) )
  {
    v1 = std::exception_ptr::exception_ptr((std::exception_ptr *)v4, (const struct std::exception_ptr *)v2);
    std::rethrow_exception(v1);
  }
  std::_XGetLastError();
}
