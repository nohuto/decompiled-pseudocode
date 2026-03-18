/*
 * XREFs of CommonBuffer_Create @ 0x1C004B100
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C0048BE0 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005540 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006B30 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C0008E10 (WPP_RECORDER_SF_q.c)
 *     CommonBuffer_AllocateBuffers @ 0x1C0009530 (CommonBuffer_AllocateBuffers.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0011000 (memset.c)
 *     Counter_CreateCommonBufferInstance @ 0x1C004A68C (Counter_CreateCommonBufferInstance.c)
 *     CommonBuffer_InitializePolicy @ 0x1C004B48C (CommonBuffer_InitializePolicy.c)
 */

__int64 __fastcall CommonBuffer_Create(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rax
  int v6; // ebx
  unsigned int v7; // ebx
  __int64 (__fastcall *v8)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD *, __int64 *); // rax
  int v9; // eax
  unsigned int v10; // edi
  unsigned __int64 v11; // rax
  unsigned int v12; // eax
  __int64 v13; // r12
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v18; // [rsp+28h] [rbp-91h]
  _QWORD v19[3]; // [rsp+40h] [rbp-79h] BYREF
  _QWORD v20[7]; // [rsp+58h] [rbp-61h] BYREF
  _QWORD v21[10]; // [rsp+90h] [rbp-29h] BYREF
  unsigned int v22; // [rsp+128h] [rbp+6Fh]
  __int64 v24; // [rsp+138h] [rbp+7Fh] BYREF

  memset(v20, 0, sizeof(v20));
  v20[6] = off_1C0041160;
  v20[1] = CommonBuffer_WdfEvtCleanupCallback;
  v5 = *(_QWORD *)(a2 + 80);
  LODWORD(v20[0]) = 56;
  v20[3] = 0x100000001LL;
  if ( (*(_DWORD *)(*(_QWORD *)(v5 + 24) + 16LL) & 1) != 0 )
  {
    v6 = 6;
  }
  else
  {
    *(_QWORD *)(a2 + 232) |= 1uLL;
    v6 = 5;
  }
  memset(v21, 0, sizeof(v21));
  HIDWORD(v21[0]) = v6;
  v7 = 16776704;
  v8 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01015 + 752);
  LODWORD(v21[0]) = 80;
  v21[1] = 16776704LL;
  LODWORD(v21[9]) = 1;
  HIDWORD(v21[8]) = 3;
  v9 = v8(WdfDriverGlobals, a1, v21, v20, &v24);
  v10 = v9;
  if ( v9 < 0 )
  {
    WPP_RECORDER_SF_d(*(_QWORD *)(a2 + 64), 2u, 7u, 0xBu, (__int64)&WPP_ea947e51f0cea3a28a50faeec413c0d5_Traceguids, v9);
    return v10;
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 3072))(
            WdfDriverGlobals,
            v24,
            0LL);
    if ( v11 <= 0xFFFE00 )
      v7 = v11;
    v12 = *(_DWORD *)(a2 + 364);
    v22 = (v7 >> 12) + 1 + ((v7 & 0xFFF) != 0);
    if ( v12 < v22 && v12 > 1 )
    {
      v22 = *(_DWORD *)(a2 + 364);
      v7 = (v12 - 1) << 12;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(a2 + 64),
        4u,
        7u,
        0xCu,
        (__int64)&WPP_ea947e51f0cea3a28a50faeec413c0d5_Traceguids,
        v22,
        v7);
    }
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            v24,
            off_1C0041160);
    *(_QWORD *)v13 = v24;
    *(_QWORD *)(v13 + 8) = a2;
    WPP_RECORDER_SF_q(
      *(_QWORD *)(a2 + 64),
      4u,
      7u,
      0xDu,
      (__int64)&WPP_ea947e51f0cea3a28a50faeec413c0d5_Traceguids,
      v24);
    KeInitializeSpinLock((PKSPIN_LOCK)(v13 + 120));
    *(_QWORD *)(v13 + 136) = v13 + 128;
    *(_QWORD *)(v13 + 128) = v13 + 128;
    *(_QWORD *)(v13 + 152) = v13 + 144;
    *(_QWORD *)(v13 + 144) = v13 + 144;
    *(_QWORD *)(v13 + 176) = v13 + 168;
    *(_QWORD *)(v13 + 168) = v13 + 168;
    *(_QWORD *)(v13 + 192) = v13 + 184;
    *(_QWORD *)(v13 + 184) = v13 + 184;
    *(_QWORD *)(v13 + 208) = v13 + 200;
    *(_QWORD *)(v13 + 200) = v13 + 200;
    *(_QWORD *)(v13 + 224) = v13 + 216;
    *(_QWORD *)(v13 + 216) = v13 + 216;
    *(_QWORD *)(v13 + 256) = v13 + 248;
    *(_QWORD *)(v13 + 248) = v13 + 248;
    CommonBuffer_InitializePolicy(v13);
    CommonBuffer_AllocateBuffers(
      (__int64 *)v13,
      0x1000u,
      *(_DWORD *)(v13 + 40),
      v13 + 128,
      (_DWORD *)(v13 + 112),
      (_DWORD *)(v13 + 116),
      v13 + 144);
    CommonBuffer_AllocateBuffers(
      (__int64 *)v13,
      0x200u,
      *(_DWORD *)(v13 + 56),
      v13 + 168,
      (_DWORD *)(v13 + 160),
      (_DWORD *)(v13 + 164),
      v13 + 184);
    v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 3080))(
            WdfDriverGlobals,
            v24,
            0LL);
    *(_DWORD *)(v13 + 72) = v7;
    *(_QWORD *)(v13 + 80) = v14;
    *(_DWORD *)(v13 + 76) = v22;
    KeInitializeEvent((PRKEVENT)(v13 + 88), NotificationEvent, 1u);
    memset(v20, 0, sizeof(v20));
    v20[4] = v24;
    v19[2] = 1LL;
    v19[0] = 24LL;
    LODWORD(v20[0]) = 56;
    v20[3] = 0x100000001LL;
    v19[1] = CommonBuffer_RebalanceResourcesWorkItem;
    v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, __int64))(WdfFunctions_01015 + 3032))(
            WdfDriverGlobals,
            v19,
            v20,
            v13 + 232);
    v16 = v15;
    if ( v15 < 0 )
    {
      LODWORD(v18) = v15;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a2 + 64),
        2u,
        7u,
        0xEu,
        (__int64)&WPP_ea947e51f0cea3a28a50faeec413c0d5_Traceguids,
        v18);
    }
    Counter_CreateCommonBufferInstance(v13);
    *a3 = v13;
    return v16;
  }
}
