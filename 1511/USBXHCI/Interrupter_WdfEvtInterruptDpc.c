/*
 * XREFs of Interrupter_WdfEvtInterruptDpc @ 0x1C000ABB0
 * Callers:
 *     <none>
 * Callees:
 *     UsbDevice_TransferEventHandler @ 0x1C0003E50 (UsbDevice_TransferEventHandler.c)
 *     TR_TransferEventHandler @ 0x1C0004134 (TR_TransferEventHandler.c)
 *     WPP_RECORDER_SF_ @ 0x1C0004570 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0005540 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_L @ 0x1C0005610 (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006B30 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0006BF0 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00079B0 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C0007E70 (WPP_RECORDER_SF_qLL.c)
 *     WPP_RECORDER_SF_x @ 0x1C0008F9C (WPP_RECORDER_SF_x.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0009050 (WPP_RECORDER_SF_qq.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C000A560 (Command_HandleCommandCompletionEvent.c)
 *     WPP_RECORDER_SF_ddddxdLL @ 0x1C000AA1C (WPP_RECORDER_SF_ddddxdLL.c)
 *     __security_check_cookie @ 0x1C0010810 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     Controller_ReportFatalError @ 0x1C001F02C (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0020134 (WPP_RECORDER_SF_LL.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C00263DC (WPP_RECORDER_SF_qdd.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C0026EF4 (RootHub_HandlePortStatusChangeEvent.c)
 *     UsbDevice_DeviceNotificationEventHandler @ 0x1C002FBDC (UsbDevice_DeviceNotificationEventHandler.c)
 */

void __fastcall Interrupter_WdfEvtInterruptDpc(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // r12
  __int64 v7; // rcx
  __int64 v8; // r13
  KIRQL v9; // al
  int v10; // ecx
  struct _IO_WORKITEM *v11; // rcx
  ULONG v12; // ebx
  int v13; // r14d
  __m128i *v14; // rbp
  __int64 v15; // rcx
  unsigned __int64 v16; // r10
  unsigned int v17; // r8d
  unsigned int v18; // eax
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // r9
  int v23; // edx
  int v24; // r8d
  BOOL v25; // edx
  __int64 v26; // rcx
  unsigned __int32 v27; // r10d
  unsigned __int32 v28; // edx
  int v29; // r8d
  __int64 v30; // rcx
  KIRQL v31; // al
  KIRQL v32; // bp
  __int64 v33; // rdx
  __int64 v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rdx
  unsigned __int64 v41; // rbx
  __int64 v42; // rcx
  __int64 v43; // r8
  unsigned __int64 v44; // rax
  KIRQL v45; // al
  KIRQL v46; // bl
  KIRQL v47; // dl
  PDEVICE_OBJECT v48; // rdx
  __int64 v49; // rcx
  unsigned __int64 v50; // rbx
  KIRQL v51; // al
  __int64 v52; // rax
  ULONG v53; // eax
  __int16 v54; // r8
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  signed __int32 v61[8]; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v62; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v63; // [rsp+28h] [rbp-C0h]
  __int64 v64; // [rsp+30h] [rbp-B8h]
  unsigned int v65; // [rsp+38h] [rbp-B0h]
  unsigned int v66; // [rsp+40h] [rbp-A8h]
  __int64 v67; // [rsp+48h] [rbp-A0h]
  int v68; // [rsp+50h] [rbp-98h]
  unsigned int v69; // [rsp+58h] [rbp-90h]
  int v70; // [rsp+60h] [rbp-88h]
  ULONG v71; // [rsp+70h] [rbp-78h]
  __m128i v72; // [rsp+78h] [rbp-70h] BYREF
  ULONG v73; // [rsp+88h] [rbp-60h]
  _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+90h] [rbp-58h] BYREF

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0041250);
  v5 = *(_QWORD *)(v4 + 8);
  v6 = *(_QWORD *)(v5 + 104);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v7 = *(_QWORD *)(v5 + 64);
    v64 = a2;
    v63 = a1;
    WPP_RECORDER_SF_qq(v7, 5u, 8u, 0x20u, (__int64)&WPP_b5cbcd348d84cc97a8629183b7c53e9f_Traceguids);
  }
  ++*(_DWORD *)(v4 + 52);
  if ( *(_DWORD *)(v4 + 32) )
    v8 = 0LL;
  else
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           a1,
           off_1C00411D8);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 216));
  v10 = *(_DWORD *)(v4 + 104);
  if ( (v10 & 8) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 216), v9);
    ++*(_DWORD *)(v4 + 76);
    return;
  }
  *(_DWORD *)(v4 + 104) = v10 | 8;
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 216), v9);
  v12 = 0;
  v13 = 0;
  v14 = (__m128i *)(*(_QWORD *)(v4 + 144) + 16LL * *(unsigned int *)(v4 + 132));
  v71 = 0;
  v73 = 0;
  if ( (v14->m128i_i32[3] & 1) != *(_DWORD *)(v4 + 128) )
  {
LABEL_31:
    v31 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 216));
    *(_DWORD *)(v4 + 104) &= ~8u;
    v32 = v31;
    v33 = *(_QWORD *)(*(_QWORD *)(v4 + 152) + 24LL) + 16LL * *(unsigned int *)(v4 + 132);
    v34 = v33 ^ ((unsigned __int8)*(_DWORD *)(v4 + 136) ^ (unsigned __int8)*(_QWORD *)(*(_QWORD *)(v4 + 152) + 24LL)) & 7 | 8;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_x(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 64LL),
        5u,
        8u,
        0x17u,
        (__int64)&WPP_b5cbcd348d84cc97a8629183b7c53e9f_Traceguids,
        v33 ^ ((unsigned __int8)*(_DWORD *)(v4 + 136) ^ (unsigned __int8)*(_QWORD *)(*(_QWORD *)(v4 + 152) + 24LL)) & 7 | 8);
    v60 = *(_QWORD *)(v4 + 24);
    if ( (*(_BYTE *)(*(_QWORD *)(v4 + 8) + 232LL) & 1) != 0 )
    {
      *(_DWORD *)(v60 + 24) = v34;
      _InterlockedOr(v61, 0);
      *(_DWORD *)(v60 + 28) = HIDWORD(v34);
    }
    else
    {
      *(_QWORD *)(v60 + 24) = v34;
    }
    _InterlockedOr(v61, 0);
    v47 = v32;
