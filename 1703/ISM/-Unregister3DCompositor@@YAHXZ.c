/*
 * XREFs of ?Unregister3DCompositor@@YAHXZ @ 0x1800057E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800074F8 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?GetInstanceOffInputThread@MPC3DStateHelper@@SAPEAV1@XZ @ 0x180007654 (-GetInstanceOffInputThread@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?On3DCompositorStateChanged@MPC3DStateHelper@@AEAAX_N@Z @ 0x1800076EC (-On3DCompositorStateChanged@MPC3DStateHelper@@AEAAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 Unregister3DCompositor(void)
{
  struct MPC3DStateHelper *InstanceOffInputThread; // rbx
  DWORD v1; // eax
  const char *v2; // r9
  __int64 v3; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  InstanceOffInputThread = MPC3DStateHelper::GetInstanceOffInputThread();
  MPC3DStateHelper::On3DCompositorStateChanged(InstanceOffInputThread, 0);
  v1 = WaitForSingleObjectEx(*((HANDLE *)InstanceOffInputThread + 9), 0xFFFFFFFF, 0);
  if ( v1 != 258 && v1 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x90F,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      v2);
    JUMPOUT(0x18000586CLL);
  }
  wil::srwlock::lock_exclusive(InstanceOffInputThread, &SRWLock);
  v3 = *((_QWORD *)InstanceOffInputThread + 4);
  if ( v3 )
  {
    *((_QWORD *)InstanceOffInputThread + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 1LL;
}
