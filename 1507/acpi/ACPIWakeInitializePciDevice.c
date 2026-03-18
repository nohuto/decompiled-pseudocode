/*
 * XREFs of ACPIWakeInitializePciDevice @ 0x1C00205E8
 * Callers:
 *     ACPIFilterIrpStartDeviceWorker @ 0x1C00716F0 (ACPIFilterIrpStartDeviceWorker.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ACPIWakeInitializePciDevice(ULONG_PTR a1)
{
  __int64 DeviceExtension; // rbx
  KIRQL v2; // di
  _BYTE v4[24]; // [rsp+30h] [rbp-18h] BYREF
  char v5; // [rsp+58h] [rbp+10h] BYREF
  char v6; // [rsp+60h] [rbp+18h] BYREF
  char v7; // [rsp+68h] [rbp+20h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( (*(_DWORD *)DeviceExtension & 0x10020) == 0x10000LL )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
    if ( PciPmeInterfaceInstantiated )
    {
      (*(void (__fastcall **)(_QWORD, char *, _BYTE *, char *))(PciPmeInterface + 32))(
        *(_QWORD *)(DeviceExtension + 728),
        &v5,
        v4,
        &v7);
      if ( v5 == 1 )
      {
        (*(void (__fastcall **)(_QWORD, char *))(PciPmeInterface + 56))(*(_QWORD *)(DeviceExtension + 728), &v6);
        if ( v6 == 1 )
        {
          _InterlockedOr64((volatile signed __int64 *)DeviceExtension, 0x800000000000000uLL);
          if ( v7 )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD))(PciPmeInterface + 48))(*(_QWORD *)(DeviceExtension + 728), 0LL);
          }
          else if ( v4[0] )
          {
            (*(void (__fastcall **)(_QWORD))(PciPmeInterface + 40))(*(_QWORD *)(DeviceExtension + 728));
          }
        }
      }
    }
    KeReleaseSpinLock(&AcpiPowerLock, v2);
  }
  return 0LL;
}
