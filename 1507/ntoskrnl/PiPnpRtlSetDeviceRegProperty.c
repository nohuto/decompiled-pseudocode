/*
 * XREFs of PiPnpRtlSetDeviceRegProperty @ 0x14058C1FC
 * Callers:
 *     PiCMSetRegistryProperty @ 0x14058C0C0 (PiCMSetRegistryProperty.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     _CmSetDeviceRegProp @ 0x1404D8AB8 (_CmSetDeviceRegProp.c)
 *     _CmIsRootEnumeratedDevice @ 0x1404E2280 (_CmIsRootEnumeratedDevice.c)
 */

__int64 __fastcall PiPnpRtlSetDeviceRegProperty(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        signed int a4,
        unsigned int a5,
        __int64 a6,
        unsigned int a7)
{
  __int64 v7; // r15
  char v10; // di
  unsigned int v11; // ebx
  bool v13; // zf
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v15; // rdx
  __int16 v16; // cx

  v7 = *(_QWORD *)&PiPnpRtlCtx;
  v10 = 0;
  if ( a4 < 2 )
    goto LABEL_6;
  if ( a4 <= 3 )
  {
    v13 = CmIsRootEnumeratedDevice(a2) == 0;
    goto LABEL_14;
  }
  if ( a4 == 11 )
  {
    if ( !a6 || a7 != 4 )
      return (unsigned int)-1073741811;
    goto LABEL_6;
  }
  if ( a4 == 9 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v10 = 1;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    goto LABEL_6;
  }
  if ( a4 > 15 )
  {
    if ( a4 <= 17 )
      return (unsigned int)-1073741790;
    v13 = a4 == 37;
LABEL_14:
    if ( !v13 )
      goto LABEL_6;
    return (unsigned int)-1073741790;
  }
LABEL_6:
  v11 = CmSetDeviceRegProp(v7, (__int64)a2, 0LL, a4, a5, a6, a7, 0);
  if ( v10 )
  {
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    v15 = KeGetCurrentThread();
    v16 = v15->KernelApcDisable + 1;
    v15->KernelApcDisable = v16;
    if ( !v16
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152
      && !v15->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return v11;
}
