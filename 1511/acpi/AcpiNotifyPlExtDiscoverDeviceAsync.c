/*
 * XREFs of AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C0004F54
 * Callers:
 *     ACPIRootDeviceNotifyPepDiscoverDevice @ 0x1C0004DE4 (ACPIRootDeviceNotifyPepDiscoverDevice.c)
 *     ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice @ 0x1C0004E68 (ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice.c)
 *     ACPIBuildProcessDevicePhasePep @ 0x1C000B7A0 (ACPIBuildProcessDevicePhasePep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckPep @ 0x1C001F420 (ACPIBuildProcessRunMethodPhaseCheckPep.c)
 *     ACPIBuildProcessThermalZonePep @ 0x1C0023AF0 (ACPIBuildProcessThermalZonePep.c)
 *     ACPIBuildProcessPowerResourcePhasePep @ 0x1C0035E10 (ACPIBuildProcessPowerResourcePhasePep.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     AMLIReferenceHandleEx @ 0x1C0016AC0 (AMLIReferenceHandleEx.c)
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C001A874 (ACPIAmliBuildObjectPathnameUnicode.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00251C0 (memset.c)
 *     AcpiCreateDiscoveryDeleteParameters @ 0x1C003F130 (AcpiCreateDiscoveryDeleteParameters.c)
 *     AcpiNotifyDiscoverDeleteMainCompletion @ 0x1C003F470 (AcpiNotifyDiscoverDeleteMainCompletion.c)
 */

__int64 __fastcall AcpiNotifyPlExtDiscoverDeviceAsync(__int64 a1, __int64 a2, __int64 a3)
{
  void *v3; // rdi
  void *v4; // rsi
  char v5; // r15
  char *v6; // r14
  int v10; // ebx
  char *PoolWithTag; // rax
  __int128 v13; // xmm0
  __int64 v14; // rdx
  int v15; // eax
  unsigned int v16; // eax
  __int128 v17; // [rsp+20h] [rbp-38h] BYREF
  void *v18; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v18 = 0LL;
  v6 = 0LL;
  v17 = 0uLL;
  if ( qword_1C0059648 && (*((unsigned __int8 (**)(void))&xmmword_1C0059650 + 1))() )
  {
    v10 = ACPIAmliBuildObjectPathnameUnicode(a1, &v17, 1LL);
    if ( v10 >= 0 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x4E706341u);
      v6 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v10 = -1073741670;
LABEL_19:
        v3 = (void *)*((_QWORD *)&v17 + 1);
        goto LABEL_4;
      }
      memset(PoolWithTag, 0, 0x48uLL);
      v13 = v17;
      *((_QWORD *)v6 + 1) = v6;
      *(_QWORD *)v6 = v6;
      *(_OWORD *)(v6 + 56) = v13;
      *((_QWORD *)v6 + 5) = a2;
      *((_QWORD *)v6 + 6) = a3;
      AMLIReferenceHandleEx(a1);
      v5 = 1;
      *((_QWORD *)v6 + 2) = a1;
      LOBYTE(v14) = 1;
      v15 = AcpiCreateDiscoveryDeleteParameters(v6, v14, &v18);
      v4 = v18;
      v10 = v15;
      if ( v15 >= 0 )
      {
        v16 = ((__int64 (__fastcall *)(void *))xmmword_1C0059650)(v18);
        v10 = v16;
        if ( v16 == 259 )
          return (unsigned int)v10;
        AcpiNotifyDiscoverDeleteMainCompletion(v4, v16);
        v10 = 259;
      }
    }
    if ( v10 == 259 )
      return (unsigned int)v10;
    goto LABEL_19;
  }
  v10 = 0;
LABEL_4:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x53706341u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x4E706341u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4E706341u);
  if ( v10 < 0 && v5 )
    AMLIDereferenceHandleEx(a1);
  return (unsigned int)v10;
}
