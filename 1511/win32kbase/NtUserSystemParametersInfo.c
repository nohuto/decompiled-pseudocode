/*
 * XREFs of NtUserSystemParametersInfo @ 0x1C005EBE0
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock_0 @ 0x1C0001C90 (PushW32ThreadLock_0.c)
 *     PopAndFreeAlwaysW32ThreadLock_0 @ 0x1C0001D88 (PopAndFreeAlwaysW32ThreadLock_0.c)
 *     xxxSystemParametersInfo_0 @ 0x1C0002998 (xxxSystemParametersInfo_0.c)
 *     IsCanForceForegroundSupported_0 @ 0x1C0002B88 (IsCanForceForegroundSupported_0.c)
 *     CanForceForeground_0 @ 0x1C0002B90 (CanForceForeground_0.c)
 *     IsWin32AllocPoolWithQuotaImplSupported_0 @ 0x1C0002C08 (IsWin32AllocPoolWithQuotaImplSupported_0.c)
 *     Win32AllocPoolWithQuotaImpl_0 @ 0x1C0002C10 (Win32AllocPoolWithQuotaImpl_0.c)
 *     Win32AllocPoolWithQuota @ 0x1C00211D0 (Win32AllocPoolWithQuota.c)
 *     UserSetLastError @ 0x1C00436EC (UserSetLastError.c)
 *     EtwTraceUIPISystemError @ 0x1C00778E0 (EtwTraceUIPISystemError.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     memset @ 0x1C00890C0 (memset.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 */