LABEL_65:
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 216), v47);
    return;
  }
  while ( 1 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v15 = *(_QWORD *)(v4 + 8);
      LODWORD(v64) = *(_DWORD *)(v4 + 132);
      v63 = (unsigned __int64)v14;
      WPP_RECORDER_SF_qd(
        *(_QWORD *)(v15 + 64),
        5u,
        8u,
        0x21u,
        (__int64)&WPP_b5cbcd348d84cc97a8629183b7c53e9f_Traceguids);
    }
    if ( (v13 & 0x3F) != 0 || KeQueryDpcWatchdogInformation(&WatchdogInformation) < 0 )
      goto LABEL_16;
    if ( !v12 )
    {
      v12 = 95 * WatchdogInformation.DpcTimeLimit / 0x64;
      v71 = v12;
    }
    v53 = v73;
    if ( !v73 )
    {
      v53 = 25 * WatchdogInformation.DpcWatchdogLimit / 0x64;
      v73 = v53;
    }
    if ( WatchdogInformation.DpcTimeCount < v12 )
      break;
    if ( WatchdogInformation.DpcWatchdogCount < v53 )
    {
      ++*(_DWORD *)(v4 + 88);
      goto LABEL_66;
    }
LABEL_16:
    v72 = *v14;
    v16 = HIDWORD(_mm_srli_si128(v72, 8).m128i_u64[0]);
    v17 = _mm_cvtsi128_si32(_mm_srli_si128(v72, 8));
    v18 = HIBYTE(v17);
    v70 = (unsigned __int16)v16 >> 10;
    v19 = v17 & 0xFFFFFF;
    v69 = v18;
    v20 = *(_DWORD *)(v4 + 132);
    v68 = v19;
    v67 = v72.m128i_i64[0];
    v66 = ((unsigned int)v16 >> 2) & 1;
    v65 = WORD1(v16) & 0x1F;
    v21 = *(_QWORD *)(v4 + 16);
    LODWORD(v64) = BYTE3(v16);
    LODWORD(v63) = v20;
    WPP_RECORDER_SF_ddddxdLL(v21, v66, v19, (unsigned __int16)v16 >> 10, v62);
    ++*(_DWORD *)(v4 + 132);
    ++*(_DWORD *)(v4 + 56);
    v23 = *(_DWORD *)(v4 + 132);
    if ( v23 == *(_DWORD *)(v4 + 124) )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v35 = *(_QWORD *)(v4 + 8);
        v65 = *(_DWORD *)(v4 + 128);
        LODWORD(v64) = *(_DWORD *)(v4 + 136);
        v36 = *(_QWORD *)(v35 + 64);
        LODWORD(v63) = v23;
        WPP_RECORDER_SF_ddd(v36, 5u, 8u, 0x24u, (__int64)&WPP_b5cbcd348d84cc97a8629183b7c53e9f_Traceguids);
      }
      v24 = ++*(_DWORD *)(v4 + 136);
      *(_DWORD *)(v4 + 132) = 0;
      if ( v24 == *(_DWORD *)(v4 + 116) )
      {
        v25 = *(_DWORD *)(v4 + 128) != 1;
        *(_DWORD *)(v4 + 128) = v25;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v26 = *(_QWORD *)(v4 + 8);
          LODWORD(v64) = v25;
          LODWORD(v63) = v24;
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(v26 + 64),
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
    v27 = v72.m128i_u32[2];
    if ( HIBYTE(v72.m128i_i32[2]) == 199 && (v37 = *(_QWORD *)(v4 + 8), (*(_QWORD *)(v37 + 232) & 0x2000LL) != 0) )
    {
      v38 = *(_QWORD *)(v37 + 64);
      v65 = (unsigned __int16)v72.m128i_i16[6] >> 10;
      LODWORD(v64) = 199;
      v63 = (unsigned __int64)v14;
      WPP_RECORDER_SF_qLL(v38, 3u, 8u, 0x26u, (__int64)&WPP_b5cbcd348d84cc97a8629183b7c53e9f_Traceguids);
    }
    else
    {
      v28 = v72.m128i_u32[3];
      v29 = (unsigned __int16)v72.m128i_i16[6] >> 10;
      if ( v29 == 32 )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v28) = 5;
          WPP_RECORDER_SF_LL(
            *(_QWORD *)(*(_QWORD *)(v4 + 8) + 64LL),
            v28,
            8,
            39,
            (__int64)&WPP_b5cbcd348d84cc97a8629183b7c53e9f_Traceguids,
            32,
            v72.m128i_i8[11]);
          v28 = v72.m128i_u32[3];
          v27 = v72.m128i_u32[2];
        }
        if ( (v28 & 4) != 0
          && (*(_QWORD *)(*(_QWORD *)(v4 + 8) + 232LL) & 0x20000000000000LL) != 0
          && HIBYTE(v27) - 14 <= 1u )
        {
          v28 &= ~4u;
          v72.m128i_i32[3] = v28;
        }
        if ( (v28 & 4) == 0
          || (v72.m128i_i8[0] & 3) == 1
          || (*(_QWORD *)(*(_QWORD *)(v4 + 8) + 232LL) & 0x2000000000LL) != 0 )
        {
          v43 = *(_QWORD *)(v6 + 32);
          if ( v43 && (v44 = (unsigned __int64)v28 >> 24, (v22 = *(_QWORD *)(v43 + 8 * v44)) != 0) )
          {
            UsbDevice_TransferEventHandler(*(_QWORD *)(v43 + 8 * v44), (__int64)&v72, v43, v22);
          }
          else if ( (v72.m128i_i8[0] & 3) != 1 )
          {
            WPP_RECORDER_SF_qdd(
              *(_QWORD *)(*(_QWORD *)(v4 + 8) + 64LL),
              HIBYTE(v28),
              v43,
              v22,
              v62,
              (char)v14,
              SHIBYTE(v28),
              BYTE2(v28) & 0x1F);
          }
        }
        else
        {
          TR_TransferEventHandler(&v72, 0LL);
        }
      }
      else if ( v29 == 37 && HIBYTE(v72.m128i_i32[2]) == 21 )
      {
        ++*(_DWORD *)(v4 + 80);
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(v4 + 8) + 64LL),
          3u,
          8u,
          0x29u,
          (__int64)&WPP_b5cbcd348d84cc97a8629183b7c53e9f_Traceguids);
        v42 = *(_QWORD *)(v4 + 8);
        if ( (*(_QWORD *)(v42 + 232) & 0x10000000LL) != 0 )
          Controller_ReportFatalError(v42, 2, 4113, 0, 0LL, 0LL);
      }
      else if ( *(_DWORD *)(v4 + 32) )
      {
        v30 = *(_QWORD *)(v4 + 8);
        LODWORD(v63) = (unsigned __int16)v72.m128i_i16[6] >> 10;
        WPP_RECORDER_SF_L(
          *(_QWORD *)(v30 + 64),
          3u,
          8u,
          0x2Au,
          (__int64)&WPP_b5cbcd348d84cc97a8629183b7c53e9f_Traceguids,
          v63);
      }
      else
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v28) = 5;
          WPP_RECORDER_SF_LL(
            *(_QWORD *)(*(_QWORD *)(v4 + 8) + 64LL),
            v28,
            8,
            43,
            (__int64)&WPP_b5cbcd348d84cc97a8629183b7c53e9f_Traceguids,
            v29,
            v72.m128i_i8[11]);
          v28 = v72.m128i_u32[3];
          HIBYTE(v27) = v72.m128i_i8[11];
        }
        v54 = (unsigned __int16)v28 >> 10;
        switch ( (unsigned __int16)v28 >> 10 )
        {
          case '!':
          case '0':
            Command_HandleCommandCompletionEvent(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 112LL), (__int64)&v72);
            break;
          case '"':
            RootHub_HandlePortStatusChangeEvent(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 120LL), &v72);
            break;
          case '%':
            LOBYTE(v28) = 3;
            WPP_RECORDER_SF_LL(
              *(_QWORD *)(*(_QWORD *)(v8 + 8) + 64LL),
              v28,
              8,
              44,
              (__int64)&WPP_b5cbcd348d84cc97a8629183b7c53e9f_Traceguids,
              v54,
              SHIBYTE(v27));
            break;
          case '&':
            v55 = *(_QWORD *)(v6 + 32);
            if ( v55 )
            {
              v39 = *(_QWORD *)(v55 + 8 * ((unsigned __int64)v28 >> 24));
              if ( v39 )
                UsbDevice_DeviceNotificationEventHandler(v39, &v72);
            }
            break;
          case '\'':
            break;
          default:
            v56 = *(_QWORD *)(v8 + 8);
            LODWORD(v63) = (unsigned __int16)v28 >> 10;
            WPP_RECORDER_SF_L(
              *(_QWORD *)(v56 + 64),
              3u,
              8u,
              0x2Du,
              (__int64)&WPP_b5cbcd348d84cc97a8629183b7c53e9f_Traceguids,
              v63);
            break;
        }
      }
    }
    v40 = 16LL * *(unsigned int *)(v4 + 132);
    v14 = (__m128i *)(v40 + *(_QWORD *)(v4 + 144));
    if ( v13 && (v13 & 0x7F) == 0 && (v14->m128i_i32[3] & 1) == *(_DWORD *)(v4 + 128) )
    {
      v41 = ((v40 + *(_QWORD *)(*(_QWORD *)(v4 + 152) + 24LL)) ^ ((unsigned __int8)*(_DWORD *)(v4 + 136) ^ (unsigned __int8)(v40 + *(_QWORD *)(*(_QWORD *)(v4 + 152) + 24LL))) & 7) & 0xFFFFFFFFFFFFFFF7uLL;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v57 = *(_QWORD *)(v4 + 8);
        v63 = ((v40 + *(_QWORD *)(*(_QWORD *)(v4 + 152) + 24LL)) ^ ((unsigned __int8)*(_DWORD *)(v4 + 136) ^ (unsigned __int8)(v40 + *(_QWORD *)(*(_QWORD *)(v4 + 152) + 24LL))) & 7) & 0xFFFFFFFFFFFFFFF7uLL;
        WPP_RECORDER_SF_x(
          *(_QWORD *)(v57 + 64),
          5u,
          8u,
          0x17u,
          (__int64)&WPP_b5cbcd348d84cc97a8629183b7c53e9f_Traceguids);
      }
      v58 = *(_QWORD *)(v4 + 24);
      if ( (*(_BYTE *)(*(_QWORD *)(v4 + 8) + 232LL) & 1) != 0 )
      {
        *(_DWORD *)(v58 + 24) = v41;
        _InterlockedOr(v61, 0);
        *(_DWORD *)(v58 + 28) = HIDWORD(v41);
      }
      else
      {
        *(_QWORD *)(v58 + 24) = v41;
      }
      v12 = v71;
      _InterlockedOr(v61, 0);
    }
    ++v13;
    if ( (v14->m128i_i32[3] & 1) != *(_DWORD *)(v4 + 128) )
      goto LABEL_31;
  }
  ++*(_DWORD *)(v4 + 84);
