/*
 * XREFs of AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C000526C
 * Callers:
 *     ACPIRootDeviceNotifyPepDiscoverDevice @ 0x1C0004ED0 (ACPIRootDeviceNotifyPepDiscoverDevice.c)
 *     ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice @ 0x1C0005180 (ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice.c)
 *     ACPIBuildProcessDevicePhasePep @ 0x1C000F010 (ACPIBuildProcessDevicePhasePep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckPep @ 0x1C0012270 (ACPIBuildProcessRunMethodPhaseCheckPep.c)
 *     ACPIBuildProcessThermalZonePep @ 0x1C00269B0 (ACPIBuildProcessThermalZonePep.c)
 *     ACPIBuildProcessPowerResourcePhasePep @ 0x1C0044B80 (ACPIBuildProcessPowerResourcePhasePep.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0007348 (WPP_RECORDER_SF_qD.c)
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C0009D04 (ACPIAmliBuildObjectPathnameUnicode.c)
 *     AMLIReferenceHandleEx @ 0x1C000E210 (AMLIReferenceHandleEx.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     AcpiCreateDiscoveryDeleteParameters @ 0x1C00534E4 (AcpiCreateDiscoveryDeleteParameters.c)
 *     AcpiNotifyDiscoverDeleteMainCompletion @ 0x1C0053850 (AcpiNotifyDiscoverDeleteMainCompletion.c)
 */

__int64 __fastcall AcpiNotifyPlExtDiscoverDeviceAsync(__int64 a1, __int64 a2, __int64 a3)
{
  void *v3; // rdi
  void *v4; // rbp
  char v5; // r13
  char *v6; // rsi
  int v10; // ebx
  int v12; // eax
  int v13; // edx
  char *PoolWithTag; // rax
  __int128 v15; // xmm0
  __int64 v16; // rdx
  int v17; // eax
  int v18; // edx
  unsigned int v19; // eax
  int v20; // edx
  __int128 v21; // [rsp+40h] [rbp-38h] BYREF
  void *v22; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v22 = 0LL;
  v6 = 0LL;
  v21 = 0uLL;
  if ( qword_1C0073A28 && (*((unsigned __int8 (**)(void))&xmmword_1C0073A30 + 1))() )
  {
    v12 = ACPIAmliBuildObjectPathnameUnicode(a1, &v21, 1LL);
    v10 = v12;
    if ( v12 >= 0 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x4E706341u);
      v6 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v10 = -1073741670;
LABEL_22:
        v3 = (void *)*((_QWORD *)&v21 + 1);
        goto LABEL_4;
      }
      memset(PoolWithTag, 0, 0x48uLL);
      v15 = v21;
      *((_QWORD *)v6 + 1) = v6;
      *(_QWORD *)v6 = v6;
      *(_OWORD *)(v6 + 56) = v15;
      *((_QWORD *)v6 + 5) = a2;
      *((_QWORD *)v6 + 6) = a3;
      AMLIReferenceHandleEx(a1);
      v5 = 1;
      *((_QWORD *)v6 + 2) = a1;
      LOBYTE(v16) = 1;
      v17 = AcpiCreateDiscoveryDeleteParameters(v6, v16, &v22);
      v10 = v17;
      if ( v17 >= 0 )
      {
        v4 = v22;
        v19 = ((__int64 (__fastcall *)(void *))xmmword_1C0073A30)(v22);
        v10 = v19;
        if ( v19 != 259 )
        {
          AcpiNotifyDiscoverDeleteMainCompletion(v4, v19);
          v10 = 259;
        }
        LOBYTE(v20) = 4;
        WPP_RECORDER_SF_qD(
          WPP_GLOBAL_Control->DeviceExtension,
          v20,
          19,
          13,
          (__int64)&WPP_04283116df513c0b4bfc015614b55db9_Traceguids,
          a1,
          v10);
      }
      else
      {
        LOBYTE(v18) = 2;
        WPP_RECORDER_SF_qD(
          WPP_GLOBAL_Control->DeviceExtension,
          v18,
          19,
          12,
          (__int64)&WPP_04283116df513c0b4bfc015614b55db9_Traceguids,
          a1,
          v17);
        v4 = v22;
      }
    }
    else
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_qD(
        WPP_GLOBAL_Control->DeviceExtension,
        v13,
        19,
        11,
        (__int64)&WPP_04283116df513c0b4bfc015614b55db9_Traceguids,
        a1,
        v12);
    }
    if ( v10 == 259 )
      return (unsigned int)v10;
    goto LABEL_22;
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
    AMLIDereferenceHandleEx(a1, 0LL);
  return (unsigned int)v10;
}
