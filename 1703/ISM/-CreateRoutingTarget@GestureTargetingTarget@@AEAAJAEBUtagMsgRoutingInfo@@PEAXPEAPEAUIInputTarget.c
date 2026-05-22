/*
 * XREFs of ?CreateRoutingTarget@GestureTargetingTarget@@AEAAJAEBUtagMsgRoutingInfo@@PEAXPEAPEAUIInputTarget@@@Z @ 0x1800105C4
 * Callers:
 *     ?RouteNextInputToTarget@GestureTargetingTarget@@QEAAJIPEAX0AEBUtagMsgRoutingInfo@@@Z @ 0x18000F80C (-RouteNextInputToTarget@GestureTargetingTarget@@QEAAJIPEAX0AEBUtagMsgRoutingInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@PEAXPEAPEAUIInputTarget@@@Z @ 0x180019FE4 (-Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@PEAXPEAPEAUIInputTarget@@@Z.c)
 *     memset @ 0x18009D814 (memset.c)
 */

__int64 __fastcall GestureTargetingTarget::CreateRoutingTarget(
        GestureTargetingTarget *this,
        const struct tagMsgRoutingInfo *a2,
        void *a3,
        struct IInputTarget **a4)
{
  int v5; // edi
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rbx

  if ( !a3 || (v5 = DWMInputTarget::Create(a2, a3, a4), v5 < 0) )
  {
    v5 = 0;
    v6 = malloc(0x20uLL);
    v8 = v6;
    if ( v6 )
    {
      memset(v6, 0, 0x20uLL);
      v8[2] = &RefCountedObject::`vftable';
      *((_DWORD *)v8 + 6) = 1;
      *v8 = &NullRoutingTarget::`vftable'{for `IInputTarget'};
      v8[1] = &NullRoutingTarget::`vftable'{for `INullRoutingTarget'};
      v8[2] = &NullRoutingTarget::`vftable'{for `RefCountedObject'};
    }
    else
    {
      v8 = 0LL;
    }
    if ( !v8 )
    {
      v5 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v7, &MinInput_Warning_CheckResult, 4, 32, 14);
    }
    *a4 = (struct IInputTarget *)v8;
    if ( v5 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v7, &MinInput_Warning_CheckResult, 4, 727, v5);
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
  }
  return (unsigned int)v5;
}
