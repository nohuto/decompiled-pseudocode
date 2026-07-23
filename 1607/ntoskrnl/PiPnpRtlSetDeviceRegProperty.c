/*
 * XREFs of PiPnpRtlSetDeviceRegProperty @ 0x14062F780
 * Callers:
 *     PiDevCfgSetDeviceRegProp @ 0x140641064 (PiDevCfgSetDeviceRegProp.c)
 *     PiCMSetRegistryProperty @ 0x140648964 (PiCMSetRegistryProperty.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     _CmIsRootEnumeratedDevice @ 0x1403F3B14 (_CmIsRootEnumeratedDevice.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14045F3F4 (SeAuditingWithTokenForSubcategory.c)
 *     _CmGetDeviceRegProp @ 0x1404DFDDC (_CmGetDeviceRegProp.c)
 *     _CmSetDeviceRegProp @ 0x1405121B4 (_CmSetDeviceRegProp.c)
 *     PiAuditDeviceEnableDisableRequest @ 0x14064C7C8 (PiAuditDeviceEnableDisableRequest.c)
 */

__int64 __fastcall PiPnpRtlSetDeviceRegProperty(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        signed int a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned int a7,
        unsigned int a8)
{
  unsigned int v8; // r14d
  unsigned int v9; // r15d
  char v10; // si
  unsigned int *v11; // rbx
  bool v16; // zf
  unsigned int v17; // ebx
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  struct _KTHREAD *CurrentThread; // rax
  int v24; // [rsp+40h] [rbp-48h] BYREF
  int v25; // [rsp+44h] [rbp-44h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-40h] BYREF
  unsigned int v27; // [rsp+A8h] [rbp+20h] BYREF

  v27 = 0;
  v8 = 0;
  v9 = a7;
  v10 = 0;
  v11 = a6;
  if ( a4 < 2 )
    goto LABEL_18;
  if ( a4 <= 3 )
  {
    v16 = CmIsRootEnumeratedDevice(a2) == 0;
LABEL_8:
    if ( v16 )
      return (unsigned int)-1073741790;
    goto LABEL_18;
  }
  if ( a4 == 9 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v10 = 1;
    ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
    goto LABEL_18;
  }
  if ( a4 == 11 )
  {
    if ( !a6 || a7 != 4 )
      return (unsigned int)-1073741811;
    if ( SeAuditingWithTokenForSubcategory(138, 0LL) )
    {
      v24 = 4;
      if ( (int)CmGetDeviceRegProp(a1, (__int64)a2, a3, 11, (__int64)&v25, (__int64)&v27, (__int64)&v24, 0) < 0
        || v24 != 4
        || v25 != 4 )
      {
        v27 = 0;
      }
      v8 = *v11;
    }
    goto LABEL_18;
  }
  if ( a4 > 15 )
  {
    if ( a4 <= 17 )
      return (unsigned int)-1073741790;
    v16 = a4 == 37;
    goto LABEL_8;
  }
LABEL_18:
  v17 = CmSetDeviceRegProp(a1, (__int64)a2, a3, a4, a5, (__int64)v11, v9, a8);
  if ( a4 == 11 && SeAuditingWithTokenForSubcategory(138, 0LL) )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    LOBYTE(v18) = (v17 & 0x80000000) == 0;
    PiAuditDeviceEnableDisableRequest(&DestinationString, v27, v8, v18);
  }
  if ( v10 )
  {
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v19, v20, v21);
  }
  return v17;
}
