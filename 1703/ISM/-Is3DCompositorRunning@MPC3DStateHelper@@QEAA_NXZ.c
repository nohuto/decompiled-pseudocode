/*
 * XREFs of ?Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ @ 0x180007B04
 * Callers:
 *     ?Set3DHitData@DWMCursor@@UEAAJAEAUCursor3DHitData@@@Z @ 0x18001FBC0 (-Set3DHitData@DWMCursor@@UEAAJAEAUCursor3DHitData@@@Z.c)
 *     ?RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z @ 0x180053948 (-RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z.c)
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_9c299e43976df575cbfcf7e1416abcbe_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x1800571E0 (--$_Callback_once@V-$tuple@$$QEAV_lambda_9c299e43976df575cbfcf7e1416abcbe_@@AEAVexception_ptr@st.c)
 *     ?Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x1800840A8 (-Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ?lock_shared@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180007518 (-lock_shared@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SR.c)
 */

char __fastcall MPC3DStateHelper::Is3DCompositorRunning(RTL_SRWLOCK *this)
{
  char v2; // bl
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::srwlock::lock_shared(this, &SRWLock);
  v2 = BYTE4(this[2].Ptr);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v2;
}
