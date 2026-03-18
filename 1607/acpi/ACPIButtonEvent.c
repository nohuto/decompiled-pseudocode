/*
 * XREFs of ACPIButtonEvent @ 0x1C0029490
 * Callers:
 *     ACPIButtonDeviceControl @ 0x1C0029390 (ACPIButtonDeviceControl.c)
 *     ACPIInterruptServiceRoutineDPC @ 0x1C002BA60 (ACPIInterruptServiceRoutineDPC.c)
 *     ACPICMButtonNotify @ 0x1C0047814 (ACPICMButtonNotify.c)
 *     ACPICMLidSetPowerCompletion @ 0x1C0047E70 (ACPICMLidSetPowerCompletion.c)
 *     ACPICMLidWorker @ 0x1C0047F50 (ACPICMLidWorker.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     ACPIButtonCompletePendingIrps @ 0x1C00476D0 (ACPIButtonCompletePendingIrps.c)
 */

__int64 __fastcall ACPIButtonEvent(ULONG_PTR a1, int a2)
{
  __int64 DeviceExtension; // rsi
  char v5; // bl
  KIRQL v6; // al
  unsigned int v7; // edi
  KIRQL v8; // r15

  if ( !a1 )
    return 0LL;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = *(_BYTE *)(DeviceExtension + 200) >> 2;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(DeviceExtension + 184));
  v7 = *(_DWORD *)(DeviceExtension + 196) | a2;
  v8 = v6;
  if ( (v5 & 1) != 0 )
  {
    if ( (v7 & 0x80080000) != 0 )
      v7 = (*(_BYTE *)(DeviceExtension + 192) != 0 ? 0x10000 : 0x20000) | v7 & 0xFFFCFFFF;
    else
      v7 = 0;
  }
  *(_DWORD *)(DeviceExtension + 196) = v7;
  if ( v7 )
  {
    if ( (unsigned __int8)ACPIButtonCompletePendingIrps(a1, v7) )
      *(_DWORD *)(DeviceExtension + 196) = 0;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(DeviceExtension + 184), v8);
  return 259LL;
}
