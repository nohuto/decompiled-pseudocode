/*
 * XREFs of CommonBuffer_Create @ 0x1C004B870
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C004E1C0 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0004A10 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C0005BA0 (WPP_RECORDER_SF_d.c)
 *     CommonBuffer_AllocateBuffers @ 0x1C00080E0 (CommonBuffer_AllocateBuffers.c)
 *     WPP_RECORDER_SF_q @ 0x1C0008630 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010200 (memset.c)
 *     CommonBuffer_InitializePolicy @ 0x1C004B66C (CommonBuffer_InitializePolicy.c)
 *     Counter_CreateCommonBufferInstance @ 0x1C004B7A0 (Counter_CreateCommonBufferInstance.c)
 */

__int64 __fastcall CommonBuffer_Create(__int64 a1, __int64 a2, __int64 **a3)
{
  __int64 v5; // rax
  int v6; // ebx
  __int64 (__fastcall *v7)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, __int64 *, __int64 *); // rax
  int v8; // eax
  unsigned int v9; // ebx
  unsigned __int64 v11; // rax
  unsigned int v12; // ecx
  unsigned int v13; // r12d
  int v14; // edx
  __int64 *v15; // rdi
  __int64 *v16; // rcx
  __int64 v17; // rsi
  _QWORD *v18; // rbx
  _QWORD *v19; // r14
  __int64 *v20; // rbx
  __int64 v21; // rax
  int v22; // eax
  unsigned int v23; // edi
  __int64 v24; // [rsp+28h] [rbp-D8h]
  __int64 v25; // [rsp+30h] [rbp-D0h]
  __int64 v26; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v27; // [rsp+48h] [rbp-B8h]
  __int64 *v28; // [rsp+50h] [rbp-B0h]
  __int64 v29; // [rsp+58h] [rbp-A8h] BYREF
  __int64 (__fastcall *v30)(__int64); // [rsp+60h] [rbp-A0h]
  __int64 v31; // [rsp+68h] [rbp-98h]
  __int64 v32; // [rsp+70h] [rbp-90h]
  __int64 v33; // [rsp+78h] [rbp-88h]
  __int64 v34; // [rsp+80h] [rbp-80h]
  void *v35; // [rsp+88h] [rbp-78h]
  _QWORD v36[3]; // [rsp+90h] [rbp-70h] BYREF
  __int64 **v37; // [rsp+A8h] [rbp-58h]
  _QWORD v38[10]; // [rsp+B0h] [rbp-50h] BYREF

  v37 = a3;
  v32 = 0LL;
  v29 = 0LL;
  v31 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = off_1C0043228;
  v30 = CommonBuffer_WdfEvtCleanupCallback;
  v5 = *(_QWORD *)(a2 + 80);
  LODWORD(v29) = 56;
  v32 = 0x100000001LL;
  if ( (*(_DWORD *)(*(_QWORD *)(v5 + 24) + 16LL) & 1) != 0 )
  {
    v6 = 6;
  }
  else
  {
    *(_QWORD *)(a2 + 232) |= 1uLL;
    v6 = 5;
  }
  memset(v38, 0, sizeof(v38));
  LODWORD(v38[0]) = 80;
  v7 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, __int64 *, __int64 *))(WdfFunctions_01015 + 752);
  HIDWORD(v38[0]) = v6;
  v38[1] = 16776704LL;
  LODWORD(v38[9]) = 1;
  HIDWORD(v38[8]) = 3;
  v8 = v7(WdfDriverGlobals, a1, v38, &v29, &v26);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 3072))(
            WdfDriverGlobals,
            v26,
            0LL);
    v12 = *(_DWORD *)(a2 + 372);
    v13 = v11;
    v14 = 0;
    if ( v11 > 0xFFFE00 )
      v13 = 16776704;
    LOBYTE(v14) = (v13 & 0xFFF) != 0;
    v27 = v14 + (v13 >> 12) + 1;
    if ( v12 > 1 && v12 < v14 + (v13 >> 12) + 1 )
    {
      v27 = v12;
      v13 = (v12 - 1) << 12;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(a2 + 64),
        4u,
        7u,
        0xCu,
        (__int64)&WPP_cd940d3c41c233e2944b46db56fe2ea3_Traceguids,
        v12,
        v13);
    }
    v15 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                       WdfDriverGlobals,
                       v26,
                       off_1C0043228);
    v28 = v15;
    *v15 = v26;
    v15[1] = a2;
    WPP_RECORDER_SF_q(
      *(_QWORD *)(a2 + 64),
      4u,
      7u,
      0xDu,
      (__int64)&WPP_cd940d3c41c233e2944b46db56fe2ea3_Traceguids,
      v26);
    KeInitializeSpinLock((PKSPIN_LOCK)v15 + 15);
    v16 = v28;
    v17 = (__int64)(v15 + 16);
    v15[17] = (__int64)(v15 + 16);
    v18 = v15 + 18;
    v15[16] = (__int64)(v15 + 16);
    v19 = v15 + 21;
    v15[19] = (__int64)(v15 + 18);
    v15 += 23;
    *v18 = v18;
    v19[1] = v19;
    *v19 = v19;
    v15[1] = (__int64)v15;
    *v15 = (__int64)v15;
    v16[26] = (__int64)(v16 + 25);
    v16[25] = (__int64)(v16 + 25);
    v16[28] = (__int64)(v16 + 27);
    v16[27] = (__int64)(v16 + 27);
    v16[32] = (__int64)(v16 + 31);
    v16[31] = (__int64)(v16 + 31);
    CommonBuffer_InitializePolicy((__int64)v16);
    v25 = (__int64)v18;
    v20 = v28;
    CommonBuffer_AllocateBuffers(v28, 0x1000u, *((_DWORD *)v28 + 10), v17, (_DWORD *)v28 + 28, (_DWORD *)v28 + 29, v25);
    CommonBuffer_AllocateBuffers(
      v20,
      0x200u,
      *((_DWORD *)v20 + 14),
      (__int64)v19,
      (_DWORD *)v20 + 40,
      (_DWORD *)v20 + 41,
      (__int64)v15);
    v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 3080))(
            WdfDriverGlobals,
            v26,
            0LL);
    *((_DWORD *)v20 + 18) = v13;
    v20[10] = v21;
    *((_DWORD *)v20 + 19) = v27;
    KeInitializeEvent((PRKEVENT)(v20 + 11), NotificationEvent, 1u);
    v30 = 0LL;
    v31 = 0LL;
    v34 = 0LL;
    v35 = 0LL;
    v33 = v26;
    v29 = 56LL;
    v32 = 0x100000001LL;
    v36[2] = 1LL;
    v36[1] = CommonBuffer_RebalanceResourcesWorkItem;
    v36[0] = 24LL;
    v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64 *, __int64 *))(WdfFunctions_01015 + 3032))(
            WdfDriverGlobals,
            v36,
            &v29,
            v20 + 29);
    v23 = v22;
    if ( v22 < 0 )
    {
      LODWORD(v24) = v22;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a2 + 64),
        2u,
        7u,
        0xEu,
        (__int64)&WPP_cd940d3c41c233e2944b46db56fe2ea3_Traceguids,
        v24);
    }
    Counter_CreateCommonBufferInstance((__int64)v20);
    *v37 = v20;
    return v23;
  }
  else
  {
    WPP_RECORDER_SF_d(*(_QWORD *)(a2 + 64), 2u, 7u, 0xBu, (__int64)&WPP_cd940d3c41c233e2944b46db56fe2ea3_Traceguids, v8);
    return v9;
  }
}
