/*
 * XREFs of TR_Create @ 0x1C0053D8C
 * Callers:
 *     Endpoint_UcxEvtEndpointStaticStreamsAdd @ 0x1C0024EF0 (Endpoint_UcxEvtEndpointStaticStreamsAdd.c)
 *     Endpoint_Create @ 0x1C0052D7C (Endpoint_Create.c)
 * Callees:
 *     TR_EnsureSegments @ 0x1C00010A0 (TR_EnsureSegments.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010200 (memset.c)
 *     TR_AcquireSegment @ 0x1C0028A2C (TR_AcquireSegment.c)
 *     WPP_RECORDER_SF_DDDd @ 0x1C0029250 (WPP_RECORDER_SF_DDDd.c)
 *     Counter_CreateTransferRingInstance @ 0x1C0054A88 (Counter_CreateTransferRingInstance.c)
 */

__int64 __fastcall TR_Create(__int64 *a1, __int64 a2, __int64 a3, int a4, __int64 *a5)
{
  __int64 v8; // r10
  int v9; // ebx
  bool v10; // zf
  int v11; // eax
  __int64 v12; // rax
  __int64 (__fastcall **v13)(); // r12
  unsigned int v14; // edi
  int v15; // edi
  bool v16; // cf
  __int64 v17; // rdx
  __int64 (__fastcall *v18)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD *, __int64 *); // rax
  int v19; // eax
  unsigned __int16 v20; // r9
  __int64 v21; // r8
  __int64 v22; // rax
  __int128 v23; // xmm0
  __int64 v24; // rbx
  __int128 v25; // xmm1
  __int64 (__fastcall *v26)(); // r8
  __int64 v27; // rax
  __int64 (__fastcall *v28)(); // rax
  int v30; // [rsp+28h] [rbp-D8h]
  int v31; // [rsp+30h] [rbp-D0h]
  int v32; // [rsp+38h] [rbp-C8h]
  int v33; // [rsp+40h] [rbp-C0h]
  _BYTE v34[40]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v35[3]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v36[8]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v37[18]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v38; // [rsp+170h] [rbp+70h] BYREF
  __int64 v39; // [rsp+180h] [rbp+80h]

  v39 = a3;
  memset(v34, 0, sizeof(v34));
  v8 = a1[11];
  v9 = 3;
  *(_DWORD *)&v34[4] = *(_DWORD *)(v8 + 72) - 4096;
  *(_DWORD *)&v34[8] = *(_DWORD *)(v8 + 76);
  v10 = (*(_BYTE *)(a2 + 99) & 3) == 0;
  v11 = *(_BYTE *)(a2 + 99) & 3;
  *(_DWORD *)v34 = v11;
  if ( v10 )
  {
    v13 = ControlFunctionTable;
    v16 = (a1[29] & 8) != 0;
    *(_DWORD *)&v34[24] = 512;
    v9 = 1;
    v14 = 336;
    *(_DWORD *)&v34[20] = v16 ? 4096 : 512;
    goto LABEL_9;
  }
  if ( v11 == 1 )
  {
    v13 = IsochFunctionTable;
    v14 = 392;
    *(_QWORD *)&v34[20] = 512LL;
LABEL_9:
    *(_QWORD *)&v34[32] = v13;
    *(_DWORD *)&v34[16] = v14;
    *(_DWORD *)&v34[12] = v9;
    goto LABEL_10;
  }
  if ( (unsigned int)(v11 - 2) <= 1 )
  {
    v12 = a1[29];
    v13 = BulkFunctionTable;
    *(_DWORD *)&v34[12] = 3;
    v14 = 368;
    *(_QWORD *)&v34[16] = 0x20000000170LL;
    *(_DWORD *)&v34[24] = 512;
    *(_QWORD *)&v34[32] = BulkFunctionTable;
    if ( (v12 & 8) != 0 )
      *(_DWORD *)&v34[4] = 114688;
LABEL_10:
    memset(v37, 0, 0x60uLL);
    HIDWORD(v37[0]) = v9;
    LODWORD(v37[0]) = 96;
    LODWORD(v37[1]) = 2;
    v37[2] = v13[19];
    v37[9] = v13[20];
    memset(v36, 0, 0x38uLL);
    v17 = *a1;
    v36[6] = off_1C00432F0;
    v36[5] = v14;
    v36[1] = TR_WdfEvtCleanupCallback;
    v36[4] = v39;
    LODWORD(v36[0]) = 56;
    v18 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01015
                                                                                                + 1216);
    v36[3] = 0x100000001LL;
    v19 = v18(WdfDriverGlobals, v17, v37, v36, &v38);
    v15 = v19;
    if ( v19 < 0 )
    {
      v20 = 10;
      v33 = v19;
      v32 = a4;
      v21 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 16) + 135LL);
      v31 = *(_DWORD *)(a2 + 144);
      v30 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 16) + 135LL);
