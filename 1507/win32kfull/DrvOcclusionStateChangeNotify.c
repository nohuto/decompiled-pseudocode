/*
 * XREFs of DrvOcclusionStateChangeNotify @ 0x1C003E588
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0041C84 (xxxSwitchDesktop.c)
 *     xxxRemoteReconnect @ 0x1C012DFA0 (xxxRemoteReconnect.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

__int64 DrvOcclusionStateChangeNotify()
{
  __int64 result; // rax
  __int64 v1; // rax
  int v2; // [rsp+20h] [rbp-18h] BYREF
  void *v3; // [rsp+28h] [rbp-10h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = retaddr;
  v2 = 1;
  result = ((__int64 (__fastcall *)(int *))gDxgkInterface[128])(&v2);
  if ( (int)result < 0 )
  {
    v1 = WdLogNewEntry5_WdAssertion();
    return WdLogEvent5_WdAssertion(v1);
  }
  return result;
}
