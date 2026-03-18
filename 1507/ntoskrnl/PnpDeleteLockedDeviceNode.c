/*
 * XREFs of PnpDeleteLockedDeviceNode @ 0x140536DF4
 * Callers:
 *     PnpDeleteLockedDeviceNodes @ 0x140536AEC (PnpDeleteLockedDeviceNodes.c)
 *     PnpCancelRemoveOnHungDevices @ 0x14067E6F8 (PnpCancelRemoveOnHungDevices.c)
 * Callees:
 *     PoFxIdleDevice @ 0x140026DEC (PoFxIdleDevice.c)
 *     PoFxActivateDevice @ 0x140026F90 (PoFxActivateDevice.c)
 *     PnpRemoveLockedDeviceNode @ 0x14011BB6C (PnpRemoveLockedDeviceNode.c)
 *     PipRestoreDevNodeState @ 0x14011C394 (PipRestoreDevNodeState.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x140461408 (PnpStartedDeviceNodeDependencyCheck.c)
 *     IopRemoveDevice @ 0x1405383EC (IopRemoveDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1405392C8 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x14058D9C4 (PnpQueryRemoveLockedDeviceNode.c)
 */

__int64 __fastcall PnpDeleteLockedDeviceNode(
        ULONG_PTR BugCheckParameter2,
        int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int v5; // edi
  int v9; // edx
  int v10; // edx

  v5 = 0;
  if ( a2 )
  {
    v9 = a2 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 == 1 )
        {
          PoFxActivateDevice(*(_QWORD *)(BugCheckParameter2 + 32));
          *(_DWORD *)(BugCheckParameter2 + 704) |= 8u;
          PnpSurpriseRemoveLockedDeviceNode(BugCheckParameter2, a3);
        }
      }
      else
      {
        PoFxActivateDevice(*(_QWORD *)(BugCheckParameter2 + 32));
        *(_DWORD *)(BugCheckParameter2 + 704) |= 0x10u;
        PnpRemoveLockedDeviceNode(BugCheckParameter2, a3);
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
    return (unsigned int)PnpQueryRemoveLockedDeviceNode(BugCheckParameter2, a3, a4, a5);
  }
  return v5;
}
