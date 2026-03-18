/*
 * XREFs of NtUserSystemParametersInfo @ 0x1C0072430
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock_0 @ 0x1C0001D98 (PushW32ThreadLock_0.c)
 *     PopAndFreeAlwaysW32ThreadLock_0 @ 0x1C0001F00 (PopAndFreeAlwaysW32ThreadLock_0.c)
 *     xxxSystemParametersInfo_0 @ 0x1C00029A8 (xxxSystemParametersInfo_0.c)
 *     IsCanForceForegroundSupported_0 @ 0x1C0002B88 (IsCanForceForegroundSupported_0.c)
 *     CanForceForeground_0 @ 0x1C0002B90 (CanForceForeground_0.c)
 *     IsWin32AllocPoolWithQuotaImplSupported_0 @ 0x1C0002C08 (IsWin32AllocPoolWithQuotaImplSupported_0.c)
 *     Win32AllocPoolWithQuotaImpl_0 @ 0x1C0002C10 (Win32AllocPoolWithQuotaImpl_0.c)
 *     UserSetLastError @ 0x1C0020A94 (UserSetLastError.c)
 *     Win32AllocPoolWithQuota @ 0x1C003AA10 (Win32AllocPoolWithQuota.c)
 *     EtwTraceUIPISystemError @ 0x1C007B520 (EtwTraceUIPISystemError.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 */

