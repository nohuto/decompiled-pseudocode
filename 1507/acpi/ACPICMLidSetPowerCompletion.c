/*
 * XREFs of ACPICMLidSetPowerCompletion @ 0x1C0036880
 * Callers:
 *     ACPICMLidSetPower @ 0x1C00367E0 (ACPICMLidSetPower.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIButtonEvent @ 0x1C0021F50 (ACPIButtonEvent.c)
 *     ACPIBusIrpSetSystemPower @ 0x1C0035FA0 (ACPIBusIrpSetSystemPower.c)
 *     ACPICMButtonSetPower @ 0x1C00366B0 (ACPICMButtonSetPower.c)
 */

__int64 __fastcall ACPICMLidSetPowerCompletion(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rdi
  struct _DEVICE_OBJECT *v7; // rsi
  __int64 DeviceExtension; // r15
  int v9; // eax
  BOOL v11; // r14d
  KIRQL v12; // al
  bool v13; // bl
  int v14; // edx

  v4 = a4[23];
  v7 = *(struct _DEVICE_OBJECT **)(v4 + 40);
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)v7);
  v9 = *(_DWORD *)(v4 + 16);
  *(_DWORD *)(v4 + 16) = 0;
  if ( a2 >= 0 )
  {
    v11 = v9 != 0;
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(DeviceExtension + 176));
    v13 = v11 != (*(_BYTE *)(DeviceExtension + 184) != 0);
    *(_BYTE *)(DeviceExtension + 184) = v11;
    KeReleaseSpinLock((PKSPIN_LOCK)(DeviceExtension + 176), v12);
    if ( v13 )
    {
      v14 = 786432;
      if ( v11 )
        v14 = -2146697216;
      ACPIButtonEvent((ULONG_PTR)v7, v14);
    }
    return ACPICMButtonSetPower(v7, a4);
  }
  else
  {
    *(_DWORD *)(v4 + 16) = 0;
    return ACPIBusIrpSetSystemPower(v7, a4, v4);
  }
}
