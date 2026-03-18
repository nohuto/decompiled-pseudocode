/*
 * XREFs of UsbDevice_UcxEvtEndpointsConfigure @ 0x1C002EEB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0004D90 (WPP_RECORDER_SF_dd.c)
 *     Controller_IsControllerAccessible @ 0x1C000642C (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0007F60 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0008A90 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C0009728 (WPP_RECORDER_SF_dddd.c)
 *     __security_check_cookie @ 0x1C00105E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010E80 (memset.c)
 *     Command_SendCommand @ 0x1C00184A4 (Command_SendCommand.c)
 *     Endpoint_Disable_Internal @ 0x1C001D68C (Endpoint_Disable_Internal.c)
 *     Endpoint_Enable @ 0x1C001D8B0 (Endpoint_Enable.c)
 *     UsbDevice_InitializeEndpointContext @ 0x1C002DE50 (UsbDevice_InitializeEndpointContext.c)
 *     WPP_RECORDER_SF_ddddd @ 0x1C002FECC (WPP_RECORDER_SF_ddddd.c)
 *     WPP_RECORDER_SF_dddddd @ 0x1C002FFF8 (WPP_RECORDER_SF_dddddd.c)
 *     WPP_RECORDER_SF_dqq @ 0x1C0030780 (WPP_RECORDER_SF_dqq.c)
 *     WPP_RECORDER_SF_dqqd @ 0x1C0030874 (WPP_RECORDER_SF_dqqd.c)
 *     ESM_AddEvent @ 0x1C0036A00 (ESM_AddEvent.c)
 */

