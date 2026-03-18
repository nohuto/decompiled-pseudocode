/*
 * XREFs of PnpIrpQueryID @ 0x140488F88
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140487BC4 (PiProcessNewDeviceNode.c)
 *     PnpQueryID @ 0x140488E8C (PnpQueryID.c)
 *     PpProfileCommitTransitioningDock @ 0x1406423EC (PpProfileCommitTransitioningDock.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x140642534 (PpProfileIncludeInHardwareProfileTransition.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 *     IopSynchronousCall @ 0x140505B9C (IopSynchronousCall.c)
 */

__int64 __fastcall PnpIrpQueryID(int a1, int a2, _QWORD *a3)
{
  int v6; // r9d
  __int64 result; // rax
  _DWORD v8[18]; // [rsp+30h] [rbp-58h] BYREF

  *a3 = 0LL;
  memset(v8, 0, sizeof(v8));
  v8[2] = a2;
  LOWORD(v8[0]) = 4891;
  result = IopSynchronousCall(a1, (unsigned int)v8, -1073741637, v6, (__int64)a3);
  if ( (int)result < 0 )
  {
    *a3 = 0LL;
  }
  else if ( !*a3 )
  {
    return 3221225659LL;
  }
  return result;
}
