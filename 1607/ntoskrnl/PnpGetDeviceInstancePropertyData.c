/*
 * XREFs of PnpGetDeviceInstancePropertyData @ 0x1406E5B08
 * Callers:
 *     sub_1406B9FB4 @ 0x1406B9FB4 (sub_1406B9FB4.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     _PnpGetObjectProperty @ 0x1404E1740 (_PnpGetObjectProperty.c)
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
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _DWORD v15[48]; // [rsp+60h] [rbp-D8h] BYREF

  memset(&v15[4], 0, 0xAAuLL);
  v15[0] = 0;
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
                     (__int64)v15,
                     a6,
                     1,
                     a7,
                     0);
  ExReleaseResourceLite(&PnpDevicePropertyLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v11, v12, v13);
  if ( ObjectProperty >= 0 )
    *a8 = v15[0];
  if ( ObjectProperty == -1073741275 )
    return (unsigned int)-1073741772;
  return (unsigned int)ObjectProperty;
}
