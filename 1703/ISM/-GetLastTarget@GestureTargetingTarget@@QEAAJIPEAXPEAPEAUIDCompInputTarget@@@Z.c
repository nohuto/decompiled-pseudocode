/*
 * XREFs of ?GetLastTarget@GestureTargetingTarget@@QEAAJIPEAXPEAPEAUIDCompInputTarget@@@Z @ 0x18000F71C
 * Callers:
 *     ?RouteInputToTarget@GestureTargetingComponent@@AEAAJIPEAX0IAEBUtagMsgRoutingInfo@@IPEAI@Z @ 0x18000E714 (-RouteInputToTarget@GestureTargetingComponent@@AEAAJIPEAX0IAEBUtagMsgRoutingInfo@@IPEAI@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?Tail@?$DynamicSizeQueue@UChainedTarget@GestureTargetingTarget@@$00@@QEAAJPEAPEAUChainedTarget@GestureTargetingTarget@@@Z @ 0x180010DDC (-Tail@-$DynamicSizeQueue@UChainedTarget@GestureTargetingTarget@@$00@@QEAAJPEAPEAUChainedTarget@G.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GestureTargetingTarget::GetLastTarget(
        GestureTargetingTarget *this,
        int a2,
        void *a3,
        struct IDCompInputTarget **a4)
{
  unsigned int v4; // ebx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  struct IDCompInputTarget *v11; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v12; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  v11 = 0LL;
  if ( *((_DWORD *)this + 28) == a2 && *((void **)this + 15) == a3 && *((_DWORD *)this + 21) )
  {
    v6 = DynamicSizeQueue<GestureTargetingTarget::ChainedTarget,1>::Tail((char *)this + 64, &v12);
    if ( v6 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v7, &MinInput_Warning_CheckResult, 4, 251, v6);
      goto LABEL_13;
    }
    v8 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, struct IDCompInputTarget **))*v12)(
           *v12,
           &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
           &v11);
    v4 = v8;
    if ( v8 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v9, &MinInput_Warning_CheckResult, 4, 255, v8);
      goto LABEL_13;
    }
    if ( !v11 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v9, &MinInput_Warning_CheckResult, 4, 259, 255);
LABEL_13:
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
  }
  *a4 = v11;
  return v4;
}
