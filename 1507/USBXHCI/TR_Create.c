/*
 * XREFs of TR_Create @ 0x1C0050C08
 * Callers:
 *     Endpoint_UcxEvtEndpointStaticStreamsAdd @ 0x1C001B5F0 (Endpoint_UcxEvtEndpointStaticStreamsAdd.c)
 *     Endpoint_Create @ 0x1C004FC0C (Endpoint_Create.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     TR_AcquireSegment @ 0x1C001FF68 (TR_AcquireSegment.c)
 *     TR_EnsureSegments @ 0x1C00204A4 (TR_EnsureSegments.c)
 *     WPP_RECORDER_SF_DDDd @ 0x1C0020D70 (WPP_RECORDER_SF_DDDd.c)
 *     Counter_CreateTransferRingInstance @ 0x1C00518F8 (Counter_CreateTransferRingInstance.c)
 */

__int64 __fastcall TR_Create(__int64 *a1, __int64 a2, __int64 a3, int a4, __int64 *a5)
{
  __int64 v8; // r10
  int v9; // ebx
  bool v10; // zf
  int v11; // eax
  __int64 v12; // rax
  __int64 (__fastcall **v13)(); // r15
  unsigned int v14; // edi
  int v15; // edi
  char v16; // al
  __int64 v17; // rdx
  int v18; // eax
  unsigned __int16 v19; // r9
  __int64 v20; // r8
  __int64 v21; // rax
  __int128 v22; // xmm0
  __int64 v23; // rbx
  __int128 v24; // xmm1
  __int64 (__fastcall *v25)(); // r8
  __int64 v26; // rax
  __int64 (__fastcall *v27)(); // rax
  int v29; // [rsp+28h] [rbp-D8h]
  int v30; // [rsp+30h] [rbp-D0h]
  int v31; // [rsp+38h] [rbp-C8h]
  int v32; // [rsp+40h] [rbp-C0h]
  _BYTE v33[40]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v34[3]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v35[8]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v36[18]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v37; // [rsp+170h] [rbp+70h] BYREF
  __int64 v38; // [rsp+180h] [rbp+80h]

  v38 = a3;
  memset(v33, 0, sizeof(v33));
  v8 = a1[11];
  v9 = 3;
  *(_DWORD *)&v33[4] = *(_DWORD *)(v8 + 72) - 4096;
  *(_DWORD *)&v33[8] = *(_DWORD *)(v8 + 76);
  v10 = (*(_BYTE *)(a2 + 99) & 3) == 0;
  v11 = *(_BYTE *)(a2 + 99) & 3;
  *(_DWORD *)v33 = v11;
  if ( v10 )
  {
    v13 = ControlFunctionTable;
    v16 = -(a1[29] & 8);
    *(_DWORD *)&v33[24] = 512;
    v9 = 1;
    v14 = 336;
    *(_DWORD *)&v33[20] = v16 != 0 ? 4096 : 512;
    goto LABEL_9;
  }
  if ( v11 == 1 )
  {
    v13 = IsochFunctionTable;
    v14 = 392;
    *(_QWORD *)&v33[20] = 512LL;
LABEL_9:
    *(_QWORD *)&v33[32] = v13;
    *(_DWORD *)&v33[16] = v14;
    *(_DWORD *)&v33[12] = v9;
    goto LABEL_10;
  }
  if ( (unsigned int)(v11 - 2) <= 1 )
  {
    v12 = a1[29];
    v13 = BulkFunctionTable;
    *(_DWORD *)&v33[12] = 3;
    v14 = 368;
    *(_QWORD *)&v33[16] = 0x20000000170LL;
    *(_DWORD *)&v33[24] = 512;
    *(_QWORD *)&v33[32] = BulkFunctionTable;
    if ( (v12 & 8) != 0 )
      *(_DWORD *)&v33[4] = 114688;
LABEL_10:
    memset(v36, 0, 0x60uLL);
    HIDWORD(v36[0]) = v9;
    LODWORD(v36[0]) = 96;
    LODWORD(v36[1]) = 2;
    v36[2] = v13[19];
    v36[9] = v13[20];
    memset(v35, 0, 0x38uLL);
    v17 = *a1;
    v35[6] = off_1C0040310;
    v35[5] = v14;
    v35[1] = TR_WdfEvtCleanupCallback;
    v35[4] = v38;
    LODWORD(v35[0]) = 56;
    v35[3] = 0x100000001LL;
    v18 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01015 + 1216))(
            WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
            v17,
            v36,
            v35,
            &v37);
    v15 = v18;
    if ( v18 < 0 )
    {
      v19 = 10;
      v32 = v18;
      v31 = a4;
      v20 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 16) + 135LL);
      v30 = *(_DWORD *)(a2 + 144);
      v29 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 16) + 135LL);
