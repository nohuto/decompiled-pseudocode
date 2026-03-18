/*
 * XREFs of PnpGetDeviceInstancePropertyData @ 0x14071F08C
 * Callers:
 *     sub_1406FC290 @ 0x1406FC290 (sub_1406FC290.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     _PnpGetObjectProperty @ 0x140438FD0 (_PnpGetObjectProperty.c)
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
  struct _KTHREAD *v11; // rcx
  __int16 v12; // ax
  _DWORD v14[4]; // [rsp+60h] [rbp-E8h] BYREF
  __int16 v15; // [rsp+70h] [rbp-D8h]
  _BYTE v16[168]; // [rsp+72h] [rbp-D6h] BYREF

  v15 = 0;
  memset(v16, 0, sizeof(v16));
  v14[0] = 0;
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
                     (__int64)v14,
                     a6,
                     1,
                     a7,
                     0);
  ExReleaseResourceLite(&PnpDevicePropertyLock);
  v11 = KeGetCurrentThread();
  v12 = v11->KernelApcDisable + 1;
  v11->KernelApcDisable = v12;
  if ( !v12
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != &v11->152
    && !v11->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( ObjectProperty >= 0 )
    *a8 = v14[0];
  if ( ObjectProperty == -1073741275 )
    return (unsigned int)-1073741772;
  return (unsigned int)ObjectProperty;
}
