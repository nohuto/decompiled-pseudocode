/*
 * XREFs of UsbDevice_EndpointsConfigureCompletion @ 0x1C0030440
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dq @ 0x1C0009894 (WPP_RECORDER_SF_dq.c)
 *     __security_check_cookie @ 0x1C0010810 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0011000 (memset.c)
 *     Command_SendCommand @ 0x1C001BD2C (Command_SendCommand.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001E4B0 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001F02C (Controller_ReportFatalError.c)
 *     Endpoint_Disable @ 0x1C0020DE0 (Endpoint_Disable.c)
 *     WPP_RECORDER_SF_dqL @ 0x1C0032E18 (WPP_RECORDER_SF_dqL.c)
 *     WPP_RECORDER_SF_dqd @ 0x1C003301C (WPP_RECORDER_SF_dqd.c)
 *     WPP_RECORDER_SF_dqq @ 0x1C0033214 (WPP_RECORDER_SF_dqq.c)
 *     WPP_RECORDER_SF_dqqd @ 0x1C0033300 (WPP_RECORDER_SF_dqqd.c)
 */

void __fastcall UsbDevice_EndpointsConfigureCompletion(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v3; // rdi
  unsigned int v4; // esi
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // r13
  __int64 v11; // rax
  int v12; // edx
  int v13; // r8d
  __int64 v14; // rbp
  _BYTE *v15; // r15
  int v16; // edx
  int v17; // r8d
  char v18; // r14
  unsigned int v19; // ebx
  char v20; // al
  unsigned int i; // r15d
  __int64 v22; // rax
  int v23; // edx
  char v24; // al
  unsigned int j; // r14d
  __int64 v26; // rax
  unsigned int k; // r15d
  __int64 v28; // rax
  __int64 v29; // r14
  __int64 v30; // rcx
  __int64 v31; // rax
  PWDF_DRIVER_GLOBALS v32; // rcx
  unsigned int m; // ebx
  __int64 v34; // rax
  _DWORD *v35; // r14
  _DWORD *v36; // rcx
  __int64 v37; // rax
  unsigned int v38; // eax
  int v39; // [rsp+20h] [rbp-B8h]
  char v40; // [rsp+50h] [rbp-88h]
  __int64 v41; // [rsp+58h] [rbp-80h]
  __int64 v42; // [rsp+60h] [rbp-78h]
  _QWORD v43[5]; // [rsp+68h] [rbp-70h] BYREF

  v3 = *(_QWORD *)(a1 + 56);
  v4 = 0;
  v40 = 0;
  v8 = *(_QWORD *)(v3 + 8);
  v9 = *(_QWORD *)(v3 + 440);
  v41 = v9;
  v10 = *(_QWORD *)(v8 + 80);
  v42 = *(_QWORD *)(v8 + 112);
  memset(v43, 0, sizeof(v43));
  LOWORD(v43[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v9,
    v43);
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          v9,
          off_1C0041098);
  v14 = v43[1];
  v15 = (_BYTE *)v11;
  if ( a2 == 3 )
  {
    if ( !*(_DWORD *)(v43[1] + 24LL) )
    {
      WPP_RECORDER_SF_dqd(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL), *(unsigned __int8 *)(v3 + 135), v13, 42);
      goto LABEL_13;
    }
    WPP_RECORDER_SF_dqd(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL), *(unsigned __int8 *)(v3 + 135), v13, 43);
LABEL_5:
    v18 = 1;
    v19 = -1073741823;
    goto LABEL_15;
  }
  v20 = *(_BYTE *)(a1 + 68);
  if ( v20 == 1 )
  {
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_dqL(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL), v12, *(unsigned __int8 *)(a1 + 69), 44);
    *(_DWORD *)(v14 + 76) = *(_DWORD *)(a1 + 72);
    if ( *v15 || v15[1] )
    {
      v19 = -1073741823;
LABEL_14:
      v18 = 0;
LABEL_15:
      for ( i = 0; i < *(_DWORD *)(v14 + 40); ++i )
      {
        v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                *(_QWORD *)(*(_QWORD *)(v14 + 48) + 8LL * i),
                off_1C0041138);
        Endpoint_Disable(v22);
      }
      if ( v18 != 1 )
        goto LABEL_34;
      goto LABEL_32;
    }
    v40 = 1;
