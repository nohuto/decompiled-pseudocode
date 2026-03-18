/*
 * XREFs of Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C0020990
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0004D90 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0007F60 (WPP_RECORDER_SF_ddd.c)
 *     CommonBuffer_AcquireBuffer @ 0x1C0008830 (CommonBuffer_AcquireBuffer.c)
 *     __security_check_cookie @ 0x1C00105E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010E80 (memset.c)
 *     Command_SendCommand @ 0x1C00184A4 (Command_SendCommand.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C0019CD4 (CommonBuffer_ReleaseBuffer.c)
 *     Endpoint_GetDequeuePointer @ 0x1C001E62C (Endpoint_GetDequeuePointer.c)
 *     Endpoint_InitializeTransferRing @ 0x1C001E68C (Endpoint_InitializeTransferRing.c)
 */

void __fastcall Endpoint_UcxEvtDefaultEndpointUpdate(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // r13
  KSPIN_LOCK *v6; // r14
  __int64 v7; // r12
  __int64 *v8; // rsi
  unsigned int v9; // edx
  __int64 *v10; // rax
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rbp
  __int64 v14; // r10
  __int16 v15; // ax
  char v16; // al
  __int64 v17; // rax
  __int64 DequeuePointer; // rax
  __int64 v19; // r10
  __int64 v20; // [rsp+28h] [rbp-80h]
  __int64 v21; // [rsp+30h] [rbp-78h]
  __int128 v22; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v23[5]; // [rsp+50h] [rbp-58h] BYREF

  memset(v23, 0, sizeof(v23));
  LOWORD(v23[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    v23);
  v3 = v23[1];
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(v23[1] + 24LL),
         off_1C0045188);
  WPP_RECORDER_SF_ddd(
    *(_QWORD *)(*(_QWORD *)v4 + 64LL),
    4u,
    0xCu,
    0x1Du,
    (__int64)&WPP_dfd1540ede223d0a50a10695a1612c8d_Traceguids,
    *(unsigned __int8 *)(*(_QWORD *)(v4 + 16) + 135LL),
    *(_DWORD *)(v4 + 144),
    *(_DWORD *)(v3 + 32));
  v5 = *(_QWORD *)(*(_QWORD *)v4 + 80LL);
  v6 = *(KSPIN_LOCK **)(*(_QWORD *)v4 + 88LL);
  v7 = *(_QWORD *)(*(_QWORD *)v4 + 112LL);
  v8 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    a2,
                    off_1C0045070);
  memset(v8, 0, 0x68uLL);
  *v8 = v4;
  *((_DWORD *)v8 + 4) = *(_DWORD *)(v3 + 32);
  v9 = 2112;
  if ( (*(_DWORD *)(v5 + 104) & 4) == 0 )
    v9 = 1056;
  v10 = CommonBuffer_AcquireBuffer(v6, v9, v4, 0x31747045u);
  v11 = 0;
  v8[1] = (__int64)v10;
  if ( v10 )
  {
    v13 = v10[2];
    v14 = v13 + 128;
    if ( (*(_DWORD *)(v5 + 104) & 4) == 0 )
      v14 = v13 + 64;
    *(_DWORD *)(v13 + 4) |= 2u;
    *(_DWORD *)(v14 + 4) ^= (*(_DWORD *)(v14 + 4) ^ (8 * *(_DWORD *)(v4 + 120))) & 0x38;
    v15 = *((_WORD *)v8 + 8);
    *(_BYTE *)(v14 + 2) = 0;
    *(_DWORD *)v14 &= 0xFFFF80FF;
    *(_WORD *)(v14 + 6) = v15;
    *(_BYTE *)(v14 + 5) = 0;
    v16 = *(_BYTE *)(v4 + 99) & 3;
    v22 = *(_OWORD *)(*(_QWORD *)v4 + 232LL);
    if ( v16 != 1 )
    {
      if ( ((v16 == 3) & _bittest64((const signed __int64 *)&v22, 0x34u)) == 0
        || *(_BYTE *)(v4 + 98) < 0x80u
        || (v17 = *(_QWORD *)(v4 + 16), *(_WORD *)(v17 + 124) != 1529)
        || *(_WORD *)(v17 + 126) != 4353
        || *(_DWORD *)(v17 + 36) <= 1u )
      {
        v11 = 3;
      }
    }
    *(_DWORD *)(v14 + 4) = (2 * v11) | *(_DWORD *)(v14 + 4) & 0xFFFFFFF8;
    DequeuePointer = Endpoint_GetDequeuePointer(v4, 0);
    *(_QWORD *)(v19 + 8) = DequeuePointer;
    *(_DWORD *)(v4 + 152) = *(unsigned __int16 *)(v19 + 6);
    Endpoint_InitializeTransferRing((__int64 *)v4, 0);
    memset(v8 + 3, 0, 0x50uLL);
    v8[10] = (__int64)v8;
    v8[9] = (__int64)Endpoint_EvaluateContextCompletion;
    *((_DWORD *)v8 + 15) = *((_DWORD *)v8 + 15) & 0xFFFF03FF | 0x3400;
    *((_BYTE *)v8 + 63) = *(_BYTE *)(*(_QWORD *)(v4 + 16) + 135LL);
    v8[6] = *(_QWORD *)(v8[1] + 24);
    v8[8] = v13;
    Command_SendCommand(v7, (__int64)(v8 + 3));
  }
  else
  {
    LODWORD(v21) = *(_DWORD *)(v4 + 144);
    LODWORD(v20) = *(unsigned __int8 *)(*(_QWORD *)(v4 + 16) + 135LL);
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)v4 + 64LL),
      2u,
      0xCu,
      0x1Eu,
      (__int64)&WPP_dfd1540ede223d0a50a10695a1612c8d_Traceguids,
      v20,
      v21);
    v12 = v8[1];
    if ( v12 )
    {
      CommonBuffer_ReleaseBuffer((__int64)v6, v12);
      v8[1] = 0LL;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2104))(
      WdfDriverGlobals,
      a2,
      3221225626LL);
  }
}
