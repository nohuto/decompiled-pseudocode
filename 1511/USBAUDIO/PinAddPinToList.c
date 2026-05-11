/*
 * XREFs of PinAddPinToList @ 0x1C0001DF4
 * Callers:
 *     PinCreate @ 0x1C0014430 (PinCreate.c)
 * Callees:
 *     DeviceRequestPowerUp @ 0x1C0013720 (DeviceRequestPowerUp.c)
 *     IsDevicePoweredUp @ 0x1C001378C (IsDevicePoweredUp.c)
 */

__int64 __fastcall PinAddPinToList(PKSPIN Pin)
{
  int v2; // ebx
  PKSDEVICE Device; // rax
  PKSDEVICE v4; // rdi
  KSPIN_LOCK *Context; // rbp
  KSPIN_LOCK *v6; // r14
  KIRQL v7; // al
  KSPIN_LOCK **v8; // rdx
  PIRP *v9; // rcx
  PKSFILTER ParentFilter; // rbx

  v2 = 0;
  Device = KsGetDevice(Pin);
  v4 = Device;
  if ( Device )
  {
    Context = (KSPIN_LOCK *)Device->Context;
    v6 = (KSPIN_LOCK *)Pin->Context;
    v7 = KeAcquireSpinLockRaiseToDpc(Context + 12);
    v8 = (KSPIN_LOCK **)Context[14];
    *v6 = (KSPIN_LOCK)(Context + 13);
    v6[1] = (KSPIN_LOCK)v8;
    if ( *v8 != Context + 13 )
      __fastfail(3u);
    *v8 = v6;
    Context[14] = (KSPIN_LOCK)v6;
    KeReleaseSpinLock(Context + 12, v7);
    if ( !(unsigned int)IsDevicePoweredUp(v4) )
    {
      v2 = DeviceRequestPowerUp(v9);
      if ( v2 >= 0 )
      {
        ParentFilter = KsPinGetParentFilter(Pin);
        KsReleaseControl(ParentFilter);
        KeWaitForSingleObject(Context + 66, Executive, 0, 0, 0LL);
        KsAcquireControl(ParentFilter);
        return 0;
      }
    }
  }
  return (unsigned int)v2;
}
