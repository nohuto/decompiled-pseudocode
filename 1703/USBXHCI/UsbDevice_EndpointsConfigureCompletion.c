/*
 * XREFs of UsbDevice_EndpointsConfigureCompletion @ 0x1C002D610
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dq @ 0x1C0008A90 (WPP_RECORDER_SF_dq.c)
 *     __security_check_cookie @ 0x1C00105E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010E80 (memset.c)
 *     Command_SendCommand @ 0x1C00184A4 (Command_SendCommand.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001ACD8 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001B890 (Controller_ReportFatalError.c)
 *     Endpoint_Disable_Internal @ 0x1C001D68C (Endpoint_Disable_Internal.c)
 *     WPP_RECORDER_SF_dqL @ 0x1C0030364 (WPP_RECORDER_SF_dqL.c)
 *     WPP_RECORDER_SF_dqd @ 0x1C0030578 (WPP_RECORDER_SF_dqd.c)
 *     WPP_RECORDER_SF_dqq @ 0x1C0030780 (WPP_RECORDER_SF_dqq.c)
 *     WPP_RECORDER_SF_dqqd @ 0x1C0030874 (WPP_RECORDER_SF_dqqd.c)
 *     ESM_AddEvent @ 0x1C0036A00 (ESM_AddEvent.c)
 */

void __fastcall UsbDevice_EndpointsConfigureCompletion(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v3; // rsi
  unsigned int v5; // ebp
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  int v11; // edx
  int v12; // r8d
  __int64 v13; // r14
  _BYTE *v14; // r13
  int v15; // edx
  int v16; // r8d
  char v17; // r12
  unsigned int v18; // r15d
  char v19; // al
  unsigned int i; // r13d
  __int64 *v21; // rdi
  int v22; // r8d
  int v23; // edx
  char v24; // al
  unsigned int j; // r12d
  __int64 *v26; // rdi
  int v27; // r8d
  unsigned int k; // r12d
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // r13
  __int64 v33; // rax
  PWDF_DRIVER_GLOBALS v34; // rcx
  unsigned int m; // r15d
  __int64 *v36; // rdi
  int v37; // r8d
  _DWORD *v38; // rdi
  __int64 v39; // rbx
  int v40; // ecx
  __int64 v41; // rdx
  __int64 v42; // rax
  unsigned int v43; // eax
  int v44; // [rsp+20h] [rbp-B8h]
  char v45; // [rsp+50h] [rbp-88h]
  __int64 v46; // [rsp+60h] [rbp-78h]
  __int64 v47; // [rsp+68h] [rbp-70h]
  _QWORD v48[5]; // [rsp+70h] [rbp-68h] BYREF

  v3 = *(_QWORD *)(a1 + 56);
  v5 = 0;
  v45 = 0;
  v8 = *(_QWORD *)(v3 + 8);
  v9 = *(_QWORD *)(v3 + 440);
  v46 = *(_QWORD *)(v8 + 80);
  v47 = *(_QWORD *)(v8 + 112);
  memset(v48, 0, sizeof(v48));
  LOWORD(v48[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v9,
    v48);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          v9,
          off_1C0045070);
  v13 = v48[1];
  v14 = (_BYTE *)v10;
  if ( a2 == 3 )
  {
    if ( !*(_DWORD *)(v48[1] + 24LL) )
    {
      WPP_RECORDER_SF_dqd(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL), *(unsigned __int8 *)(v3 + 135), v12, 42);
      goto LABEL_13;
    }
    WPP_RECORDER_SF_dqd(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL), *(unsigned __int8 *)(v3 + 135), v12, 43);
LABEL_5:
    v17 = 1;
    v18 = -1073741823;
    goto LABEL_15;
  }
  v19 = *(_BYTE *)(a1 + 68);
  if ( v19 == 1 )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_dqL(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL), v11, *(unsigned __int8 *)(a1 + 69), 44);
    *(_DWORD *)(v13 + 76) = *(_DWORD *)(a1 + 72);
    if ( *v14 || v14[1] )
    {
      v18 = -1073741823;
LABEL_14:
      v17 = 0;
LABEL_15:
      for ( i = 0; i < *(_DWORD *)(v13 + 40); ++i )
      {
        v21 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                           WdfDriverGlobals,
                           *(_QWORD *)(*(_QWORD *)(v13 + 48) + 8LL * i),
                           off_1C0045188);
        Endpoint_Disable_Internal(v21, 0, v22);
        ESM_AddEvent(v21 + 34);
      }
      if ( v17 != 1 )
        goto LABEL_34;
      goto LABEL_32;
    }
    v45 = 1;
