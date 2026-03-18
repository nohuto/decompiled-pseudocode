/*
 * XREFs of CommonBuffer_Create @ 0x1C004F9F0
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C004C600 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0004D90 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006370 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C0009BA0 (WPP_RECORDER_SF_q.c)
 *     CommonBuffer_AllocateBuffers @ 0x1C000A090 (CommonBuffer_AllocateBuffers.c)
 *     __security_check_cookie @ 0x1C00105E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010E80 (memset.c)
 *     Counter_CreateCommonBufferInstance @ 0x1C004E4B8 (Counter_CreateCommonBufferInstance.c)
 *     CommonBuffer_InitializePolicy @ 0x1C004FD84 (CommonBuffer_InitializePolicy.c)
 */

__int64 __fastcall CommonBuffer_Create(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rax
  int v6; // esi
  int v7; // ebx
  unsigned int v8; // r12d
  __int64 (__fastcall *v9)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD *, __int64 *); // rax
  int v10; // ebx
  unsigned __int64 v11; // rax
  unsigned int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // [rsp+28h] [rbp-D8h]
  __int64 v20; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v21[3]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A0h]
  __int64 *v23; // [rsp+68h] [rbp-98h]
  _QWORD v24[8]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v25; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v26[10]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v27; // [rsp+110h] [rbp+10h]

  v22 = a2;
  v23 = a3;
  memset(v24, 0, 0x38uLL);
  v24[6] = off_1C0045228;
  v24[1] = CommonBuffer_WdfEvtCleanupCallback;
  v5 = *(_QWORD *)(a2 + 80);
  LODWORD(v24[0]) = 56;
  v24[3] = 0x100000001LL;
  v6 = 2;
  if ( (*(_DWORD *)(*(_QWORD *)(v5 + 24) + 16LL) & 1) != 0 )
  {
    v7 = 6;
  }
  else
  {
    v27 = 1uLL;
    v25 = 1uLL;
    v17 = 2LL;
    v18 = (_QWORD *)(a2 + 232);
    do
    {
      *v18 |= *(_QWORD *)((char *)v18 + (_QWORD)&v26[-2] - a2 - 232);
      ++v18;
      --v17;
    }
    while ( v17 );
    v7 = 5;
  }
  memset(v26, 0, sizeof(v26));
  v8 = 16776704;
  LODWORD(v26[0]) = 80;
  v9 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01015 + 752);
  HIDWORD(v26[0]) = v7;
  v26[1] = 16776704LL;
  LODWORD(v26[9]) = 1;
  HIDWORD(v26[8]) = 3;
  v10 = v9(WdfDriverGlobals, a1, v26, v24, &v20);
  if ( v10 < 0 )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a2 + 64),
      2u,
      7u,
      0xBu,
      (__int64)&WPP_cd940d3c41c233e2944b46db56fe2ea3_Traceguids,
      v10);
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 3072))(
            WdfDriverGlobals,
            v20,
            0LL);
    if ( v11 <= 0xFFFE00 )
      v8 = v11;
    if ( (v8 & 0xFFF) == 0 )
      v6 = 1;
    v12 = *(_DWORD *)(a2 + 372);
    v13 = v6 + (v8 >> 12);
    if ( v12 < v13 && v12 > 1 )
    {
      v13 = *(_DWORD *)(a2 + 372);
      v8 = (v12 << 12) - 4096;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(a2 + 64),
        4u,
        7u,
        0xCu,
        (__int64)&WPP_cd940d3c41c233e2944b46db56fe2ea3_Traceguids,
        v13,
        v8);
    }
    v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            v20,
            off_1C0045228);
    *(_QWORD *)v14 = v20;
    *(_QWORD *)(v14 + 8) = a2;
    WPP_RECORDER_SF_q(
      *(_QWORD *)(a2 + 64),
      4u,
      7u,
      0xDu,
      (__int64)&WPP_cd940d3c41c233e2944b46db56fe2ea3_Traceguids,
      v20);
    KeInitializeSpinLock((PKSPIN_LOCK)(v14 + 120));
    *(_QWORD *)(v14 + 136) = v14 + 128;
    *(_QWORD *)(v14 + 128) = v14 + 128;
    *(_QWORD *)(v14 + 152) = v14 + 144;
    *(_QWORD *)(v14 + 144) = v14 + 144;
    *(_QWORD *)(v14 + 176) = v14 + 168;
    *(_QWORD *)(v14 + 168) = v14 + 168;
    *(_QWORD *)(v14 + 192) = v14 + 184;
    *(_QWORD *)(v14 + 184) = v14 + 184;
    *(_QWORD *)(v14 + 208) = v14 + 200;
    *(_QWORD *)(v14 + 200) = v14 + 200;
    *(_QWORD *)(v14 + 224) = v14 + 216;
    *(_QWORD *)(v14 + 216) = v14 + 216;
    *(_QWORD *)(v14 + 256) = v14 + 248;
    *(_QWORD *)(v14 + 248) = v14 + 248;
    CommonBuffer_InitializePolicy(v14);
    CommonBuffer_AllocateBuffers(
      (__int64 *)v14,
      0x1000u,
      *(_DWORD *)(v14 + 40),
      v14 + 128,
      (_DWORD *)(v14 + 112),
      (_DWORD *)(v14 + 116),
      v14 + 144);
    CommonBuffer_AllocateBuffers(
      (__int64 *)v14,
      0x200u,
      *(_DWORD *)(v14 + 56),
      v14 + 168,
      (_DWORD *)(v14 + 160),
      (_DWORD *)(v14 + 164),
      v14 + 184);
    v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 3080))(
            WdfDriverGlobals,
            v20,
            0LL);
    *(_DWORD *)(v14 + 72) = v8;
    *(_QWORD *)(v14 + 80) = v15;
    *(_DWORD *)(v14 + 76) = v13;
    KeInitializeEvent((PRKEVENT)(v14 + 88), NotificationEvent, 1u);
    memset(v24, 0, 0x38uLL);
    v24[4] = v20;
    v21[2] = 1LL;
    v21[1] = CommonBuffer_RebalanceResourcesWorkItem;
    LODWORD(v24[0]) = 56;
    v24[3] = 0x100000001LL;
    v21[0] = 24LL;
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, __int64))(WdfFunctions_01015 + 3032))(
            WdfDriverGlobals,
            v21,
            v24,
            v14 + 232);
    if ( v10 < 0 )
    {
      LODWORD(v19) = v10;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v22 + 64),
        2u,
        7u,
        0xEu,
        (__int64)&WPP_cd940d3c41c233e2944b46db56fe2ea3_Traceguids,
        v19);
    }
    Counter_CreateCommonBufferInstance(v14);
    *v23 = v14;
  }
  return (unsigned int)v10;
}
