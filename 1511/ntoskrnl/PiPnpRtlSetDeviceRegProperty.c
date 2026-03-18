/*
 * XREFs of PiPnpRtlSetDeviceRegProperty @ 0x1406056EC
 * Callers:
 *     PiCMSetRegistryProperty @ 0x1406140E8 (PiCMSetRegistryProperty.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1403E3928 (SeAuditingWithTokenForSubcategory.c)
 *     _CmGetDeviceRegProp @ 0x14043AFD0 (_CmGetDeviceRegProp.c)
 *     _CmIsRootEnumeratedDevice @ 0x140458E9C (_CmIsRootEnumeratedDevice.c)
 *     _CmSetDeviceRegProp @ 0x1404EE690 (_CmSetDeviceRegProp.c)
 *     PiAuditDeviceEnableDisableRequest @ 0x1406179C4 (PiAuditDeviceEnableDisableRequest.c)
 */

__int64 __fastcall PiPnpRtlSetDeviceRegProperty(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        signed int a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned int a7,
        int a8)
{
  unsigned int v8; // r14d
  __int64 v9; // r12
  char v10; // bp
  unsigned int v11; // r15d
  unsigned int *v13; // rbx
  bool v15; // zf
  unsigned int v16; // ebx
  __int64 v17; // r9
  struct _KTHREAD *CurrentThread; // rax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  __int64 v21; // [rsp+90h] [rbp+18h] BYREF
  unsigned int v22; // [rsp+98h] [rbp+20h] BYREF

  v21 = a3;
  v22 = 0;
  v8 = 0;
  v9 = *(_QWORD *)&PiPnpRtlCtx;
  v10 = 0;
  v11 = a7;
  v13 = a6;
  if ( a4 < 2 )
    goto LABEL_18;
  if ( a4 <= 3 )
  {
    v15 = CmIsRootEnumeratedDevice(a2) == 0;
LABEL_8:
    if ( v15 )
      return (unsigned int)-1073741790;
    goto LABEL_18;
  }
  if ( a4 == 9 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v10 = 1;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    goto LABEL_18;
  }
  if ( a4 == 11 )
  {
    if ( !a6 || a7 != 4 )
      return (unsigned int)-1073741811;
    if ( SeAuditingWithTokenForSubcategory(137, 0LL) )
    {
      a8 = 4;
      if ( (int)CmGetDeviceRegProp(v9, (__int64)a2, 0LL, 11, (__int64)&v21, (__int64)&v22, (__int64)&a8) < 0
        || a8 != 4
        || (_DWORD)v21 != 4 )
      {
        v22 = 0;
      }
      v8 = *v13;
    }
    goto LABEL_18;
  }
  if ( a4 > 15 )
  {
    if ( a4 <= 17 )
      return (unsigned int)-1073741790;
    v15 = a4 == 37;
    goto LABEL_8;
  }
LABEL_18:
  v16 = CmSetDeviceRegProp(v9, (__int64)a2, 0LL, a4, a5, (__int64)v13, v11, 0);
  if ( a4 == 11 && SeAuditingWithTokenForSubcategory(137, 0LL) )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    LOBYTE(v17) = (v16 & 0x80000000) == 0;
    PiAuditDeviceEnableDisableRequest(&DestinationString, v22, v8, v17);
  }
  if ( v10 )
  {
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return v16;
}
