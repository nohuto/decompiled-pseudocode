/*
 * XREFs of WPP_RECORDER_SF_qLqss @ 0x1C001341C
 * Callers:
 *     ACPIDeviceIrpWaitWakeRequestPending @ 0x1C0006190 (ACPIDeviceIrpWaitWakeRequestPending.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase4 @ 0x1C000F810 (ACPIDevicePowerProcessPhase5DeviceSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C000FA70 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C000FE50 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase1 @ 0x1C0010680 (ACPIDevicePowerProcessPhase0DeviceSubPhase1.c)
 *     ACPIDeviceCompleteRequest @ 0x1C00109E0 (ACPIDeviceCompleteRequest.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase1 @ 0x1C0010C00 (ACPIDevicePowerProcessPhase5DeviceSubPhase1.c)
 *     ACPIDeviceIrpCompleteRequest @ 0x1C0029A80 (ACPIDeviceIrpCompleteRequest.c)
 *     ACPICMButtonSetPower @ 0x1C0047950 (ACPICMButtonSetPower.c)
 *     ACPIDeviceIrpDelayedDeviceOffRequest @ 0x1C0049490 (ACPIDeviceIrpDelayedDeviceOffRequest.c)
 *     ACPIDeviceIrpDelayedDeviceOnRequest @ 0x1C00495C0 (ACPIDeviceIrpDelayedDeviceOnRequest.c)
 *     ACPIDeviceIrpForwardRequest @ 0x1C0049700 (ACPIDeviceIrpForwardRequest.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x1C004A930 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C004AAD0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     ACPIRootIrpQueryPower @ 0x1C00560E0 (ACPIRootIrpQueryPower.c)
 *     ACPIBusIrpQueryTargetRelation @ 0x1C00804B8 (ACPIBusIrpQueryTargetRelation.c)
 *     ACPIFilterIrpFilterResourceRequirements @ 0x1C00847F0 (ACPIFilterIrpFilterResourceRequirements.c)
 *     ACPIBusIrpQueryResources @ 0x1C0085200 (ACPIBusIrpQueryResources.c)
 *     ACPIFilterIrpQueryResourceRequirements @ 0x1C0085510 (ACPIFilterIrpQueryResourceRequirements.c)
 *     ACPIBusIrpQueryResourceRequirements @ 0x1C00857B0 (ACPIBusIrpQueryResourceRequirements.c)
 *     ACPIBusIrpQueryBusRelations @ 0x1C00903EC (ACPIBusIrpQueryBusRelations.c)
 *     ACPIDockIrpQueryEjectRelations @ 0x1C00985E0 (ACPIDockIrpQueryEjectRelations.c)
 *     ACPIDockIrpStartDevice @ 0x1C0098D60 (ACPIDockIrpStartDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qLqss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        char a8,
        const char *a9,
        const char *a10)
{
  const char *v10; // r14
  __int64 v11; // rdi
  __int64 v13; // rbp
  unsigned __int64 v15; // rsi
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  const char *v20; // rcx
  __int64 v21; // rbx
  __int64 v23; // r8
  __int64 v24; // r8
  const char *v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rdx
  const char *v28; // rcx
  int v29; // [rsp+20h] [rbp-98h]
  __int64 v30; // [rsp+80h] [rbp-38h]
  __int64 v31; // [rsp+88h] [rbp-30h]
  unsigned __int16 v33; // [rsp+D8h] [rbp+20h]

  v33 = a4;
  v10 = "NULL";
  v11 = (__int64)a10;
  v13 = (__int64)a9;
  v15 = (unsigned __int64)a3 >> 16;
  v16 = -1LL;
  v17 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v15 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v17, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v15 + 1) >= a2 )
  {
    if ( a10 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( a10[v23] );
      v24 = v23 + 1;
    }
    else
    {
      v24 = 5LL;
    }
    v25 = "NULL";
    if ( a10 )
      v25 = a10;
    if ( a9 )
    {
      v26 = -1LL;
      do
        ++v26;
      while ( a9[v26] );
      v27 = v26 + 1;
    }
    else
    {
      v27 = 5LL;
    }
    v28 = "NULL";
    if ( a9 )
      v28 = a9;
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v15),
      43LL,
      a5,
      v33,
      &a6,
      8LL,
      &a7,
      4LL,
      &a8,
      8LL,
      v28,
      v27,
      v25,
      v24,
      0LL);
    a4 = v33;
  }
  if ( v11 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( *(_BYTE *)(v11 + v18) );
    v19 = v18 + 1;
  }
  else
  {
    v19 = 5LL;
  }
  v20 = "NULL";
  if ( v11 )
    v20 = (const char *)v11;
  if ( v13 )
  {
    do
      ++v16;
    while ( *(_BYTE *)(v16 + v13) );
    v21 = v16 + 1;
  }
  else
  {
    v21 = 5LL;
  }
  if ( v13 )
    v10 = (const char *)v13;
  LOWORD(v29) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v29, &a6, 8LL, &a7, 4LL, &a8, 8LL, v10, v21, v20, v19, 0LL, v30, v31);
}