LABEL_13:
    v19 = 0;
    goto LABEL_14;
  }
  if ( v20 == 11 )
  {
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
      4u,
      0xBu,
      0x2Du,
      (__int64)&WPP_87fc70acbba44992ba40c6b485cfec47_Traceguids);
    if ( !*(_DWORD *)(v14 + 24) )
      goto LABEL_13;
    goto LABEL_5;
  }
  v23 = *(unsigned __int8 *)(a1 + 69);
  LOBYTE(v23) = 2;
  WPP_RECORDER_SF_dqL(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL), v23, 11, 46);
  v24 = *(_BYTE *)(a1 + 68);
  switch ( v24 )
  {
    case 8:
    case 35:
      if ( *(_DWORD *)(v14 + 24) )
        *(_DWORD *)(v14 + 72) |= 1u;
      break;
    case 7:
      if ( *(_DWORD *)(v14 + 24) )
        *(_DWORD *)(v14 + 72) |= 2u;
      break;
    case 29:
      if ( *(_DWORD *)(v14 + 24) )
        *(_DWORD *)(v14 + 72) |= 4u;
      *(_DWORD *)(v14 + 76) = *(_DWORD *)(a1 + 72);
      break;
  }
  if ( !*(_DWORD *)(v14 + 40) )
  {
    v19 = -1073741823;
LABEL_32:
    for ( j = 0; j < *(_DWORD *)(v14 + 24); ++j )
    {
      v26 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              *(_QWORD *)(*(_QWORD *)(v14 + 32) + 8LL * j),
              off_1C0041138);
      Endpoint_Disable(v26);
    }
LABEL_34:
    if ( v40 == 1 )
    {
      for ( k = 0; k < *(_DWORD *)(v14 + 24); *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v29 + 144) + 168) = v29 )
      {
        v28 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                *(_QWORD *)(*(_QWORD *)(v14 + 32) + 8LL * k),
                off_1C0041138);
        v29 = v28;
        v30 = *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v28 + 144) + 168);
        if ( v30 )
        {
          if ( v30 != v28 )
          {
            Endpoint_Disable(v30);
            *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v29 + 144) + 168) = 0LL;
          }
        }
        ++k;
      }
    }
    WPP_RECORDER_SF_dqqd(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
      v16,
      v17,
      48,
      v39,
      *(_BYTE *)(v3 + 135),
      v41,
      *(_QWORD *)v3,
      v19);
    v31 = WdfFunctions_01015;
    v32 = WdfDriverGlobals;
    *(_QWORD *)(v3 + 440) = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(v31 + 2104))(v32, v41, v19);
    return;
  }
  if ( !*(_DWORD *)(v14 + 24) || *v15 == 1 || v15[1] == 1 )
  {
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD **)(v3 + 8),
      *(_QWORD *)v3,
      0,
      0x80000LL,
      "Configure Endpoints command failed when only disabling endpoints",
      (_QWORD *)(a1 + 24),
      a3);
    Controller_ReportFatalError(*(_QWORD *)(v3 + 8), 2, 4119, 0LL, 0LL, 0LL);
  }
  else
  {
    v15[1] = 1;
    WPP_RECORDER_SF_dqq(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL), *(unsigned __int8 *)(v3 + 135), v17, 47);
    for ( m = 0; m < *(_DWORD *)(v14 + 24); ++m )
    {
      v34 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              *(_QWORD *)(*(_QWORD *)(v14 + 32) + 8LL * m),
              off_1C0041138);
      Endpoint_Disable(v34);
    }
    v35 = *(_DWORD **)(*(_QWORD *)(v3 + 432) + 16LL);
    if ( (*(_BYTE *)(v10 + 104) & 4) != 0 )
    {
      memset(v35, 0, 0x840uLL);
      v36 = v35 + 16;
    }
    else
    {
      memset(v35, 0, 0x420uLL);
      v36 = v35 + 8;
    }
    v35[1] |= 1u;
    if ( *(_BYTE *)(v3 + 136) )
    {
      *v36 |= 0x4000000u;
      *((_BYTE *)v36 + 7) = *(_BYTE *)(v3 + 140);
      if ( *(_DWORD *)(v3 + 20) == 2 )
      {
        if ( *(_DWORD *)(v3 + 144) > 1u )
          *v36 |= 0x2000000u;
        v36[2] ^= (v36[2] ^ (*(_DWORD *)(v3 + 148) << 16)) & 0x30000;
      }
    }
    if ( *(_DWORD *)(v14 + 40) )
    {
      do
      {
        v37 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                *(_QWORD *)(*(_QWORD *)(v14 + 48) + 8LL * v4++),
                off_1C0041138);
        *v35 |= 1 << *(_DWORD *)(v37 + 144);
      }
      while ( v4 < *(_DWORD *)(v14 + 40) );
    }
    memset((void *)(v3 + 456), 0, 0x50uLL);
    *(_QWORD *)(v3 + 504) = UsbDevice_EndpointsConfigureCompletion;
    v38 = *(_DWORD *)(v3 + 492) & 0xFFFF31FF;
    *(_QWORD *)(v3 + 512) = v3;
    *(_DWORD *)(v3 + 492) = v38 | 0x3000;
    *(_BYTE *)(v3 + 495) = *(_BYTE *)(v3 + 135);
    *(_QWORD *)(v3 + 480) = *(_QWORD *)(*(_QWORD *)(v3 + 432) + 24LL);
    *(_QWORD *)(v3 + 496) = v35;
    Command_SendCommand(v42, v3 + 456);
  }
}
