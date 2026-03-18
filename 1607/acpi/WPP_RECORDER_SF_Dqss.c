/*
 * XREFs of WPP_RECORDER_SF_Dqss @ 0x1C0005F04
 * Callers:
 *     ACPIWakeEnableDisableAsync @ 0x1C0005BD8 (ACPIWakeEnableDisableAsync.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C0006B68 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPIInitStartDevice @ 0x1C0009FCC (ACPIInitStartDevice.c)
 *     ACPIProcessorStartDevice @ 0x1C000A650 (ACPIProcessorStartDevice.c)
 *     ACPIBuildProcessorExtension @ 0x1C000AFE0 (ACPIBuildProcessorExtension.c)
 *     ACPIInitDosDeviceName @ 0x1C000BB70 (ACPIInitDosDeviceName.c)
 *     ACPIBuildProcessSpecialSynchronizationList @ 0x1C0012E74 (ACPIBuildProcessSpecialSynchronizationList.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C001CF10 (PciConfigSpaceHandlerWorker.c)
 *     ACPISystemPowerUpdateDeviceCapabilities @ 0x1C001FE34 (ACPISystemPowerUpdateDeviceCapabilities.c)
 *     ACPIInternalRegisterPowerCallBack @ 0x1C00231B0 (ACPIInternalRegisterPowerCallBack.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C00267F0 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildThermalZoneExtension @ 0x1C0028FD4 (ACPIBuildThermalZoneExtension.c)
 *     ACPICMButtonNotify @ 0x1C0047814 (ACPICMButtonNotify.c)
 *     ACPICMExperienceButtonHandleEvent @ 0x1C0047BF4 (ACPICMExperienceButtonHandleEvent.c)
 *     ACPICMLidPowerStateCallBack @ 0x1C0047CB0 (ACPICMLidPowerStateCallBack.c)
 *     ACPIFanEvent @ 0x1C004DEB0 (ACPIFanEvent.c)
 *     ACPIFanFSTCallback @ 0x1C004DF70 (ACPIFanFSTCallback.c)
 *     ACPIFanPowerCallback @ 0x1C004E580 (ACPIFanPowerCallback.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C004F634 (ACPIInitDeleteDeviceExtension.c)
 *     ACPIInternalEvaluateOST @ 0x1C004FE38 (ACPIInternalEvaluateOST.c)
 *     ACPIProcessorGetInitialApicId @ 0x1C0082CB4 (ACPIProcessorGetInitialApicId.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_Dqss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        const char *a8,
        const char *a9)
{
  const char *v9; // r14
  __int64 v10; // rdi
  __int64 v12; // rbp
  unsigned __int64 v14; // rsi
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  const char *v19; // rcx
  __int64 v20; // rbx
  __int64 v22; // r8
  __int64 v23; // r8
  const char *v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rdx
  const char *v27; // rcx
  int v28; // [rsp+20h] [rbp-88h]
  __int64 v29; // [rsp+70h] [rbp-38h]
  __int64 v30; // [rsp+78h] [rbp-30h]
  __int64 v31; // [rsp+80h] [rbp-28h]
  __int64 v32; // [rsp+88h] [rbp-20h]
  unsigned __int16 v34; // [rsp+C8h] [rbp+20h]

  v34 = a4;
  v9 = "NULL";
  v10 = (__int64)a9;
  v12 = (__int64)a8;
  v14 = (unsigned __int64)a3 >> 16;
  v15 = -1LL;
  v16 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v14 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v16, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v14 + 1) >= a2 )
  {
    if ( a9 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( a9[v22] );
      v23 = v22 + 1;
    }
    else
    {
      v23 = 5LL;
    }
    v24 = "NULL";
    if ( a9 )
      v24 = a9;
    if ( a8 )
    {
      v25 = -1LL;
      do
        ++v25;
      while ( a8[v25] );
      v26 = v25 + 1;
    }
    else
    {
      v26 = 5LL;
    }
    v27 = "NULL";
    if ( a8 )
      v27 = a8;
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v14),
      43LL,
      a5,
      v34,
      &a6,
      4LL,
      &a7,
      8LL,
      v27,
      v26,
      v24,
      v23,
      0LL);
    a4 = v34;
  }
  if ( v10 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( *(_BYTE *)(v10 + v17) );
    v18 = v17 + 1;
  }
  else
  {
    v18 = 5LL;
  }
  v19 = "NULL";
  if ( v10 )
    v19 = (const char *)v10;
  if ( v12 )
  {
    do
      ++v15;
    while ( *(_BYTE *)(v15 + v12) );
    v20 = v15 + 1;
  }
  else
  {
    v20 = 5LL;
  }
  if ( v12 )
    v9 = (const char *)v12;
  LOWORD(v28) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v28, &a6, 4LL, &a7, 8LL, v9, v20, v19, v18, 0LL, v29, v30, v31, v32);
}
