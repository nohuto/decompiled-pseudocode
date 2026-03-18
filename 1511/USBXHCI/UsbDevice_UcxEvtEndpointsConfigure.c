/*
 * XREFs of UsbDevice_UcxEvtEndpointsConfigure @ 0x1C0031A90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005540 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0006BF0 (WPP_RECORDER_SF_ddd.c)
 *     Controller_IsControllerAccessible @ 0x1C00073DC (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C00086D4 (WPP_RECORDER_SF_dddd.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0009894 (WPP_RECORDER_SF_dq.c)
 *     __security_check_cookie @ 0x1C0010810 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0011000 (memset.c)
 *     Command_SendCommand @ 0x1C001BD2C (Command_SendCommand.c)
 *     Endpoint_Disable @ 0x1C0020DE0 (Endpoint_Disable.c)
 *     Endpoint_Enable @ 0x1C0021020 (Endpoint_Enable.c)
 *     UsbDevice_InitializeEndpointContext @ 0x1C0030B74 (UsbDevice_InitializeEndpointContext.c)
 *     WPP_RECORDER_SF_ddddd @ 0x1C0032994 (WPP_RECORDER_SF_ddddd.c)
 *     WPP_RECORDER_SF_dddddd @ 0x1C0032ABC (WPP_RECORDER_SF_dddddd.c)
 *     WPP_RECORDER_SF_dqq @ 0x1C0033214 (WPP_RECORDER_SF_dqq.c)
 *     WPP_RECORDER_SF_dqqd @ 0x1C0033300 (WPP_RECORDER_SF_dqqd.c)
 */

