/*
 * XREFs of Interrupter_WdfEvtInterruptDpc @ 0x1C001D0A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001300 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00023E0 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_L @ 0x1C00024B0 (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0003980 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0004990 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C0004E50 (WPP_RECORDER_SF_qLL.c)
 *     WPP_RECORDER_SF_x @ 0x1C0006AF4 (WPP_RECORDER_SF_x.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0006BA8 (WPP_RECORDER_SF_qq.c)
 *     __security_check_cookie @ 0x1C0007B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C0011B24 (Command_HandleCommandCompletionEvent.c)
 *     Controller_ReportFatalError @ 0x1C001595C (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_LL @ 0x1C00169E8 (WPP_RECORDER_SF_LL.c)
 *     WPP_RECORDER_SF_ddddxdLL @ 0x1C001DC64 (WPP_RECORDER_SF_ddddxdLL.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C001DDF8 (WPP_RECORDER_SF_qdd.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C001E914 (RootHub_HandlePortStatusChangeEvent.c)
 *     TR_TransferEventHandler @ 0x1C0020AB0 (TR_TransferEventHandler.c)
 *     UsbDevice_DeviceNotificationEventHandler @ 0x1C002E9CC (UsbDevice_DeviceNotificationEventHandler.c)
 *     UsbDevice_TransferEventHandler @ 0x1C00305FC (UsbDevice_TransferEventHandler.c)
 */

