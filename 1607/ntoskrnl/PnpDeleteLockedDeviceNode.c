/*
 * XREFs of PnpDeleteLockedDeviceNode @ 0x140485CFC
 * Callers:
 *     PnpDeleteLockedDeviceNodes @ 0x1404859EC (PnpDeleteLockedDeviceNodes.c)
 *     PnpCancelRemoveOnHungDevices @ 0x14062DE34 (PnpCancelRemoveOnHungDevices.c)
 * Callees:
 *     PoFxActivateDevice @ 0x140007BF4 (PoFxActivateDevice.c)
 *     PoFxIdleDevice @ 0x140007FA0 (PoFxIdleDevice.c)
 *     PipRestoreDevNodeState @ 0x140084EBC (PipRestoreDevNodeState.c)
 *     PnpRemoveLockedDeviceNode @ 0x140085A68 (PnpRemoveLockedDeviceNode.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1404837DC (PnpSurpriseRemoveLockedDeviceNode.c)
 *     IopRemoveDevice @ 0x140484840 (IopRemoveDevice.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x1404888E8 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x14062E170 (PnpQueryRemoveLockedDeviceNode.c)
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
        IopRemoveDevice(*(PDEVICE_OBJECT *)(BugCheckParameter2 + 32), 3);
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
