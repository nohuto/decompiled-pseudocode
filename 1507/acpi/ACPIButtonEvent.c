/*
 * XREFs of ACPIButtonEvent @ 0x1C0021F50
 * Callers:
 *     ACPIButtonDeviceControl @ 0x1C0021E50 (ACPIButtonDeviceControl.c)
 *     ACPICMButtonNotify @ 0x1C00365E4 (ACPICMButtonNotify.c)
 *     ACPICMLidSetPowerCompletion @ 0x1C0036880 (ACPICMLidSetPowerCompletion.c)
 *     ACPICMLidWorker @ 0x1C0036960 (ACPICMLidWorker.c)
 *     ACPIInterruptServiceRoutineDPC @ 0x1C003D1A0 (ACPIInterruptServiceRoutineDPC.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIButtonCompletePendingIrps @ 0x1C00364A0 (ACPIButtonCompletePendingIrps.c)
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