LABEL_12:
      WPP_RECORDER_SF_DDDd(
        a1[8],
        2u,
        v21,
        v20,
        (__int64)&WPP_7e99ab8c306b357b4764855264695a8e_Traceguids,
        v30,
        v31,
        v32,
        v33);
      return (unsigned int)v15;
    }
    v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            v38,
            off_1C00432F0);
    v23 = *(_OWORD *)v34;
    v24 = v22;
    v25 = *(_OWORD *)&v34[16];
    *(_QWORD *)(v22 + 40) = a1;
    *(_OWORD *)v22 = v23;
    *(_QWORD *)&v23 = *(_QWORD *)&v34[32];
    *(_OWORD *)(v22 + 16) = v25;
    *(_QWORD *)(v22 + 32) = v23;
    *(_QWORD *)(v22 + 48) = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(v22 + 56) = a2;
    *(_DWORD *)(v22 + 64) = a4;
    *(_QWORD *)(v22 + 72) = v38;
    KeInitializeSpinLock((PKSPIN_LOCK)(v22 + 88));
    *(_QWORD *)(v24 + 208) = v24 + 200;
    *(_QWORD *)(v24 + 200) = v24 + 200;
    *(_QWORD *)(v24 + 224) = v24 + 216;
    *(_QWORD *)(v24 + 216) = v24 + 216;
    v26 = v13[21];
    if ( v26
      && (v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(), __int64))(WdfFunctions_01015 + 1328))(
                  WdfDriverGlobals,
                  v38,
                  v26,
                  v24),
          v15 < 0) )
    {
      v20 = 11;
    }
    else
    {
      v28 = v13[22];
      v35[0] = 24LL;
      v35[1] = v28;
      v35[2] = 1LL;
      memset(v36, 0, 0x38uLL);
      v36[4] = v38;
      LODWORD(v36[0]) = 56;
      v36[3] = 0x100000001LL;
      v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, __int64))(WdfFunctions_01015 + 888))(
              WdfDriverGlobals,
              v35,
              v36,
              v24 + 80);
      if ( v15 >= 0 )
      {
        v15 = TR_EnsureSegments(v24, 1u, 0);
        if ( v15 < 0 )
        {
          v27 = *(_QWORD *)(v24 + 48);
          v20 = 13;
          goto LABEL_17;
        }
        *(_QWORD *)(v24 + 168) = TR_AcquireSegment(v24);
        v15 = ((__int64 (__fastcall *)(__int64))*v13)(v24);
        if ( v15 >= 0 )
        {
          Counter_CreateTransferRingInstance(*(_QWORD *)(v24 + 56), *(unsigned int *)(v24 + 64), v24 + 232);
          *a5 = v24;
          return (unsigned int)v15;
        }
        v20 = 14;
      }
      else
      {
        v20 = 12;
      }
    }
    v27 = *(_QWORD *)(a2 + 16);
LABEL_17:
    v33 = v15;
    v32 = a4;
    v31 = *(_DWORD *)(a2 + 144);
    v30 = *(unsigned __int8 *)(v27 + 135);
    goto LABEL_12;
  }
  return (unsigned int)-1073741823;
}
