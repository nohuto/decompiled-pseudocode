/*
 * XREFs of WPP_RECORDER_SF_qss @ 0x1C000E3F0
 * Callers:
 *     ACPIInitStartDevice @ 0x1C0009FCC (ACPIInitStartDevice.c)
 *     ACPICMButtonStartWorker @ 0x1C000A7E0 (ACPICMButtonStartWorker.c)
 *     ACPIDeviceInternalSynchronizeRequest @ 0x1C000E51C (ACPIDeviceInternalSynchronizeRequest.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C000F170 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C0011640 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C0012C60 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C00461DC (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPIFanFSTCallback @ 0x1C004DF70 (ACPIFanFSTCallback.c)
 *     ACPIFilterFastIoDetachCallback @ 0x1C004E780 (ACPIFilterFastIoDetachCallback.c)
 *     ACPIInternalEvaluateOST @ 0x1C004FE38 (ACPIInternalEvaluateOST.c)
 *     OSNotifyDeviceWake @ 0x1C00515DC (OSNotifyDeviceWake.c)
 *     ACPIDevicePowerDetermineSupportedDeviceStates @ 0x1C0087434 (ACPIDevicePowerDetermineSupportedDeviceStates.c)
 *     PcisuppReleasePciInterfaces @ 0x1C00A17EC (PcisuppReleasePciInterfaces.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        const char *a7,
        const char *a8)
{
  const char *v8; // r14
  __int64 v9; // rdi
  __int64 v11; // rbp
  unsigned __int64 v13; // rsi
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  const char *v18; // rcx
  __int64 v19; // rbx
  __int64 v21; // r8
  __int64 v22; // r8
  const char *v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rdx
  const char *v26; // rcx
  int v27; // [rsp+20h] [rbp-78h]
  __int64 v28; // [rsp+60h] [rbp-38h]
  __int64 v29; // [rsp+68h] [rbp-30h]
  __int64 v30; // [rsp+70h] [rbp-28h]
  __int64 v31; // [rsp+78h] [rbp-20h]
  __int64 v32; // [rsp+80h] [rbp-18h]
  __int64 v33; // [rsp+88h] [rbp-10h]
  unsigned __int16 v35; // [rsp+B8h] [rbp+20h]

  v35 = a4;
  v8 = "NULL";
  v9 = (__int64)a8;
  v11 = (__int64)a7;
  v13 = (unsigned __int64)a3 >> 16;
  v14 = -1LL;
  v15 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v13 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v15, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v13 + 1) >= a2 )
  {
    if ( a8 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a8[v21] );
      v22 = v21 + 1;
    }
    else
    {
      v22 = 5LL;
    }
    v23 = "NULL";
    if ( a8 )
      v23 = a8;
    if ( a7 )
    {
      v24 = -1LL;
      do
        ++v24;
      while ( a7[v24] );
      v25 = v24 + 1;
    }
    else
    {
      v25 = 5LL;
    }
    v26 = "NULL";
    if ( a7 )
      v26 = a7;
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v13),
      43LL,
      a5,
      v35,
      &a6,
      8LL,
      v26,
      v25,
      v23,
      v22,
      0LL);
    a4 = v35;
  }
  if ( v9 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *(_BYTE *)(v9 + v16) );
    v17 = v16 + 1;
  }
  else
  {
    v17 = 5LL;
  }
  v18 = "NULL";
  if ( v9 )
    v18 = (const char *)v9;
  if ( v11 )
  {
    do
      ++v14;
    while ( *(_BYTE *)(v14 + v11) );
    v19 = v14 + 1;
  }
  else
  {
    v19 = 5LL;
  }
  if ( v11 )
    v8 = (const char *)v11;
  LOWORD(v27) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v27, &a6, 8LL, v8, v19, v18, v17, 0LL, v28, v29, v30, v31, v32, v33);
}
