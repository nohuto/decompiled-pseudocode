/*
 * XREFs of ?OnSecureModeChanged@MPC3DStateHelper@@AEAAX_N@Z @ 0x180007780
 * Callers:
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_4bfd0116db80ce4255855ce8af72e9c8_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x180008A00 (--$_Callback_once@V-$tuple@$$QEAV_lambda_4bfd0116db80ce4255855ce8af72e9c8_@@AEAVexception_ptr@st.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800074F8 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPC3DStateHelper::OnSecureModeChanged(RTL_SRWLOCK *this, char a2)
{
  bool v4; // al
  PSRWLOCK SRWLock; // [rsp+50h] [rbp+8h] BYREF

  wil::srwlock::lock_exclusive(this, &SRWLock);
  if ( BYTE5(this[2].Ptr) != a2 )
  {
    BYTE5(this[2].Ptr) = a2;
    v4 = HIBYTE(this[2].Ptr) && !a2;
    LOBYTE(this[3].Ptr) = v4;
    (*(void (__fastcall **)(PVOID, __int64 (__fastcall *)(), RTL_SRWLOCK *, __int64))(*(_QWORD *)this[1].Ptr + 128LL))(
      this[1].Ptr,
      lambda_cd53c665379f6d6b73078d77a45af54d_::_lambda_invoker_cdecl_,
      this,
      4LL);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
