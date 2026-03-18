/*
 * XREFs of WPP_RECORDER_SF_qqss @ 0x1C00107C8
 * Callers:
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase6 @ 0x1C000F700 (ACPIDevicePowerProcessPhase5DeviceSubPhase6.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase5 @ 0x1C000F950 (ACPIDevicePowerProcessPhase5DeviceSubPhase5.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C000FE50 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x1C00103C0 (ACPIDevicePowerProcessPhase1DeviceSubPhase4.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase2 @ 0x1C0010910 (ACPIDevicePowerProcessPhase0DeviceSubPhase2.c)
 *     ACPIDetectDuplicateHID @ 0x1C001E47C (ACPIDetectDuplicateHID.c)
 *     ACPIWakeWaitIrp @ 0x1C0028850 (ACPIWakeWaitIrp.c)
 *     ACPIMatchKernelPorts @ 0x1C002AA98 (ACPIMatchKernelPorts.c)
 *     ACPIDockIrpQueryPower @ 0x1C0043250 (ACPIDockIrpQueryPower.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C00461DC (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPIDeviceCancelWaitWakeIrp @ 0x1C0048F10 (ACPIDeviceCancelWaitWakeIrp.c)
 *     ACPIDevicePowerProcessPhase0SystemSubPhase1 @ 0x1C0049C60 (ACPIDevicePowerProcessPhase0SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase1 @ 0x1C004A220 (ACPIDevicePowerProcessPhase5SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase2 @ 0x1C004A310 (ACPIDevicePowerProcessPhase5SystemSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C004A3D0 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C004A560 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase5 @ 0x1C004A720 (ACPIDevicePowerProcessPhase5SystemSubPhase5.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase6 @ 0x1C004A810 (ACPIDevicePowerProcessPhase5SystemSubPhase6.c)
 *     ACPIFanCancelRequest @ 0x1C004D9C0 (ACPIFanCancelRequest.c)
 *     ACPIFanCompletePendingIrps @ 0x1C004DAC0 (ACPIFanCompletePendingIrps.c)
 *     ACPIFanDeviceControl @ 0x1C004DCF0 (ACPIFanDeviceControl.c)
 *     ACPIThermalStartDevice @ 0x1C0081910 (ACPIThermalStartDevice.c)
 *     ACPIBusIrpQueryResources @ 0x1C0085200 (ACPIBusIrpQueryResources.c)
 *     ACPIDockIrpEject @ 0x1C0097EE0 (ACPIDockIrpEject.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C0098150 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIDockIrpQueryEjectRelations @ 0x1C00985E0 (ACPIDockIrpQueryEjectRelations.c)
 *     ACPIDockIrpQueryID @ 0x1C00987C0 (ACPIDockIrpQueryID.c)
 *     ACPIDockIrpStartDevice @ 0x1C0098D60 (ACPIDockIrpStartDevice.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C0099D80 (ACPIBusAndFilterIrpEject.c)
 *     ACPIRootIrpStartDevice @ 0x1C00A9840 (ACPIRootIrpStartDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qqss(
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
      8LL,
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
  return WppAutoLogTrace(a1, a2, a3, a5, v28, &a6, 8LL, &a7, 8LL, v9, v20, v19, v18, 0LL, v29, v30, v31, v32);
}
