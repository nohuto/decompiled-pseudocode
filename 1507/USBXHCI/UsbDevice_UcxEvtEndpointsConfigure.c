/*
 * XREFs of UsbDevice_UcxEvtEndpointsConfigure @ 0x1C0030CA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00023E0 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0003980 (WPP_RECORDER_SF_ddd.c)
 *     Controller_IsControllerAccessible @ 0x1C00042C8 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0005328 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C00066B0 (WPP_RECORDER_SF_dddd.c)
 *     __security_check_cookie @ 0x1C0007B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     Command_SendCommand @ 0x1C001278C (Command_SendCommand.c)
 *     Endpoint_Disable @ 0x1C00176D0 (Endpoint_Disable.c)
 *     Endpoint_Enable @ 0x1C0017910 (Endpoint_Enable.c)
 *     UsbDevice_InitializeEndpointContext @ 0x1C002F964 (UsbDevice_InitializeEndpointContext.c)
 *     WPP_RECORDER_SF_ddddd @ 0x1C0031BA4 (WPP_RECORDER_SF_ddddd.c)
 *     WPP_RECORDER_SF_dddddd @ 0x1C0031CCC (WPP_RECORDER_SF_dddddd.c)
 *     WPP_RECORDER_SF_dqq @ 0x1C0032424 (WPP_RECORDER_SF_dqq.c)
 *     WPP_RECORDER_SF_dqqd @ 0x1C0032510 (WPP_RECORDER_SF_dqqd.c)
 */

void __fastcall UsbDevice_UcxEvtEndpointsConfigure(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  unsigned int v3; // ebx
  __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 *v6; // rcx
  __int64 v7; // rsi
  int v8; // edx
  signed int i; // esi
  unsigned int v10; // r14d
  __int64 v11; // rax
  __int64 v12; // rcx
  _DWORD *v13; // r15
  unsigned int *v14; // r14
  unsigned int v15; // r12d
  unsigned int j; // r12d
  __int64 v17; // rdx
  int v18; // r13d
  __int64 v19; // rsi
  __int64 v20; // rsi
  int v21; // r8d
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 v24; // rsi
  unsigned int k; // esi
  int v26; // r11d
  __int64 v27; // r9
  __int64 v28; // r9
  __int64 v29; // r9
  int v30; // eax
  unsigned int v31; // eax
  int v32; // [rsp+20h] [rbp-C8h]
  __int64 v33; // [rsp+28h] [rbp-C0h]
  __int64 v34; // [rsp+30h] [rbp-B8h]
  __int64 v35; // [rsp+68h] [rbp-80h]
  _WORD *v37; // [rsp+78h] [rbp-70h]
  __int64 v38; // [rsp+80h] [rbp-68h]
  _QWORD *v39; // [rsp+88h] [rbp-60h]
  _QWORD v40[5]; // [rsp+90h] [rbp-58h] BYREF

  v2 = a2;
  memset(v40, 0, sizeof(v40));
  LOWORD(v40[0]) = 40;
  (*(void (__fastcall **)(_LIST_ENTRY *, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
    v2,
    v40);
  v3 = 0;
  v37 = (_WORD *)(*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                   v2,
                   off_1C0040068);
  *v37 = 0;
  v4 = v40[1];
  v5 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD, void *))(WdfFunctions_01015 + 1616))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         *(_QWORD *)(v40[1] + 16LL),
         off_1C00402E8);
  v6 = *(__int64 **)(v5 + 8);
  v7 = v6[10];
  v35 = v7;
  v38 = v6[14];
  WPP_RECORDER_SF_dddd(v6[8], 4u, 0xBu, 0x22u, (__int64)&WPP_87fc70acbba44992ba40c6b485cfec47_Traceguids);
  if ( !*(_BYTE *)(v5 + 134) )
  {
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*(_QWORD *)(v5 + 8) + 64LL),
      3u,
      0xBu,
      0x23u,
      (__int64)&WPP_87fc70acbba44992ba40c6b485cfec47_Traceguids);
    i = *(_DWORD *)(v4 + 24) != 0 ? 0xC0000001 : 0;
