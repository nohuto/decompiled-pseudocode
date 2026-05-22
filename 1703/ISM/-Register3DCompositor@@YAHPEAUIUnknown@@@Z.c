/*
 * XREFs of ?Register3DCompositor@@YAHPEAUIUnknown@@@Z @ 0x1800056E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800074F8 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?GetInstanceOffInputThread@MPC3DStateHelper@@SAPEAV1@XZ @ 0x180007654 (-GetInstanceOffInputThread@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?On3DCompositorStateChanged@MPC3DStateHelper@@AEAAX_N@Z @ 0x1800076EC (-On3DCompositorStateChanged@MPC3DStateHelper@@AEAAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Register3DCompositor(struct IUnknown *a1)
{
  struct MPC3DStateHelper *InstanceOffInputThread; // rax
  const char *v3; // r9
  struct MPC3DStateHelper *v4; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  int v7; // eax
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  InstanceOffInputThread = MPC3DStateHelper::GetInstanceOffInputThread();
  v4 = InstanceOffInputThread;
  if ( !a1 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x58,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpc3dstatehelper.cpp",
      v3);
    __debugbreak();
  }
  wil::srwlock::lock_exclusive(InstanceOffInputThread, &SRWLock);
  v5 = (_QWORD *)((char *)v4 + 32);
  v6 = *((_QWORD *)v4 + 4);
  if ( v6 )
  {
    *v5 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, char *))a1->lpVtbl->QueryInterface)(
         a1,
         &GUID_e35f488a_a264_4cbb_b79c_9c7dbbd61d65,
         (char *)v4 + 32);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x5E,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpc3dstatehelper.cpp",
      (const char *)(unsigned int)v7,
      -2);
    __debugbreak();
  }
  if ( !*v5 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x5F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpc3dstatehelper.cpp",
      v8);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  MPC3DStateHelper::On3DCompositorStateChanged(v4, 1);
  return 1LL;
}