void __fastcall Interrupter_WdfEvtInterruptDpc(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rbx
  KIRQL v8; // al
  int v9; // edx
  KSPIN_LOCK *v10; // rcx
  int v11; // r15d
  __m128i *v12; // rsi
  ULONG v13; // r12d
  ULONG v14; // r13d
  __int64 v15; // rcx
  unsigned __int64 v16; // r10
  int v17; // r8d
  int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // r8d
  BOOL v22; // edx
  __int64 v23; // rcx
  unsigned __int32 v24; // r8d
  __int64 v25; // rcx
  __int64 v26; // rcx
  unsigned __int32 v27; // edx
  int v28; // r10d
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rdx
  unsigned __int64 v40; // rbx
  __int64 v41; // rcx
  __int64 v42; // rax
  PDEVICE_OBJECT v43; // r8
  __int64 v44; // rcx
  __int64 v45; // rdx
  unsigned __int64 v46; // rbx
  __int64 v47; // rax
  KIRQL v48; // al
  KIRQL v49; // bl
  struct _IO_WORKITEM *v50; // rcx
  KIRQL v51; // al
  KIRQL v52; // dl
  KIRQL v53; // al
  KIRQL v54; // si
  __int64 v55; // r8
  __int64 v56; // rbx
  __int64 v57; // rax
  signed __int32 v58[8]; // [rsp+0h] [rbp-99h] BYREF
  __int64 v59; // [rsp+20h] [rbp-79h]
  unsigned __int64 v60; // [rsp+28h] [rbp-71h]
  __int64 v61; // [rsp+30h] [rbp-69h]
  int v62; // [rsp+38h] [rbp-61h]
  __m128i v63; // [rsp+70h] [rbp-29h] BYREF
  __int64 v64; // [rsp+80h] [rbp-19h]
  __int64 v65; // [rsp+88h] [rbp-11h]
  unsigned __int64 v66; // [rsp+90h] [rbp-9h]
  _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+98h] [rbp-1h] BYREF

  v66 = a1;
  v4 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, unsigned __int64, void *))(WdfFunctions_01015 + 1616))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         a1,
         off_1C0040220);
  v5 = *(_QWORD *)(v4 + 8);
  v65 = *(_QWORD *)(v5 + 104);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v6 = *(_QWORD *)(v5 + 64);
    v61 = a2;
    v60 = a1;
    WPP_RECORDER_SF_qq(v6, 5u, 8u, 0x20u, (__int64)&WPP_b5cbcd348d84cc97a8629183b7c53e9f_Traceguids);
  }
  ++*(_DWORD *)(v4 + 52);
  if ( *(_DWORD *)(v4 + 32) )
    v7 = 0LL;
  else
    v7 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, unsigned __int64, void *))(WdfFunctions_01015 + 1616))(
           WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
           a1,
           off_1C00401A8);
  v64 = v7;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 216));
  v9 = *(_DWORD *)(v4 + 104);
  v10 = (KSPIN_LOCK *)(v4 + 216);
  if ( (v9 & 8) != 0 )
  {
    KeReleaseSpinLock(v10, v8);
    ++*(_DWORD *)(v4 + 76);
    return;
  }
  *(_DWORD *)(v4 + 104) = v9 | 8;
  KeReleaseSpinLock(v10, v8);
  v11 = 0;
  v12 = (__m128i *)(*(_QWORD *)(v4 + 144) + 16LL * *(unsigned int *)(v4 + 132));
  v13 = 0;
  v14 = 0;
  if ( (v12->m128i_i32[3] & 1) != *(_DWORD *)(v4 + 128) )
  {
LABEL_100:
    v53 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 216));
    *(_DWORD *)(v4 + 104) &= ~8u;
    v54 = v53;
    v55 = 16LL * *(unsigned int *)(v4 + 132) + *(_QWORD *)(*(_QWORD *)(v4 + 152) + 24LL);
    v56 = v55 ^ ((unsigned __int8)*(_DWORD *)(v4 + 136) ^ (unsigned __int8)*(_QWORD *)(*(_QWORD *)(v4 + 152) + 24LL)) & 7 | 8;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_x(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 64LL),
        5u,
        8u,
        0x17u,
        (__int64)&WPP_b5cbcd348d84cc97a8629183b7c53e9f_Traceguids,
        v55 ^ ((unsigned __int8)*(_DWORD *)(v4 + 136) ^ (unsigned __int8)*(_QWORD *)(*(_QWORD *)(v4 + 152) + 24LL)) & 7 | 8);
    v57 = *(_QWORD *)(v4 + 24);
    if ( (*(_BYTE *)(*(_QWORD *)(v4 + 8) + 232LL) & 1) != 0 )
    {
      *(_DWORD *)(v57 + 24) = v56;
      _InterlockedOr(v58, 0);
      *(_DWORD *)(v57 + 28) = HIDWORD(v56);
    }
    else
    {
      *(_QWORD *)(v57 + 24) = v56;
    }
    _InterlockedOr(v58, 0);
    v52 = v54;
    goto LABEL_106;
  }
  while ( 1 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v15 = *(_QWORD *)(v4 + 8);
      LODWORD(v61) = *(_DWORD *)(v4 + 132);
      v60 = (unsigned __int64)v12;
      WPP_RECORDER_SF_qd(
        *(_QWORD *)(v15 + 64),
        5u,
        8u,
        0x21u,
        (__int64)&WPP_b5cbcd348d84cc97a8629183b7c53e9f_Traceguids);
    }
    if ( (v11 & 0x3F) != 0 || KeQueryDpcWatchdogInformation(&WatchdogInformation) < 0 )
      goto LABEL_19;
    if ( !v13 )
      v13 = 95 * WatchdogInformation.DpcTimeLimit / 0x64;
    if ( !v14 )
      v14 = 25 * WatchdogInformation.DpcWatchdogLimit / 0x64;
    if ( WatchdogInformation.DpcTimeCount < v13 )
      break;
    if ( WatchdogInformation.DpcWatchdogCount < v14 )
    {
      ++*(_DWORD *)(v4 + 88);
      goto LABEL_85;
    }
