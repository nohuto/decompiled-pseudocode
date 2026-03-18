/*
 * XREFs of PnpBootPhaseComplete @ 0x140580834
 * Callers:
 *     NtInitializeRegistry @ 0x140547164 (NtInitializeRegistry.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x14000794C (PnpRequestDeviceAction.c)
 *     PipForDeviceNodeSubtree @ 0x14051D928 (PipForDeviceNodeSubtree.c)
 *     PiDrvDbInit @ 0x140551A0C (PiDrvDbInit.c)
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
