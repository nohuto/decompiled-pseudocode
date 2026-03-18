/*
 * XREFs of UsbDevice_UcxEvtEndpointsConfigure @ 0x1C0032110
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0004A10 (WPP_RECORDER_SF_dd.c)
 *     Controller_IsControllerAccessible @ 0x1C0005C54 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0006BE0 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C0008CB4 (WPP_RECORDER_SF_dddd.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0008F40 (WPP_RECORDER_SF_dq.c)
 *     __security_check_cookie @ 0x1C000FA40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010200 (memset.c)
 *     Command_SendCommand @ 0x1C001C18C (Command_SendCommand.c)
 *     Endpoint_Disable @ 0x1C00213D0 (Endpoint_Disable.c)
 *     Endpoint_Enable @ 0x1C0021610 (Endpoint_Enable.c)
 *     UsbDevice_InitializeEndpointContext @ 0x1C0031154 (UsbDevice_InitializeEndpointContext.c)
 *     WPP_RECORDER_SF_ddddd @ 0x1C0033074 (WPP_RECORDER_SF_ddddd.c)
 *     WPP_RECORDER_SF_dddddd @ 0x1C003319C (WPP_RECORDER_SF_dddddd.c)
 *     WPP_RECORDER_SF_dqq @ 0x1C00338F4 (WPP_RECORDER_SF_dqq.c)
 *     WPP_RECORDER_SF_dqqd @ 0x1C00339E0 (WPP_RECORDER_SF_dqqd.c)
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
  _DWORD *v18; // r14
  int v19; // ecx
  __int64 v20; // rdx
  unsigned int v21; // r12d
  unsigned int j; // r12d
  __int64 v23; // rdx
  int v24; // r13d
  __int64 v25; // rsi
  __int64 v26; // rsi
  int v27; // r8d
  __int64 v28; // r13
  __int64 v29; // rax
  __int64 v30; // rsi
  unsigned int k; // esi
  int v32; // r11d
  __int64 v33; // r9
  __int64 v34; // r9
  __int64 v35; // r9
  int v36; // eax
  unsigned int v37; // eax
  int v38; // [rsp+20h] [rbp-C8h]
  __int64 v39; // [rsp+28h] [rbp-C0h]
  __int64 v40; // [rsp+30h] [rbp-B8h]
  __int64 v41; // [rsp+68h] [rbp-80h]
  _QWORD *v42; // [rsp+70h] [rbp-78h]
  _BYTE *v44; // [rsp+80h] [rbp-68h]
  __int64 v45; // [rsp+88h] [rbp-60h]
  _QWORD v46[5]; // [rsp+90h] [rbp-58h] BYREF

  v2 = a2;
  memset(v46, 0, sizeof(v46));
  LOWORD(v46[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v2,
    v46);
  v3 = (_WORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                  WdfDriverGlobals,
                  v2,
                  off_1C0043070);
  v4 = WdfFunctions_01015;
  v5 = 0;
  v44 = v3;
  *v3 = 0;
  v6 = v46[1];
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(v4 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(v46[1] + 16LL),
         off_1C0043250);
  v8 = *(__int64 **)(v7 + 8);
  v9 = v8[10];
  v41 = v9;
  v45 = v8[14];
  WPP_RECORDER_SF_dddd(v8[8], 4u, 0xBu, 0x22u, (__int64)&WPP_b259b106ca84381176d433aab66af5b0_Traceguids);
  if ( !*(_BYTE *)(v7 + 134) )
  {
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*(_QWORD *)(v7 + 8) + 64LL),
      3u,
      0xBu,
      0x23u,
      (__int64)&WPP_b259b106ca84381176d433aab66af5b0_Traceguids);
    i = *(_DWORD *)(v6 + 24) != 0 ? 0xC0000001 : 0;
LABEL_3:
    WPP_RECORDER_SF_dqqd(
      *(_QWORD *)(*(_QWORD *)(v7 + 8) + 64LL),
      v10,
      *(unsigned __int8 *)(v7 + 135),
      41,
      v38,
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
              off_1C0043188);
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
    v19 = *v18 | 0x4000000;
    *v18 = v19;
    *((_BYTE *)v18 + 7) = *(_BYTE *)(v7 + 140);
    if ( *(_DWORD *)(v7 + 20) == 2 )
    {
      if ( *(_DWORD *)(v7 + 144) > 1u )
        *v18 = v19 | 0x2000000;
      v18[2] ^= (v18[2] ^ (*(_DWORD *)(v7 + 148) << 16)) & 0x30000;
    }
  }
  if ( (*(_QWORD *)(*(_QWORD *)(v7 + 8) + 232LL) & 0x2000000000000000LL) != 0 && !*(_BYTE *)(v7 + 136) )
  {
    v20 = *(_QWORD *)(v7 + 24);
    if ( v20 )
    {
      if ( *(int *)(v7 + 20) < 2
        && *(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                         WdfDriverGlobals,
                         v20,
                         off_1C0043250)
                     + 144) > 1u )
      {
        *v18 |= 0x2000000u;
      }
    }
  }
  v21 = 0;
  if ( *(_DWORD *)(v6 + 24) )
  {
    while ( 1 )
    {
      v42 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                        WdfDriverGlobals,
                        *(_QWORD *)(*(_QWORD *)(v6 + 32) + 8LL * v21),
                        off_1C0043188);
      i = Endpoint_Enable(v42);
      if ( i < 0 )
        break;
      if ( ++v21 >= *(_DWORD *)(v6 + 24) )
        goto LABEL_24;
    }
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(*(_QWORD *)(v7 + 8) + 64LL),
      2u,
      0xBu,
      0x24u,
      (__int64)&WPP_b259b106ca84381176d433aab66af5b0_Traceguids);
    if ( v21 )
    {
      v28 = 8LL * v21;
      do
      {
        v28 -= 8LL;
        v29 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                *(_QWORD *)(*(_QWORD *)(v6 + 32) + v28),
                off_1C0043188);
        Endpoint_Disable(v29);
        --v21;
      }
      while ( v21 );
      v2 = a2;
    }
    if ( !*(_DWORD *)(v6 + 40) )
      goto LABEL_3;
    *v44 = 1;
    HIDWORD(v40) = HIDWORD(v2);
    WPP_RECORDER_SF_dqq(*(_QWORD *)(*(_QWORD *)(v7 + 8) + 64LL), *(unsigned __int8 *)(v7 + 135), v27, 37);
  }
  else
  {
LABEL_24:
    for ( j = 0; j < *(_DWORD *)(v6 + 24); ++j )
    {
      v23 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              *(_QWORD *)(*(_QWORD *)(v6 + 32) + 8LL * j),
              off_1C0043188);
      v24 = *(_DWORD *)(v23 + 144);
      v25 = (unsigned int)(v24 - 1) + 2LL;
      if ( (*(_BYTE *)(v41 + 104) & 4) != 0 )
        v26 = v25 << 6;
      else
        v26 = 32 * v25;
      v30 = (__int64)v17 + v26;
      UsbDevice_InitializeEndpointContext(v7, v23, v30);
      v17[1] |= 1 << v24;
      WPP_RECORDER_SF_ddddd(
        *(_QWORD *)(*(_QWORD *)(v7 + 8) + 64LL),
        *(unsigned __int8 *)(v30 + 2),
        *(unsigned __int16 *)(v30 + 6),
        (*(_DWORD *)(v30 + 4) >> 3) & 7,
        v38,
        *(_BYTE *)(v7 + 135),
        v24,
        (*(_DWORD *)(v30 + 4) >> 3) & 7,
        *(_WORD *)(v30 + 6),
        *(_BYTE *)(v30 + 2));
    }
  }
  for ( k = 0; k < *(_DWORD *)(v6 + 40); ++k )
  {
    v32 = *(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                        WdfDriverGlobals,
                        *(_QWORD *)(*(_QWORD *)(v6 + 48) + 8LL * k),
                        off_1C0043188)
                    + 144);
    v33 = (unsigned int)(v32 - 1) + 1LL;
    if ( (*(_DWORD *)(v41 + 104) & 4) != 0 )
      v34 = v33 << 6;
    else
      v34 = 32 * v33;
    v35 = *(_QWORD *)(*(_QWORD *)(v7 + 424) + 16LL) + v34;
    *v17 |= 1 << v32;
    WPP_RECORDER_SF_dddddd(
      *(_QWORD *)(*(_QWORD *)(v7 + 8) + 64LL),
      *(unsigned __int8 *)(v35 + 2),
      *(unsigned __int16 *)(v35 + 6),
      (*(_DWORD *)(v35 + 4) >> 3) & 7,
      v38,
      *(_BYTE *)(v7 + 135),
      v32,
      (*(_DWORD *)(v35 + 4) >> 3) & 7,
      *(_WORD *)(v35 + 6),
      *(_BYTE *)(v35 + 2),
      *(_BYTE *)v35 & 7);
  }
  *(_DWORD *)(v7 + 152) &= ~*v17;
  *(_DWORD *)(v7 + 152) |= v17[1];
  do
  {
    v36 = *(_DWORD *)(v7 + 152);
    if ( _bittest(&v36, v5) )
      *v18 = (v5 << 27) | *v18 & 0x7FFFFFF;
    ++v5;
  }
  while ( v5 < 0x20 );
  LODWORD(v40) = *v18 >> 27;
  LODWORD(v39) = *(unsigned __int8 *)(v7 + 135);
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(*(_QWORD *)(v7 + 8) + 64LL),
    4u,
    0xBu,
    0x28u,
    (__int64)&WPP_b259b106ca84381176d433aab66af5b0_Traceguids,
    v39,
    v40);
  memset((void *)(v7 + 456), 0, 0x50uLL);
  *(_QWORD *)(v7 + 504) = UsbDevice_EndpointsConfigureCompletion;
  v37 = *(_DWORD *)(v7 + 492) & 0xFFFF31FF;
  *(_QWORD *)(v7 + 512) = v7;
  *(_DWORD *)(v7 + 492) = v37 | 0x3000;
  *(_BYTE *)(v7 + 495) = *(_BYTE *)(v7 + 135);
  *(_QWORD *)(v7 + 480) = *(_QWORD *)(*(_QWORD *)(v7 + 432) + 24LL);
  *(_QWORD *)(v7 + 496) = v17;
  Command_SendCommand(v45, v7 + 456);
}
