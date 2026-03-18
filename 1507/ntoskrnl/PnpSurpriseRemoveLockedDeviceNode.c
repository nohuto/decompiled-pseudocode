/*
 * XREFs of PnpSurpriseRemoveLockedDeviceNode @ 0x1405392C8
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x140536DF4 (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     PipSetDevNodeState @ 0x1400CFB9C (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x14011C394 (PipRestoreDevNodeState.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x1401F201C (IopDecrementDeviceObjectHandleCount.c)
 *     PnpMarkDeviceForRemove @ 0x1401FB380 (PnpMarkDeviceForRemove.c)
 *     PnpUnlockMountableDevice @ 0x1401FB45C (PnpUnlockMountableDevice.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1404E1670 (PnpAcquireDependencyRelationsLock.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1404E16A0 (PnpReleaseDependencyRelationsLock.c)
 *     PipClearDevNodeFlags @ 0x1404E3CDC (PipClearDevNodeFlags.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1404E4488 (PipProcessRebuildPowerRelationsQueue.c)
 *     IopReleaseDeviceResources @ 0x1405383A4 (IopReleaseDeviceResources.c)
 *     IopRemoveDevice @ 0x1405383EC (IopRemoveDevice.c)
 *     PipSetDevNodeProblem @ 0x140538A88 (PipSetDevNodeProblem.c)
 *     PnpDisableDeviceInterfaces @ 0x140538D8C (PnpDisableDeviceInterfaces.c)
 *     PipConvertResolutionsToReservations @ 0x14067BB98 (PipConvertResolutionsToReservations.c)
 */

__int64 __fastcall PnpSurpriseRemoveLockedDeviceNode(__int64 a1, int a2)
{
  struct _DEVICE_OBJECT *v2; // r12
  int v4; // ecx
  int v6; // ebp
  int v7; // r14d
  __int64 v8; // rbx
  int v9; // eax
  int v10; // ebx
  __int64 v11; // rcx
  int v12; // edx
  __int64 result; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rsi
  void *v18; // rbx
  __int128 v19; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  v4 = *(_DWORD *)(a1 + 300);
  v19 = 0LL;
  v6 = 768;
  if ( (unsigned int)(v4 - 782) <= 1 )
  {
    v6 = v4;
    PipRestoreDevNodeState(a1);
  }
  v7 = *(_DWORD *)(a1 + 300);
  *(_WORD *)(a1 + 466) = 0;
  if ( v7 == 785 && v6 == 782 )
  {
    PipClearDevNodeFlags(a1, 16);
    return PipSetDevNodeState(a1, 787);
  }
  v8 = *(_QWORD *)(a1 + 8);
  if ( v8 )
  {
    do
    {
      v16 = *(_DWORD *)(v8 + 396);
      v17 = *(_QWORD *)v8;
      if ( (v16 & 0x10) != 0 )
        *(_DWORD *)(v8 + 396) = v16 & 0xFFFFFFEF;
      if ( *(_QWORD *)(v8 + 416) || *(_QWORD *)(v8 + 544) || (*(_DWORD *)(v8 + 396) & 0x40) != 0 )
        IopReleaseDeviceResources(v8, 0);
      PipSetDevNodeState(v8, 787);
      v8 = v17;
    }
    while ( v17 );
  }
  if ( v7 == 778 && (*(_DWORD *)(a1 + 396) & 0x1000000) != 0 )
  {
    PnpMarkDeviceForRemove((ULONG_PTR)v2, 1, (ULONG_PTR *)&v19);
    PnpUnlockMountableDevice((__int64)v2);
    PipClearDevNodeFlags(a1, 0x1000000);
  }
  v9 = *(_DWORD *)(a1 + 300);
  if ( v9 < 769 || v9 > 770 && (v9 <= 776 || v9 == 778 || (unsigned int)(v9 - 785) > 3) )
  {
    v10 = IopRemoveDevice(v2, 23);
    PnpDisableDeviceInterfaces((unsigned __int16 *)(a1 + 40));
    if ( v10 >= 0 )
      IopReleaseDeviceResources(a1, 0);
    v11 = a1;
    if ( (*(_DWORD *)(a1 + 396) & 0x10) == 0 )
    {
      v12 = 787;
LABEL_13:
      PipSetDevNodeState(v11, v12);
      goto LABEL_14;
    }
    PipSetDevNodeState(a1, 785);
    v12 = 782;
    if ( v6 == 782 )
    {
      v11 = a1;
      goto LABEL_13;
    }
  }
LABEL_14:
  if ( v7 == 778 )
  {
    v18 = (void *)*((_QWORD *)&v19 + 1);
    if ( *((_QWORD *)&v19 + 1) )
    {
      IopDecrementDeviceObjectHandleCount(*((ULONG_PTR *)&v19 + 1));
      ObfDereferenceObject(v18);
    }
  }
  if ( a2 && (*(_DWORD *)(a1 + 396) & 0x6000) == 0 )
    PipSetDevNodeProblem(a1, a2, 0);
  *(_DWORD *)(a1 + 704) &= ~2u;
  result = *(unsigned int *)(a1 + 396);
  if ( (result & 0x10) == 0 )
  {
    PnpAcquireDependencyRelationsLock(1);
    v14 = *(_QWORD *)(a1 + 32);
    if ( v14 )
      v15 = *(_QWORD *)(*(_QWORD *)(v14 + 312) + 80LL);
    else
      v15 = 0LL;
    if ( v15 )
      PipConvertResolutionsToReservations(v15);
    PnpReleaseDependencyRelationsLock();
    return PipProcessRebuildPowerRelationsQueue();
  }
  return result;
}