LABEL_19:
    v63 = *v12;
    v16 = HIDWORD(_mm_srli_si128(v63, 8).m128i_u64[0]);
    v17 = _mm_cvtsi128_si32(_mm_srli_si128(v63, 8));
    WPP_RECORDER_SF_ddddxdLL(
      *(_QWORD *)(v4 + 16),
      ((unsigned int)v16 >> 2) & 1,
      v17 & 0xFFFFFF,
      (unsigned __int16)v16 >> 10,
      v59,
      *(_DWORD *)(v4 + 132),
      SBYTE3(v16),
      BYTE2(v16) & 0x1F,
      (v16 & 4) != 0,
      v63.m128i_i8[0],
      v17,
      SHIBYTE(v17),
      (unsigned __int16)v16 >> 10);
    ++*(_DWORD *)(v4 + 132);
    ++*(_DWORD *)(v4 + 56);
    v18 = *(_DWORD *)(v4 + 132);
    if ( v18 == *(_DWORD *)(v4 + 124) )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v19 = *(_QWORD *)(v4 + 8);
        v62 = *(_DWORD *)(v4 + 128);
        LODWORD(v61) = *(_DWORD *)(v4 + 136);
        v20 = *(_QWORD *)(v19 + 64);
        LODWORD(v60) = v18;
        WPP_RECORDER_SF_ddd(v20, 5u, 8u, 0x24u, (__int64)&WPP_b5cbcd348d84cc97a8629183b7c53e9f_Traceguids);
      }
      v21 = ++*(_DWORD *)(v4 + 136);
      *(_DWORD *)(v4 + 132) = 0;
      if ( v21 == *(_DWORD *)(v4 + 116) )
      {
        v22 = *(_DWORD *)(v4 + 128) != 1;
        *(_DWORD *)(v4 + 128) = v22;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v23 = *(_QWORD *)(v4 + 8);
          LODWORD(v61) = v22;
          LODWORD(v60) = v21;
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(v23 + 64),
            5u,
            8u,
            0x25u,
            (__int64)&WPP_b5cbcd348d84cc97a8629183b7c53e9f_Traceguids);
        }
        *(_QWORD *)(v4 + 152) = *(_QWORD *)(v4 + 168);
        *(_DWORD *)(v4 + 136) = 0;
      }
      else
      {
        *(_QWORD *)(v4 + 152) = **(_QWORD **)(v4 + 152);
      }
      *(_QWORD *)(v4 + 144) = *(_QWORD *)(*(_QWORD *)(v4 + 152) + 16LL);
    }
    v24 = v63.m128i_u32[2];
    if ( HIBYTE(v63.m128i_i32[2]) == 199 && (v25 = *(_QWORD *)(v4 + 8), (*(_QWORD *)(v25 + 232) & 0x2000LL) != 0) )
    {
      v26 = *(_QWORD *)(v25 + 64);
      v62 = (unsigned __int16)v63.m128i_i16[6] >> 10;
      LODWORD(v61) = 199;
      v60 = (unsigned __int64)v12;
      WPP_RECORDER_SF_qLL(v26, 3u, 8u, 0x26u, (__int64)&WPP_b5cbcd348d84cc97a8629183b7c53e9f_Traceguids);
    }
    else
    {
      v27 = v63.m128i_u32[3];
      v28 = (unsigned __int16)v63.m128i_i16[6] >> 10;
      if ( v28 == 32 )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v29 = *(_QWORD *)(v4 + 8);
          LODWORD(v61) = HIBYTE(v63.m128i_i32[2]);
          LODWORD(v60) = (unsigned __int16)v63.m128i_i16[6] >> 10;
          WPP_RECORDER_SF_LL(
            *(_QWORD *)(v29 + 64),
            5u,
            8u,
            0x27u,
            (__int64)&WPP_b5cbcd348d84cc97a8629183b7c53e9f_Traceguids);
          v27 = v63.m128i_u32[3];
          v24 = v63.m128i_u32[2];
        }
        if ( (v27 & 4) != 0
          && (*(_QWORD *)(*(_QWORD *)(v4 + 8) + 232LL) & 0x20000000000000LL) != 0
          && HIBYTE(v24) - 14 <= 1u )
        {
          v27 &= ~4u;
          v63.m128i_i32[3] = v27;
        }
        if ( (v27 & 4) == 0
          || (v63.m128i_i8[0] & 3) == 1
          || (*(_QWORD *)(*(_QWORD *)(v4 + 8) + 232LL) & 0x2000000000LL) != 0 )
        {
          v30 = *(_QWORD *)(v65 + 32);
          if ( v30 )
            v31 = *(_QWORD *)(v30 + 8 * ((unsigned __int64)v27 >> 24));
          else
            v31 = 0LL;
          if ( v31 )
          {
            UsbDevice_TransferEventHandler(v31, &v63);
          }
          else if ( (v63.m128i_i8[0] & 3) != 1 )
          {
            WPP_RECORDER_SF_qdd(
              *(_QWORD *)(*(_QWORD *)(v4 + 8) + 64LL),
              HIBYTE(v27),
              0,
              0,
              v59,
              (char)v12,
              SHIBYTE(v27),
              BYTE2(v27) & 0x1F);
          }
        }
        else
        {
          TR_TransferEventHandler(&v63, 0LL);
        }
      }
      else if ( v28 == 37 && HIBYTE(v63.m128i_i32[2]) == 21 )
      {
        ++*(_DWORD *)(v4 + 80);
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(v4 + 8) + 64LL),
          3u,
          8u,
          0x29u,
          (__int64)&WPP_b5cbcd348d84cc97a8629183b7c53e9f_Traceguids);
        v32 = *(_QWORD *)(v4 + 8);
        if ( (*(_QWORD *)(v32 + 232) & 0x10000000LL) != 0 )
          Controller_ReportFatalError(v32, 2, 4113, 0LL, 0LL, 0LL);
      }
      else if ( *(_DWORD *)(v4 + 32) )
      {
        v33 = *(_QWORD *)(v4 + 8);
        LODWORD(v60) = (unsigned __int16)v63.m128i_i16[6] >> 10;
        WPP_RECORDER_SF_L(
          *(_QWORD *)(v33 + 64),
          3u,
          8u,
          0x2Au,
          (__int64)&WPP_b5cbcd348d84cc97a8629183b7c53e9f_Traceguids,
          v60);
      }
      else
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v34 = *(_QWORD *)(v4 + 8);
          LODWORD(v61) = HIBYTE(v63.m128i_i32[2]);
          LODWORD(v60) = (unsigned __int16)v63.m128i_i16[6] >> 10;
          WPP_RECORDER_SF_LL(
            *(_QWORD *)(v34 + 64),
            5u,
            8u,
            0x2Bu,
            (__int64)&WPP_b5cbcd348d84cc97a8629183b7c53e9f_Traceguids);
          v27 = v63.m128i_u32[3];
          v24 = v63.m128i_u32[2];
        }
        switch ( (unsigned __int16)v27 >> 10 )
        {
          case '!':
LABEL_71:
            Command_HandleCommandCompletionEvent(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 112LL), (__int64)&v63);
            break;
          case '"':
            RootHub_HandlePortStatusChangeEvent(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 120LL), &v63);
            break;
          case '%':
            v38 = *(_QWORD *)(v7 + 8);
            LODWORD(v61) = HIBYTE(v24);
            LODWORD(v60) = 37;
            WPP_RECORDER_SF_LL(
              *(_QWORD *)(v38 + 64),
              3u,
              8u,
              0x2Cu,
              (__int64)&WPP_b5cbcd348d84cc97a8629183b7c53e9f_Traceguids);
            break;
          case '&':
            v36 = *(_QWORD *)(v65 + 32);
            if ( v36 )
              v37 = *(_QWORD *)(v36 + 8 * ((unsigned __int64)v27 >> 24));
            else
              v37 = 0LL;
            if ( v37 )
              UsbDevice_DeviceNotificationEventHandler(v37, &v63);
            break;
          default:
            if ( (unsigned __int16)v27 >> 10 != 39 )
            {
              if ( (unsigned __int16)v27 >> 10 == 48 )
                goto LABEL_71;
              v35 = *(_QWORD *)(v7 + 8);
              LODWORD(v60) = (unsigned __int16)v27 >> 10;
              WPP_RECORDER_SF_L(
                *(_QWORD *)(v35 + 64),
                3u,
                8u,
                0x2Du,
                (__int64)&WPP_b5cbcd348d84cc97a8629183b7c53e9f_Traceguids,
                v60);
            }
            break;
        }
      }
    }
    v39 = 16LL * *(unsigned int *)(v4 + 132);
    v12 = (__m128i *)(v39 + *(_QWORD *)(v4 + 144));
    if ( v11 && (v11 & 0x7F) == 0 && (v12->m128i_i32[3] & 1) == *(_DWORD *)(v4 + 128) )
    {
      v40 = ((v39 + *(_QWORD *)(*(_QWORD *)(v4 + 152) + 24LL)) ^ ((unsigned __int8)*(_DWORD *)(v4 + 136) ^ (unsigned __int8)(v39 + *(_QWORD *)(*(_QWORD *)(v4 + 152) + 24LL))) & 7) & 0xFFFFFFFFFFFFFFF7uLL;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v41 = *(_QWORD *)(v4 + 8);
        v60 = ((v39 + *(_QWORD *)(*(_QWORD *)(v4 + 152) + 24LL)) ^ ((unsigned __int8)*(_DWORD *)(v4 + 136) ^ (unsigned __int8)(v39 + *(_QWORD *)(*(_QWORD *)(v4 + 152) + 24LL))) & 7) & 0xFFFFFFFFFFFFFFF7uLL;
        WPP_RECORDER_SF_x(
          *(_QWORD *)(v41 + 64),
          5u,
          8u,
          0x17u,
          (__int64)&WPP_b5cbcd348d84cc97a8629183b7c53e9f_Traceguids);
      }
      v42 = *(_QWORD *)(v4 + 24);
      if ( (*(_BYTE *)(*(_QWORD *)(v4 + 8) + 232LL) & 1) != 0 )
      {
        *(_DWORD *)(v42 + 24) = v40;
        _InterlockedOr(v58, 0);
        *(_DWORD *)(v42 + 28) = HIDWORD(v40);
      }
      else
      {
        *(_QWORD *)(v42 + 24) = v40;
      }
      _InterlockedOr(v58, 0);
    }
    ++v11;
    if ( (v12->m128i_i32[3] & 1) != *(_DWORD *)(v4 + 128) )
      goto LABEL_100;
    v7 = v64;
  }
  ++*(_DWORD *)(v4 + 84);
