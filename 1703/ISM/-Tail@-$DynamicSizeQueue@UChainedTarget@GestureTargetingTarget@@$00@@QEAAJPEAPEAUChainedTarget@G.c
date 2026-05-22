/*
 * XREFs of ?Tail@?$DynamicSizeQueue@UChainedTarget@GestureTargetingTarget@@$00@@QEAAJPEAPEAUChainedTarget@GestureTargetingTarget@@@Z @ 0x180010DDC
 * Callers:
 *     ?GetLastTarget@GestureTargetingTarget@@QEAAJIPEAXPEAPEAUIDCompInputTarget@@@Z @ 0x18000F71C (-GetLastTarget@GestureTargetingTarget@@QEAAJIPEAXPEAPEAUIDCompInputTarget@@@Z.c)
 *     ?RouteNextInputToTarget@GestureTargetingTarget@@QEAAJIPEAX0AEBUtagMsgRoutingInfo@@@Z @ 0x18000F80C (-RouteNextInputToTarget@GestureTargetingTarget@@QEAAJIPEAX0AEBUtagMsgRoutingInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 */

__int64 __fastcall DynamicSizeQueue<GestureTargetingTarget::ChainedTarget,1>::Tail(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  char v3; // al
  int v4; // r9d
  int v5; // eax

  v2 = 0;
  if ( a2 )
  {
    if ( !*(_DWORD *)(a1 + 20) )
    {
      v3 = 5;
      v2 = -2147467259;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v2;
      v4 = 199;
      goto LABEL_4;
    }
    v5 = *(_DWORD *)(a1 + 16);
    if ( !v5 )
      v5 = *(_DWORD *)(a1 + 8);
    *a2 = *(_QWORD *)a1 + 1904LL * (unsigned int)(v5 - 1);
  }
  else
  {
    v3 = 87;
    v2 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v4 = 194;
LABEL_4:
      Template_qqq(a1, &MinInput_Warning_CheckResult, 4, v4, v3);
    }
  }
  return v2;
}
