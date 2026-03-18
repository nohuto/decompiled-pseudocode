/*
 * XREFs of NtUserSetDisplayConfig @ 0x1C00B14D0
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock_0 @ 0x1C0001C90 (PushW32ThreadLock_0.c)
 *     PopAndFreeAlwaysW32ThreadLock_0 @ 0x1C0001D88 (PopAndFreeAlwaysW32ThreadLock_0.c)
 *     IsAutoRotationUpdateRegistrySupported_0 @ 0x1C0002B98 (IsAutoRotationUpdateRegistrySupported_0.c)
 *     AutoRotationUpdateRegistry_0 @ 0x1C0002BA0 (AutoRotationUpdateRegistry_0.c)
 *     Win32AllocPoolWithQuota @ 0x1C00211D0 (Win32AllocPoolWithQuota.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSetLastError @ 0x1C00436EC (UserSetLastError.c)
 *     xxxUserSetDisplayConfig @ 0x1C006D7B0 (xxxUserSetDisplayConfig.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 */

__int64 __fastcall NtUserSetDisplayConfig(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a5)
{
  unsigned int v5; // r12d
  unsigned int v6; // esi
  int v7; // r14d
  int v8; // ebx
  LARGE_INTEGER *CurrentThreadWin32Thread; // r15
  struct tagTHREADINFO *v10; // r15
  __int64 v11; // rcx
  LONGLONG v12; // rdx
  LONGLONG v13; // rcx
  __int64 v14; // r13
  LARGE_INTEGER v15; // rsi
  LARGE_INTEGER v16; // r8
  char v17; // al
  _DWORD *v18; // r13
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // rsi
  LONGLONG v22; // r13
  unsigned int v23; // r15d
  __int64 v24; // r14
  unsigned int v25; // r9d
  unsigned __int64 v26; // rsi
  __int64 CurrentProcessWow64Process; // rax
  unsigned int i; // r8d
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  void *v32; // r15
  unsigned int v33; // r8d
  int v34; // eax
  unsigned __int64 v35; // rax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v37; // [rsp+20h] [rbp-108h]
  _DWORD *v38; // [rsp+58h] [rbp-D0h]
  void *v39; // [rsp+70h] [rbp-B8h]
  unsigned int v41; // [rsp+130h] [rbp+8h]

  v41 = a1;
  v38 = 0LL;
  v39 = 0LL;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = -1073741811;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v10 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v14 = PsGetCurrentThreadWin32Thread(v11);
  if ( v14 )
  {
    v15 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v14 + 8));
    v12 = 0x200000010000000LL;
    if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0 )
    {
      if ( (unsigned __int8)(byte_1C01020C8 - 1) <= 2u
        || (qword_1C01020B0 & 0x200000010000000LL) == 0
        || (v17 = 1, (qword_1C01020B8 & 0x200000010000000LL) != qword_1C01020B8) )
      {
        v17 = 0;
      }
      if ( v17 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        Template_xqx(v13, &AcquiredExclusiveUserCritEvent, v16.QuadPart, v15.QuadPart, 0, gullUserCritAcquireToken);
    }
    if ( v15.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp )
    {
      v12 = 1000 * v15.QuadPart % gliQpcFreq.QuadPart;
      v13 = 1000 * v15.QuadPart / gliQpcFreq.QuadPart;
      if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        LODWORD(v37) = 1000 * v15.QuadPart / gliQpcFreq.QuadPart;
        Template_xqx(v13, &AcquiredExclusiveUserCritTelemetryEvent, v16.QuadPart, 0LL, v37, gullUserCritAcquireToken);
      }
    }
    *(_QWORD *)(v14 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    v18 = 0LL;
    v38 = 0LL;
    v39 = 0LL;
    v5 = 0;
    v6 = 0;
    v7 = 0;
  }
  else
  {
    v18 = 0LL;
  }
  gptiCurrent = v10;
  gbValidateHandleForIL = 1;
  if ( !gbVideoInitialized )
    goto LABEL_18;
  if ( (*((_DWORD *)v10 + 110) & 0x20000000) != 0 )
  {
    v13 = *(_QWORD *)(*((_QWORD *)v10 + 47) + 728LL);
    v19 = *(_DWORD *)(v13 + 24) & 0x10;
  }
  else
  {
    v19 = 0;
  }
  if ( v19
    || (v13 = (unsigned int)gbEnforceUIPI, gbEnforceUIPI)
    && (unsigned int)*(_QWORD *)(*((_QWORD *)v10 + 47) + 832LL) < 0x2000 )
  {
    v8 = -1073741790;
    goto LABEL_122;
  }
  v20 = v41;
  if ( v41 <= 0x400 && a3 <= 0x800 )
  {
    if ( !v41 )
      goto LABEL_103;
    v21 = 72LL * v41;
    if ( v21 )
    {
      v22 = a2;
      if ( (((-(__int64)(PsGetCurrentProcessWow64Process(0x38E38E38E38E38ELL, v12, v41) != 0) & 0xFFFFFFFFFFFFFFFDuLL)
           + 3) & a2) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v21 + a2 > (unsigned __int64)W32UserProbeAddress || v21 + a2 < a2 )
        *(_BYTE *)W32UserProbeAddress = 0;
      v20 = v41;
    }
    else
    {
      v22 = a2;
    }
    v23 = 0;
    v13 = 0LL;
    v12 = v22;
    while ( (unsigned int)v13 < (unsigned int)v20 )
    {
      if ( (*(_DWORD *)(v12 + 68) & 1) != 0 )
        ++v23;
      v13 = (unsigned int)(v13 + 1);
      v12 += 72LL;
    }
    if ( v23 )
    {
      v24 = Win32AllocPoolWithQuota();
      v38 = (_DWORD *)v24;
      if ( !v24 )
        ExRaiseStatus(-1073741801);
      PushW32ThreadLock_0();
    }
    else
    {
      v24 = 0LL;
    }
    v25 = a3;
    if ( a3 )
    {
      v26 = (unsigned __int64)a3 << 6;
      if ( v26 )
      {
        CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v13, v12, v20);
        v12 = a4;
        if ( (((-(__int64)(CurrentProcessWow64Process != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & a4) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v26 + a4 > (unsigned __int64)W32UserProbeAddress || v26 + a4 < a4 )
          *(_BYTE *)W32UserProbeAddress = 0;
        v25 = a3;
      }
    }
    else
    {
      v12 = a4;
      if ( a4 )
      {
        v18 = v38;
        goto LABEL_122;
      }
    }
    v13 = v24;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    for ( i = 0; ; ++i )
    {
      if ( i >= v41 )
      {
        if ( v5 != v23 )
        {
          v18 = v38;
          goto LABEL_122;
        }
        if ( v7 )
        {
          if ( v6 >= v25 )
          {
            v18 = v38;
            goto LABEL_122;
          }
          v32 = (void *)Win32AllocPoolWithQuota();
          v39 = v32;
          if ( !v32 )
            ExRaiseStatus(-1073741801);
          PushW32ThreadLock_0();
          memmove(v32, (const void *)a4, (unsigned __int64)(v6 + 1) << 6);
          v18 = v38;
LABEL_104:
          if ( !HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
          {
            if ( gProtocolType )
            {
              v8 = -1073741790;
              goto LABEL_125;
            }
            v33 = v6 + 1;
            if ( !v7 )
              v33 = 0;
            LODWORD(v37) = (_DWORD)a5;
            v34 = xxxUserSetDisplayConfig(v5, v18, v33, (__int64)v32, v37, 0, 0, 0LL, 1, 0LL);
            v8 = v34;
            if ( v34 == -2147483643 )
            {
              v8 = -1073741789;
            }
            else if ( v34 != -1073741789 )
            {
              if ( v34 == -1071774970 )
              {
                v8 = -2147023286;
              }
              else
              {
                if ( v34 < 0 )
                {
                  v35 = (unsigned int)(v34 + 1073741811);
                  if ( (unsigned int)v35 > 0x23 || (v13 = 0x800200401LL, !_bittest64(&v13, v35)) )
                  {
                    if ( v8 != -1073741637 )
                    {
                      v13 = (unsigned int)v8;
                      if ( (unsigned int)(v8 + 1073741585) > 0xB )
                        v13 = 3221225473LL;
                      v8 = v13;
                    }
                  }
                }
LABEL_122:
                if ( v8 >= 0 && (int)IsAutoRotationUpdateRegistrySupported_0() >= 0 )
                  AutoRotationUpdateRegistry_0();
              }
            }
            goto LABEL_125;
          }
LABEL_18:
          v8 = -1073741823;
          goto LABEL_125;
        }
        v18 = v38;
LABEL_103:
        v32 = 0LL;
        goto LABEL_104;
      }
      if ( (*(_DWORD *)(v22 + 68) & 1) != 0 )
        break;
LABEL_93:
      v22 += 72LL;
    }
    if ( v5 >= v23 )
    {
      v18 = v38;
      goto LABEL_122;
    }
    *(_OWORD *)v13 = *(_OWORD *)v22;
    *(_OWORD *)(v13 + 16) = *(_OWORD *)(v22 + 16);
    *(_OWORD *)(v13 + 32) = *(_OWORD *)(v22 + 32);
    *(_OWORD *)(v13 + 48) = *(_OWORD *)(v22 + 48);
    *(_QWORD *)(v13 + 64) = *(_QWORD *)(v22 + 64);
    if ( (*(_DWORD *)(v13 + 68) & 1) == 0 )
    {
      v8 = -1073741790;
      v18 = v38;
      goto LABEL_122;
    }
    if ( ((unsigned __int16)a5 & 0x8000) != 0 )
    {
      v29 = *(unsigned __int16 *)(v13 + 14);
      if ( v29 != 0xFFFF )
      {
        if ( v29 >= v25 )
        {
          v18 = v38;
          goto LABEL_122;
        }
LABEL_70:
        v7 = 1;
        if ( v6 > v29 )
          v29 = v6;
        v6 = v29;
      }
    }
    else
    {
      v29 = *(_DWORD *)(v13 + 12);
      if ( v29 != -1 )
      {
        if ( v29 >= v25 )
        {
          v18 = v38;
          goto LABEL_122;
        }
        goto LABEL_70;
      }
    }
    if ( ((unsigned __int16)a5 & 0xC000) != 0 )
    {
      v30 = *(unsigned __int16 *)(v13 + 34);
      if ( v30 != 0xFFFF )
      {
        if ( v30 >= v25 )
        {
          v18 = v38;
          goto LABEL_122;
        }
        v7 = 1;
        if ( v6 > v30 )
          v30 = v6;
        v6 = v30;
      }
      v12 = (unsigned __int16)*(_DWORD *)(v13 + 32);
      if ( (_DWORD)v12 != 0xFFFF )
      {
        if ( (unsigned int)v12 >= v25 )
        {
          v18 = v38;
          goto LABEL_122;
        }
        v7 = 1;
        if ( v6 > (unsigned int)v12 )
          v12 = v6;
        v6 = v12;
      }
    }
    else
    {
      v31 = *(_DWORD *)(v13 + 32);
      if ( v31 != -1 )
      {
        if ( v31 >= v25 )
        {
          v18 = v38;
          goto LABEL_122;
        }
        v7 = 1;
        if ( v6 > v31 )
          v31 = v6;
        v6 = v31;
      }
    }
    ++v5;
    v13 += 72LL;
    goto LABEL_93;
  }
LABEL_125:
  if ( v39 )
    PopAndFreeAlwaysW32ThreadLock_0();
  if ( v18 )
    PopAndFreeAlwaysW32ThreadLock_0();
  UserSessionSwitchLeaveCrit(v13, v12);
  return (unsigned int)v8;
}
