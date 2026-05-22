/*
 * XREFs of ?ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18002EB60
 * Callers:
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18002D660 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process2DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18002D890 (-Process2DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18002D8E0 (-PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@.c)
 * Callees:
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCGamepadProcessor::ClearControllerProcessorState(MPCGamepadProcessor *this, struct InputInfo *a2)
{
  _OWORD *v3; // rax
  __int64 v4; // r8
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // rcx
  _OWORD v18[5]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v19[704]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v20; // [rsp+330h] [rbp+230h]
  __int128 v21; // [rsp+340h] [rbp+240h]
  __int128 v22; // [rsp+350h] [rbp+250h]
  __int128 v23; // [rsp+360h] [rbp+260h]
  __int64 v24; // [rsp+370h] [rbp+270h]

  v3 = v19;
  v4 = 14LL;
  do
  {
    v5 = *((_OWORD *)a2 + 1);
    *v3 = *(_OWORD *)a2;
    v6 = *((_OWORD *)a2 + 2);
    v3[1] = v5;
    v7 = *((_OWORD *)a2 + 3);
    v3[2] = v6;
    v8 = *((_OWORD *)a2 + 4);
    v3[3] = v7;
    v9 = *((_OWORD *)a2 + 5);
    v3[4] = v8;
    v10 = *((_OWORD *)a2 + 6);
    v3[5] = v9;
    v11 = *((_OWORD *)a2 + 7);
    a2 = (struct InputInfo *)((char *)a2 + 128);
    v3[6] = v10;
    v3 += 8;
    *(v3 - 1) = v11;
    --v4;
  }
  while ( v4 );
  v12 = *((_OWORD *)a2 + 1);
  *v3 = *(_OWORD *)a2;
  v13 = *((_OWORD *)a2 + 2);
  v3[1] = v12;
  v14 = *((_OWORD *)a2 + 3);
  v3[2] = v13;
  v15 = *((_OWORD *)a2 + 4);
  v3[3] = v14;
  v16 = *((_OWORD *)a2 + 5);
  v3[4] = v15;
  v3[5] = v16;
  memset(v18, 0, 0x48uLL);
  v17 = *((_QWORD *)this + 22);
  v20 = v18[0];
  v22 = v18[2];
  v21 = v18[1];
  v24 = *(_QWORD *)&v18[4];
  v23 = v18[3];
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v17 + 48LL))(v17, v19);
}
