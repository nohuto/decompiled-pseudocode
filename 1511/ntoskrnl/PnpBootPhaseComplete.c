/*
 * XREFs of PnpBootPhaseComplete @ 0x140523EA0
 * Callers:
 *     NtInitializeRegistry @ 0x14050C454 (NtInitializeRegistry.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x1400D1618 (PnpRequestDeviceAction.c)
 *     PipForDeviceNodeSubtree @ 0x140495BA8 (PipForDeviceNodeSubtree.c)
 *     PiDrvDbInit @ 0x1405250C8 (PiDrvDbInit.c)
 */

__int64 PnpBootPhaseComplete()
{
  __int64 result; // rax

  result = PiDrvDbInit(2LL);
  if ( (int)result >= 0 )
  {
    PnpBootMode = 0;
    PnpRequestDeviceAction(*(PVOID *)(IopRootDeviceNode + 32), 2, 0, 39LL, 0LL, 0LL);
    if ( (PiDevCfgMode & 2) != 0 )
      return PipForDeviceNodeSubtree(IopRootDeviceNode, (__int64)PiDevCfgProcessDeviceCallback, 0LL);
    else
      return 0LL;
  }
  return result;
}
