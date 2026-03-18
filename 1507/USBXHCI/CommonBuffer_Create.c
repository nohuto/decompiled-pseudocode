/*
 * XREFs of CommonBuffer_Create @ 0x1C0048950
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C004AEE0 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00023E0 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 *     CommonBuffer_AllocateBuffers @ 0x1C0005B40 (CommonBuffer_AllocateBuffers.c)
 *     WPP_RECORDER_SF_q @ 0x1C0005E40 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     CommonBuffer_InitializePolicy @ 0x1C00488FC (CommonBuffer_InitializePolicy.c)
 *     Counter_CreateCommonBufferInstance @ 0x1C0049428 (Counter_CreateCommonBufferInstance.c)
 */

__int64 __fastcall CommonBuffer_Create(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rax
  int v6; // ebx
  unsigned int v7; // ebx
  int v8; // eax
  unsigned int v9; // edi
  unsigned __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v12; // r12
  __int64 v13; // rax
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v17; // [rsp+28h] [rbp-91h]
  _QWORD v18[3]; // [rsp+40h] [rbp-79h] BYREF
  _QWORD v19[7]; // [rsp+58h] [rbp-61h] BYREF
  _QWORD v20[10]; // [rsp+90h] [rbp-29h] BYREF
  unsigned int v21; // [rsp+128h] [rbp+6Fh]
  __int64 v23; // [rsp+138h] [rbp+7Fh] BYREF

  memset(v19, 0, sizeof(v19));
  v19[6] = off_1C0040130;
  v19[1] = CommonBuffer_WdfEvtCleanupCallback;
  v5 = *(_QWORD *)(a2 + 80);
  LODWORD(v19[0]) = 56;
  v19[3] = 0x100000001LL;
  if ( (*(_DWORD *)(*(_QWORD *)(v5 + 24) + 16LL) & 1) != 0 )
  {
    v6 = 6;
  }
  else
  {
    *(_QWORD *)(a2 + 232) |= 1uLL;
    v6 = 5;
  }
  memset(v20, 0, sizeof(v20));
  HIDWORD(v20[0]) = v6;
  LODWORD(v20[0]) = 80;
  LODWORD(v20[9]) = 1;
  v7 = 16776704;
  v20[1] = 16776704LL;
  HIDWORD(v20[8]) = 3;
  v8 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01015 + 752))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         a1,
         v20,
         v19,
         &v23);
  v9 = v8;
  if ( v8 < 0 )
  {
    WPP_RECORDER_SF_d(*(_QWORD *)(a2 + 64), 2u, 7u, 0xBu, (__int64)&WPP_ea947e51f0cea3a28a50faeec413c0d5_Traceguids, v8);
    return v9;
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, _QWORD))(WdfFunctions_01015 + 3072))(
            WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
            v23,
            0LL);
    if ( v10 <= 0xFFFE00 )
      v7 = v10;
    v11 = *(_DWORD *)(a2 + 364);
    v21 = (v7 >> 12) + 1 + ((v7 & 0xFFF) != 0);
    if ( v11 < v21 && v11 > 1 )
    {
      v21 = *(_DWORD *)(a2 + 364);
      v7 = (v11 - 1) << 12;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(a2 + 64),
        4u,
        7u,
        0xCu,
        (__int64)&WPP_ea947e51f0cea3a28a50faeec413c0d5_Traceguids,
        v21,
        v7);
    }
    v12 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
            WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
            v23,
            off_1C0040130);
    *(_QWORD *)v12 = v23;
    *(_QWORD *)(v12 + 8) = a2;
    WPP_RECORDER_SF_q(
      *(_QWORD *)(a2 + 64),
      4u,
      7u,
      0xDu,
      (__int64)&WPP_ea947e51f0cea3a28a50faeec413c0d5_Traceguids,
      v23);
    KeInitializeSpinLock((PKSPIN_LOCK)(v12 + 120));
    *(_QWORD *)(v12 + 136) = v12 + 128;
    *(_QWORD *)(v12 + 128) = v12 + 128;
    *(_QWORD *)(v12 + 152) = v12 + 144;
    *(_QWORD *)(v12 + 144) = v12 + 144;
    *(_QWORD *)(v12 + 176) = v12 + 168;
    *(_QWORD *)(v12 + 168) = v12 + 168;
    *(_QWORD *)(v12 + 192) = v12 + 184;
    *(_QWORD *)(v12 + 184) = v12 + 184;
    *(_QWORD *)(v12 + 208) = v12 + 200;
    *(_QWORD *)(v12 + 200) = v12 + 200;
    *(_QWORD *)(v12 + 224) = v12 + 216;
    *(_QWORD *)(v12 + 216) = v12 + 216;
    *(_QWORD *)(v12 + 256) = v12 + 248;
    *(_QWORD *)(v12 + 248) = v12 + 248;
    CommonBuffer_InitializePolicy(v12);
    CommonBuffer_AllocateBuffers(
      (__int64 *)v12,
      0x1000u,
      *(_DWORD *)(v12 + 40),
      v12 + 128,
      (_DWORD *)(v12 + 112),
      (_DWORD *)(v12 + 116),
      v12 + 144);
    CommonBuffer_AllocateBuffers(
      (__int64 *)v12,
      0x200u,
      *(_DWORD *)(v12 + 56),
      v12 + 168,
      (_DWORD *)(v12 + 160),
      (_DWORD *)(v12 + 164),
      v12 + 184);
    v13 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, _QWORD))(WdfFunctions_01015 + 3080))(
            WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
            v23,
            0LL);
    *(_DWORD *)(v12 + 72) = v7;
    *(_QWORD *)(v12 + 80) = v13;
    *(_DWORD *)(v12 + 76) = v21;
    KeInitializeEvent((PRKEVENT)(v12 + 88), NotificationEvent, 1u);
    memset(v19, 0, sizeof(v19));
    v19[4] = v23;
    v18[2] = 1LL;
    v18[0] = 24LL;
    LODWORD(v19[0]) = 56;
    v19[3] = 0x100000001LL;
    v18[1] = CommonBuffer_RebalanceResourcesWorkItem;
    v14 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD *, _QWORD *, __int64))(WdfFunctions_01015 + 3032))(
            WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
            v18,
            v19,
            v12 + 232);
    v15 = v14;
    if ( v14 < 0 )
    {
      LODWORD(v17) = v14;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a2 + 64),
        2u,
        7u,
        0xEu,
        (__int64)&WPP_ea947e51f0cea3a28a50faeec413c0d5_Traceguids,
        v17);
    }
    Counter_CreateCommonBufferInstance(v12);
    *a3 = v12;
    return v15;
  }
}