__int64 __fastcall NtUserSystemParametersInfo(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  unsigned int v4; // r15d
  unsigned int v5; // ebx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rsi
  __int64 v7; // rsi
  __int64 *v8; // rax
  __int64 v9; // rcx
  PVOID CurrentProcess; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r13
  LARGE_INTEGER v14; // rbx
  int v15; // r8d
  __int64 v16; // rax
  unsigned int v17; // r13d
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax
  int v19; // esi
  volatile void **v20; // rax
  volatile void **v21; // r12
  __int64 v22; // rcx
  int v23; // eax
  const void *v24; // rsi
  size_t v25; // rbx
  unsigned __int64 v26; // rcx
  void *v27; // r12
  _OWORD *v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // rax
  volatile void **v31; // rcx
  _OWORD *v32; // rax
  ULONGLONG v33; // rcx
  __int64 v34; // rax
  ULONGLONG v35; // r8
  ULONGLONG v36; // rcx
  ULONG v37; // esi
  __int64 CurrentProcessWow64Process; // rax
  ULONG v39; // r8d
  volatile void *v40; // rsi
  int v41; // eax
  __int64 v42; // rax
  __int64 v43; // rsi
  ULONG v44; // r8d
  volatile void **v45; // rcx
  __int64 v46; // rcx
  struct tagTHREADINFO *v47; // rbx
  struct tagTHREADINFO **ThreadWin32Thread; // rax
  __int64 v49; // rcx
  __int64 v50; // rbx
  DWORD LowPart; // eax
  int v52; // r8d
  _DWORD *Address; // [rsp+38h] [rbp-300h]
  int v55; // [rsp+40h] [rbp-2F8h]
  void *v56; // [rsp+48h] [rbp-2F0h]
  int v57; // [rsp+50h] [rbp-2E8h]
  volatile void *v58; // [rsp+A0h] [rbp-298h]
  _BYTE v59[608]; // [rsp+D8h] [rbp-260h] BYREF
  unsigned int v60; // [rsp+340h] [rbp+8h]

  v60 = a1;
  v3 = a3;
  v4 = a2;
  v5 = 0;
  Address = 0LL;
  v57 = 0;
  v55 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v7 = 0LL;
  while ( 1 )
  {
    v8 = (__int64 *)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v8 )
      v7 = *v8;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v9);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v11) == gpepCSRSS && v7 != gptiTSRequest )
      break;
    if ( gbRITBlockedOnDIT )
    {
      if ( (struct tagTHREADINFO *)v7 == gptiRit )
        break;
      ++gcRITBlockedOnDITWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemRITBlockedOnDITWaiters, UserRequest, 0, 0, 0LL);
    }
    else
    {
      if ( gbDITInHitTest != 1 || (struct tagTHREADINFO *)v7 == gptiRit )
        break;
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
  }
  v13 = PsGetCurrentThreadWin32Thread(v11);
  if ( v13 )
  {
    v14 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v13 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0 )
    {
      v12 = (unsigned __int8)byte_1C0118B28;
      LOBYTE(v12) = byte_1C0118B28 - 1;
      if ( (unsigned __int8)(byte_1C0118B28 - 1) > 2u
        && (qword_1C0118B10 & 0x200000010000000LL) != 0
        && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        Template_xqx(v12, (unsigned int)&AcquiredExclusiveUserCritEvent, v15, v14.LowPart, 0, gullUserCritAcquireToken);
      }
    }
    if ( v14.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v15,
        0,
        1000 * v14.QuadPart / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v13 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    v3 = a3;
    v4 = a2;
    v5 = 0;
    Address = 0LL;
  }
  gptiCurrent = (struct tagTHREADINFO *)v7;
  gbValidateHandleForIL = 1;
  if ( (*(_DWORD *)(v7 + 440) & 0x20000000) == 0
    || (v12 = *(_QWORD *)(*(_QWORD *)(v7 + 376) + 720LL), (*(_DWORD *)(v12 + 24) & 8) == 0) )
  {
    v16 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v12) + 824);
    if ( !gbEnforceUIPI || (unsigned int)v16 > 0x1FFF )
    {
      v17 = v60;
LABEL_40:
      if ( (int)IsWin32AllocPoolWithQuotaImplSupported_0() < 0 )
      {
        v21 = 0LL;
      }
      else
      {
        v20 = (volatile void **)Win32AllocPoolWithQuotaImpl_0();
        v21 = v20;
        if ( v20 )
          memset(v20, 0, 0x228uLL);
      }
      if ( !v21 )
      {
        v19 = 0;
        UserSetLastError(8LL);
        goto LABEL_196;
      }
      PushW32ThreadLock_0();
      if ( v17 <= 0x1026 )
      {
        if ( v17 != 4134 )
        {
          switch ( v17 )
          {
            case 1u:
            case 5u:
            case 0xAu:
            case 0xEu:
            case 0x10u:
            case 0x12u:
            case 0x16u:
            case 0x19u:
            case 0x1Bu:
            case 0x23u:
            case 0x26u:
            case 0x38u:
            case 0x44u:
            case 0x46u:
            case 0x4Au:
            case 0x4Fu:
            case 0x50u:
            case 0x53u:
            case 0x54u:
            case 0x5Eu:
            case 0x5Fu:
            case 0x62u:
            case 0x64u:
            case 0x66u:
            case 0x68u:
            case 0x6Au:
            case 0x6Cu:
            case 0x6Eu:
            case 0x70u:
            case 0x72u:
            case 0x76u:
            case 0x78u:
            case 0x7Au:
            case 0x7Cu:
            case 0x7Eu:
            case 0x80u:
            case 0x82u:
            case 0x84u:
            case 0x86u:
            case 0x88u:
            case 0x8Au:
            case 0x8Cu:
            case 0x8Eu:
            case 0x90u:
            case 0x9Eu:
            case 0xA0u:
            case 0xA8u:
            case 0xAAu:
              goto LABEL_184;
            case 3u:
            case 0x3Cu:
            case 0x74u:
              goto LABEL_123;
            case 4u:
            case 0x3Du:
            case 0x75u:
              v5 = 12;
              goto LABEL_113;
            case 0xDu:
            case 0x18u:
              if ( (v3 & 0xFFFFFFFFFFFF0000uLL) == 0 )
                goto LABEL_190;
              goto LABEL_184;
            case 0x14u:
              if ( !v3 )
              {
                v3 = -1LL;
                goto LABEL_190;
              }
              if ( v3 > 0xFFFFFFFFFFFFFFFDuLL )
                goto LABEL_190;
LABEL_55:
              if ( v3 >= W32UserProbeAddress )
                v3 = W32UserProbeAddress;
              v23 = *(_DWORD *)v3;
              v24 = *(const void **)(v3 + 8);
              if ( ((unsigned __int8)v24 & 1) != 0 )
                ExRaiseDatatypeMisalignment();
              v25 = (unsigned __int16)v23;
              v26 = (unsigned __int64)v24 + (unsigned __int16)v23 + 2;
              if ( v26 >= W32UserProbeAddress
                || (unsigned __int16)v23 > (unsigned __int16)HIWORD(*(_DWORD *)v3)
                || (v23 & 1) != 0
                || v26 <= (unsigned __int64)v24 )
              {
                *(_BYTE *)W32UserProbeAddress = 0;
              }
              v3 = Win32AllocPoolWithQuota();
              if ( !v3 )
                ExRaiseStatus(-1073741801);
              PushW32ThreadLock_0();
              v57 = 1;
              memmove((void *)v3, v24, v25);
              *(_WORD *)(v3 + 2 * (v25 >> 1)) = 0;
              v5 = 0;
              v27 = 0LL;
              break;
            case 0x15u:
              if ( v4 == -1 || !v3 )
                goto LABEL_190;
              goto LABEL_55;
            case 0x1Fu:
              v5 = 92;
              v37 = 4;
              goto LABEL_159;
            case 0x22u:
              v5 = 92;
              goto LABEL_113;
            case 0x29u:
            case 0xA4u:
              if ( ((v4 - 500) & 0xFFFFFFFB) != 0 )
                goto LABEL_178;
              v5 = v4;
              v37 = 4;
              goto LABEL_159;
            case 0x2Au:
              if ( ((v4 - 500) & 0xFFFFFFFB) != 0 )
                goto LABEL_178;
              v5 = v4;
              if ( v4 )
                goto LABEL_113;
              goto LABEL_118;
            case 0x2Bu:
              v5 = 20;
              v37 = 4;
              goto LABEL_159;
            case 0x2Cu:
              v5 = 20;
              goto LABEL_113;
            case 0x2Du:
              v5 = 108;
              v37 = 4;
              goto LABEL_159;
            case 0x2Eu:
              v5 = 108;
              goto LABEL_113;
            case 0x2Fu:
            case 0x9Du:
            case 0xA3u:
              v5 = 16;
              goto LABEL_113;
            case 0x30u:
            case 0xA2u:
              goto LABEL_135;
            case 0x32u:
              v5 = 24;
              v37 = 4;
              goto LABEL_159;
            case 0x33u:
              v5 = 24;
              goto LABEL_113;
            case 0x34u:
            case 0x3Au:
            case 0x48u:
            case 0x59u:
              v5 = 8;
              v37 = 4;
              goto LABEL_159;
            case 0x35u:
            case 0x3Bu:
            case 0x49u:
            case 0x5Au:
              v5 = 8;
              goto LABEL_113;
            case 0x36u:
              goto LABEL_125;
            case 0x37u:
              goto LABEL_69;
            case 0x40u:
              goto LABEL_126;
            case 0x41u:
              goto LABEL_72;
            case 0x42u:
              v5 = 16;
              CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v22);
              v39 = 4;
              if ( CurrentProcessWow64Process )
                v39 = 1;
              ProbeForWrite((volatile void *)v3, 0x10uLL, v39);
              Address = (_DWORD *)v3;
              *(_OWORD *)v21 = *(_OWORD *)v3;
              v3 = (unsigned __int64)v21;
              ProbeForWrite(v21[1], 0x100uLL, 2u);
              goto LABEL_189;
            case 0x43u:
              if ( v3 + 24 < v3 || v3 + 24 > W32UserProbeAddress )
                v3 = W32UserProbeAddress;
              v58 = *(volatile void **)(v3 + 16);
              *(_OWORD *)v21 = *(_OWORD *)v3;
              v21[2] = v58;
              v3 = (unsigned __int64)v21;
              v33 = (ULONGLONG)v21[2];
              if ( (v33 & 1) != 0 )
                ExRaiseDatatypeMisalignment();
              v34 = *((unsigned __int16 *)v21 + 4);
              v35 = v34 + v33 + 2;
              if ( v35 >= W32UserProbeAddress
                || (unsigned __int16)v34 > *((_WORD *)v21 + 5)
                || (v34 & 1) != 0
                || v35 <= v33 )
              {
                *(_BYTE *)W32UserProbeAddress = 0;
              }
              if ( !*((_WORD *)v21 + 4) )
                v21[2] = 0LL;
              goto LABEL_190;
            case 0x73u:
              v40 = (volatile void *)v3;
              Address = (_DWORD *)v3;
              v3 = (unsigned __int64)v21;
              ProbeForWrite(v40, 2LL * v4, 2u);
              v41 = 260;
              if ( v4 < 0x104 )
                v41 = v4;
              v5 = 2 * v41;
              goto LABEL_189;
            case 0x92u:
              if ( v4 != 56 )
                goto LABEL_178;
LABEL_126:
              v5 = 56;
              v37 = 4;
              goto LABEL_159;
            case 0x93u:
              if ( v4 != 56 )
                goto LABEL_178;
LABEL_72:
              v5 = 56;
              goto LABEL_113;
            case 0x94u:
              if ( v4 != 32 )
                goto LABEL_178;
              v5 = 32;
              v37 = 4;
              goto LABEL_159;
            case 0x95u:
              if ( v4 != 32 )
                goto LABEL_178;
              v5 = 32;
              goto LABEL_113;
            case 0x96u:
              if ( v4 != 28 )
                goto LABEL_178;
LABEL_125:
              v5 = 28;
              v37 = 4;
              goto LABEL_159;
            case 0x97u:
              if ( v4 != 28 )
                goto LABEL_178;
LABEL_69:
              v5 = 28;
              goto LABEL_113;
            case 0x98u:
              if ( v4 != 128 )
                goto LABEL_178;
              v5 = 128;
              v37 = 4;
              goto LABEL_159;
            case 0x99u:
              if ( v4 != 128 )
                goto LABEL_178;
              v5 = 128;
              goto LABEL_113;
            case 0x9Au:
              if ( v4 != 548 )
                goto LABEL_178;
              v5 = 548;
              v42 = PsGetCurrentProcessWow64Process(v22);
              v43 = 4LL;
              v44 = 4;
              if ( v42 )
                v44 = 1;
              ProbeForWrite((volatile void *)v3, 0x224uLL, v44);
              Address = (_DWORD *)v3;
              v45 = v21;
              do
              {
                *(_OWORD *)v45 = *(_OWORD *)v3;
                *((_OWORD *)v45 + 1) = *(_OWORD *)(v3 + 16);
                *((_OWORD *)v45 + 2) = *(_OWORD *)(v3 + 32);
                *((_OWORD *)v45 + 3) = *(_OWORD *)(v3 + 48);
                *((_OWORD *)v45 + 4) = *(_OWORD *)(v3 + 64);
                *((_OWORD *)v45 + 5) = *(_OWORD *)(v3 + 80);
                *((_OWORD *)v45 + 6) = *(_OWORD *)(v3 + 96);
                v45 += 16;
                *((_OWORD *)v45 - 1) = *(_OWORD *)(v3 + 112);
                v3 += 128LL;
                --v43;
              }
              while ( v43 );
              *(_OWORD *)v45 = *(_OWORD *)v3;
              *((_OWORD *)v45 + 1) = *(_OWORD *)(v3 + 16);
              *((_DWORD *)v45 + 8) = *(_DWORD *)(v3 + 32);
              v3 = (unsigned __int64)v21;
LABEL_189:
              v55 = 1;
              goto LABEL_190;
            case 0x9Bu:
              if ( v4 != 548 )
                goto LABEL_178;
              v5 = 548;
              if ( v3 + 548 < v3 || v3 + 548 > W32UserProbeAddress )
                v3 = W32UserProbeAddress;
              v28 = v59;
              v29 = 4LL;
              v30 = 4LL;
              do
              {
                *v28 = *(_OWORD *)v3;
                v28[1] = *(_OWORD *)(v3 + 16);
                v28[2] = *(_OWORD *)(v3 + 32);
                v28[3] = *(_OWORD *)(v3 + 48);
                v28[4] = *(_OWORD *)(v3 + 64);
                v28[5] = *(_OWORD *)(v3 + 80);
                v28[6] = *(_OWORD *)(v3 + 96);
                v28 += 8;
                *(v28 - 1) = *(_OWORD *)(v3 + 112);
                v3 += 128LL;
                --v30;
              }
              while ( v30 );
              *v28 = *(_OWORD *)v3;
              v28[1] = *(_OWORD *)(v3 + 16);
              *((_DWORD *)v28 + 8) = *(_DWORD *)(v3 + 32);
              v31 = v21;
              v32 = v59;
              do
              {
                *(_OWORD *)v31 = *v32;
                *((_OWORD *)v31 + 1) = v32[1];
                *((_OWORD *)v31 + 2) = v32[2];
                *((_OWORD *)v31 + 3) = v32[3];
                *((_OWORD *)v31 + 4) = v32[4];
                *((_OWORD *)v31 + 5) = v32[5];
                *((_OWORD *)v31 + 6) = v32[6];
                v31 += 16;
                *((_OWORD *)v31 - 1) = v32[7];
                v32 += 8;
                --v29;
              }
              while ( v29 );
              *(_OWORD *)v31 = *v32;
              *((_OWORD *)v31 + 1) = v32[1];
              *((_DWORD *)v31 + 8) = *((_DWORD *)v32 + 8);
              v3 = (unsigned __int64)v21;
              if ( *((_DWORD *)v21 + 6) <= 0x104u )
                goto LABEL_190;
              UserSetLastError(87LL);
              v19 = 0;
              goto LABEL_193;
            case 0x9Cu:
              if ( v4 != 16 )
                goto LABEL_178;
LABEL_135:
              v5 = 16;
              v37 = 4;
              goto LABEL_159;
            case 0xA5u:
            case 0xA7u:
              if ( v4 != 12 )
                goto LABEL_178;
LABEL_123:
              v5 = 12;
              v37 = 4;
              goto LABEL_159;
            case 0xACu:
              if ( v4 != 4 )
                goto LABEL_178;
              v37 = 4;
              v5 = 4;
LABEL_159:
              Address = (_DWORD *)v3;
              v3 = (unsigned __int64)v21;
              if ( PsGetCurrentProcessWow64Process(v22) )
                v37 = 1;
              ProbeForWrite(Address, v5, v37);
              v55 = 1;
              *(_DWORD *)v21 = *Address;
              goto LABEL_190;
            case 0xADu:
              if ( v4 != 4 )
                goto LABEL_178;
              v5 = 4;
LABEL_113:
              if ( (v3 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              v36 = v3 + v5;
              if ( v36 > W32UserProbeAddress || v36 < v3 )
                *(_BYTE *)W32UserProbeAddress = 0;
LABEL_118:
              memmove(v21, (const void *)v3, v5);
              v3 = (unsigned __int64)v21;
              goto LABEL_190;
            default:
              goto LABEL_164;
          }
          goto LABEL_191;
        }
        goto LABEL_184;
      }
      if ( v17 == 4135 )
        goto LABEL_190;
      if ( v17 == 8221 )
      {
        if ( v3 <= 2 )
          goto LABEL_190;
      }
      else
      {
LABEL_164:
        if ( v17 < 0xAE )
          goto LABEL_190;
        if ( v17 - 4096 > 0x51 && v17 - 0x2000 > 0x21
          || v4 && (*((_DWORD *)gptiCurrent + 138) > 0x400u || v17 != 4159 || v4 != 1) )
        {
          goto LABEL_178;
        }
        if ( (v17 & 1) == 0 )
        {
LABEL_184:
          v56 = (void *)v3;
          if ( v3 >= W32UserProbeAddress )
            v3 = W32UserProbeAddress;
          *(_DWORD *)v3 = *(_DWORD *)v3;
          v55 = 1;
          v3 = (unsigned __int64)v21;
          v5 = 4;
          v27 = v56;
          goto LABEL_191;
        }
        if ( v17 == 8193 )
        {
          if ( (int)IsCanForceForegroundSupported_0() < 0
            || (PsGetCurrentProcessWin32Process(v46), !(unsigned int)CanForceForeground_0()) )
          {
            UserSetLastError(5LL);
            v19 = 0;
            goto LABEL_193;
          }
          goto LABEL_190;
        }
        if ( v17 != 8203 )
        {
          if ( v17 == 8211 && (v3 & 0xFFFFFFFE) != 0 )
            goto LABEL_178;
LABEL_190:
          v27 = Address;
LABEL_191:
          v19 = xxxSystemParametersInfo_0();
          if ( v55 )
            memmove(v27, (const void *)v3, v5);
          goto LABEL_193;
        }
        if ( (v3 & 0xFFFFFFFC) == 0 )
          goto LABEL_190;
      }
LABEL_178:
      UserSetLastError(87LL);
      v19 = 0;
LABEL_193:
      if ( v57 )
        PopAndFreeAlwaysW32ThreadLock_0();
      PopAndFreeAlwaysW32ThreadLock_0();
      goto LABEL_196;
    }
  }
  v17 = v60;
  if ( v60 > 0x1001 )
  {
    if ( v60 > 0x2001 )
    {
      switch ( v60 )
      {
        case 0x2003u:
        case 0x2005u:
        case 0x2009u:
        case 0x200Fu:
        case 0x2011u:
        case 0x2015u:
        case 0x2017u:
        case 0x2019u:
        case 0x201Bu:
        case 0x201Du:
          goto LABEL_38;
        default:
          goto LABEL_40;
      }
    }
    if ( v60 != 8193 )
    {
      switch ( v60 )
      {
        case 0x1003u:
        case 0x1005u:
        case 0x1007u:
        case 0x1009u:
        case 0x100Bu:
        case 0x100Du:
        case 0x100Fu:
        case 0x1013u:
        case 0x1015u:
        case 0x1017u:
        case 0x1019u:
        case 0x101Du:
        case 0x101Fu:
        case 0x1027u:
        case 0x1041u:
        case 0x1043u:
        case 0x1049u:
        case 0x104Bu:
        case 0x104Du:
        case 0x104Fu:
        case 0x1051u:
          break;
        default:
          goto LABEL_40;
      }
    }
  }
  else if ( v60 != 4097 )
  {
    switch ( v60 )
    {
      case 2u:
      case 4u:
      case 6u:
      case 0xBu:
      case 0xDu:
      case 0xFu:
      case 0x11u:
      case 0x13u:
      case 0x14u:
      case 0x15u:
      case 0x17u:
      case 0x18u:
      case 0x1Au:
      case 0x1Cu:
      case 0x1Du:
      case 0x1Eu:
      case 0x20u:
      case 0x21u:
      case 0x22u:
      case 0x24u:
      case 0x25u:
      case 0x2Au:
      case 0x2Cu:
      case 0x2Eu:
      case 0x2Fu:
      case 0x31u:
      case 0x33u:
      case 0x35u:
      case 0x37u:
      case 0x39u:
      case 0x3Bu:
      case 0x3Du:
      case 0x41u:
      case 0x43u:
      case 0x45u:
      case 0x47u:
      case 0x49u:
      case 0x4Bu:
      case 0x4Cu:
      case 0x4Du:
      case 0x4Eu:
      case 0x51u:
      case 0x52u:
      case 0x55u:
      case 0x56u:
      case 0x57u:
      case 0x58u:
      case 0x5Au:
      case 0x5Bu:
      case 0x5Du:
      case 0x60u:
      case 0x61u:
      case 0x63u:
      case 0x65u:
      case 0x67u:
      case 0x69u:
      case 0x6Bu:
      case 0x6Du:
      case 0x6Fu:
      case 0x71u:
      case 0x75u:
      case 0x77u:
      case 0x93u:
      case 0x95u:
      case 0x97u:
      case 0x99u:
      case 0x9Bu:
      case 0xA1u:
      case 0xA3u:
      case 0xA6u:
      case 0xA9u:
      case 0xABu:
      case 0xADu:
        break;
      default:
        goto LABEL_40;
    }
  }
