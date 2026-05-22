/*
 * XREFs of ?RouteInputToTargetStatic@GestureTargetingComponent@@SAJPEAX@Z @ 0x18000DDC0
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?RouteInputToTarget@GestureTargetingComponent@@AEAAJIPEAX0IAEBUtagMsgRoutingInfo@@IPEAI@Z @ 0x18000E714 (-RouteInputToTarget@GestureTargetingComponent@@AEAAJIPEAX0IAEBUtagMsgRoutingInfo@@IPEAI@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall GestureTargetingComponent::RouteInputToTargetStatic(char *Block)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // edi

  if ( !GestureTargetingComponent::s_pTargetingComponent )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(0LL, &MinInput_Warning_CheckResult, 4, 299, 255);
    goto LABEL_4;
  }
  v2 = GestureTargetingComponent::RouteInputToTarget(
         GestureTargetingComponent::s_pTargetingComponent,
         *(_DWORD *)Block,
         *((void **)Block + 1),
         *((void **)Block + 2),
         *((_DWORD *)Block + 6),
         (const struct tagMsgRoutingInfo *)(Block + 32),
         *((_DWORD *)Block + 18),
         *((unsigned int **)Block + 10));
  v4 = v2;
  if ( v2 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v3, &MinInput_Warning_CheckResult, 4, 311, v2);
LABEL_4:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  operator delete(*((void **)Block + 10));
  operator delete(Block);
  return v4;
}
