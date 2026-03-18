/*
 * XREFs of ACPIButtonEvent @ 0x1C00226D0
 * Callers:
 *     ACPIButtonDeviceControl @ 0x1C00225D0 (ACPIButtonDeviceControl.c)
 *     ACPIInterruptServiceRoutineDPC @ 0x1C0024980 (ACPIInterruptServiceRoutineDPC.c)
 *     ACPICMButtonNotify @ 0x1C00371D4 (ACPICMButtonNotify.c)
 *     ACPICMLidSetPowerCompletion @ 0x1C0037470 (ACPICMLidSetPowerCompletion.c)
 *     ACPICMLidWorker @ 0x1C0037550 (ACPICMLidWorker.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIButtonCompletePendingIrps @ 0x1C0037090 (ACPIButtonCompletePendingIrps.c)
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
  v5 = *(_BYTE *)(DeviceExtension + 192) >> 2;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(DeviceExtension + 176));
  v7 = *(_DWORD *)(DeviceExtension + 188) | a2;
  v8 = v6;
  if ( (v5 & 1) != 0 )
  {
    if ( (v7 & 0x80080000) != 0 )
      v7 = (*(_BYTE *)(DeviceExtension + 184) != 0 ? 0x10000 : 0x20000) | v7 & 0xFFFCFFFF;
    else
      v7 = 0;
  }
  *(_DWORD *)(DeviceExtension + 188) = v7;
  if ( v7 )
  {
    if ( (unsigned __int8)ACPIButtonCompletePendingIrps(a1, v7) )
      *(_DWORD *)(DeviceExtension + 188) = 0;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(DeviceExtension + 176), v8);
  return 259LL;
}
