/*
 * XREFs of NtUserSystemParametersInfo @ 0x1C0008450
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock_0 @ 0x1C0001C70 (PushW32ThreadLock_0.c)
 *     PopAndFreeAlwaysW32ThreadLock_0 @ 0x1C0001D68 (PopAndFreeAlwaysW32ThreadLock_0.c)
 *     xxxSystemParametersInfo_0 @ 0x1C0002978 (xxxSystemParametersInfo_0.c)
 *     IsCanForceForegroundSupported_0 @ 0x1C0002B58 (IsCanForceForegroundSupported_0.c)
 *     CanForceForeground_0 @ 0x1C0002B60 (CanForceForeground_0.c)
 *     IsWin32AllocPoolWithQuotaImplSupported_0 @ 0x1C0002BD8 (IsWin32AllocPoolWithQuotaImplSupported_0.c)
 *     Win32AllocPoolWithQuotaImpl_0 @ 0x1C0002BE0 (Win32AllocPoolWithQuotaImpl_0.c)
 *     EtwTraceUIPISystemError @ 0x1C0014BA0 (EtwTraceUIPISystemError.c)
 *     Win32AllocPoolWithQuota @ 0x1C0032870 (Win32AllocPoolWithQuota.c)
 *     UserSetLastError @ 0x1C003333C (UserSetLastError.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

__int64 __fastcall NtUserSystemParametersInfo(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  unsigned int v4; // r14d
  unsigned int v5; // ebx
  LARGE_INTEGER *CurrentThreadWin32Thread; // r15
  __int64 v7; // r15
  __int64 *v8; // rax
  PVOID CurrentProcess; // rax
  __int64 v10; // rcx
  __int64 v11; // r13
  LARGE_INTEGER v12; // rbx
  int v13; // r8d
  int v14; // ecx
  __int64 v15; // rax
  unsigned int v16; // r13d
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax
  _DWORD *v18; // rax
  _DWORD *v19; // r12
  int v20; // eax
  const void *v21; // r14
  size_t v22; // rbx
  unsigned __int64 v23; // rcx
  volatile void *v24; // r15
  unsigned __int64 v25; // rcx
  _OWORD *v26; // rcx
  __int64 v27; // r15
  __int64 v28; // rax
  _OWORD *v29; // rcx
  _OWORD *v30; // rax
  unsigned __int64 v31; // rcx
  __int64 v32; // rax
  unsigned __int64 v33; // r8
  __int64 CurrentProcessWow64Process; // rax
  ULONG v35; // r8d
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // r15
  ULONG v39; // r8d
  _OWORD *v40; // rcx
  __int64 v41; // rax
  ULONG v42; // r8d
  struct tagTHREADINFO *v43; // rbx
  struct tagTHREADINFO **ThreadWin32Thread; // rax
  __int64 v45; // rcx
  __int64 v46; // rbx
  DWORD LowPart; // eax
  int v48; // r8d
  unsigned int v50; // [rsp+34h] [rbp-304h]
  volatile void *Address; // [rsp+38h] [rbp-300h]
  _DWORD *Addressa; // [rsp+38h] [rbp-300h]
  int v53; // [rsp+40h] [rbp-2F8h]
  void *v54; // [rsp+48h] [rbp-2F0h]
  int v55; // [rsp+54h] [rbp-2E4h]
  __int64 v56; // [rsp+A0h] [rbp-298h]
  _BYTE v57[608]; // [rsp+D8h] [rbp-260h] BYREF
  unsigned int v58; // [rsp+340h] [rbp+8h]

  v58 = a1;
  v3 = a3;
  v4 = a2;
  v5 = 0;
  Address = 0LL;
  v55 = 0;
  v53 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v7 = 0LL;
  while ( 1 )
  {
    v8 = (__int64 *)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
    if ( v8 )
      v7 = *v8;
    CurrentProcess = (PVOID)PsGetCurrentProcess();
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v7 != gptiTSRequest )
      break;
    if ( gbRITBlockedOnDIT )
    {
      if ( (struct tagTHREADINFO *)v7 == gptiRit )
        break;
      ++gcRITBlockedOnDITWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      KeWaitForSingleObject(gpsemRITBlockedOnDITWaiters, UserRequest, 0, 0, 0LL);
    }
    else
    {
      if ( gbDITInHitTest != 1 || (struct tagTHREADINFO *)v7 == gptiRit )
        break;
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
  }
  v11 = PsGetCurrentThreadWin32Thread(v10);
  if ( v11 )
  {
    v12 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v11 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0 )
    {
      v14 = (unsigned __int8)byte_1C00FEA58;
      if ( (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
        && (qword_1C00FEA40 & 0x200000010000000LL) != 0
        && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v14) = byte_1C00FEA58 - 1;
        Template_xqx(v14, (unsigned int)&AcquiredExclusiveUserCritEvent, v13, v12.LowPart, 0, gullUserCritAcquireToken);
      }
    }
    if ( v12.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v13,
        0,
        1000 * v12.QuadPart / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v11 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    v3 = a3;
    v4 = a2;
    v5 = 0;
    Address = 0LL;
  }
  gptiCurrent = (struct tagTHREADINFO *)v7;
  gbValidateHandleForIL = 1;
  if ( (*(_DWORD *)(v7 + 448) & 0x20000000) == 0
    || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 384) + 728LL) + 24LL) & 8) == 0 )
  {
    v15 = *(_QWORD *)(PsGetCurrentProcessWin32Process() + 832);
    if ( !gbEnforceUIPI || (unsigned int)v15 > 0x1FFF )
    {
      v16 = v58;
LABEL_40:
      if ( (int)IsWin32AllocPoolWithQuotaImplSupported_0() < 0 )
      {
        v19 = 0LL;
      }
      else
      {
        v18 = (_DWORD *)Win32AllocPoolWithQuotaImpl_0();
        v19 = v18;
        if ( v18 )
          memset(v18, 0, 0x228uLL);
      }
      if ( !v19 )
      {
        v50 = 0;
        UserSetLastError(8LL);
        goto LABEL_188;
      }
      PushW32ThreadLock_0();
      if ( v16 <= 0x1026 )
      {
        if ( v16 != 4134 )
        {
          switch ( v16 )
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
              goto LABEL_178;
            case 3u:
            case 0x3Cu:
            case 0x74u:
              goto LABEL_153;
            case 4u:
            case 0x3Du:
            case 0x75u:
              v5 = 12;
              goto LABEL_88;
            case 0xDu:
            case 0x18u:
              if ( (v3 & 0xFFFFFFFFFFFF0000uLL) == 0 )
                goto LABEL_182;
              goto LABEL_178;
            case 0x14u:
              if ( !v3 )
              {
                v3 = -1LL;
                goto LABEL_182;
              }
              if ( v3 > 0xFFFFFFFFFFFFFFFDuLL )
                goto LABEL_182;
LABEL_55:
              if ( v3 >= (unsigned __int64)W32UserProbeAddress )
                v3 = (unsigned __int64)W32UserProbeAddress;
              v20 = *(_DWORD *)v3;
              v21 = *(const void **)(v3 + 8);
              if ( ((unsigned __int8)v21 & 1) != 0 )
                ExRaiseDatatypeMisalignment();
              v22 = (unsigned __int16)v20;
              v23 = (unsigned __int64)v21 + (unsigned __int16)v20 + 2;
              if ( v23 >= (unsigned __int64)W32UserProbeAddress
                || (unsigned __int16)v20 > (unsigned __int16)HIWORD(*(_DWORD *)v3)
                || (v20 & 1) != 0
                || v23 <= (unsigned __int64)v21 )
              {
                *(_BYTE *)W32UserProbeAddress = 0;
              }
              v3 = Win32AllocPoolWithQuota((unsigned __int16)v20 + 2LL, 2037674837LL);
              if ( !v3 )
                ExRaiseStatus(-1073741801);
              PushW32ThreadLock_0();
              v55 = 1;
              memmove((void *)v3, v21, v22);
              *(_WORD *)(v3 + 2 * (v22 >> 1)) = 0;
              v5 = 0;
              v24 = 0LL;
              break;
            case 0x15u:
              if ( v4 == -1 || !v3 )
                goto LABEL_182;
              goto LABEL_55;
            case 0x1Fu:
              v5 = 92;
              goto LABEL_154;
            case 0x22u:
              v5 = 92;
              goto LABEL_88;
            case 0x29u:
            case 0xA4u:
              if ( ((v4 - 500) & 0xFFFFFFFB) != 0 )
                goto LABEL_172;
              v5 = v4;
              goto LABEL_154;
            case 0x2Au:
              if ( ((v4 - 500) & 0xFFFFFFFB) != 0 )
                goto LABEL_172;
              v5 = v4;
              if ( v4 )
                goto LABEL_88;
              goto LABEL_93;
            case 0x2Bu:
              v5 = 20;
              goto LABEL_154;
            case 0x2Cu:
              v5 = 20;
              goto LABEL_88;
            case 0x2Du:
              v5 = 108;
              goto LABEL_154;
            case 0x2Eu:
              v5 = 108;
              goto LABEL_88;
            case 0x2Fu:
            case 0x9Du:
            case 0xA3u:
              v5 = 16;
              goto LABEL_88;
            case 0x30u:
            case 0xA2u:
              goto LABEL_131;
            case 0x32u:
              v5 = 24;
              goto LABEL_154;
            case 0x33u:
              v5 = 24;
              goto LABEL_88;
            case 0x34u:
            case 0x3Au:
            case 0x48u:
            case 0x59u:
              v5 = 8;
              goto LABEL_154;
            case 0x35u:
            case 0x3Bu:
            case 0x49u:
            case 0x5Au:
              v5 = 8;
              goto LABEL_88;
            case 0x36u:
              goto LABEL_122;
            case 0x37u:
              goto LABEL_69;
            case 0x40u:
              goto LABEL_123;
            case 0x41u:
              goto LABEL_72;
            case 0x42u:
              v5 = 16;
              CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
              v35 = 4;
              if ( CurrentProcessWow64Process )
                v35 = 1;
              ProbeForWrite((volatile void *)v3, 0x10uLL, v35);
              v24 = (volatile void *)v3;
              *(_OWORD *)v19 = *(_OWORD *)v3;
              v3 = (unsigned __int64)v19;
              ProbeForWrite(*((volatile void **)v19 + 1), 0x100uLL, 2u);
              v53 = 1;
              goto LABEL_183;
            case 0x43u:
              if ( v3 + 24 < v3 || v3 + 24 > (unsigned __int64)W32UserProbeAddress )
                v3 = (unsigned __int64)W32UserProbeAddress;
              v56 = *(_QWORD *)(v3 + 16);
              *(_OWORD *)v19 = *(_OWORD *)v3;
              *((_QWORD *)v19 + 2) = v56;
              v3 = (unsigned __int64)v19;
              v31 = *((_QWORD *)v19 + 2);
              if ( (v31 & 1) != 0 )
                ExRaiseDatatypeMisalignment();
              v32 = *((unsigned __int16 *)v19 + 4);
              v33 = v32 + v31 + 2;
              if ( v33 >= (unsigned __int64)W32UserProbeAddress
                || (unsigned __int16)v32 > *((_WORD *)v19 + 5)
                || (v32 & 1) != 0
                || v33 <= v31 )
              {
                *(_BYTE *)W32UserProbeAddress = 0;
              }
              if ( !*((_WORD *)v19 + 4) )
                *((_QWORD *)v19 + 2) = 0LL;
              goto LABEL_182;
            case 0x73u:
              v24 = (volatile void *)v3;
              v3 = (unsigned __int64)v19;
              ProbeForWrite(v24, 2LL * v4, 2u);
              v36 = 260;
              if ( v4 < 0x104 )
                v36 = v4;
              v5 = 2 * v36;
              v53 = 1;
              goto LABEL_183;
            case 0x92u:
              if ( v4 != 56 )
                goto LABEL_172;
LABEL_123:
              v5 = 56;
              goto LABEL_154;
            case 0x93u:
              if ( v4 != 56 )
                goto LABEL_172;
LABEL_72:
              v5 = 56;
              goto LABEL_88;
            case 0x94u:
              if ( v4 != 32 )
                goto LABEL_172;
              v5 = 32;
              goto LABEL_154;
            case 0x95u:
              if ( v4 != 32 )
                goto LABEL_172;
              v5 = 32;
              goto LABEL_88;
            case 0x96u:
              if ( v4 != 28 )
                goto LABEL_172;
LABEL_122:
              v5 = 28;
              goto LABEL_154;
            case 0x97u:
              if ( v4 != 28 )
                goto LABEL_172;
LABEL_69:
              v5 = 28;
              goto LABEL_88;
            case 0x98u:
              if ( v4 != 128 )
                goto LABEL_172;
              v5 = 128;
              goto LABEL_154;
            case 0x99u:
              if ( v4 != 128 )
                goto LABEL_172;
              v5 = 128;
LABEL_88:
              if ( (v3 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              v25 = v3 + v5;
              if ( v25 > (unsigned __int64)W32UserProbeAddress || v25 < v3 )
                *(_BYTE *)W32UserProbeAddress = 0;
LABEL_93:
              memmove(v19, (const void *)v3, v5);
              v3 = (unsigned __int64)v19;
              goto LABEL_182;
            case 0x9Au:
              if ( v4 != 548 )
                goto LABEL_172;
              v5 = 548;
              v37 = PsGetCurrentProcessWow64Process();
              v38 = 4LL;
              v39 = 4;
              if ( v37 )
                v39 = 1;
              ProbeForWrite((volatile void *)v3, 0x224uLL, v39);
              Address = (volatile void *)v3;
              v40 = v19;
              do
              {
                *v40 = *(_OWORD *)v3;
                v40[1] = *(_OWORD *)(v3 + 16);
                v40[2] = *(_OWORD *)(v3 + 32);
                v40[3] = *(_OWORD *)(v3 + 48);
                v40[4] = *(_OWORD *)(v3 + 64);
                v40[5] = *(_OWORD *)(v3 + 80);
                v40[6] = *(_OWORD *)(v3 + 96);
                v40 += 8;
                *(v40 - 1) = *(_OWORD *)(v3 + 112);
                v3 += 128LL;
                --v38;
              }
              while ( v38 );
              *v40 = *(_OWORD *)v3;
              v40[1] = *(_OWORD *)(v3 + 16);
              *((_DWORD *)v40 + 8) = *(_DWORD *)(v3 + 32);
              v3 = (unsigned __int64)v19;
              v53 = 1;
              goto LABEL_182;
            case 0x9Bu:
              if ( v4 != 548 )
                goto LABEL_172;
              v5 = 548;
              if ( v3 + 548 < v3 || v3 + 548 > (unsigned __int64)W32UserProbeAddress )
                v3 = (unsigned __int64)W32UserProbeAddress;
              v26 = v57;
              v27 = 4LL;
              v28 = 4LL;
              do
              {
                *v26 = *(_OWORD *)v3;
                v26[1] = *(_OWORD *)(v3 + 16);
                v26[2] = *(_OWORD *)(v3 + 32);
                v26[3] = *(_OWORD *)(v3 + 48);
                v26[4] = *(_OWORD *)(v3 + 64);
                v26[5] = *(_OWORD *)(v3 + 80);
                v26[6] = *(_OWORD *)(v3 + 96);
                v26 += 8;
                *(v26 - 1) = *(_OWORD *)(v3 + 112);
                v3 += 128LL;
                --v28;
              }
              while ( v28 );
              *v26 = *(_OWORD *)v3;
              v26[1] = *(_OWORD *)(v3 + 16);
              *((_DWORD *)v26 + 8) = *(_DWORD *)(v3 + 32);
              v29 = v19;
              v30 = v57;
              do
              {
                *v29 = *v30;
                v29[1] = v30[1];
                v29[2] = v30[2];
                v29[3] = v30[3];
                v29[4] = v30[4];
                v29[5] = v30[5];
                v29[6] = v30[6];
                v29 += 8;
                *(v29 - 1) = v30[7];
                v30 += 8;
                --v27;
              }
              while ( v27 );
              *v29 = *v30;
              v29[1] = v30[1];
              *((_DWORD *)v29 + 8) = *((_DWORD *)v30 + 8);
              v3 = (unsigned __int64)v19;
              if ( v19[6] <= 0x104u )
                goto LABEL_182;
              UserSetLastError(87LL);
              v50 = 0;
              goto LABEL_185;
            case 0x9Cu:
              if ( v4 != 16 )
                goto LABEL_172;
LABEL_131:
              v5 = 16;
              goto LABEL_154;
            case 0xA5u:
            case 0xA7u:
              if ( v4 != 12 )
                goto LABEL_172;
LABEL_153:
              v5 = 12;
LABEL_154:
              Addressa = (_DWORD *)v3;
              v3 = (unsigned __int64)v19;
              v41 = PsGetCurrentProcessWow64Process();
              v42 = 4;
              if ( v41 )
                v42 = 1;
              v24 = Addressa;
              ProbeForWrite(Addressa, v5, v42);
              v53 = 1;
              *v19 = *Addressa;
              goto LABEL_183;
            default:
              goto LABEL_159;
          }
          goto LABEL_183;
        }
        goto LABEL_178;
      }
      if ( v16 == 4135 )
        goto LABEL_182;
      if ( v16 == 8221 )
      {
        if ( v3 <= 2 )
          goto LABEL_182;
      }
      else
      {
LABEL_159:
        if ( v16 < 0xAC )
          goto LABEL_182;
        if ( v16 - 4096 > 0x51 && v16 - 0x2000 > 0x1F
          || v4 && (*((_DWORD *)gptiCurrent + 140) > 0x400u || v16 != 4159 || v4 != 1) )
        {
          goto LABEL_172;
        }
        if ( (v16 & 1) == 0 )
        {
LABEL_178:
          v54 = (void *)v3;
          if ( v3 >= (unsigned __int64)W32UserProbeAddress )
            v3 = (unsigned __int64)W32UserProbeAddress;
          *(_DWORD *)v3 = *(_DWORD *)v3;
          v53 = 1;
          v3 = (unsigned __int64)v19;
          v5 = 4;
          v24 = v54;
          goto LABEL_183;
        }
        if ( v16 == 8193 )
        {
          if ( (int)IsCanForceForegroundSupported_0() < 0
            || (PsGetCurrentProcessWin32Process(), !(unsigned int)CanForceForeground_0()) )
          {
            UserSetLastError(5LL);
            v50 = 0;
            goto LABEL_185;
          }
          goto LABEL_182;
        }
        if ( v16 != 8203 )
        {
          if ( v16 == 8211 && (v3 & 0xFFFFFFFE) != 0 )
            goto LABEL_172;
LABEL_182:
          v24 = Address;
LABEL_183:
          v50 = xxxSystemParametersInfo_0();
          if ( v53 )
            memmove((void *)v24, (const void *)v3, v5);
          goto LABEL_185;
        }
        if ( (v3 & 0xFFFFFFFC) == 0 )
          goto LABEL_182;
      }
LABEL_172:
      UserSetLastError(87LL);
      v50 = 0;
LABEL_185:
      if ( v55 )
        PopAndFreeAlwaysW32ThreadLock_0();
      PopAndFreeAlwaysW32ThreadLock_0();
      goto LABEL_188;
    }
  }
  v16 = v58;
  if ( v58 > 0x1001 )
  {
    if ( v58 > 0x2001 )
    {
      switch ( v58 )
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
    if ( v58 != 8193 )
    {
      switch ( v58 )
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
  else if ( v58 != 4097 )
  {
    switch ( v58 )
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
        break;
      default:
        goto LABEL_40;
    }
  }
LABEL_38:
  CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process();
  EtwTraceUIPISystemError(CurrentProcessWin32Process, 0LL);
  v50 = 0;
  UserSetLastError(5LL);
LABEL_188:
  if ( gcSwitchInProgressWaiters )
  {
    KeReleaseSemaphore(gpsemSwitchInProgressWaiters, 0, gcSwitchInProgressWaiters, 0);
    gcSwitchInProgressWaiters = 0;
  }
  v43 = 0LL;
  ThreadWin32Thread = (struct tagTHREADINFO **)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v43 = *ThreadWin32Thread;
  if ( v43 == gptiRit && !gbRITBlockedOnDIT && gcRITBlockedOnDITWaiters )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
    gcRITBlockedOnDITWaiters = 0;
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
    && (qword_1C00FEA40 & 0x200000010000000LL) != 0
    && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48 )
  {
    v46 = PsGetCurrentThreadWin32Thread(v45);
    if ( v46 )
    {
      LowPart = KeQueryPerformanceCounter(0LL).LowPart;
      if ( (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        Template_xqx(
          *(_QWORD *)(v46 + 16),
          (unsigned int)&ReleaseUserCritEvent,
          v48,
          LowPart - *(_DWORD *)(v46 + 8),
          0,
          *(_QWORD *)(v46 + 16));
    }
  }
  ExReleaseResourceAndLeavePriorityRegion(gpresUser);
  return v50;
}