LABEL_66:
  v48 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v49 = *(_QWORD *)(v4 + 8);
    LODWORD(v63) = v13;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v49 + 64),
      5u,
      8u,
      0x22u,
      (__int64)&WPP_b5cbcd348d84cc97a8629183b7c53e9f_Traceguids,
      v63);
    v48 = WPP_GLOBAL_Control;
  }
  v50 = ((*(_QWORD *)(*(_QWORD *)(v4 + 152) + 24LL) + 16LL * *(unsigned int *)(v4 + 132)) ^ ((unsigned __int8)*(_DWORD *)(v4 + 136) ^ (unsigned __int8)*(_QWORD *)(*(_QWORD *)(v4 + 152) + 24LL)) & 7) & 0xFFFFFFFFFFFFFFF7uLL;
  if ( LOWORD(v48->DeviceType) )
    WPP_RECORDER_SF_x(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 64LL),
      5u,
      8u,
      0x17u,
      (__int64)&WPP_b5cbcd348d84cc97a8629183b7c53e9f_Traceguids,
      v50);
  v59 = *(_QWORD *)(v4 + 24);
  if ( (*(_BYTE *)(*(_QWORD *)(v4 + 8) + 232LL) & 1) != 0 )
  {
    *(_DWORD *)(v59 + 24) = v50;
    _InterlockedOr(v61, 0);
    *(_DWORD *)(v59 + 28) = HIDWORD(v50);
  }
  else
  {
    *(_QWORD *)(v59 + 24) = v50;
  }
  _InterlockedOr(v61, 0);
  ++*(_DWORD *)(v4 + 64);
  v45 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 216));
  v46 = v45;
  if ( (*(_DWORD *)(v4 + 104) & 2) != 0 )
  {
    v47 = v45;
    goto LABEL_65;
  }
  KeClearEvent((PRKEVENT)(v4 + 184));
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 216), v46);
  v11 = *(struct _IO_WORKITEM **)(v4 + 208);
  if ( !*(_BYTE *)(*(_QWORD *)(v4 + 8) + 272LL) )
  {
    IoQueueWorkItemEx(v11, Interrupter_IoWorkItemRequeueDpc, CriticalWorkQueue, (PVOID)v4);
    goto LABEL_9;
  }
  if ( v11
    && ((unsigned __int8 (__fastcall *)(struct _IO_WORKITEM *, IO_WORKITEM_ROUTINE_EX *, _QWORD, __int64))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(
         v11,
         Interrupter_IoWorkItemRequeueDpc,
         0LL,
         v4) )
  {
LABEL_9:
    ++*(_DWORD *)(v4 + 68);
  }
  else
  {
    v51 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 216));
    *(_DWORD *)(v4 + 104) &= ~8u;
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 216), v51);
    KeSetEvent((PRKEVENT)(v4 + 184), 0, 0);
    v52 = WdfFunctions_01015;
    ++*(_DWORD *)(v4 + 72);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64))(v52 + 1136))(WdfDriverGlobals, a1);
  }
}
