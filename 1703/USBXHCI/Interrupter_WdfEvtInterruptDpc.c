/*
 * XREFs of Interrupter_WdfEvtInterruptDpc @ 0x1C000B190
 * Callers:
 *     <none>
 * Callees:
 *     UsbDevice_TransferEventHandler @ 0x1C0001734 (UsbDevice_TransferEventHandler.c)
 *     TR_TransferEventHandler @ 0x1C0001A20 (TR_TransferEventHandler.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002180 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0004D90 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_L @ 0x1C0004FA0 (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C0005110 (WPP_RECORDER_SF_qLL.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00056E0 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006370 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0007F60 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0008BD8 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_x @ 0x1C0008CA4 (WPP_RECORDER_SF_x.c)
 *     WPP_RECORDER_SF_ddddxdLL @ 0x1C000AFF4 (WPP_RECORDER_SF_ddddxdLL.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C000FF60 (Command_HandleCommandCompletionEvent.c)
 *     __security_check_cookie @ 0x1C00105E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     Controller_ReportFatalError @ 0x1C001B890 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_LL @ 0x1C001CA3C (WPP_RECORDER_SF_LL.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C0022EC4 (WPP_RECORDER_SF_qdd.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C0023A98 (RootHub_HandlePortStatusChangeEvent.c)
 *     UsbDevice_DeviceNotificationEventHandler @ 0x1C002CD20 (UsbDevice_DeviceNotificationEventHandler.c)
 */

void __fastcall Interrupter_WdfEvtInterruptDpc(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r13
  KIRQL v8; // al
  int v9; // ecx
  struct _IO_WORKITEM *v10; // rcx
  int v11; // r15d
  __m128i *v12; // r14
  KIRQL v13; // al
  KIRQL v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rcx
  unsigned __int64 v18; // r10
  unsigned int v19; // r8d
  unsigned int v20; // eax
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // r9
  int v25; // edx
  int v26; // r8d
  BOOL v27; // edx
  __int64 v28; // rcx
  unsigned __int32 v29; // r10d
  unsigned __int32 v30; // edx
  int v31; // r8d
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rdx
  unsigned __int64 v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // r8
  unsigned __int64 v42; // rax
  KIRQL v43; // al
  KIRQL v44; // bl
  KIRQL v45; // dl
  PDEVICE_OBJECT v46; // rdx
  __int64 v47; // rcx
  unsigned __int64 v48; // rbx
  KIRQL v49; // al
  __int64 v50; // rax
  __int64 v51; // rbx
  ULONG v52; // r8d
  ULONG v53; // eax
  __int16 v54; // r8
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rax
  char v59; // cl
  __int64 v60; // rax
  char v61; // cl
  __int64 v62; // rax
  char v63; // cl
  signed __int32 v64[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v65; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v66; // [rsp+28h] [rbp-D8h]
  __int64 v67; // [rsp+30h] [rbp-D0h]
  unsigned int v68; // [rsp+38h] [rbp-C8h]
  unsigned int v69; // [rsp+40h] [rbp-C0h]
  __int64 v70; // [rsp+48h] [rbp-B8h]
  int v71; // [rsp+50h] [rbp-B0h]
  unsigned int v72; // [rsp+58h] [rbp-A8h]
  int v73; // [rsp+60h] [rbp-A0h]
  __m128i v74; // [rsp+70h] [rbp-90h] BYREF
  ULONG v75; // [rsp+80h] [rbp-80h]
  ULONG v76; // [rsp+84h] [rbp-7Ch]
  __int64 v77; // [rsp+88h] [rbp-78h]
  __int128 v78; // [rsp+90h] [rbp-70h]
  __int128 v79; // [rsp+A0h] [rbp-60h]
  __int128 v80; // [rsp+B0h] [rbp-50h]
  __int128 v81; // [rsp+C0h] [rbp-40h]
  __int128 v82; // [rsp+D0h] [rbp-30h]
  __int128 v83; // [rsp+E0h] [rbp-20h]
  __int128 v84; // [rsp+F0h] [rbp-10h]
  _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+100h] [rbp+0h] BYREF

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00452A0);
  v5 = *(_QWORD *)(v4 + 8);
  v77 = *(_QWORD *)(v5 + 104);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v6 = *(_QWORD *)(v5 + 64);
    v67 = a2;
    v66 = a1;
    WPP_RECORDER_SF_qq(v6, 5u, 8u, 0x20u, (__int64)&WPP_d9801d1a90713b0d37c531873c83c241_Traceguids);
  }
  ++*(_DWORD *)(v4 + 44);
  if ( *(_DWORD *)(v4 + 32) )
    v7 = 0LL;
  else
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           a1,
           off_1C0045160);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 208));
  v9 = *(_DWORD *)(v4 + 96);
  if ( (v9 & 8) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 208), v8);
    ++*(_DWORD *)(v4 + 68);
    return;
  }
  *(_DWORD *)(v4 + 96) = v9 | 8;
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 208), v8);
  v11 = 0;
  v12 = (__m128i *)(*(_QWORD *)(v4 + 136) + 16LL * *(unsigned int *)(v4 + 124));
  v75 = 0;
  v76 = 0;
  if ( (v12->m128i_i32[3] & 1) != *(_DWORD *)(v4 + 120) )
  {
LABEL_14:
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 208));
    *(_DWORD *)(v4 + 96) &= ~8u;
    v14 = v13;
    v15 = *(_QWORD *)(*(_QWORD *)(v4 + 144) + 24LL) + 16LL * *(unsigned int *)(v4 + 124);
    v16 = v15 ^ ((unsigned __int8)*(_DWORD *)(v4 + 128) ^ (unsigned __int8)*(_QWORD *)(*(_QWORD *)(v4 + 144) + 24LL)) & 7 | 8;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_x(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 64LL),
        5u,
        8u,
        0x17u,
        (__int64)&WPP_d9801d1a90713b0d37c531873c83c241_Traceguids,
        v15 ^ ((unsigned __int8)*(_DWORD *)(v4 + 128) ^ (unsigned __int8)*(_QWORD *)(*(_QWORD *)(v4 + 144) + 24LL)) & 7 | 8);
    v62 = *(_QWORD *)(v4 + 24);
    v63 = *(_OWORD *)(*(_QWORD *)(v4 + 8) + 232LL) & 1;
    v84 = *(_OWORD *)(*(_QWORD *)(v4 + 8) + 232LL);
    if ( v63 )
    {
      *(_DWORD *)(v62 + 24) = v16;
      _InterlockedOr(v64, 0);
      *(_DWORD *)(v62 + 28) = HIDWORD(v16);
    }
    else
    {
      *(_QWORD *)(v62 + 24) = v16;
    }
    _InterlockedOr(v64, 0);
    v45 = v14;