LABEL_85:
  v43 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v44 = *(_QWORD *)(v4 + 8);
    LODWORD(v60) = v11;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v44 + 64),
      5u,
      8u,
      0x22u,
      (__int64)&WPP_b5cbcd348d84cc97a8629183b7c53e9f_Traceguids,
      v60);
    v43 = WPP_GLOBAL_Control;
  }
  v45 = 16LL * *(unsigned int *)(v4 + 132) + *(_QWORD *)(*(_QWORD *)(v4 + 152) + 24LL);
  v46 = (v45 ^ ((unsigned __int8)*(_DWORD *)(v4 + 136) ^ (unsigned __int8)*(_QWORD *)(*(_QWORD *)(v4 + 152) + 24LL)) & 7) & 0xFFFFFFFFFFFFFFF7uLL;
  if ( LOWORD(v43->DeviceType) )
    WPP_RECORDER_SF_x(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 64LL),
      5u,
      8u,
      0x17u,
      (__int64)&WPP_b5cbcd348d84cc97a8629183b7c53e9f_Traceguids,
      (v45 ^ ((unsigned __int8)*(_DWORD *)(v4 + 136) ^ (unsigned __int8)*(_QWORD *)(*(_QWORD *)(v4 + 152) + 24LL)) & 7) & 0xFFFFFFFFFFFFFFF7uLL);
  v47 = *(_QWORD *)(v4 + 24);
  if ( (*(_BYTE *)(*(_QWORD *)(v4 + 8) + 232LL) & 1) != 0 )
  {
    *(_DWORD *)(v47 + 24) = v46;
    _InterlockedOr(v58, 0);
    *(_DWORD *)(v47 + 28) = HIDWORD(v46);
  }
  else
  {
    *(_QWORD *)(v47 + 24) = v46;
  }
  _InterlockedOr(v58, 0);
  ++*(_DWORD *)(v4 + 64);
  v48 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 216));
  v49 = v48;
  if ( (*(_DWORD *)(v4 + 104) & 2) != 0 )
  {
    v52 = v48;
LABEL_106:
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 216), v52);
    return;
  }
  KeClearEvent((PRKEVENT)(v4 + 184));
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 216), v49);
  v50 = *(struct _IO_WORKITEM **)(v4 + 208);
  if ( *(_BYTE *)(*(_QWORD *)(v4 + 8) + 272LL) )
  {
    if ( !v50
      || !((unsigned __int8 (__fastcall *)(struct _IO_WORKITEM *, void (__fastcall *)(PVOID, char *, PIO_WORKITEM), _QWORD, __int64))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(
            v50,
            Interrupter_IoWorkItemRequeueDpc,
            0LL,
            v4) )
    {
      v51 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 216));
      *(_DWORD *)(v4 + 104) &= ~8u;
      KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 216), v51);
      KeSetEvent((PRKEVENT)(v4 + 184), 0, 0);
      ++*(_DWORD *)(v4 + 72);
      (*(void (__fastcall **)(_LIST_ENTRY *, unsigned __int64))(WdfFunctions_01015 + 1136))(
        WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
        v66);
      return;
    }
  }
  else
  {
    IoQueueWorkItemEx(v50, (PIO_WORKITEM_ROUTINE_EX)Interrupter_IoWorkItemRequeueDpc, CriticalWorkQueue, (PVOID)v4);
  }
  ++*(_DWORD *)(v4 + 68);
}
