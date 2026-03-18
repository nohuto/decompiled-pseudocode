/*
 * XREFs of PnpDeleteLockedDeviceNode @ 0x1404C58C8
 * Callers:
 *     PnpDeleteLockedDeviceNodes @ 0x1404C55B8 (PnpDeleteLockedDeviceNodes.c)
 *     PnpCancelRemoveOnHungDevices @ 0x14062DD80 (PnpCancelRemoveOnHungDevices.c)
 * Callees:
 *     PoFxActivateDevice @ 0x140008080 (PoFxActivateDevice.c)
 *     PoFxIdleDevice @ 0x14000842C (PoFxIdleDevice.c)
 *     PipRestoreDevNodeState @ 0x14009E68C (PipRestoreDevNodeState.c)
 *     PnpRemoveLockedDeviceNode @ 0x14009E908 (PnpRemoveLockedDeviceNode.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1404C3474 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x1404C4CE4 (PnpStartedDeviceNodeDependencyCheck.c)
 *     IopRemoveDevice @ 0x1404C6038 (IopRemoveDevice.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x14062E0BC (PnpQueryRemoveLockedDeviceNode.c)
 */

__int64 __fastcall PnpDeleteLockedDeviceNode(
        ULONG_PTR BugCheckParameter2,
        int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v6; // edi
  int v10; // edx
  int v11; // edx

  v6 = 0;
  if ( a2 )
  {
    v10 = a2 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 == 1 )
        {
          PoFxActivateDevice(*(_QWORD *)(BugCheckParameter2 + 32));
          *(_DWORD *)(BugCheckParameter2 + 704) |= 8u;
          PnpSurpriseRemoveLockedDeviceNode(BugCheckParameter2, a3, a4);
        }
      }
      else
      {
        PoFxActivateDevice(*(_QWORD *)(BugCheckParameter2 + 32));
        *(_DWORD *)(BugCheckParameter2 + 704) |= 0x10u;
        PnpRemoveLockedDeviceNode(BugCheckParameter2, a3, a4);
      }
    }
    else
    {
      if ( (*(_DWORD *)(BugCheckParameter2 + 704) & 4) == 0 )
        KeBugCheckEx(0xCAu, 0xDuLL, BugCheckParameter2, 4uLL, 0LL);
      PoFxIdleDevice(*(_QWORD *)(BugCheckParameter2 + 32));
      *(_DWORD *)(BugCheckParameter2 + 704) &= ~4u;
      if ( *(_DWORD *)(BugCheckParameter2 + 300) == 784 )
      {
        IopRemoveDevice(*(PDEVICE_OBJECT *)(BugCheckParameter2 + 32));
        PipRestoreDevNodeState(BugCheckParameter2);
        PnpStartedDeviceNodeDependencyCheck(BugCheckParameter2);
      }
    }
  }
  else
  {
    PoFxActivateDevice(*(_QWORD *)(BugCheckParameter2 + 32));
    *(_DWORD *)(BugCheckParameter2 + 704) |= 4u;
    return (unsigned int)PnpQueryRemoveLockedDeviceNode(BugCheckParameter2, a3, a5, a6);
  }
  return v6;
}
