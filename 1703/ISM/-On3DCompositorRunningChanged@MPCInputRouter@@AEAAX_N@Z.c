/*
 * XREFs of ?On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z @ 0x180085570
 * Callers:
 *     ?Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x1800840A8 (-Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x1800075AC (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x180007B34 (-GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x180084FC4 (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x18008513C (-UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCInputRouter::On3DCompositorRunningChanged(MPCInputRouter *this, char a2)
{
  RTL_SRWLOCK *v3; // rax
  struct IMPCInputPostProcessor *PostProcessor; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  struct IMPCInputPostProcessor *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rcx

  if ( a2 )
  {
    MPC3DStateHelper::GetInstance();
    PostProcessor = MPC3DStateHelper::GetPostProcessor(v3);
    v7 = PostProcessor;
    if ( *((struct IMPCInputPostProcessor **)this + 123) != PostProcessor )
    {
      if ( PostProcessor )
        (*(void (__fastcall **)(struct IMPCInputPostProcessor *))(*(_QWORD *)PostProcessor + 8LL))(PostProcessor);
      v8 = *((_QWORD *)this + 123);
      *((_QWORD *)this + 123) = v7;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    MPCInputRouter::Initialize3DComponents(this, v5, v6);
  }
  else
  {
    MPCInputRouter::UnInitialize3DComponents(this);
    v9 = *((_QWORD *)this + 123);
    if ( v9 )
    {
      *((_QWORD *)this + 123) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
}
