/*
 * XREFs of RaidAdapterRemoveDeviceIrp @ 0x1C00570E0
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C000B48C (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0002A80 (RaidCompleteRequestEx.c)
 *     RaForwardIrpSynchronous @ 0x1C000B7A0 (RaForwardIrpSynchronous.c)
 *     RaidAdapterDeleteChildren @ 0x1C0023984 (RaidAdapterDeleteChildren.c)
 *     RaidAdapterDisableDeviceInterface @ 0x1C0023AD8 (RaidAdapterDisableDeviceInterface.c)
 *     RaidDeleteAdapter @ 0x1C0025F90 (RaidDeleteAdapter.c)
 *     RaidReleaseAdapterRemoveLockAndWait @ 0x1C0026E0C (RaidReleaseAdapterRemoveLockAndWait.c)
 *     RaCallMiniportCompleteServiceIrp @ 0x1C0028F40 (RaCallMiniportCompleteServiceIrp.c)
 *     RaidAdapterReleaseResources @ 0x1C0056F70 (RaidAdapterReleaseResources.c)
 */

__int64 __fastcall RaidAdapterRemoveDeviceIrp(__int64 a1, IRP *a2)
{
  struct _DEVICE_OBJECT *v4; // rbp
  unsigned int v5; // eax
  struct _DEVICE_OBJECT *v6; // rsi
  char v7; // r8
  unsigned int v8; // ebx

  RaCallMiniportCompleteServiceIrp(a1);
  v4 = *(struct _DEVICE_OBJECT **)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 88) - 5;
  v6 = *(struct _DEVICE_OBJECT **)(a1 + 24);
  *(_DWORD *)(a1 + 88) = 6;
  if ( v5 > 1 )
  {
    RaidAdapterDisableDeviceInterface(a1);
    RaidReleaseAdapterRemoveLockAndWait(a1);
    RaidAdapterReleaseResources(a1, (__int64)a2, v7);
  }
  RaidAdapterDeleteChildren(a1);
  RaidDeleteAdapter(a1);
  RaForwardIrpSynchronous(v6, a2);
  v8 = RaidCompleteRequestEx(a2, 0, 0);
  IoDetachDevice(v6);
  IoDeleteDevice(v4);
  return v8;
}