LABEL_3:
    WPP_RECORDER_SF_dqqd(
      *(_QWORD *)(*(_QWORD *)(v5 + 8) + 64LL),
      v8,
      *(unsigned __int8 *)(v5 + 135),
      41,
      v32,
      *(_BYTE *)(v5 + 135),
      v2,
      *(_QWORD *)v5,
      i);
    *(_QWORD *)(v5 + 440) = 0LL;
    (*(void (__fastcall **)(_LIST_ENTRY *, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
      WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
      v2,
      (unsigned int)i);
    return;
  }
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v5 + 8)) )
  {
    v10 = 0;
    for ( i = *(_DWORD *)(v4 + 24) != 0 ? 0xC000000E : 0; v10 < *(_DWORD *)(v4 + 40); ++v10 )
    {
      v11 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD, void *))(WdfFunctions_01015 + 1616))(
              WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
              *(_QWORD *)(*(_QWORD *)(v4 + 48) + 8LL * v10),
              off_1C0040108);
      Endpoint_Disable(v11);
    }
    goto LABEL_3;
  }
  v12 = *(_QWORD *)(v5 + 432);
  *(_QWORD *)(v5 + 440) = v2;
  *(_BYTE *)(v5 + 448) = *(_DWORD *)(v4 + 24) == 0;
  memset(*(void **)(v12 + 16), 0, *(unsigned int *)(v12 + 40));
  v13 = *(_DWORD **)(*(_QWORD *)(v5 + 432) + 16LL);
  v14 = v13 + 16;
  if ( (*(_BYTE *)(v7 + 104) & 4) == 0 )
    v14 = v13 + 8;
  v13[1] |= 1u;
  if ( *(_BYTE *)(v5 + 136) )
  {
    *v14 |= 0x4000000u;
    *((_BYTE *)v14 + 7) = *(_BYTE *)(v5 + 140);
    if ( *(_DWORD *)(v5 + 20) == 2 )
    {
      if ( *(_DWORD *)(v5 + 144) > 1u )
        *v14 |= 0x2000000u;
      v14[2] ^= (v14[2] ^ (*(_DWORD *)(v5 + 148) << 16)) & 0x30000;
    }
  }
  v15 = 0;
  if ( *(_DWORD *)(v4 + 24) )
  {
    while ( 1 )
    {
      v39 = (_QWORD *)(*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                        WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                        *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8LL * v15),
                        off_1C0040108);
      i = Endpoint_Enable(v39);
      if ( i < 0 )
        break;
      if ( ++v15 >= *(_DWORD *)(v4 + 24) )
        goto LABEL_18;
    }
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(*(_QWORD *)(v5 + 8) + 64LL),
      2u,
      0xBu,
      0x24u,
      (__int64)&WPP_87fc70acbba44992ba40c6b485cfec47_Traceguids);
    if ( v15 )
    {
      v22 = 8LL * v15;
      do
      {
        v22 -= 8LL;
        v23 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                *(_QWORD *)(v22 + *(_QWORD *)(v4 + 32)),
                off_1C0040108);
        Endpoint_Disable(v23);
        --v15;
      }
      while ( v15 );
      v2 = a2;
    }
    if ( !*(_DWORD *)(v4 + 40) )
      goto LABEL_3;
    *(_BYTE *)v37 = 1;
    HIDWORD(v34) = HIDWORD(v2);
    WPP_RECORDER_SF_dqq(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 64LL), *(unsigned __int8 *)(v5 + 135), v21, 37);
  }
  else
  {
LABEL_18:
    for ( j = 0; j < *(_DWORD *)(v4 + 24); ++j )
    {
      v17 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD, void *))(WdfFunctions_01015 + 1616))(
              WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
              *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8LL * j),
              off_1C0040108);
      v18 = *(_DWORD *)(v17 + 144);
      v19 = (unsigned int)(v18 - 1) + 2LL;
      if ( (*(_BYTE *)(v35 + 104) & 4) != 0 )
        v20 = v19 << 6;
      else
        v20 = 32 * v19;
      v24 = (__int64)v13 + v20;
      UsbDevice_InitializeEndpointContext(v5, v17, v24);
      v13[1] |= 1 << v18;
      WPP_RECORDER_SF_ddddd(
        *(_QWORD *)(*(_QWORD *)(v5 + 8) + 64LL),
        *(unsigned __int8 *)(v24 + 2),
        *(unsigned __int16 *)(v24 + 6),
        (*(_DWORD *)(v24 + 4) >> 3) & 7,
        v32,
        *(_BYTE *)(v5 + 135),
        v18,
        (*(_DWORD *)(v24 + 4) >> 3) & 7,
        *(_WORD *)(v24 + 6),
        *(_BYTE *)(v24 + 2));
    }
  }
  for ( k = 0; k < *(_DWORD *)(v4 + 40); ++k )
  {
    v26 = *(_DWORD *)((*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                        WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                        *(_QWORD *)(*(_QWORD *)(v4 + 48) + 8LL * k),
                        off_1C0040108)
                    + 144);
    v27 = (unsigned int)(v26 - 1) + 1LL;
    if ( (*(_DWORD *)(v35 + 104) & 4) != 0 )
      v28 = v27 << 6;
    else
      v28 = 32 * v27;
    v29 = *(_QWORD *)(*(_QWORD *)(v5 + 424) + 16LL) + v28;
    *v13 |= 1 << v26;
    WPP_RECORDER_SF_dddddd(
      *(_QWORD *)(*(_QWORD *)(v5 + 8) + 64LL),
      *(unsigned __int8 *)(v29 + 2),
      *(unsigned __int16 *)(v29 + 6),
      (*(_DWORD *)(v29 + 4) >> 3) & 7,
      v32,
      *(_BYTE *)(v5 + 135),
      v26,
      (*(_DWORD *)(v29 + 4) >> 3) & 7,
      *(_WORD *)(v29 + 6),
      *(_BYTE *)(v29 + 2),
      *(_BYTE *)v29 & 7);
  }
  *(_DWORD *)(v5 + 152) &= ~*v13;
  *(_DWORD *)(v5 + 152) |= v13[1];
  do
  {
    v30 = *(_DWORD *)(v5 + 152);
    if ( _bittest(&v30, v3) )
      *v14 = (v3 << 27) | *v14 & 0x7FFFFFF;
    ++v3;
  }
  while ( v3 < 0x20 );
  LODWORD(v34) = *v14 >> 27;
  LODWORD(v33) = *(unsigned __int8 *)(v5 + 135);
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(*(_QWORD *)(v5 + 8) + 64LL),
    4u,
    0xBu,
    0x28u,
    (__int64)&WPP_87fc70acbba44992ba40c6b485cfec47_Traceguids,
    v33,
    v34);
  memset((void *)(v5 + 456), 0, 0x50uLL);
  *(_QWORD *)(v5 + 504) = UsbDevice_EndpointsConfigureCompletion;
  v31 = *(_DWORD *)(v5 + 492) & 0xFFFF31FF;
  *(_QWORD *)(v5 + 512) = v5;
  *(_DWORD *)(v5 + 492) = v31 | 0x3000;
  *(_BYTE *)(v5 + 495) = *(_BYTE *)(v5 + 135);
  *(_QWORD *)(v5 + 480) = *(_QWORD *)(*(_QWORD *)(v5 + 432) + 24LL);
  *(_QWORD *)(v5 + 496) = v13;
  Command_SendCommand(v38, v5 + 456);
}
