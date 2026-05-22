/*
 * XREFs of ?On3DCompositorStateChanged@MPC3DStateHelper@@AEAAX_N@Z @ 0x1800076EC
 * Callers:
 *     ?Register3DCompositor@@YAHPEAUIUnknown@@@Z @ 0x1800056E0 (-Register3DCompositor@@YAHPEAUIUnknown@@@Z.c)
 *     ?Unregister3DCompositor@@YAHXZ @ 0x1800057E0 (-Unregister3DCompositor@@YAHXZ.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800074F8 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPC3DStateHelper::On3DCompositorStateChanged(RTL_SRWLOCK *this, char a2)
{
  bool v4; // al
  PSRWLOCK SRWLock; // [rsp+50h] [rbp+8h] BYREF

  wil::srwlock::lock_exclusive(this, &SRWLock);
  if ( BYTE4(this[2].Ptr) != a2 )
  {
    HIBYTE(this[2].Ptr) = a2;
    v4 = a2 && !BYTE5(this[2].Ptr);
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
