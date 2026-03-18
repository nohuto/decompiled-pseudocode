/*
 * XREFs of UsbDevice_EndpointsConfigureCompletion @ 0x1C002F230
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dq @ 0x1C0005328 (WPP_RECORDER_SF_dq.c)
 *     __security_check_cookie @ 0x1C0007B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     Command_SendCommand @ 0x1C001278C (Command_SendCommand.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0014F6C (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001595C (Controller_ReportFatalError.c)
 *     Endpoint_Disable @ 0x1C00176D0 (Endpoint_Disable.c)
 *     WPP_RECORDER_SF_dqd @ 0x1C0031F1C (WPP_RECORDER_SF_dqd.c)
 *     WPP_RECORDER_SF_dqL @ 0x1C0032114 (WPP_RECORDER_SF_dqL.c)
 *     WPP_RECORDER_SF_dqq @ 0x1C0032424 (WPP_RECORDER_SF_dqq.c)
 *     WPP_RECORDER_SF_dqqd @ 0x1C0032510 (WPP_RECORDER_SF_dqqd.c)
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
  unsigned int m; // ebx
  __int64 v32; // rax
  _DWORD *v33; // r14
  _DWORD *v34; // rcx
  __int64 v35; // rax
  unsigned int v36; // eax
  int v37; // [rsp+20h] [rbp-B8h]
  char v38; // [rsp+50h] [rbp-88h]
  __int64 v39; // [rsp+58h] [rbp-80h]
  __int64 v40; // [rsp+60h] [rbp-78h]
  _QWORD v41[5]; // [rsp+68h] [rbp-70h] BYREF

  v3 = *(_QWORD *)(a1 + 56);
  v4 = 0;
  v38 = 0;
  v8 = *(_QWORD *)(v3 + 8);
  v9 = *(_QWORD *)(v3 + 440);
  v39 = v9;
  v10 = *(_QWORD *)(v8 + 80);
  v40 = *(_QWORD *)(v8 + 112);
  memset(v41, 0, sizeof(v41));
  LOWORD(v41[0]) = 40;
  (*(void (__fastcall **)(_LIST_ENTRY *, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
    v9,
    v41);
  v11 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
          WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
          v9,
          off_1C0040068);
  v14 = v41[1];
  v15 = (_BYTE *)v11;
  if ( a2 == 3 )
  {
    if ( !*(_DWORD *)(v41[1] + 24LL) )
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
        v22 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                *(_QWORD *)(*(_QWORD *)(v14 + 48) + 8LL * i),
                off_1C0040108);
        Endpoint_Disable(v22);
      }
      if ( v18 != 1 )
        goto LABEL_34;
      goto LABEL_32;
    }
    v38 = 1;
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
      v26 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD, void *))(WdfFunctions_01015 + 1616))(
              WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
              *(_QWORD *)(*(_QWORD *)(v14 + 32) + 8LL * j),
              off_1C0040108);
      Endpoint_Disable(v26);
    }
LABEL_34:
    if ( v38 == 1 )
    {
      for ( k = 0; k < *(_DWORD *)(v14 + 24); *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v29 + 144) + 168) = v29 )
      {
        v28 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                *(_QWORD *)(*(_QWORD *)(v14 + 32) + 8LL * k),
                off_1C0040108);
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
      v37,
      *(_BYTE *)(v3 + 135),
      v39,
      *(_QWORD *)v3,
      v19);
    *(_QWORD *)(v3 + 440) = 0LL;
    (*(void (__fastcall **)(_LIST_ENTRY *, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
      WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
      v39,
      v19);
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
      v32 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD, void *))(WdfFunctions_01015 + 1616))(
              WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
              *(_QWORD *)(*(_QWORD *)(v14 + 32) + 8LL * m),
              off_1C0040108);
      Endpoint_Disable(v32);
    }
    v33 = *(_DWORD **)(*(_QWORD *)(v3 + 432) + 16LL);
    if ( (*(_BYTE *)(v10 + 104) & 4) != 0 )
    {
      memset(v33, 0, 0x840uLL);
      v34 = v33 + 16;
    }
    else
    {
      memset(v33, 0, 0x420uLL);
      v34 = v33 + 8;
    }
    v33[1] |= 1u;
    if ( *(_BYTE *)(v3 + 136) )
    {
      *v34 |= 0x4000000u;
      *((_BYTE *)v34 + 7) = *(_BYTE *)(v3 + 140);
      if ( *(_DWORD *)(v3 + 20) == 2 )
      {
        if ( *(_DWORD *)(v3 + 144) > 1u )
          *v34 |= 0x2000000u;
        v34[2] ^= (v34[2] ^ (*(_DWORD *)(v3 + 148) << 16)) & 0x30000;
      }
    }
    if ( *(_DWORD *)(v14 + 40) )
    {
      do
      {
        v35 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                *(_QWORD *)(*(_QWORD *)(v14 + 48) + 8LL * v4++),
                off_1C0040108);
        *v33 |= 1 << *(_DWORD *)(v35 + 144);
      }
      while ( v4 < *(_DWORD *)(v14 + 40) );
    }
    memset((void *)(v3 + 456), 0, 0x50uLL);
    *(_QWORD *)(v3 + 504) = UsbDevice_EndpointsConfigureCompletion;
    v36 = *(_DWORD *)(v3 + 492) & 0xFFFF31FF;
    *(_QWORD *)(v3 + 512) = v3;
    *(_DWORD *)(v3 + 492) = v36 | 0x3000;
    *(_BYTE *)(v3 + 495) = *(_BYTE *)(v3 + 135);
    *(_QWORD *)(v3 + 480) = *(_QWORD *)(*(_QWORD *)(v3 + 432) + 24LL);
    *(_QWORD *)(v3 + 496) = v33;
    Command_SendCommand(v40, v3 + 456);
  }
}