LABEL_66:
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 208), v45);
    return;
  }
  v51 = v77;
  while ( 1 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v17 = *(_QWORD *)(v4 + 8);
      LODWORD(v67) = *(_DWORD *)(v4 + 124);
      v66 = (unsigned __int64)v12;
      WPP_RECORDER_SF_qd(
        *(_QWORD *)(v17 + 64),
        5u,
        8u,
        0x21u,
        (__int64)&WPP_d9801d1a90713b0d37c531873c83c241_Traceguids);
    }
    if ( (v11 & 0x3F) != 0 || KeQueryDpcWatchdogInformation(&WatchdogInformation) < 0 )
      goto LABEL_20;
    v52 = v75;
    if ( !v75 )
    {
      v52 = 95 * WatchdogInformation.DpcTimeLimit / 0x64;
      v75 = v52;
    }
    v53 = v76;
    if ( !v76 )
    {
      v53 = 25 * WatchdogInformation.DpcWatchdogLimit / 0x64;
      v76 = v53;
    }
    if ( WatchdogInformation.DpcTimeCount < v52 )
      break;
    if ( WatchdogInformation.DpcWatchdogCount < v53 )
    {
      ++*(_DWORD *)(v4 + 80);
      goto LABEL_67;
    }
LABEL_20:
    v74 = *v12;
    v18 = HIDWORD(_mm_srli_si128(v74, 8).m128i_u64[0]);
    v19 = _mm_cvtsi128_si32(_mm_srli_si128(v74, 8));
    v20 = HIBYTE(v19);
    v73 = (unsigned __int16)v18 >> 10;
    v21 = v19 & 0xFFFFFF;
    v72 = v20;
    v22 = *(_DWORD *)(v4 + 124);
    v71 = v21;
    v70 = v74.m128i_i64[0];
    v69 = ((unsigned int)v18 >> 2) & 1;
    v68 = WORD1(v18) & 0x1F;
    v23 = *(_QWORD *)(v4 + 16);
    LODWORD(v67) = BYTE3(v18);
    LODWORD(v66) = v22;
    WPP_RECORDER_SF_ddddxdLL(v23, v69, v21, (unsigned __int16)v18 >> 10, v65);
    ++*(_DWORD *)(v4 + 124);
    ++*(_DWORD *)(v4 + 48);
    v25 = *(_DWORD *)(v4 + 124);
    if ( v25 == *(_DWORD *)(v4 + 116) )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v33 = *(_QWORD *)(v4 + 8);
        v68 = *(_DWORD *)(v4 + 120);
        LODWORD(v67) = *(_DWORD *)(v4 + 128);
        v34 = *(_QWORD *)(v33 + 64);
        LODWORD(v66) = v25;
        WPP_RECORDER_SF_ddd(v34, 5u, 8u, 0x24u, (__int64)&WPP_d9801d1a90713b0d37c531873c83c241_Traceguids);
      }
      v26 = ++*(_DWORD *)(v4 + 128);
      *(_DWORD *)(v4 + 124) = 0;
      if ( v26 == *(_DWORD *)(v4 + 108) )
      {
        v27 = *(_DWORD *)(v4 + 120) != 1;
        *(_DWORD *)(v4 + 120) = v27;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v28 = *(_QWORD *)(v4 + 8);
          LODWORD(v67) = v27;
          LODWORD(v66) = v26;
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(v28 + 64),
            5u,
            8u,
            0x25u,
            (__int64)&WPP_d9801d1a90713b0d37c531873c83c241_Traceguids);
        }
        *(_QWORD *)(v4 + 144) = *(_QWORD *)(v4 + 160);
        *(_DWORD *)(v4 + 128) = 0;
      }
      else
      {
        *(_QWORD *)(v4 + 144) = **(_QWORD **)(v4 + 144);
      }
      *(_QWORD *)(v4 + 136) = *(_QWORD *)(*(_QWORD *)(v4 + 144) + 16LL);
    }
    v29 = v74.m128i_u32[2];
    if ( HIBYTE(v74.m128i_i32[2]) == 199
      && (v35 = *(_QWORD *)(v4 + 8), v78 = *(_OWORD *)(v35 + 232), (v78 & 0x2000) != 0) )
    {
      v36 = *(_QWORD *)(v35 + 64);
      v68 = (unsigned __int16)v74.m128i_i16[6] >> 10;
      LODWORD(v67) = 199;
      v66 = (unsigned __int64)v12;
      WPP_RECORDER_SF_qLL(v36, 3u, 8u, 0x26u, (__int64)&WPP_d9801d1a90713b0d37c531873c83c241_Traceguids);
    }
    else
    {
      v30 = v74.m128i_u32[3];
      v31 = (unsigned __int16)v74.m128i_i16[6] >> 10;
      if ( v31 == 32 )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v30) = 5;
          WPP_RECORDER_SF_LL(
            *(_QWORD *)(*(_QWORD *)(v4 + 8) + 64LL),
            v30,
            8,
            39,
            (__int64)&WPP_d9801d1a90713b0d37c531873c83c241_Traceguids,
            32,
            v74.m128i_i8[11]);
          v30 = v74.m128i_u32[3];
          v29 = v74.m128i_u32[2];
        }
        if ( (v30 & 4) != 0 )
        {
          v79 = *(_OWORD *)(*(_QWORD *)(v4 + 8) + 232LL);
          if ( (v79 & 0x20000000000000LL) != 0 && HIBYTE(v29) - 14 <= 1u )
          {
            v30 &= ~4u;
            v74.m128i_i32[3] = v30;
          }
        }
        if ( (v30 & 4) == 0
          || (v74.m128i_i8[0] & 3) == 1
          || (v80 = *(_OWORD *)(*(_QWORD *)(v4 + 8) + 232LL), (v80 & 0x2000000000LL) != 0) )
        {
          v41 = *(_QWORD *)(v51 + 32);
          if ( v41 && (v42 = (unsigned __int64)v30 >> 24, (v24 = *(_QWORD *)(v41 + 8 * v42)) != 0) )
          {
            UsbDevice_TransferEventHandler(*(_QWORD *)(v41 + 8 * v42), (__int64)&v74, v41, v24);
          }
          else if ( (v74.m128i_i8[0] & 3) != 1 )
          {
            WPP_RECORDER_SF_qdd(
              *(_QWORD *)(*(_QWORD *)(v4 + 8) + 64LL),
              HIBYTE(v30),
              v41,
              v24,
              v65,
              (char)v12,
              SHIBYTE(v30),
              BYTE2(v30) & 0x1F);
          }
        }
        else
        {
          TR_TransferEventHandler(&v74, 0LL);
        }
      }
      else if ( v31 == 37 && HIBYTE(v74.m128i_i32[2]) == 21 )
      {
        ++*(_DWORD *)(v4 + 72);
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(v4 + 8) + 64LL),
          3u,
          8u,
          0x29u,
          (__int64)&WPP_d9801d1a90713b0d37c531873c83c241_Traceguids);
        v40 = *(_QWORD *)(v4 + 8);
        v81 = *(_OWORD *)(v40 + 232);
        if ( (v81 & 0x10000000) != 0 )
          Controller_ReportFatalError(v40, 2, 4113, 0, 0LL, 0LL);
      }
      else if ( *(_DWORD *)(v4 + 32) )
      {
        v32 = *(_QWORD *)(v4 + 8);
        LODWORD(v66) = (unsigned __int16)v74.m128i_i16[6] >> 10;
        WPP_RECORDER_SF_L(
          *(_QWORD *)(v32 + 64),
          3u,
          8u,
          0x2Au,
          (__int64)&WPP_d9801d1a90713b0d37c531873c83c241_Traceguids,
          v66);
      }
      else
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v30) = 5;
          WPP_RECORDER_SF_LL(
            *(_QWORD *)(*(_QWORD *)(v4 + 8) + 64LL),
            v30,
            8,
            43,
            (__int64)&WPP_d9801d1a90713b0d37c531873c83c241_Traceguids,
            v31,
            v74.m128i_i8[11]);
          v30 = v74.m128i_u32[3];
          HIBYTE(v29) = v74.m128i_i8[11];
        }
        v54 = (unsigned __int16)v30 >> 10;
        switch ( (unsigned __int16)v30 >> 10 )
        {
          case '!':
          case '0':
            Command_HandleCommandCompletionEvent(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 112LL), &v74);
            break;
          case '"':
            RootHub_HandlePortStatusChangeEvent(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 120LL), &v74);
            break;
          case '%':
            LOBYTE(v30) = 3;
            WPP_RECORDER_SF_LL(
              *(_QWORD *)(*(_QWORD *)(v7 + 8) + 64LL),
              v30,
              8,
              44,
              (__int64)&WPP_d9801d1a90713b0d37c531873c83c241_Traceguids,
              v54,
              SHIBYTE(v29));
            break;
          case '&':
            v55 = *(_QWORD *)(v51 + 32);
            if ( v55 )
            {
              v37 = *(_QWORD *)(v55 + 8 * ((unsigned __int64)v30 >> 24));
              if ( v37 )
                UsbDevice_DeviceNotificationEventHandler(v37, &v74);
            }
            break;
          case '\'':
            break;
          default:
            v56 = *(_QWORD *)(v7 + 8);
            LODWORD(v66) = (unsigned __int16)v30 >> 10;
            WPP_RECORDER_SF_L(
              *(_QWORD *)(v56 + 64),
              3u,
              8u,
              0x2Du,
              (__int64)&WPP_d9801d1a90713b0d37c531873c83c241_Traceguids,
              v66);
            break;
        }
      }
    }
    v38 = 16LL * *(unsigned int *)(v4 + 124);
    v12 = (__m128i *)(v38 + *(_QWORD *)(v4 + 136));
    if ( v11 && (v11 & 0x7F) == 0 && (v12->m128i_i32[3] & 1) == *(_DWORD *)(v4 + 120) )
    {
      v39 = ((v38 + *(_QWORD *)(*(_QWORD *)(v4 + 144) + 24LL)) ^ ((unsigned __int8)*(_DWORD *)(v4 + 128) ^ (unsigned __int8)(v38 + *(_QWORD *)(*(_QWORD *)(v4 + 144) + 24LL))) & 7) & 0xFFFFFFFFFFFFFFF7uLL;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v57 = *(_QWORD *)(v4 + 8);
        v66 = ((v38 + *(_QWORD *)(*(_QWORD *)(v4 + 144) + 24LL)) ^ ((unsigned __int8)*(_DWORD *)(v4 + 128) ^ (unsigned __int8)(v38 + *(_QWORD *)(*(_QWORD *)(v4 + 144) + 24LL))) & 7) & 0xFFFFFFFFFFFFFFF7uLL;
        WPP_RECORDER_SF_x(
          *(_QWORD *)(v57 + 64),
          5u,
          8u,
          0x17u,
          (__int64)&WPP_d9801d1a90713b0d37c531873c83c241_Traceguids);
      }
      v58 = *(_QWORD *)(v4 + 24);
      v59 = *(_OWORD *)(*(_QWORD *)(v4 + 8) + 232LL) & 1;
      v82 = *(_OWORD *)(*(_QWORD *)(v4 + 8) + 232LL);
      if ( v59 )
      {
        *(_DWORD *)(v58 + 24) = v39;
        _InterlockedOr(v64, 0);
        *(_DWORD *)(v58 + 28) = HIDWORD(v39);
      }
      else
      {
        *(_QWORD *)(v58 + 24) = v39;
      }
      v51 = v77;
      _InterlockedOr(v64, 0);
    }
    ++v11;
    if ( (v12->m128i_i32[3] & 1) != *(_DWORD *)(v4 + 120) )
      goto LABEL_14;
  }
  ++*(_DWORD *)(v4 + 76);
