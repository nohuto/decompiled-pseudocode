/*
 * XREFs of PnpDeleteLockedDeviceNode @ 0x1404A0664
 * Callers:
 *     PnpDeleteLockedDeviceNodes @ 0x1404A01A8 (PnpDeleteLockedDeviceNodes.c)
 *     PnpCancelRemoveOnHungDevices @ 0x140603984 (PnpCancelRemoveOnHungDevices.c)
 * Callees:
 *     PoFxActivateDevice @ 0x14001AA10 (PoFxActivateDevice.c)
 *     PipRestoreDevNodeState @ 0x1400DA400 (PipRestoreDevNodeState.c)
 *     PnpRemoveLockedDeviceNode @ 0x1400DA4F4 (PnpRemoveLockedDeviceNode.c)
 *     PoFxIdleDevice @ 0x1400DC378 (PoFxIdleDevice.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1404A0A7C (PnpSurpriseRemoveLockedDeviceNode.c)
 *     IopRemoveDevice @ 0x1404A0FEC (IopRemoveDevice.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x1404EA628 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140603CC0 (PnpQueryRemoveLockedDeviceNode.c)
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
