/*
 * XREFs of UsbDevice_SetAddress @ 0x1C0010420
 * Callers:
 *     UsbDevice_EnableCompletion @ 0x1C002D280 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_UcxEvtAddress @ 0x1C002E8A0 (UsbDevice_UcxEvtAddress.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0004D90 (WPP_RECORDER_SF_dd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010E80 (memset.c)
 *     Command_SendCommand @ 0x1C00184A4 (Command_SendCommand.c)
 *     Endpoint_GetDequeuePointer @ 0x1C001E62C (Endpoint_GetDequeuePointer.c)
 *     WPP_RECORDER_SF_dqq @ 0x1C0030780 (WPP_RECORDER_SF_dqq.c)
 */

__int64 __fastcall UsbDevice_SetAddress(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 v5; // rbx
  __int64 v6; // r13
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // r14
  unsigned int v10; // ebp
  int v11; // r15d
  int v12; // edx
  unsigned int v13; // eax
  int v14; // ecx
  unsigned int *v15; // r8
  __int64 v16; // r9
  unsigned int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // ecx
  int v22; // r8d
  unsigned int v23; // ecx
  __int64 v24; // rdx
  __int64 v25; // rdx
  char v26; // al
  __int64 v27; // rax
  int v28; // r8d
  unsigned int v29; // r8d
  int v30; // r9d
  __int128 v32; // [rsp+40h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(v2 + 80);
  v6 = *(_QWORD *)(v2 + 112);
  memset(*(void **)(*(_QWORD *)(a1 + 432) + 16LL), 0, *(unsigned int *)(*(_QWORD *)(a1 + 432) + 40LL));
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 432) + 16LL);
  if ( (*(_DWORD *)(v5 + 104) & 4) != 0 )
  {
    v8 = 64LL;
    v9 = 128LL;
  }
  else
  {
    v8 = 32LL;
    v9 = 64LL;
  }
  v10 = 0;
  v11 = 3;
  *(_DWORD *)(v7 + 4) |= 3u;
  v12 = 0;
  *(_DWORD *)(a1 + 152) = *(_DWORD *)(v7 + 4);
  v13 = *(_DWORD *)(a1 + 36);
  if ( v13 > 1 )
  {
    v14 = 0;
    v15 = (unsigned int *)(a1 + 48);
    v16 = v13 - 1;
    do
    {
      v17 = *v15++;
      if ( v17 > 0xF )
        v17 = 15;
      v18 = v17 << v14;
      v14 += 4;
      v12 |= v18;
      --v16;
    }
    while ( v16 );
  }
  v21 = *(_DWORD *)(v8 + v7) ^ (v12 ^ *(_DWORD *)(v8 + v7)) & 0xFFFFF;
  *(_DWORD *)(v8 + v7) = v21;
  v22 = *(_DWORD *)(a1 + 20);
  if ( v22 )
  {
    switch ( v22 )
    {
      case 1:
        v23 = v21 & 0xFF0FFFFF | 0x100000;
        break;
      case 2:
        v23 = v21 & 0xFF0FFFFF | 0x300000;
        break;
      case 3:
        v23 = v21 & 0xFF0FFFFF | 0x400000;
        break;
      default:
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
          2u,
          0xBu,
          0x16u,
          (__int64)&WPP_b259b106ca84381176d433aab66af5b0_Traceguids,
          *(unsigned __int8 *)(a1 + 135),
          *(_DWORD *)(a1 + 20));
        return (unsigned int)-1073741811;
    }
  }
  else
  {
    v23 = v21 & 0xFF0FFFFF | 0x200000;
  }
  *(_DWORD *)(v8 + v7) = v23;
  *(_DWORD *)(v8 + v7) = v23 & 0x7FFFFFF | 0x8000000;
  *(_BYTE *)(v8 + v7 + 6) = *(_BYTE *)(a1 + 44);
  v24 = *(_QWORD *)(a1 + 24);
  if ( v24 )
  {
    v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            v24,
            off_1C0045250);
    if ( *(_DWORD *)(v19 + 144) > 1u )
      *(_DWORD *)(v8 + v7) |= 0x2000000u;
    *(_BYTE *)(v8 + v7 + 8) = *(_BYTE *)(v19 + 135);
  }
  v20 = *(unsigned int *)(a1 + 40);
  if ( (_DWORD)v20 )
    *(_BYTE *)(v8 + v7 + 9) = *(_BYTE *)(a1 + 4 * v20 + 44);
  else
    *(_BYTE *)(v8 + v7 + 9) = 0;
  *(_DWORD *)(v9 + v7 + 4) ^= (*(_DWORD *)(v9 + v7 + 4) ^ (8 * *(_DWORD *)(*(_QWORD *)(a1 + 176) + 120LL))) & 0x38;
  *(_WORD *)(v9 + v7 + 6) = *(_WORD *)(*(_QWORD *)(a1 + 176) + 100LL) & 0x7FF;
  v25 = *(_QWORD *)(a1 + 176);
  v26 = *(_BYTE *)(v25 + 99) & 3;
  v32 = *(_OWORD *)(*(_QWORD *)v25 + 232LL);
  if ( v26 == 1
    || ((v26 == 3) & _bittest64((const signed __int64 *)&v32, 0x34u)) != 0
    && *(_BYTE *)(v25 + 98) >= 0x80u
    && (v27 = *(_QWORD *)(v25 + 16), *(_WORD *)(v27 + 124) == 1529)
    && *(_WORD *)(v27 + 126) == 4353
    && *(_DWORD *)(v27 + 36) > 1u )
  {
    v11 = 0;
  }
  *(_DWORD *)(v9 + v7 + 4) = (2 * v11) | *(_DWORD *)(v9 + v7 + 4) & 0xFFFFFFF9;
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 152LL) = *(unsigned __int16 *)(v9 + v7 + 6);
  *(_QWORD *)(v9 + v7 + 8) = Endpoint_GetDequeuePointer(*(_QWORD *)(a1 + 176), 0LL);
  WPP_RECORDER_SF_dqq(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL), *(unsigned __int8 *)(a1 + 135), v28, 23);
  memset((void *)(a1 + 456), 0, 0x50uLL);
  v29 = *(_DWORD *)(a1 + 492) & 0xFFFF2DFF;
  *(_QWORD *)(a1 + 504) = UsbDevice_SetAddressCompletion;
  *(_QWORD *)(a1 + 512) = a1;
  v30 = v29 | ((a2 & 1 | 0x16) << 9);
  LOBYTE(v29) = *(_BYTE *)(a1 + 135);
  *(_DWORD *)(a1 + 492) = v30;
  *(_BYTE *)(a1 + 495) = v29;
  *(_QWORD *)(a1 + 480) = *(_QWORD *)(*(_QWORD *)(a1 + 432) + 24LL);
  *(_QWORD *)(a1 + 496) = v7;
  Command_SendCommand(v6, a1 + 456);
  return v10;
}
