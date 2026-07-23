/*
 * XREFs of PnpIrpQueryID @ 0x1405116FC
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140510338 (PiProcessNewDeviceNode.c)
 *     PnpQueryID @ 0x140511600 (PnpQueryID.c)
 *     PpProfileCommitTransitioningDock @ 0x1406424D0 (PpProfileCommitTransitioningDock.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x140642618 (PpProfileIncludeInHardwareProfileTransition.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     IopSynchronousCall @ 0x1404E8B2C (IopSynchronousCall.c)
 */

__int64 __fastcall PnpIrpQueryID(struct _DEVICE_OBJECT *a1, int a2, _QWORD *a3)
{
  __int64 v6; // r9
  __int64 result; // rax
  _DWORD v8[20]; // [rsp+30h] [rbp-58h] BYREF

  *a3 = 0LL;
  memset(v8, 0, 0x48uLL);
  v8[2] = a2;
  LOWORD(v8[0]) = 4891;
  result = IopSynchronousCall(a1, (__int64)v8, -1073741637, v6, a3);
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
