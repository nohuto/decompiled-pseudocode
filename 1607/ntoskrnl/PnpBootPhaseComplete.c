/*
 * XREFs of PnpBootPhaseComplete @ 0x140580CE0
 * Callers:
 *     NtInitializeRegistry @ 0x1405476A4 (NtInitializeRegistry.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x1400861B8 (PnpRequestDeviceAction.c)
 *     PipForDeviceNodeSubtree @ 0x140487410 (PipForDeviceNodeSubtree.c)
 *     PiDrvDbInit @ 0x140551F4C (PiDrvDbInit.c)
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