__int64 __fastcall NtUserSystemParametersInfo(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  unsigned int v4; // r14d
  unsigned int v5; // r13d
  unsigned int v6; // ebx
  LARGE_INTEGER *CurrentThreadWin32Thread; // r15
  __int64 v8; // r15
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  PVOID CurrentProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r12
  LARGE_INTEGER v17; // rbx
  int v18; // r8d
  __int64 v19; // rax
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  _DWORD *v24; // rax
  _DWORD *v25; // r12
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // eax
  const void *v30; // r14
  size_t v31; // rbx
  unsigned __int64 v32; // rcx
  volatile void *v33; // r15
  unsigned __int64 v34; // rcx
  _OWORD *v35; // rcx
  __int64 v36; // r15
  __int64 v37; // rax
  _OWORD *v38; // rcx
  _OWORD *v39; // rax
  unsigned __int64 v40; // rax
  __int64 v41; // rdx
  unsigned __int64 v42; // r8
  int v43; // eax
  __int64 v44; // rax
  __int64 v45; // r15
  ULONG v46; // r8d
  _OWORD *v47; // rcx
  __int64 v48; // rax
  ULONG v49; // r8d
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 CurrentProcessWow64Process; // rax
  ULONG v53; // r8d
  __int64 v54; // r8
  struct tagTHREADINFO *v55; // rbx
  struct tagTHREADINFO **ThreadWin32Thread; // rax
  __int64 v57; // rcx
  __int64 v58; // rbx
  DWORD LowPart; // eax
  int v60; // r8d
  unsigned int Size_4; // [rsp+34h] [rbp-304h]
  volatile void *Address; // [rsp+38h] [rbp-300h]
  _DWORD *Addressa; // [rsp+38h] [rbp-300h]
  int v65; // [rsp+40h] [rbp-2F8h]
  void *v66; // [rsp+48h] [rbp-2F0h]
  int v67; // [rsp+54h] [rbp-2E4h]
  __int64 v68; // [rsp+A0h] [rbp-298h]
  _BYTE v69[608]; // [rsp+D8h] [rbp-260h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = 0;
  Address = 0LL;
  v67 = 0;
  v65 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v8 = 0LL;
  while ( 1 )
  {
    v9 = (__int64 *)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
    if ( v9 )
      v8 = *v9;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v11, v10);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v14, v13) == gpepCSRSS && v8 != gptiTSRequest )
      break;
    if ( gbRITBlockedOnDIT )
    {
      if ( (struct tagTHREADINFO *)v8 == gptiRit )
        break;
      ++gcRITBlockedOnDITWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      KeWaitForSingleObject(gpsemRITBlockedOnDITWaiters, UserRequest, 0, 0, 0LL);
    }
    else
    {
      if ( gbDITInHitTest != 1 || (struct tagTHREADINFO *)v8 == gptiRit )
        break;
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
  }
  v16 = PsGetCurrentThreadWin32Thread(v14);
  if ( v16 )
  {
    v17 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v16 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0 )
    {
      v15 = (unsigned __int8)byte_1C01020C8;
      LOBYTE(v15) = byte_1C01020C8 - 1;
      if ( (unsigned __int8)(byte_1C01020C8 - 1) > 2u
        && (qword_1C01020B0 & 0x200000010000000LL) != 0
        && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        Template_xqx(v15, (unsigned int)&AcquiredExclusiveUserCritEvent, v18, v17.LowPart, 0, gullUserCritAcquireToken);
      }
    }
    if ( v17.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v18,
        0,
        1000 * v17.QuadPart / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v16 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    v3 = a3;
    v4 = a2;
    v6 = 0;
    Address = 0LL;
  }
  gptiCurrent = (struct tagTHREADINFO *)v8;
  gbValidateHandleForIL = 1;
  if ( ((*(_DWORD *)(v8 + 440) & 0x20000000) == 0
     || (v15 = *(_QWORD *)(*(_QWORD *)(v8 + 376) + 728LL), (*(_DWORD *)(v15 + 24) & 8) == 0))
    && ((v19 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v15) + 832), !gbEnforceUIPI) || (unsigned int)v19 > 0x1FFF)
    || v5 == 66
    || v5 - 8202 <= 4
    || v5 == 4162
    || v5 == 74 )
  {
LABEL_43:
    if ( (int)IsWin32AllocPoolWithQuotaImplSupported_0() < 0 )
    {
      v25 = 0LL;
    }
    else
    {
      v24 = (_DWORD *)Win32AllocPoolWithQuotaImpl_0();
      v25 = v24;
      if ( v24 )
        memset(v24, 0, 0x228uLL);
    }
    if ( !v25 )
    {
      Size_4 = 0;
      UserSetLastError(8LL, v23);
      goto LABEL_191;
    }
    PushW32ThreadLock_0();
    if ( v5 == 66 )
    {
      v6 = 16;
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v27, v26, v28);
      v53 = 4;
      if ( CurrentProcessWow64Process )
        v53 = 1;
      ProbeForWrite((volatile void *)v3, 0x10uLL, v53);
      v33 = (volatile void *)v3;
      *(_OWORD *)v25 = *(_OWORD *)v3;
      v3 = (unsigned __int64)v25;
      ProbeForWrite(*((volatile void **)v25 + 1), 0x100uLL, 2u);
      v65 = 1;
      goto LABEL_186;
    }
    if ( v5 <= 0x1026 )
    {
      if ( v5 != 4134 )
      {
        switch ( v5 )
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
            goto LABEL_177;
          case 3u:
          case 0x3Cu:
          case 0x74u:
            goto LABEL_152;
          case 4u:
          case 0x3Du:
          case 0x75u:
            v6 = 12;
            goto LABEL_91;
          case 0xDu:
          case 0x18u:
            if ( (v3 & 0xFFFFFFFFFFFF0000uLL) == 0 )
              goto LABEL_185;
            goto LABEL_177;
          case 0x14u:
            if ( !v3 )
            {
              v3 = -1LL;
              goto LABEL_185;
            }
            if ( v3 > 0xFFFFFFFFFFFFFFFDuLL )
              goto LABEL_185;
LABEL_59:
            if ( v3 >= (unsigned __int64)W32UserProbeAddress )
              v3 = (unsigned __int64)W32UserProbeAddress;
            v29 = *(_DWORD *)v3;
            v30 = *(const void **)(v3 + 8);
            if ( ((unsigned __int8)v30 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v31 = (unsigned __int16)v29;
            v32 = (unsigned __int64)v30 + (unsigned __int16)v29 + 2;
            if ( v32 >= (unsigned __int64)W32UserProbeAddress
              || (unsigned __int16)v29 > (unsigned __int16)HIWORD(*(_DWORD *)v3)
              || v32 <= (unsigned __int64)v30 )
            {
              *(_BYTE *)W32UserProbeAddress = 0;
            }
            v3 = Win32AllocPoolWithQuota();
            if ( !v3 )
              ExRaiseStatus(-1073741801);
            PushW32ThreadLock_0();
            v67 = 1;
            memmove((void *)v3, v30, v31);
            *(_WORD *)(v3 + 2 * (v31 >> 1)) = 0;
            v6 = 0;
            v33 = 0LL;
            break;
          case 0x15u:
            if ( v4 == -1 || !v3 )
              goto LABEL_185;
            goto LABEL_59;
          case 0x1Fu:
            v6 = 92;
            goto LABEL_153;
          case 0x22u:
            v6 = 92;
            goto LABEL_91;
          case 0x29u:
          case 0xA4u:
            if ( ((v4 - 500) & 0xFFFFFFFB) != 0 )
              goto LABEL_171;
            v6 = v4;
            goto LABEL_153;
          case 0x2Au:
            if ( ((v4 - 500) & 0xFFFFFFFB) != 0 )
              goto LABEL_171;
            v6 = v4;
            if ( v4 )
              goto LABEL_91;
            goto LABEL_96;
          case 0x2Bu:
            v6 = 20;
            goto LABEL_153;
          case 0x2Cu:
            v6 = 20;
            goto LABEL_91;
          case 0x2Du:
            v6 = 108;
            goto LABEL_153;
          case 0x2Eu:
            v6 = 108;
            goto LABEL_91;
          case 0x2Fu:
          case 0x9Du:
          case 0xA3u:
            v6 = 16;
            goto LABEL_91;
          case 0x30u:
          case 0xA2u:
            goto LABEL_130;
          case 0x32u:
            v6 = 24;
            goto LABEL_153;
          case 0x33u:
            v6 = 24;
            goto LABEL_91;
          case 0x34u:
          case 0x3Au:
          case 0x48u:
          case 0x59u:
            v6 = 8;
            goto LABEL_153;
          case 0x35u:
          case 0x3Bu:
          case 0x49u:
          case 0x5Au:
            v6 = 8;
            goto LABEL_91;
          case 0x36u:
            goto LABEL_124;
          case 0x37u:
            goto LABEL_72;
          case 0x40u:
            goto LABEL_125;
          case 0x41u:
            goto LABEL_75;
          case 0x43u:
            if ( v3 + 24 < v3 || v3 + 24 > (unsigned __int64)W32UserProbeAddress )
              v3 = (unsigned __int64)W32UserProbeAddress;
            v68 = *(_QWORD *)(v3 + 16);
            *(_OWORD *)v25 = *(_OWORD *)v3;
            *((_QWORD *)v25 + 2) = v68;
            v3 = (unsigned __int64)v25;
            v40 = *((_QWORD *)v25 + 2);
            if ( (v40 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v41 = *((unsigned __int16 *)v25 + 4);
            v42 = v41 + v40 + 2;
            if ( v42 >= (unsigned __int64)W32UserProbeAddress
              || (unsigned __int16)v41 > *((_WORD *)v25 + 5)
              || v42 <= v40 )
            {
              *(_BYTE *)W32UserProbeAddress = 0;
            }
            if ( !*((_WORD *)v25 + 4) )
              *((_QWORD *)v25 + 2) = 0LL;
            goto LABEL_185;
          case 0x73u:
            v33 = (volatile void *)v3;
            v3 = (unsigned __int64)v25;
            ProbeForWrite(v33, 2LL * v4, 2u);
            v43 = 260;
            if ( v4 < 0x104 )
              v43 = v4;
            v6 = 2 * v43;
            v65 = 1;
            goto LABEL_186;
          case 0x92u:
            if ( v4 != 56 )
              goto LABEL_171;
LABEL_125:
            v6 = 56;
            goto LABEL_153;
          case 0x93u:
            if ( v4 != 56 )
              goto LABEL_171;
LABEL_75:
            v6 = 56;
            goto LABEL_91;
          case 0x94u:
            if ( v4 != 32 )
              goto LABEL_171;
            v6 = 32;
            goto LABEL_153;
          case 0x95u:
            if ( v4 != 32 )
              goto LABEL_171;
            v6 = 32;
            goto LABEL_91;
          case 0x96u:
            if ( v4 != 28 )
              goto LABEL_171;
LABEL_124:
            v6 = 28;
            goto LABEL_153;
          case 0x97u:
            if ( v4 != 28 )
              goto LABEL_171;
LABEL_72:
            v6 = 28;
            goto LABEL_91;
          case 0x98u:
            if ( v4 != 128 )
              goto LABEL_171;
            v6 = 128;
            goto LABEL_153;
          case 0x99u:
            if ( v4 != 128 )
              goto LABEL_171;
            v6 = 128;
LABEL_91:
            if ( (v3 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v34 = v3 + v6;
            if ( v34 > (unsigned __int64)W32UserProbeAddress || v34 < v3 )
              *(_BYTE *)W32UserProbeAddress = 0;
LABEL_96:
            memmove(v25, (const void *)v3, v6);
            v3 = (unsigned __int64)v25;
            goto LABEL_185;
          case 0x9Au:
            if ( v4 != 548 )
              goto LABEL_171;
            v6 = 548;
            v44 = PsGetCurrentProcessWow64Process(v27, v26, v28);
            v45 = 4LL;
            v46 = 4;
            if ( v44 )
              v46 = 1;
            ProbeForWrite((volatile void *)v3, 0x224uLL, v46);
            Address = (volatile void *)v3;
            v47 = v25;
            do
            {
              *v47 = *(_OWORD *)v3;
              v47[1] = *(_OWORD *)(v3 + 16);
              v47[2] = *(_OWORD *)(v3 + 32);
              v47[3] = *(_OWORD *)(v3 + 48);
              v47[4] = *(_OWORD *)(v3 + 64);
              v47[5] = *(_OWORD *)(v3 + 80);
              v47[6] = *(_OWORD *)(v3 + 96);
              v47 += 8;
              *(v47 - 1) = *(_OWORD *)(v3 + 112);
              v3 += 128LL;
              --v45;
            }
            while ( v45 );
            *v47 = *(_OWORD *)v3;
            v47[1] = *(_OWORD *)(v3 + 16);
            *((_DWORD *)v47 + 8) = *(_DWORD *)(v3 + 32);
            v3 = (unsigned __int64)v25;
            v65 = 1;
            goto LABEL_185;
          case 0x9Bu:
            if ( v4 != 548 )
              goto LABEL_171;
            v6 = 548;
            if ( v3 + 548 < v3 || v3 + 548 > (unsigned __int64)W32UserProbeAddress )
              v3 = (unsigned __int64)W32UserProbeAddress;
            v35 = v69;
            v36 = 4LL;
            v37 = 4LL;
            do
            {
              *v35 = *(_OWORD *)v3;
              v35[1] = *(_OWORD *)(v3 + 16);
              v35[2] = *(_OWORD *)(v3 + 32);
              v35[3] = *(_OWORD *)(v3 + 48);
              v35[4] = *(_OWORD *)(v3 + 64);
              v35[5] = *(_OWORD *)(v3 + 80);
              v35[6] = *(_OWORD *)(v3 + 96);
              v35 += 8;
              *(v35 - 1) = *(_OWORD *)(v3 + 112);
              v3 += 128LL;
              --v37;
            }
            while ( v37 );
            *v35 = *(_OWORD *)v3;
            v35[1] = *(_OWORD *)(v3 + 16);
            *((_DWORD *)v35 + 8) = *(_DWORD *)(v3 + 32);
            v38 = v25;
            v39 = v69;
            do
            {
              *v38 = *v39;
              v38[1] = v39[1];
              v38[2] = v39[2];
              v38[3] = v39[3];
              v38[4] = v39[4];
              v38[5] = v39[5];
              v38[6] = v39[6];
              v38 += 8;
              *(v38 - 1) = v39[7];
              v39 += 8;
              --v36;
            }
            while ( v36 );
            *v38 = *v39;
            v38[1] = v39[1];
            *((_DWORD *)v38 + 8) = *((_DWORD *)v39 + 8);
            v3 = (unsigned __int64)v25;
            if ( v25[6] <= 0x104u )
              goto LABEL_185;
            UserSetLastError(87LL, v26);
            Size_4 = 0;
            goto LABEL_188;
          case 0x9Cu:
            if ( v4 != 16 )
              goto LABEL_171;
LABEL_130:
            v6 = 16;
            goto LABEL_153;
          case 0xA5u:
          case 0xA7u:
            if ( v4 != 12 )
              goto LABEL_171;
LABEL_152:
            v6 = 12;
LABEL_153:
            Addressa = (_DWORD *)v3;
            v3 = (unsigned __int64)v25;
            v48 = PsGetCurrentProcessWow64Process(v27, v26, v28);
            v49 = 4;
            if ( v48 )
              v49 = 1;
            v33 = Addressa;
            ProbeForWrite(Addressa, v6, v49);
            v65 = 1;
            *v25 = *Addressa;
            goto LABEL_186;
          default:
            goto LABEL_158;
        }
        goto LABEL_186;
      }
      goto LABEL_177;
    }
    if ( v5 == 4135 )
      goto LABEL_185;
    if ( v5 == 8221 )
    {
      if ( v3 <= 2 )
        goto LABEL_185;
    }
    else
    {
LABEL_158:
      if ( v5 < 0xAC )
        goto LABEL_185;
      if ( v5 - 4096 > 0x51 && v5 - 0x2000 > 0x1F
        || v4 && (*((_DWORD *)gptiCurrent + 138) > 0x400u || v5 != 4159 || v4 != 1) )
      {
        goto LABEL_171;
      }
      if ( (v5 & 1) == 0 )
      {
LABEL_177:
        v66 = (void *)v3;
        if ( v3 >= (unsigned __int64)W32UserProbeAddress )
          v3 = (unsigned __int64)W32UserProbeAddress;
        *(_DWORD *)v3 = *(_DWORD *)v3;
        v65 = 1;
        v3 = (unsigned __int64)v25;
        v6 = 4;
        v33 = v66;
        goto LABEL_186;
      }
      if ( v5 == 8193 )
      {
        if ( (int)IsCanForceForegroundSupported_0() < 0
          || (PsGetCurrentProcessWin32Process(v51), !(unsigned int)CanForceForeground_0()) )
        {
          UserSetLastError(5LL, v50);
          Size_4 = 0;
          goto LABEL_188;
        }
        goto LABEL_185;
      }
      if ( v5 != 8203 )
      {
        if ( v5 == 8211 && (v3 & 0xFFFFFFFE) != 0 )
          goto LABEL_171;
LABEL_185:
        v33 = Address;
LABEL_186:
        Size_4 = xxxSystemParametersInfo_0();
        if ( v65 )
          memmove((void *)v33, (const void *)v3, v6);
        goto LABEL_188;
      }
      if ( (v3 & 0xFFFFFFFC) == 0 )
        goto LABEL_185;
    }
LABEL_171:
    UserSetLastError(87LL, v26);
    Size_4 = 0;
LABEL_188:
    if ( v67 )
      PopAndFreeAlwaysW32ThreadLock_0();
    PopAndFreeAlwaysW32ThreadLock_0();
    goto LABEL_191;
  }
  if ( v5 > 0x1001 )
  {
    if ( v5 > 0x2001 )
    {
      switch ( v5 )
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
          goto LABEL_42;
        default:
          goto LABEL_43;
      }
    }
    if ( v5 != 8193 )
    {
      switch ( v5 )
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
          goto LABEL_43;
      }
    }
  }
  else if ( v5 != 4097 )
  {
    switch ( v5 )
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
        goto LABEL_43;
    }
  }
LABEL_42:
  CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(v15);
  EtwTraceUIPISystemError(CurrentProcessWin32Process, 0LL);
  Size_4 = 0;
  UserSetLastError(5LL, v21);
LABEL_191:
  v54 = (unsigned int)gcSwitchInProgressWaiters;
  if ( gcSwitchInProgressWaiters )
  {
    KeReleaseSemaphore(gpsemSwitchInProgressWaiters, 0, gcSwitchInProgressWaiters, 0);
    gcSwitchInProgressWaiters = 0;
  }
  v55 = 0LL;
  ThreadWin32Thread = (struct tagTHREADINFO **)PsGetThreadWin32Thread(KeGetCurrentThread(), v22, v54);
  if ( ThreadWin32Thread )
    v55 = *ThreadWin32Thread;
  if ( v55 == gptiRit && !gbRITBlockedOnDIT && gcRITBlockedOnDITWaiters )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
    gcRITBlockedOnDITWaiters = 0;
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
    && (qword_1C01020B0 & 0x200000010000000LL) != 0
    && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8 )
  {
    v58 = PsGetCurrentThreadWin32Thread(v57);
    if ( v58 )
    {
      LowPart = KeQueryPerformanceCounter(0LL).LowPart;
      if ( (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        Template_xqx(
          *(_QWORD *)(v58 + 16),
          (unsigned int)&ReleaseUserCritEvent,
          v60,
          LowPart - *(_DWORD *)(v58 + 8),
          0,
          *(_QWORD *)(v58 + 16));
    }
  }
  ExReleaseResourceAndLeavePriorityRegion(gpresUser);
  return Size_4;
}
