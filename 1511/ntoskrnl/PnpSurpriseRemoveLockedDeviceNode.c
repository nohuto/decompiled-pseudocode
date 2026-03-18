/*
 * XREFs of PnpSurpriseRemoveLockedDeviceNode @ 0x1404A0A7C
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x1404A0664 (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PipSetDevNodeState @ 0x140099720 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x1400DA400 (PipRestoreDevNodeState.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x1401B6EF8 (IopDecrementDeviceObjectHandleCount.c)
 *     PnpMarkDeviceForRemove @ 0x1401BF838 (PnpMarkDeviceForRemove.c)
 *     PnpUnlockMountableDevice @ 0x1401BF914 (PnpUnlockMountableDevice.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x140455F90 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipClearDevNodeFlags @ 0x1404574A4 (PipClearDevNodeFlags.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14045837C (PnpAcquireDependencyRelationsLock.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1404583AC (PnpReleaseDependencyRelationsLock.c)
 *     PnpDisableDeviceInterfaces @ 0x1404A091C (PnpDisableDeviceInterfaces.c)
 *     PipSetDevNodeProblem @ 0x1404A0BE4 (PipSetDevNodeProblem.c)
 *     IopReleaseDeviceResources @ 0x1404A0EBC (IopReleaseDeviceResources.c)
 *     IopRemoveDevice @ 0x1404A0FEC (IopRemoveDevice.c)
 *     PipConvertResolutionsToReservations @ 0x140600F88 (PipConvertResolutionsToReservations.c)
 */

void __fastcall PnpSurpriseRemoveLockedDeviceNode(__int64 a1, unsigned int a2, unsigned int a3)
{
  struct _DEVICE_OBJECT *v3; // r12
  int v5; // ecx
  int v8; // r14d
  int v9; // ebp
  __int64 v10; // rbx
  int v11; // eax
  int v12; // ebx
  __int64 v13; // rcx
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rsi
  void *v20; // rbx
  __int128 v21; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  v5 = *(_DWORD *)(a1 + 300);
  v21 = 0LL;
  v8 = 768;
  if ( (unsigned int)(v5 - 782) <= 1 )
  {
    v8 = v5;
    PipRestoreDevNodeState(a1);
  }
  v9 = *(_DWORD *)(a1 + 300);
  *(_WORD *)(a1 + 466) = 0;
  if ( v9 == 785 && v8 == 782 )
  {
    PipClearDevNodeFlags(a1, 16);
    PipSetDevNodeState(a1, 787);
    return;
  }
  v10 = *(_QWORD *)(a1 + 8);
  if ( v10 )
  {
    do
    {
      v18 = *(_DWORD *)(v10 + 396);
      v19 = *(_QWORD *)v10;
      if ( (v18 & 0x10) != 0 )
        *(_DWORD *)(v10 + 396) = v18 & 0xFFFFFFEF;
      if ( *(_QWORD *)(v10 + 416) || *(_QWORD *)(v10 + 544) || (*(_DWORD *)(v10 + 396) & 0x40) != 0 )
        IopReleaseDeviceResources(v10, 0LL);
      PipSetDevNodeState(v10, 787);
      v10 = v19;
    }
    while ( v19 );
  }
  if ( v9 == 778 && (*(_DWORD *)(a1 + 396) & 0x1000000) != 0 )
  {
    PnpMarkDeviceForRemove((ULONG_PTR)v3, 1, (ULONG_PTR *)&v21);
    PnpUnlockMountableDevice((__int64)v3);
    PipClearDevNodeFlags(a1, 0x1000000);
  }
  v11 = *(_DWORD *)(a1 + 300);
  if ( v11 < 769 || v11 > 770 && (v11 <= 776 || v11 == 778 || (unsigned int)(v11 - 785) > 3) )
  {
    v12 = IopRemoveDevice(v3);
    PnpDisableDeviceInterfaces((unsigned __int16 *)(a1 + 40));
    if ( v12 >= 0 )
      IopReleaseDeviceResources(a1, 0LL);
    v13 = a1;
    if ( (*(_DWORD *)(a1 + 396) & 0x10) == 0 )
    {
      v14 = 787;
LABEL_13:
      PipSetDevNodeState(v13, v14);
      goto LABEL_14;
    }
    PipSetDevNodeState(a1, 785);
    v14 = 782;
    if ( v8 == 782 )
    {
      v13 = a1;
      goto LABEL_13;
    }
  }
LABEL_14:
  if ( v9 == 778 )
  {
    v20 = (void *)*((_QWORD *)&v21 + 1);
    if ( *((_QWORD *)&v21 + 1) )
    {
      IopDecrementDeviceObjectHandleCount(*((ULONG_PTR *)&v21 + 1));
      ObfDereferenceObject(v20);
    }
  }
  if ( a2 && (*(_DWORD *)(a1 + 396) & 0x6000) == 0 )
    PipSetDevNodeProblem(a1, a2, a3);
  *(_DWORD *)(a1 + 704) &= ~2u;
  if ( (*(_DWORD *)(a1 + 396) & 0x10) == 0 )
  {
    PnpAcquireDependencyRelationsLock(1);
    v15 = *(_QWORD *)(a1 + 32);
    if ( v15 )
      v16 = *(_QWORD *)(*(_QWORD *)(v15 + 312) + 80LL);
    else
      v16 = 0LL;
    if ( v16 )
      PipConvertResolutionsToReservations(v16);
    PnpReleaseDependencyRelationsLock();
    PipProcessRebuildPowerRelationsQueue(v17);
  }
}