LABEL_38:
  CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(v12);
  EtwTraceUIPISystemError(CurrentProcessWin32Process, 0LL);
  v19 = 0;
  UserSetLastError(5LL);
LABEL_196:
  if ( gcSwitchInProgressWaiters )
  {
    KeReleaseSemaphore(gpsemSwitchInProgressWaiters, 0, gcSwitchInProgressWaiters, 0);
    gcSwitchInProgressWaiters = 0;
  }
  v47 = 0LL;
  ThreadWin32Thread = (struct tagTHREADINFO **)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v47 = *ThreadWin32Thread;
  if ( v47 == gptiRit && !gbRITBlockedOnDIT && gcRITBlockedOnDITWaiters )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
    gcRITBlockedOnDITWaiters = 0;
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
    && (qword_1C0118B10 & 0x200000010000000LL) != 0
    && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18 )
  {
    v50 = PsGetCurrentThreadWin32Thread(v49);
    if ( v50 )
    {
      LowPart = KeQueryPerformanceCounter(0LL).LowPart;
      if ( (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        Template_xqx(
          *(_QWORD *)(v50 + 16),
          (unsigned int)&ReleaseUserCritEvent,
          v52,
          LowPart - *(_DWORD *)(v50 + 8),
          0,
          *(_QWORD *)(v50 + 16));
    }
  }
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v19;
}