LABEL_13:
    v18 = 0;
    goto LABEL_14;
  }
  if ( v19 == 11 )
  {
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
      4u,
      0xBu,
      0x2Du,
      (__int64)&WPP_b259b106ca84381176d433aab66af5b0_Traceguids);
    if ( !*(_DWORD *)(v13 + 24) )
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
      if ( *(_DWORD *)(v13 + 24) )
        *(_DWORD *)(v13 + 72) |= 1u;
      break;
    case 7:
      if ( *(_DWORD *)(v13 + 24) )
        *(_DWORD *)(v13 + 72) |= 2u;
      break;
    case 29:
      if ( *(_DWORD *)(v13 + 24) )
        *(_DWORD *)(v13 + 72) |= 4u;
      *(_DWORD *)(v13 + 76) = *(_DWORD *)(a1 + 72);
      break;
  }
  if ( !*(_DWORD *)(v13 + 40) )
  {
    v18 = -1073741823;
LABEL_32:
    for ( j = 0; j < *(_DWORD *)(v13 + 24); ++j )
    {
      v26 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                         WdfDriverGlobals,
                         *(_QWORD *)(*(_QWORD *)(v13 + 32) + 8LL * j),
                         off_1C0045188);
      Endpoint_Disable_Internal(v26, 0, v27);
      ESM_AddEvent(v26 + 34);
    }
LABEL_34:
    if ( v45 == 1 )
    {
      for ( k = 0; k < *(_DWORD *)(v13 + 24); *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v30 + 144) + 168) = v30 )
      {
        v29 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                *(_QWORD *)(*(_QWORD *)(v13 + 32) + 8LL * k),
                off_1C0045188);
        v30 = v29;
        v31 = *(unsigned int *)(v29 + 144);
        v32 = *(_QWORD *)(v3 + 8 * v31 + 168);
        if ( v32 )
        {
          if ( v32 != v29 )
          {
            LOBYTE(v15) = 1;
            Endpoint_Disable_Internal(*(__int64 **)(v3 + 8 * v31 + 168), v15, v16);
            ESM_AddEvent((PVOID)(v32 + 272));
            *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v30 + 144) + 168) = 0LL;
          }
        }
        ++k;
      }
    }
    WPP_RECORDER_SF_dqqd(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
      v15,
      v16,
      48,
      v44,
      *(_BYTE *)(v3 + 135),
      v9,
      *(_QWORD *)v3,
      v18);
    v33 = WdfFunctions_01015;
    v34 = WdfDriverGlobals;
    *(_QWORD *)(v3 + 440) = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(v33 + 2104))(v34, v9, v18);
    return;
  }
  if ( !*(_DWORD *)(v13 + 24) || *v14 == 1 || v14[1] == 1 )
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
    v14[1] = 1;
    WPP_RECORDER_SF_dqq(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL), *(unsigned __int8 *)(v3 + 135), v16, 47);
    for ( m = 0; m < *(_DWORD *)(v13 + 24); ++m )
    {
      v36 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                         WdfDriverGlobals,
                         *(_QWORD *)(*(_QWORD *)(v13 + 32) + 8LL * m),
                         off_1C0045188);
      Endpoint_Disable_Internal(v36, 0, v37);
      ESM_AddEvent(v36 + 34);
    }
    v38 = *(_DWORD **)(*(_QWORD *)(v3 + 432) + 16LL);
    if ( (*(_DWORD *)(v46 + 104) & 4) != 0 )
    {
      memset(v38, 0, 0x840uLL);
      v39 = 16LL;
    }
    else
    {
      memset(v38, 0, 0x420uLL);
      v39 = 8LL;
    }
    v38[1] |= 1u;
    if ( *(_BYTE *)(v3 + 136) )
    {
      v40 = v38[v39] | 0x4000000;
      v38[v39] = v40;
      HIBYTE(v38[v39 + 1]) = *(_BYTE *)(v3 + 140);
      if ( *(_DWORD *)(v3 + 20) == 2 )
      {
        if ( *(_DWORD *)(v3 + 144) > 1u )
          v38[v39] = v40 | 0x2000000;
        v38[v39 + 2] ^= (v38[v39 + 2] ^ (*(_DWORD *)(v3 + 148) << 16)) & 0x30000;
      }
    }
    if ( (*(_QWORD *)(*(_QWORD *)(v3 + 8) + 232LL) & 0x2000000000000000LL) != 0 && !*(_BYTE *)(v3 + 136) )
    {
      v41 = *(_QWORD *)(v3 + 24);
      if ( v41 )
      {
        if ( *(int *)(v3 + 20) < 2
          && *(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                           WdfDriverGlobals,
                           v41,
                           off_1C0045250)
                       + 144) > 1u )
        {
          v38[v39] |= 0x2000000u;
        }
      }
    }
    if ( *(_DWORD *)(v13 + 40) )
    {
      do
      {
        v42 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                *(_QWORD *)(*(_QWORD *)(v13 + 48) + 8LL * v5++),
                off_1C0045188);
        *v38 |= 1 << *(_DWORD *)(v42 + 144);
      }
      while ( v5 < *(_DWORD *)(v13 + 40) );
    }
    memset((void *)(v3 + 456), 0, 0x50uLL);
    *(_QWORD *)(v3 + 504) = UsbDevice_EndpointsConfigureCompletion;
    v43 = *(_DWORD *)(v3 + 492) & 0xFFFF31FF;
    *(_QWORD *)(v3 + 512) = v3;
    *(_DWORD *)(v3 + 492) = v43 | 0x3000;
    *(_BYTE *)(v3 + 495) = *(_BYTE *)(v3 + 135);
    *(_QWORD *)(v3 + 480) = *(_QWORD *)(*(_QWORD *)(v3 + 432) + 24LL);
    *(_QWORD *)(v3 + 496) = v38;
    Command_SendCommand(v47, v3 + 456);
  }
}