void __fastcall UsbDevice_UcxEvtEndpointsConfigure(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  _WORD *v3; // rax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 *v8; // rcx
  __int64 v9; // rsi
  int v10; // edx
  signed int i; // esi
  __int64 v12; // rax
  PWDF_DRIVER_GLOBALS v13; // rcx
  unsigned int v14; // r14d
  __int64 v15; // rax
  __int64 v16; // rcx
  _DWORD *v17; // r15
  unsigned int *v18; // r14
  unsigned int v19; // r12d
  unsigned int j; // r12d
  __int64 v21; // rdx
  int v22; // r13d
  __int64 v23; // rsi
  __int64 v24; // rsi
  int v25; // r8d
  __int64 v26; // r13
  __int64 v27; // rax
  __int64 v28; // rsi
  unsigned int k; // esi
  int v30; // r11d
  __int64 v31; // r9
  __int64 v32; // r9
  __int64 v33; // r9
  int v34; // eax
  unsigned int v35; // eax
  int v36; // [rsp+20h] [rbp-C8h]
  __int64 v37; // [rsp+28h] [rbp-C0h]
  __int64 v38; // [rsp+30h] [rbp-B8h]
  __int64 v39; // [rsp+68h] [rbp-80h]
  _BYTE *v41; // [rsp+78h] [rbp-70h]
  __int64 v42; // [rsp+80h] [rbp-68h]
  _QWORD *v43; // [rsp+88h] [rbp-60h]
  _QWORD v44[5]; // [rsp+90h] [rbp-58h] BYREF

  v2 = a2;
  memset(v44, 0, sizeof(v44));
  LOWORD(v44[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v2,
    v44);
  v3 = (_WORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                  WdfDriverGlobals,
                  v2,
                  off_1C0041098);
  v4 = WdfFunctions_01015;
  v5 = 0;
  v41 = v3;
  *v3 = 0;
  v6 = v44[1];
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(v4 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(v44[1] + 16LL),
         off_1C0041318);
  v8 = *(__int64 **)(v7 + 8);
  v9 = v8[10];
  v39 = v9;
  v42 = v8[14];
  WPP_RECORDER_SF_dddd(v8[8], 4u, 0xBu, 0x22u, (__int64)&WPP_87fc70acbba44992ba40c6b485cfec47_Traceguids);
  if ( !*(_BYTE *)(v7 + 134) )
  {
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*(_QWORD *)(v7 + 8) + 64LL),
      3u,
      0xBu,
      0x23u,
      (__int64)&WPP_87fc70acbba44992ba40c6b485cfec47_Traceguids);
    i = *(_DWORD *)(v6 + 24) != 0 ? 0xC0000001 : 0;
LABEL_3:
    WPP_RECORDER_SF_dqqd(
      *(_QWORD *)(*(_QWORD *)(v7 + 8) + 64LL),
      v10,
      *(unsigned __int8 *)(v7 + 135),
      41,
      v36,
      *(_BYTE *)(v7 + 135),
      v2,
      *(_QWORD *)v7,
      i);
    v12 = WdfFunctions_01015;
    v13 = WdfDriverGlobals;
    *(_QWORD *)(v7 + 440) = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(v12 + 2104))(v13, v2, (unsigned int)i);
    return;
  }
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v7 + 8)) )
  {
    v14 = 0;
    for ( i = *(_DWORD *)(v6 + 24) != 0 ? 0xC000000E : 0; v14 < *(_DWORD *)(v6 + 40); ++v14 )
    {
      v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              *(_QWORD *)(*(_QWORD *)(v6 + 48) + 8LL * v14),
              off_1C0041138);
      Endpoint_Disable(v15);
    }
    goto LABEL_3;
  }
  v16 = *(_QWORD *)(v7 + 432);
  *(_QWORD *)(v7 + 440) = v2;
  *(_BYTE *)(v7 + 448) = *(_DWORD *)(v6 + 24) == 0;
  memset(*(void **)(v16 + 16), 0, *(unsigned int *)(v16 + 40));
  v17 = *(_DWORD **)(*(_QWORD *)(v7 + 432) + 16LL);
  v18 = v17 + 16;
  if ( (*(_BYTE *)(v9 + 104) & 4) == 0 )
    v18 = v17 + 8;
  v17[1] |= 1u;
  if ( *(_BYTE *)(v7 + 136) )
  {
    *v18 |= 0x4000000u;
    *((_BYTE *)v18 + 7) = *(_BYTE *)(v7 + 140);
    if ( *(_DWORD *)(v7 + 20) == 2 )
    {
      if ( *(_DWORD *)(v7 + 144) > 1u )
        *v18 |= 0x2000000u;
      v18[2] ^= (v18[2] ^ (*(_DWORD *)(v7 + 148) << 16)) & 0x30000;
    }
  }
  v19 = 0;
  if ( *(_DWORD *)(v6 + 24) )
  {
    while ( 1 )
    {
      v43 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                        WdfDriverGlobals,
                        *(_QWORD *)(*(_QWORD *)(v6 + 32) + 8LL * v19),
                        off_1C0041138);
      i = Endpoint_Enable(v43);
      if ( i < 0 )
        break;
      if ( ++v19 >= *(_DWORD *)(v6 + 24) )
        goto LABEL_18;
    }
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(*(_QWORD *)(v7 + 8) + 64LL),
      2u,
      0xBu,
      0x24u,
      (__int64)&WPP_87fc70acbba44992ba40c6b485cfec47_Traceguids);
    if ( v19 )
    {
      v26 = 8LL * v19;
      do
      {
        v26 -= 8LL;
        v27 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                *(_QWORD *)(v26 + *(_QWORD *)(v6 + 32)),
                off_1C0041138);
        Endpoint_Disable(v27);
        --v19;
      }
      while ( v19 );
      v2 = a2;
    }
    if ( !*(_DWORD *)(v6 + 40) )
      goto LABEL_3;
    *v41 = 1;
    HIDWORD(v38) = HIDWORD(v2);
    WPP_RECORDER_SF_dqq(*(_QWORD *)(*(_QWORD *)(v7 + 8) + 64LL), *(unsigned __int8 *)(v7 + 135), v25, 37);
  }
  else
  {
LABEL_18:
    for ( j = 0; j < *(_DWORD *)(v6 + 24); ++j )
    {
      v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              *(_QWORD *)(*(_QWORD *)(v6 + 32) + 8LL * j),
              off_1C0041138);
      v22 = *(_DWORD *)(v21 + 144);
      v23 = (unsigned int)(v22 - 1) + 2LL;
      if ( (*(_BYTE *)(v39 + 104) & 4) != 0 )
        v24 = v23 << 6;
      else
        v24 = 32 * v23;
      v28 = (__int64)v17 + v24;
      UsbDevice_InitializeEndpointContext(v7, v21, v28);
      v17[1] |= 1 << v22;
      WPP_RECORDER_SF_ddddd(
        *(_QWORD *)(*(_QWORD *)(v7 + 8) + 64LL),
        *(unsigned __int8 *)(v28 + 2),
        *(unsigned __int16 *)(v28 + 6),
        (*(_DWORD *)(v28 + 4) >> 3) & 7,
        v36,
        *(_BYTE *)(v7 + 135),
        v22,
        (*(_DWORD *)(v28 + 4) >> 3) & 7,
        *(_WORD *)(v28 + 6),
        *(_BYTE *)(v28 + 2));
    }
  }
  for ( k = 0; k < *(_DWORD *)(v6 + 40); ++k )
  {
    v30 = *(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                        WdfDriverGlobals,
                        *(_QWORD *)(*(_QWORD *)(v6 + 48) + 8LL * k),
                        off_1C0041138)
                    + 144);
    v31 = (unsigned int)(v30 - 1) + 1LL;
    if ( (*(_DWORD *)(v39 + 104) & 4) != 0 )
      v32 = v31 << 6;
    else
      v32 = 32 * v31;
    v33 = *(_QWORD *)(*(_QWORD *)(v7 + 424) + 16LL) + v32;
    *v17 |= 1 << v30;
    WPP_RECORDER_SF_dddddd(
      *(_QWORD *)(*(_QWORD *)(v7 + 8) + 64LL),
      *(unsigned __int8 *)(v33 + 2),
      *(unsigned __int16 *)(v33 + 6),
      (*(_DWORD *)(v33 + 4) >> 3) & 7,
      v36,
      *(_BYTE *)(v7 + 135),
      v30,
      (*(_DWORD *)(v33 + 4) >> 3) & 7,
      *(_WORD *)(v33 + 6),
      *(_BYTE *)(v33 + 2),
      *(_BYTE *)v33 & 7);
  }
  *(_DWORD *)(v7 + 152) &= ~*v17;
  *(_DWORD *)(v7 + 152) |= v17[1];
  do
  {
    v34 = *(_DWORD *)(v7 + 152);
    if ( _bittest(&v34, v5) )
      *v18 = (v5 << 27) | *v18 & 0x7FFFFFF;
    ++v5;
  }
  while ( v5 < 0x20 );
  LODWORD(v38) = *v18 >> 27;
  LODWORD(v37) = *(unsigned __int8 *)(v7 + 135);
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(*(_QWORD *)(v7 + 8) + 64LL),
    4u,
    0xBu,
    0x28u,
    (__int64)&WPP_87fc70acbba44992ba40c6b485cfec47_Traceguids,
    v37,
    v38);
  memset((void *)(v7 + 456), 0, 0x50uLL);
  *(_QWORD *)(v7 + 504) = UsbDevice_EndpointsConfigureCompletion;
  v35 = *(_DWORD *)(v7 + 492) & 0xFFFF31FF;
  *(_QWORD *)(v7 + 512) = v7;
  *(_DWORD *)(v7 + 492) = v35 | 0x3000;
  *(_BYTE *)(v7 + 495) = *(_BYTE *)(v7 + 135);
  *(_QWORD *)(v7 + 480) = *(_QWORD *)(*(_QWORD *)(v7 + 432) + 24LL);
  *(_QWORD *)(v7 + 496) = v17;
  Command_SendCommand(v42, v7 + 456);
}
