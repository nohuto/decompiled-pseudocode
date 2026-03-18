/*
 * XREFs of PnpGetDeviceInstancePropertyData @ 0x14069EA6C
 * Callers:
 *     sub_140677AC0 @ 0x140677AC0 (sub_140677AC0.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     _PnpGetObjectProperty @ 0x14043CBB0 (_PnpGetObjectProperty.c)
 */

__int64 __fastcall PnpGetDeviceInstancePropertyData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        _DWORD *a8)
{
  struct _KTHREAD *CurrentThread; // rax
  int ObjectProperty; // ebx
  _DWORD v12[4]; // [rsp+60h] [rbp-E8h] BYREF
  __int16 v13; // [rsp+70h] [rbp-D8h]
  _BYTE v14[168]; // [rsp+72h] [rbp-D6h] BYREF

  v13 = 0;
  memset(v14, 0, sizeof(v14));
  v12[0] = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpDevicePropertyLock, 1u);
  ObjectProperty = PnpGetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     a1,
                     1u,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_InLocalMachineContainer,
                     (__int64)v12,
                     a6,
                     1,
                     a7,
                     0);
  ExReleaseResourceLite(&PnpDevicePropertyLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( ObjectProperty >= 0 )
    *a8 = v12[0];
  if ( ObjectProperty == -1073741275 )
    return (unsigned int)-1073741772;
  return (unsigned int)ObjectProperty;
}