LABEL_67:
  v46 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v47 = *(_QWORD *)(v4 + 8);
    LODWORD(v66) = v11;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v47 + 64),
      5u,
      8u,
      0x22u,
      (__int64)&WPP_d9801d1a90713b0d37c531873c83c241_Traceguids,
      v66);
    v46 = WPP_GLOBAL_Control;
  }
  v48 = ((*(_QWORD *)(*(_QWORD *)(v4 + 144) + 24LL) + 16LL * *(unsigned int *)(v4 + 124)) ^ ((unsigned __int8)*(_DWORD *)(v4 + 128) ^ (unsigned __int8)*(_QWORD *)(*(_QWORD *)(v4 + 144) + 24LL)) & 7) & 0xFFFFFFFFFFFFFFF7uLL;
  if ( LOWORD(v46->DeviceType) )
    WPP_RECORDER_SF_x(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 64LL),
      5u,
      8u,
      0x17u,
      (__int64)&WPP_d9801d1a90713b0d37c531873c83c241_Traceguids,
      v48);
  v60 = *(_QWORD *)(v4 + 24);
  v61 = *(_OWORD *)(*(_QWORD *)(v4 + 8) + 232LL) & 1;
  v83 = *(_OWORD *)(*(_QWORD *)(v4 + 8) + 232LL);
  if ( v61 )
  {
    *(_DWORD *)(v60 + 24) = v48;
    _InterlockedOr(v64, 0);
    *(_DWORD *)(v60 + 28) = HIDWORD(v48);
  }
  else
  {
    *(_QWORD *)(v60 + 24) = v48;
  }
  _InterlockedOr(v64, 0);
  ++*(_DWORD *)(v4 + 56);
  v43 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 208));
  v44 = v43;
  if ( (*(_DWORD *)(v4 + 96) & 2) != 0 )
  {
    v45 = v43;
    goto LABEL_66;
  }
  KeClearEvent((PRKEVENT)(v4 + 176));
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 208), v44);
  v10 = *(struct _IO_WORKITEM **)(v4 + 200);
  if ( !*(_BYTE *)(*(_QWORD *)(v4 + 8) + 280LL) )
  {
    IoQueueWorkItemEx(v10, Interrupter_IoWorkItemRequeueDpc, CriticalWorkQueue, (PVOID)v4);
    goto LABEL_9;
  }
  if ( v10
    && ((unsigned __int8 (__fastcall *)(struct _IO_WORKITEM *, IO_WORKITEM_ROUTINE_EX *, _QWORD, __int64))WPP_MAIN_CB.Queue.Wcb.DeviceObject)(
         v10,
         Interrupter_IoWorkItemRequeueDpc,
         0LL,
         v4) )
  {
LABEL_9:
    ++*(_DWORD *)(v4 + 60);
  }
  else
  {
    v49 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 208));
    *(_DWORD *)(v4 + 96) &= ~8u;
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 208), v49);
    KeSetEvent((PRKEVENT)(v4 + 176), 0, 0);
    v50 = WdfFunctions_01015;
    ++*(_DWORD *)(v4 + 64);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64))(v50 + 1136))(WdfDriverGlobals, a1);
  }
}