void __fastcall UsbDevice_UcxEvtEndpointsConfigure(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _WORD *v3; // rax
  __int64 v4; // rcx
  unsigned int v5; // esi
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 *v8; // rcx
  __int64 v9; // r15
  int v10; // edx
  signed int v11; // r12d
  __int64 v12; // rax
  PWDF_DRIVER_GLOBALS v13; // rcx
  unsigned int v14; // r14d
  __int64 *v15; // rbx
  int v16; // r8d
  __int64 v17; // rcx
  _DWORD *v18; // r14
  char v19; // al
  __int64 v20; // r15
  int v21; // ecx
  __int64 v22; // rdx
  unsigned int v23; // r13d
  unsigned int i; // r12d
  __int64 v25; // rdx
  int v26; // r13d
  __int64 v27; // rbx
  __int64 v28; // rbx
  int v29; // r8d
  __int64 v30; // r14
  __int64 *v31; // rbx
  int v32; // r8d
  __int64 v33; // rbx
  unsigned int j; // ebx
  int v35; // r11d
  __int64 v36; // r9
  __int64 v37; // r9
  __int64 v38; // r9
  int v39; // eax
  unsigned int v40; // eax
  int v41; // [rsp+20h] [rbp-D8h]
  __int64 v42; // [rsp+28h] [rbp-D0h]
  __int64 v43; // [rsp+30h] [rbp-C8h]
  __int64 v45; // [rsp+68h] [rbp-90h]
  _QWORD *v46; // [rsp+78h] [rbp-80h]
  _DWORD *v47; // [rsp+80h] [rbp-78h]
  _BYTE *v48; // [rsp+88h] [rbp-70h]
  __int64 v49; // [rsp+90h] [rbp-68h]
  _QWORD v50[5]; // [rsp+98h] [rbp-60h] BYREF

  v2 = a2;
  memset(v50, 0, sizeof(v50));
  LOWORD(v50[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v2,
    v50);
  v3 = (_WORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                  WdfDriverGlobals,
                  v2,
                  off_1C0045070);
  v4 = WdfFunctions_01015;
  v5 = 0;
  v48 = v3;
  *v3 = 0;
  v6 = v50[1];
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(v4 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(v50[1] + 16LL),
         off_1C0045250);
  v8 = *(__int64 **)(v7 + 8);
  v9 = v8[10];
  v45 = v9;
  v49 = v8[14];
  WPP_RECORDER_SF_dddd(v8[8], 4u, 0xBu, 0x22u, (__int64)&WPP_b259b106ca84381176d433aab66af5b0_Traceguids);
  if ( !*(_BYTE *)(v7 + 134) )
  {
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*(_QWORD *)(v7 + 8) + 64LL),
      3u,
      0xBu,
      0x23u,
      (__int64)&WPP_b259b106ca84381176d433aab66af5b0_Traceguids);
    v11 = *(_DWORD *)(v6 + 24) != 0 ? 0xC0000001 : 0;
LABEL_3:
    WPP_RECORDER_SF_dqqd(
      *(_QWORD *)(*(_QWORD *)(v7 + 8) + 64LL),
      v10,
      *(unsigned __int8 *)(v7 + 135),
      41,
      v41,
      *(_BYTE *)(v7 + 135),
      v2,
      *(_QWORD *)v7,
      v11);
    v12 = WdfFunctions_01015;
    v13 = WdfDriverGlobals;
    *(_QWORD *)(v7 + 440) = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(v12 + 2104))(v13, v2, (unsigned int)v11);
    return;
  }
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v7 + 8)) )
  {
    v14 = 0;
    v11 = *(_DWORD *)(v6 + 24) != 0 ? 0xC000000E : 0;
    if ( *(_DWORD *)(v6 + 40) )
    {
      do
      {
        v15 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                           WdfDriverGlobals,
                           *(_QWORD *)(*(_QWORD *)(v6 + 48) + 8LL * v14),
                           off_1C0045188);
        Endpoint_Disable_Internal(v15, 0, v16);
        ESM_AddEvent(v15 + 34);
        ++v14;
      }
      while ( v14 < *(_DWORD *)(v6 + 40) );
      v2 = a2;
    }
    goto LABEL_3;
  }
  v17 = *(_QWORD *)(v7 + 432);
  *(_QWORD *)(v7 + 440) = v2;
  *(_BYTE *)(v7 + 448) = *(_DWORD *)(v6 + 24) == 0;
  memset(*(void **)(v17 + 16), 0, *(unsigned int *)(v17 + 40));
  v18 = *(_DWORD **)(*(_QWORD *)(v7 + 432) + 16LL);
  v47 = v18;
  v19 = -(*(_BYTE *)(v9 + 104) & 4);
  v18[1] |= 1u;
  v20 = v19 != 0 ? 64LL : 32LL;
  if ( *(_BYTE *)(v7 + 136) )
  {
    v21 = *(_DWORD *)((char *)v18 + v20) | 0x4000000;
    *(_DWORD *)((char *)v18 + v20) = v21;
    *((_BYTE *)v18 + v20 + 7) = *(_BYTE *)(v7 + 140);
    if ( *(_DWORD *)(v7 + 20) == 2 )
    {
      if ( *(_DWORD *)(v7 + 144) > 1u )
        *(_DWORD *)((char *)v18 + v20) = v21 | 0x2000000;
      *(_DWORD *)((char *)v18 + v20 + 8) ^= (*(_DWORD *)((char *)v18 + v20 + 8) ^ (*(_DWORD *)(v7 + 148) << 16)) & 0x30000;
    }
  }
  if ( (*(_QWORD *)(*(_QWORD *)(v7 + 8) + 232LL) & 0x2000000000000000LL) != 0 && !*(_BYTE *)(v7 + 136) )
  {
    v22 = *(_QWORD *)(v7 + 24);
    if ( v22 )
    {
      if ( *(int *)(v7 + 20) < 2
        && *(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                         WdfDriverGlobals,
                         v22,
                         off_1C0045250)
                     + 144) > 1u )
      {
        *(_DWORD *)((char *)v18 + v20) |= 0x2000000u;
      }
    }
  }
  v23 = 0;
  if ( *(_DWORD *)(v6 + 24) )
  {
    while ( 1 )
    {
      v46 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                        WdfDriverGlobals,
                        *(_QWORD *)(*(_QWORD *)(v6 + 32) + 8LL * v23),
                        off_1C0045188);
      v11 = Endpoint_Enable(v46);
      if ( v11 < 0 )
        break;
      if ( ++v23 >= *(_DWORD *)(v6 + 24) )
        goto LABEL_22;
    }
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(*(_QWORD *)(v7 + 8) + 64LL),
      2u,
      0xBu,
      0x24u,
      (__int64)&WPP_b259b106ca84381176d433aab66af5b0_Traceguids);
    if ( v23 )
    {
      v30 = 8LL * v23;
      do
      {
        v30 -= 8LL;
        v31 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                           WdfDriverGlobals,
                           *(_QWORD *)(v30 + *(_QWORD *)(v6 + 32)),
                           off_1C0045188);
        Endpoint_Disable_Internal(v31, 0, v32);
        ESM_AddEvent(v31 + 34);
        --v23;
      }
      while ( v23 );
      v18 = v47;
      v2 = a2;
    }
    if ( !*(_DWORD *)(v6 + 40) )
      goto LABEL_3;
    *v48 = 1;
    HIDWORD(v43) = HIDWORD(v2);
    WPP_RECORDER_SF_dqq(*(_QWORD *)(*(_QWORD *)(v7 + 8) + 64LL), *(unsigned __int8 *)(v7 + 135), v29, 37);
  }
  else
  {
LABEL_22:
    for ( i = 0; i < *(_DWORD *)(v6 + 24); ++i )
    {
      v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              *(_QWORD *)(*(_QWORD *)(v6 + 32) + 8LL * i),
              off_1C0045188);
      v26 = *(_DWORD *)(v25 + 144);
      v27 = (unsigned int)(v26 - 1) + 2LL;
      if ( (*(_DWORD *)(v45 + 104) & 4) != 0 )
        v28 = v27 << 6;
      else
        v28 = 32 * v27;
      v33 = (__int64)v18 + v28;
      UsbDevice_InitializeEndpointContext(v7, v25, v33);
      v18[1] |= 1 << v26;
      WPP_RECORDER_SF_ddddd(
        *(_QWORD *)(*(_QWORD *)(v7 + 8) + 64LL),
        *(unsigned __int8 *)(v33 + 2),
        *(unsigned __int16 *)(v33 + 6),
        (*(_DWORD *)(v33 + 4) >> 3) & 7,
        v41,
        *(_BYTE *)(v7 + 135),
        v26,
        (*(_DWORD *)(v33 + 4) >> 3) & 7,
        *(_WORD *)(v33 + 6),
        *(_BYTE *)(v33 + 2));
    }
  }
  for ( j = 0; j < *(_DWORD *)(v6 + 40); ++j )
  {
    v35 = *(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                        WdfDriverGlobals,
                        *(_QWORD *)(*(_QWORD *)(v6 + 48) + 8LL * j),
                        off_1C0045188)
                    + 144);
    v36 = (unsigned int)(v35 - 1) + 1LL;
    if ( (*(_DWORD *)(v45 + 104) & 4) != 0 )
      v37 = v36 << 6;
    else
      v37 = 32 * v36;
    v38 = *(_QWORD *)(*(_QWORD *)(v7 + 424) + 16LL) + v37;
    *v18 |= 1 << v35;
    WPP_RECORDER_SF_dddddd(
      *(_QWORD *)(*(_QWORD *)(v7 + 8) + 64LL),
      *(unsigned __int8 *)(v38 + 2),
      *(unsigned __int16 *)(v38 + 6),
      (*(_DWORD *)(v38 + 4) >> 3) & 7,
      v41,
      *(_BYTE *)(v7 + 135),
      v35,
      (*(_DWORD *)(v38 + 4) >> 3) & 7,
      *(_WORD *)(v38 + 6),
      *(_BYTE *)(v38 + 2),
      *(_BYTE *)v38 & 7);
  }
  *(_DWORD *)(v7 + 152) &= ~*v18;
  *(_DWORD *)(v7 + 152) |= v18[1];
  do
  {
    v39 = *(_DWORD *)(v7 + 152);
    if ( _bittest(&v39, v5) )
      *(_DWORD *)((char *)v18 + v20) = (v5 << 27) | *(_DWORD *)((char *)v18 + v20) & 0x7FFFFFF;
    ++v5;
  }
  while ( v5 < 0x20 );
  LODWORD(v43) = *(_DWORD *)((char *)v18 + v20) >> 27;
  LODWORD(v42) = *(unsigned __int8 *)(v7 + 135);
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(*(_QWORD *)(v7 + 8) + 64LL),
    4u,
    0xBu,
    0x28u,
    (__int64)&WPP_b259b106ca84381176d433aab66af5b0_Traceguids,
    v42,
    v43);
  memset((void *)(v7 + 456), 0, 0x50uLL);
  *(_QWORD *)(v7 + 504) = UsbDevice_EndpointsConfigureCompletion;
  v40 = *(_DWORD *)(v7 + 492) & 0xFFFF31FF;
  *(_QWORD *)(v7 + 512) = v7;
  *(_DWORD *)(v7 + 492) = v40 | 0x3000;
  *(_BYTE *)(v7 + 495) = *(_BYTE *)(v7 + 135);
  *(_QWORD *)(v7 + 480) = *(_QWORD *)(*(_QWORD *)(v7 + 432) + 24LL);
  *(_QWORD *)(v7 + 496) = v18;
  Command_SendCommand(v49, v7 + 456);
}
