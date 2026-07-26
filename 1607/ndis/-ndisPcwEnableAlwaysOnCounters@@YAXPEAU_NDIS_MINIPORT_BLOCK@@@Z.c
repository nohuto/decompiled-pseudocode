/*
 * XREFs of ?ndisPcwEnableAlwaysOnCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00AB2F8
 * Callers:
 *     ?ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00AB2A4 (-ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisPcwEnableAlwaysOnCounterSet@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEAVKRegKey@@W4_NDIS_COUNTER_SET_ID@@KPEBG@Z @ 0x1C00AB398 (-ndisPcwEnableAlwaysOnCounterSet@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEAVKRegKey@@W4_NDIS_COUNTER_SET_.c)
 */

void __fastcall ndisPcwEnableAlwaysOnCounters(struct _NDIS_MINIPORT_BLOCK *a1)
{
  HANDLE v2; // rcx
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF
  HANDLE DeviceRegKey; // [rsp+48h] [rbp+10h] BYREF

  DeviceRegKey = 0LL;
  if ( IoOpenDeviceRegistryKey(a1->PhysicalDeviceObject, 2u, 1u, &DeviceRegKey) >= 0 )
  {
    v2 = 0LL;
    if ( DeviceRegKey )
      v2 = DeviceRegKey;
    Handle = v2;
    ndisPcwEnableAlwaysOnCounterSet(a1, &Handle, 1LL);
    ndisPcwEnableAlwaysOnCounterSet(a1, &Handle, 2LL);
    if ( Handle )
      ZwClose(Handle);
  }
}
