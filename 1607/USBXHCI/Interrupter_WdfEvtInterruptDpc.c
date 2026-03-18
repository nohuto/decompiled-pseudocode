/*
 * XREFs of Interrupter_WdfEvtInterruptDpc @ 0x1C000A2D0
 * Callers:
 *     <none>
 * Callees:
 *     UsbDevice_TransferEventHandler @ 0x1C00016C4 (UsbDevice_TransferEventHandler.c)
 *     TR_TransferEventHandler @ 0x1C0001974 (TR_TransferEventHandler.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002070 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0004A10 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_L @ 0x1C0004C0C (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C0004CC0 (WPP_RECORDER_SF_qLL.c)
 *     WPP_RECORDER_SF_d @ 0x1C0005BA0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0006BE0 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0007070 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00083DC (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_x @ 0x1C00084A4 (WPP_RECORDER_SF_x.c)
 *     WPP_RECORDER_SF_ddddxdLL @ 0x1C000A130 (WPP_RECORDER_SF_ddddxdLL.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C000F3C0 (Command_HandleCommandCompletionEvent.c)
 *     __security_check_cookie @ 0x1C000FA40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     Controller_ReportFatalError @ 0x1C001F48C (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0020594 (WPP_RECORDER_SF_LL.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C00269E4 (WPP_RECORDER_SF_qdd.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C0027520 (RootHub_HandlePortStatusChangeEvent.c)
 *     UsbDevice_DeviceNotificationEventHandler @ 0x1C003014C (UsbDevice_DeviceNotificationEventHandler.c)
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
  __int64 v59; // rax
  __int64 v60; // rax
  signed __int32 v61[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v62; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v63; // [rsp+28h] [rbp-D8h]
  __int64 v64; // [rsp+30h] [rbp-D0h]
  unsigned int v65; // [rsp+38h] [rbp-C8h]
  unsigned int v66; // [rsp+40h] [rbp-C0h]
  __int64 v67; // [rsp+48h] [rbp-B8h]
  int v68; // [rsp+50h] [rbp-B0h]
  unsigned int v69; // [rsp+58h] [rbp-A8h]
  int v70; // [rsp+60h] [rbp-A0h]
  __m128i v71; // [rsp+70h] [rbp-90h] BYREF
  ULONG v72; // [rsp+80h] [rbp-80h]
  ULONG v73; // [rsp+84h] [rbp-7Ch]
  __int64 v74; // [rsp+88h] [rbp-78h]
  __int128 v75; // [rsp+90h] [rbp-70h]
  __int128 v76; // [rsp+A0h] [rbp-60h]
  __int128 v77; // [rsp+B0h] [rbp-50h]
  __int128 v78; // [rsp+C0h] [rbp-40h]
  __int128 v79; // [rsp+D0h] [rbp-30h]
  __int128 v80; // [rsp+E0h] [rbp-20h]
  __int128 v81; // [rsp+F0h] [rbp-10h]
  _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+100h] [rbp+0h] BYREF

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00432A0);
  v5 = *(_QWORD *)(v4 + 8);
  v74 = *(_QWORD *)(v5 + 104);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v6 = *(_QWORD *)(v5 + 64);
    v64 = a2;
    v63 = a1;
    WPP_RECORDER_SF_qq(v6, 5u, 8u, 0x20u, (__int64)&WPP_743231bee2de335fe7554effc40d8bb7_Traceguids);
  }
  ++*(_DWORD *)(v4 + 52);
  if ( *(_DWORD *)(v4 + 32) )
    v7 = 0LL;
  else
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           a1,
           off_1C0043160);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 216));
  v9 = *(_DWORD *)(v4 + 104);
  if ( (v9 & 8) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 216), v8);
    ++*(_DWORD *)(v4 + 76);
    return;
  }
  *(_DWORD *)(v4 + 104) = v9 | 8;
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 216), v8);
  v11 = 0;
  v12 = (__m128i *)(*(_QWORD *)(v4 + 144) + 16LL * *(unsigned int *)(v4 + 132));
  v72 = 0;
  v73 = 0;
  if ( (v12->m128i_i32[3] & 1) != *(_DWORD *)(v4 + 128) )
  {
LABEL_14:
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 216));
    *(_DWORD *)(v4 + 104) &= ~8u;
    v14 = v13;
    v15 = *(_QWORD *)(*(_QWORD *)(v4 + 152) + 24LL) + 16LL * *(unsigned int *)(v4 + 132);
    v16 = v15 ^ ((unsigned __int8)*(_DWORD *)(v4 + 136) ^ (unsigned __int8)*(_QWORD *)(*(_QWORD *)(v4 + 152) + 24LL)) & 7 | 8;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_x(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 64LL),
        5u,
        8u,
        0x17u,
        (__int64)&WPP_743231bee2de335fe7554effc40d8bb7_Traceguids,
        v15 ^ ((unsigned __int8)*(_DWORD *)(v4 + 136) ^ (unsigned __int8)*(_QWORD *)(*(_QWORD *)(v4 + 152) + 24LL)) & 7 | 8);
    v81 = *(_OWORD *)(*(_QWORD *)(v4 + 8) + 232LL);
    v60 = *(_QWORD *)(v4 + 24);
    if ( (v81 & 1) != 0 )
    {
      *(_DWORD *)(v60 + 24) = v16;
      _InterlockedOr(v61, 0);
      *(_DWORD *)(v60 + 28) = HIDWORD(v16);
    }
    else
    {
      *(_QWORD *)(v60 + 24) = v16;
    }
    _InterlockedOr(v61, 0);
    v45 = v14;
LABEL_66:
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 216), v45);
    return;
  }
  v51 = v74;
  while ( 1 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v17 = *(_QWORD *)(v4 + 8);
      LODWORD(v64) = *(_DWORD *)(v4 + 132);
      v63 = (unsigned __int64)v12;
      WPP_RECORDER_SF_qd(
        *(_QWORD *)(v17 + 64),
        5u,
        8u,
        0x21u,
        (__int64)&WPP_743231bee2de335fe7554effc40d8bb7_Traceguids);
    }
    if ( (v11 & 0x3F) != 0 || KeQueryDpcWatchdogInformation(&WatchdogInformation) < 0 )
      goto LABEL_20;
    v52 = v72;
    if ( !v72 )
    {
      v52 = 95 * WatchdogInformation.DpcTimeLimit / 0x64;
      v72 = v52;
    }
    v53 = v73;
    if ( !v73 )
    {
      v53 = 25 * WatchdogInformation.DpcWatchdogLimit / 0x64;
      v73 = v53;
    }
    if ( WatchdogInformation.DpcTimeCount < v52 )
      break;
    if ( WatchdogInformation.DpcWatchdogCount < v53 )
    {
      ++*(_DWORD *)(v4 + 88);
      goto LABEL_67;
    }
LABEL_20:
    v71 = *v12;
    v18 = HIDWORD(_mm_srli_si128(v71, 8).m128i_u64[0]);
    v19 = _mm_cvtsi128_si32(_mm_srli_si128(v71, 8));
    v20 = HIBYTE(v19);
    v70 = (unsigned __int16)v18 >> 10;
    v21 = v19 & 0xFFFFFF;
    v69 = v20;
    v22 = *(_DWORD *)(v4 + 132);
    v68 = v21;
    v67 = v71.m128i_i64[0];
    v66 = ((unsigned int)v18 >> 2) & 1;
    v65 = WORD1(v18) & 0x1F;
    v23 = *(_QWORD *)(v4 + 16);
    LODWORD(v64) = BYTE3(v18);
    LODWORD(v63) = v22;
    WPP_RECORDER_SF_ddddxdLL(v23, v66, v21, (unsigned __int16)v18 >> 10, v62);
    ++*(_DWORD *)(v4 + 132);
    ++*(_DWORD *)(v4 + 56);
    v25 = *(_DWORD *)(v4 + 132);
    if ( v25 == *(_DWORD *)(v4 + 124) )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v33 = *(_QWORD *)(v4 + 8);
        v65 = *(_DWORD *)(v4 + 128);
        LODWORD(v64) = *(_DWORD *)(v4 + 136);
        v34 = *(_QWORD *)(v33 + 64);
        LODWORD(v63) = v25;
        WPP_RECORDER_SF_ddd(v34, 5u, 8u, 0x24u, (__int64)&WPP_743231bee2de335fe7554effc40d8bb7_Traceguids);
      }
      v26 = ++*(_DWORD *)(v4 + 136);
      *(_DWORD *)(v4 + 132) = 0;
      if ( v26 == *(_DWORD *)(v4 + 116) )
      {
        v27 = *(_DWORD *)(v4 + 128) != 1;
        *(_DWORD *)(v4 + 128) = v27;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v28 = *(_QWORD *)(v4 + 8);
          LODWORD(v64) = v27;
          LODWORD(v63) = v26;
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(v28 + 64),
            5u,
            8u,
            0x25u,
            (__int64)&WPP_743231bee2de335fe7554effc40d8bb7_Traceguids);
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
    v29 = v71.m128i_u32[2];
    if ( HIBYTE(v71.m128i_i32[2]) == 199
      && (v35 = *(_QWORD *)(v4 + 8), v75 = *(_OWORD *)(v35 + 232), (v75 & 0x2000) != 0) )
    {
      v36 = *(_QWORD *)(v35 + 64);
      v65 = (unsigned __int16)v71.m128i_i16[6] >> 10;
      LODWORD(v64) = 199;
      v63 = (unsigned __int64)v12;
      WPP_RECORDER_SF_qLL(v36, 3u, 8u, 0x26u, (__int64)&WPP_743231bee2de335fe7554effc40d8bb7_Traceguids);
    }
    else
    {
      v30 = v71.m128i_u32[3];
      v31 = (unsigned __int16)v71.m128i_i16[6] >> 10;
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
            (__int64)&WPP_743231bee2de335fe7554effc40d8bb7_Traceguids,
            32,
            v71.m128i_i8[11]);
          v30 = v71.m128i_u32[3];
          v29 = v71.m128i_u32[2];
        }
        if ( (v30 & 4) != 0 )
        {
          v76 = *(_OWORD *)(*(_QWORD *)(v4 + 8) + 232LL);
          if ( (v76 & 0x20000000000000LL) != 0 && HIBYTE(v29) - 14 <= 1u )
          {
            v30 &= ~4u;
            v71.m128i_i32[3] = v30;
          }
        }
        if ( (v30 & 4) == 0
          || (v71.m128i_i8[0] & 3) == 1
          || (v77 = *(_OWORD *)(*(_QWORD *)(v4 + 8) + 232LL), (v77 & 0x2000000000LL) != 0) )
        {
          v41 = *(_QWORD *)(v51 + 32);
          if ( v41 && (v42 = (unsigned __int64)v30 >> 24, (v24 = *(_QWORD *)(v41 + 8 * v42)) != 0) )
          {
            UsbDevice_TransferEventHandler(*(_QWORD *)(v41 + 8 * v42), (__int64)&v71, v41, v24);
          }
          else if ( (v71.m128i_i8[0] & 3) != 1 )
          {
            WPP_RECORDER_SF_qdd(
              *(_QWORD *)(*(_QWORD *)(v4 + 8) + 64LL),
              HIBYTE(v30),
              v41,
              v24,
              v62,
              (char)v12,
              SHIBYTE(v30),
              BYTE2(v30) & 0x1F);
          }
        }
        else
        {
          TR_TransferEventHandler(&v71, 0LL);
        }
      }
      else if ( v31 == 37 && HIBYTE(v71.m128i_i32[2]) == 21 )
      {
        ++*(_DWORD *)(v4 + 80);
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(v4 + 8) + 64LL),
          3u,
          8u,
          0x29u,
          (__int64)&WPP_743231bee2de335fe7554effc40d8bb7_Traceguids);
        v40 = *(_QWORD *)(v4 + 8);
        v78 = *(_OWORD *)(v40 + 232);
        if ( (v78 & 0x10000000) != 0 )
          Controller_ReportFatalError(v40, 2, 4113, 0, 0LL, 0LL);
      }
      else if ( *(_DWORD *)(v4 + 32) )
      {
        v32 = *(_QWORD *)(v4 + 8);
        LODWORD(v63) = (unsigned __int16)v71.m128i_i16[6] >> 10;
        WPP_RECORDER_SF_L(
          *(_QWORD *)(v32 + 64),
          3u,
          8u,
          0x2Au,
          (__int64)&WPP_743231bee2de335fe7554effc40d8bb7_Traceguids,
          v63);
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
            (__int64)&WPP_743231bee2de335fe7554effc40d8bb7_Traceguids,
            v31,
            v71.m128i_i8[11]);
          v30 = v71.m128i_u32[3];
          HIBYTE(v29) = v71.m128i_i8[11];
        }
        v54 = (unsigned __int16)v30 >> 10;
        switch ( (unsigned __int16)v30 >> 10 )
        {
          case '!':
          case '0':
            Command_HandleCommandCompletionEvent(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 112LL), &v71);
            break;
          case '"':
            RootHub_HandlePortStatusChangeEvent(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 120LL), &v71);
            break;
          case '%':
            LOBYTE(v30) = 3;
            WPP_RECORDER_SF_LL(
              *(_QWORD *)(*(_QWORD *)(v7 + 8) + 64LL),
              v30,
              8,
              44,
              (__int64)&WPP_743231bee2de335fe7554effc40d8bb7_Traceguids,
              v54,
              SHIBYTE(v29));
            break;
          case '&':
            v55 = *(_QWORD *)(v51 + 32);
            if ( v55 )
            {
              v37 = *(_QWORD *)(v55 + 8 * ((unsigned __int64)v30 >> 24));
              if ( v37 )
                UsbDevice_DeviceNotificationEventHandler(v37, &v71);
            }
            break;
          case '\'':
            break;
          default:
            v56 = *(_QWORD *)(v7 + 8);
            LODWORD(v63) = (unsigned __int16)v30 >> 10;
            WPP_RECORDER_SF_L(
              *(_QWORD *)(v56 + 64),
              3u,
              8u,
              0x2Du,
              (__int64)&WPP_743231bee2de335fe7554effc40d8bb7_Traceguids,
              v63);
            break;
        }
      }
    }
    v38 = 16LL * *(unsigned int *)(v4 + 132);
    v12 = (__m128i *)(v38 + *(_QWORD *)(v4 + 144));
    if ( v11 && (v11 & 0x7F) == 0 && (v12->m128i_i32[3] & 1) == *(_DWORD *)(v4 + 128) )
    {
      v39 = ((v38 + *(_QWORD *)(*(_QWORD *)(v4 + 152) + 24LL)) ^ ((unsigned __int8)*(_DWORD *)(v4 + 136) ^ (unsigned __int8)(v38 + *(_QWORD *)(*(_QWORD *)(v4 + 152) + 24LL))) & 7) & 0xFFFFFFFFFFFFFFF7uLL;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v57 = *(_QWORD *)(v4 + 8);
        v63 = ((v38 + *(_QWORD *)(*(_QWORD *)(v4 + 152) + 24LL)) ^ ((unsigned __int8)*(_DWORD *)(v4 + 136) ^ (unsigned __int8)(v38 + *(_QWORD *)(*(_QWORD *)(v4 + 152) + 24LL))) & 7) & 0xFFFFFFFFFFFFFFF7uLL;
        WPP_RECORDER_SF_x(
          *(_QWORD *)(v57 + 64),
          5u,
          8u,
          0x17u,
          (__int64)&WPP_743231bee2de335fe7554effc40d8bb7_Traceguids);
      }
      v79 = *(_OWORD *)(*(_QWORD *)(v4 + 8) + 232LL);
      v58 = *(_QWORD *)(v4 + 24);
      if ( (v79 & 1) != 0 )
      {
        *(_DWORD *)(v58 + 24) = v39;
        _InterlockedOr(v61, 0);
        *(_DWORD *)(v58 + 28) = HIDWORD(v39);
      }
      else
      {
        *(_QWORD *)(v58 + 24) = v39;
      }
      v51 = v74;
      _InterlockedOr(v61, 0);
    }
    ++v11;
    if ( (v12->m128i_i32[3] & 1) != *(_DWORD *)(v4 + 128) )
      goto LABEL_14;
  }
  ++*(_DWORD *)(v4 + 84);
LABEL_67:
  v46 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v47 = *(_QWORD *)(v4 + 8);
    LODWORD(v63) = v11;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v47 + 64),
      5u,
      8u,
      0x22u,
      (__int64)&WPP_743231bee2de335fe7554effc40d8bb7_Traceguids,
      v63);
    v46 = WPP_GLOBAL_Control;
  }
  v48 = ((*(_QWORD *)(*(_QWORD *)(v4 + 152) + 24LL) + 16LL * *(unsigned int *)(v4 + 132)) ^ ((unsigned __int8)*(_DWORD *)(v4 + 136) ^ (unsigned __int8)*(_QWORD *)(*(_QWORD *)(v4 + 152) + 24LL)) & 7) & 0xFFFFFFFFFFFFFFF7uLL;
  if ( LOWORD(v46->DeviceType) )
    WPP_RECORDER_SF_x(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 64LL),
      5u,
      8u,
      0x17u,
      (__int64)&WPP_743231bee2de335fe7554effc40d8bb7_Traceguids,
      v48);
  v80 = *(_OWORD *)(*(_QWORD *)(v4 + 8) + 232LL);
  v59 = *(_QWORD *)(v4 + 24);
  if ( (v80 & 1) != 0 )
  {
    *(_DWORD *)(v59 + 24) = v48;
    _InterlockedOr(v61, 0);
    *(_DWORD *)(v59 + 28) = HIDWORD(v48);
  }
  else
  {
    *(_QWORD *)(v59 + 24) = v48;
  }
  _InterlockedOr(v61, 0);
  ++*(_DWORD *)(v4 + 64);
  v43 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 216));
  v44 = v43;
  if ( (*(_DWORD *)(v4 + 104) & 2) != 0 )
  {
    v45 = v43;
    goto LABEL_66;
  }
  KeClearEvent((PRKEVENT)(v4 + 184));
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 216), v44);
  v10 = *(struct _IO_WORKITEM **)(v4 + 208);
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
    ++*(_DWORD *)(v4 + 68);
  }
  else
  {
    v49 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 216));
    *(_DWORD *)(v4 + 104) &= ~8u;
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 216), v49);
    KeSetEvent((PRKEVENT)(v4 + 184), 0, 0);
    v50 = WdfFunctions_01015;
    ++*(_DWORD *)(v4 + 72);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64))(v50 + 1136))(WdfDriverGlobals, a1);
  }
}