LABEL_12:
      WPP_RECORDER_SF_DDDd(
        a1[8],
        2u,
        v20,
        v19,
        (__int64)&WPP_f16db56c32e588ad62ddfc8618af2a2c_Traceguids,
        v29,
        v30,
        v31,
        v32);
      return (unsigned int)v15;
    }
    v21 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
            WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
            v37,
            off_1C0040310);
    v22 = *(_OWORD *)v33;
    v23 = v21;
    v24 = *(_OWORD *)&v33[16];
    *(_QWORD *)(v21 + 40) = a1;
    *(_OWORD *)v21 = v22;
    *(_QWORD *)&v22 = *(_QWORD *)&v33[32];
    *(_OWORD *)(v21 + 16) = v24;
    *(_QWORD *)(v21 + 32) = v22;
    *(_QWORD *)(v21 + 48) = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(v21 + 56) = a2;
    *(_DWORD *)(v21 + 64) = a4;
    *(_QWORD *)(v21 + 72) = v37;
    KeInitializeSpinLock((PKSPIN_LOCK)(v21 + 88));
    *(_QWORD *)(v23 + 208) = v23 + 200;
    *(_QWORD *)(v23 + 200) = v23 + 200;
    *(_QWORD *)(v23 + 224) = v23 + 216;
    *(_QWORD *)(v23 + 216) = v23 + 216;
    v25 = v13[21];
    if ( v25
      && (v15 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, __int64 (__fastcall *)(), __int64))(WdfFunctions_01015 + 1328))(
                  WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                  v37,
                  v25,
                  v23),
          v15 < 0) )
    {
      v19 = 11;
    }
    else
    {
      v27 = v13[22];
      v34[0] = 24LL;
      v34[1] = v27;
      v34[2] = 1LL;
      memset(v35, 0, 0x38uLL);
      v35[4] = v37;
      LODWORD(v35[0]) = 56;
      v35[3] = 0x100000001LL;
      v15 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD *, _QWORD *, __int64))(WdfFunctions_01015 + 888))(
              WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
              v34,
              v35,
              v23 + 80);
      if ( v15 >= 0 )
      {
        v15 = TR_EnsureSegments(v23, 1u, 0);
        if ( v15 < 0 )
        {
          v26 = *(_QWORD *)(v23 + 48);
          v19 = 13;
          goto LABEL_17;
        }
        *(_QWORD *)(v23 + 168) = TR_AcquireSegment(v23);
        v15 = ((__int64 (__fastcall *)(__int64))*v13)(v23);
        if ( v15 >= 0 )
        {
          Counter_CreateTransferRingInstance(*(_QWORD *)(v23 + 56), *(unsigned int *)(v23 + 64), v23 + 232);
          *a5 = v23;
          return (unsigned int)v15;
        }
        v19 = 14;
      }
      else
      {
        v19 = 12;
      }
    }
    v26 = *(_QWORD *)(a2 + 16);
LABEL_17:
    v32 = v15;
    v31 = a4;
    v30 = *(_DWORD *)(a2 + 144);
    v29 = *(unsigned __int8 *)(v26 + 135);
    goto LABEL_12;
  }
  return (unsigned int)-1073741823;
}
