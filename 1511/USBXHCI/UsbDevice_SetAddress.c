/*
 * XREFs of UsbDevice_SetAddress @ 0x1C00100F8
 * Callers:
 *     UsbDevice_EnableCompletion @ 0x1C00300C0 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_UcxEvtAddress @ 0x1C00314D0 (UsbDevice_UcxEvtAddress.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005540 (WPP_RECORDER_SF_dd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0011000 (memset.c)
 *     Command_SendCommand @ 0x1C001BD2C (Command_SendCommand.c)
 *     Endpoint_GetDequeuePointer @ 0x1C0021D74 (Endpoint_GetDequeuePointer.c)
 *     WPP_RECORDER_SF_dqq @ 0x1C0033214 (WPP_RECORDER_SF_dqq.c)
 */

__int64 __fastcall UsbDevice_SetAddress(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 v5; // rbx
  __int64 v6; // r13
  unsigned int v7; // esi
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // r15
  int v11; // r14d
  int v12; // edx
  unsigned int v13; // eax
  int v14; // ecx
  unsigned int *v15; // r8
  __int64 v16; // r9
  unsigned int v17; // eax
  unsigned int v18; // eax
  int v19; // ecx
  int v20; // r8d
  unsigned int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  char v26; // dl
  __int64 v27; // rax
  int v28; // r8d
  unsigned int v29; // r8d
  int v30; // r9d

  v2 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(v2 + 80);
  v6 = *(_QWORD *)(v2 + 112);
  memset(*(void **)(*(_QWORD *)(a1 + 432) + 16LL), 0, *(unsigned int *)(*(_QWORD *)(a1 + 432) + 40LL));
  v7 = 0;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 432) + 16LL);
  if ( (*(_BYTE *)(v5 + 104) & 4) != 0 )
  {
    v9 = v8 + 64;
    v10 = v8 + 128;
  }
  else
  {
    v9 = v8 + 32;
    v10 = v8 + 64;
  }
  v11 = 3;
  v12 = 0;
  *(_DWORD *)(v8 + 4) |= 3u;
  *(_DWORD *)(a1 + 152) = *(_DWORD *)(v8 + 4);
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
  v19 = *(_DWORD *)v9 ^ (v12 ^ *(_DWORD *)v9) & 0xFFFFF;
  *(_DWORD *)v9 = v19;
  v20 = *(_DWORD *)(a1 + 20);
  if ( v20 )
  {
    switch ( v20 )
    {
      case 1:
        v21 = v19 & 0xFF0FFFFF | 0x100000;
        break;
      case 2:
        v21 = v19 & 0xFF0FFFFF | 0x300000;
        break;
      case 3:
        v21 = v19 & 0xFF0FFFFF | 0x400000;
        break;
      default:
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
          2u,
          0xBu,
          0x16u,
          (__int64)&WPP_87fc70acbba44992ba40c6b485cfec47_Traceguids,
          *(unsigned __int8 *)(a1 + 135),
          *(_DWORD *)(a1 + 20));
        return (unsigned int)-1073741811;
    }
  }
  else
  {
    v21 = v19 & 0xFF0FFFFF | 0x200000;
  }
  *(_DWORD *)v9 = v21;
  *(_DWORD *)v9 = v21 & 0x7FFFFFF | 0x8000000;
  *(_BYTE *)(v9 + 6) = *(_BYTE *)(a1 + 44);
  v22 = *(_QWORD *)(a1 + 24);
  if ( v22 )
  {
    v23 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            v22,
            off_1C0041318);
    if ( *(_DWORD *)(v23 + 144) > 1u )
      *(_DWORD *)v9 |= 0x2000000u;
    *(_BYTE *)(v9 + 8) = *(_BYTE *)(v23 + 135);
  }
  v24 = *(unsigned int *)(a1 + 40);
  if ( (_DWORD)v24 )
    *(_BYTE *)(v9 + 9) = *(_BYTE *)(a1 + 4 * v24 + 44);
  else
    *(_BYTE *)(v9 + 9) = 0;
  *(_DWORD *)(v10 + 4) ^= (*(_DWORD *)(v10 + 4) ^ (8 * *(_DWORD *)(*(_QWORD *)(a1 + 176) + 120LL))) & 0x38;
  *(_WORD *)(v10 + 6) = *(_WORD *)(*(_QWORD *)(a1 + 176) + 100LL) & 0x7FF;
  v25 = *(_QWORD *)(a1 + 176);
  v26 = *(_BYTE *)(v25 + 99) & 3;
  if ( v26 == 1
    || (*(_QWORD *)(*(_QWORD *)v25 + 232LL) & 0x10000000000000LL) != 0
    && v26 == 3
    && *(char *)(v25 + 98) < 0
    && (v27 = *(_QWORD *)(v25 + 16), *(_WORD *)(v27 + 124) == 1529)
    && *(_WORD *)(v27 + 126) == 4353
    && *(_DWORD *)(v27 + 36) > 1u )
  {
    v11 = 0;
  }
  *(_DWORD *)(v10 + 4) ^= (*(_DWORD *)(v10 + 4) ^ (2 * v11)) & 6;
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 152LL) = *(unsigned __int16 *)(v10 + 6);
  *(_QWORD *)(v10 + 8) = Endpoint_GetDequeuePointer(*(_QWORD *)(a1 + 176), 0LL);
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
  *(_QWORD *)(a1 + 496) = v8;
  Command_SendCommand(v6, a1 + 456);
  return v7;
}
