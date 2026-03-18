/*
 * XREFs of NtUserSetDisplayConfig @ 0x1C00BB200
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock_0 @ 0x1C0001D98 (PushW32ThreadLock_0.c)
 *     PopAndFreeAlwaysW32ThreadLock_0 @ 0x1C0001F00 (PopAndFreeAlwaysW32ThreadLock_0.c)
 *     IsAutoRotationUpdateRegistrySupported_0 @ 0x1C0002B98 (IsAutoRotationUpdateRegistrySupported_0.c)
 *     AutoRotationUpdateRegistry_0 @ 0x1C0002BA0 (AutoRotationUpdateRegistry_0.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSetLastError @ 0x1C0020A94 (UserSetLastError.c)
 *     Win32AllocPoolWithQuota @ 0x1C003AA10 (Win32AllocPoolWithQuota.c)
 *     xxxUserSetDisplayConfig @ 0x1C005D2A0 (xxxUserSetDisplayConfig.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 */

__int64 __fastcall NtUserSetDisplayConfig(
        unsigned int a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a5)
{
  unsigned int v6; // r12d
  unsigned int v7; // ebx
  int v8; // esi
  __int64 v9; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // r14
  struct tagTHREADINFO *v11; // r14
  __int64 v12; // rcx
  __int64 v13; // r15
  LARGE_INTEGER v14; // rcx
  LARGE_INTEGER v15; // rbx
  LARGE_INTEGER v16; // r8
  char v17; // al
  int v18; // ebx
  __int64 v19; // rsi
  int v20; // eax
  unsigned int v21; // r8d
  __int64 v22; // rbx
  unsigned int v23; // r14d
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  __int64 v26; // rsi
  unsigned __int64 v27; // rbx
  __int64 v28; // rcx
  unsigned int i; // r8d
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // edx
  unsigned int v33; // eax
  void *v34; // r15
  unsigned int v35; // r8d
  int v36; // eax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v38; // [rsp+20h] [rbp-168h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v39; // [rsp+28h] [rbp-160h]
  __int64 v40; // [rsp+68h] [rbp-120h]
  void *v42; // [rsp+88h] [rbp-100h]
  __int64 v45[8]; // [rsp+110h] [rbp-78h] BYREF

  memset(v45, 0, sizeof(v45));
  EtwActivityIdControl(3u, (LPGUID)&v45[1]);
  v45[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v45[3]) = 29;
  v40 = 0LL;
  v42 = 0LL;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v9);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v11 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v13 = PsGetCurrentThreadWin32Thread(v12);
  if ( v13 )
  {
    v15 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v13 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0 )
    {
      if ( (unsigned __int8)(byte_1C0118B28 - 1) <= 2u
        || (qword_1C0118B10 & 0x200000010000000LL) == 0
        || (v17 = 1, (qword_1C0118B18 & 0x200000010000000LL) != qword_1C0118B18) )
      {
        v17 = 0;
      }
      if ( v17 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        Template_xqx(
          v14.QuadPart,
          &AcquiredExclusiveUserCritEvent,
          v16.QuadPart,
          v15.QuadPart,
          0,
          gullUserCritAcquireToken);
    }
    if ( v15.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      LODWORD(v38) = 1000 * v15.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        1000 * v15.QuadPart / gliQpcFreq.QuadPart,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v16.QuadPart,
        0LL,
        v38,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v13 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    v40 = 0LL;
    v42 = 0LL;
    v6 = 0;
    v7 = 0;
    v8 = 0;
  }
  gptiCurrent = v11;
  gbValidateHandleForIL = 1;
  if ( !gbVideoInitialized )
  {
LABEL_17:
    v18 = -1073741823;
    goto LABEL_18;
  }
  if ( (*((_DWORD *)v11 + 110) & 0x20000000) != 0 )
    v20 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 47) + 720LL) + 24LL) & 0x10;
  else
    v20 = 0;
  if ( v20 || gbEnforceUIPI && (unsigned int)*(_QWORD *)(*((_QWORD *)v11 + 47) + 824LL) < 0x2000 )
  {
    v18 = -1073741790;
    v19 = 0LL;
LABEL_122:
    if ( v18 >= 0 && (int)IsAutoRotationUpdateRegistrySupported_0() >= 0 )
      AutoRotationUpdateRegistry_0();
    goto LABEL_125;
  }
  v21 = a1;
  if ( a1 > 0x400 || a3 > 0x800 )
  {
    v18 = -1073741811;
    goto LABEL_18;
  }
  if ( !a1 )
    goto LABEL_101;
  v22 = 72LL * a1;
  if ( v22 )
  {
    if ( (((-(__int64)(PsGetCurrentProcessWow64Process(0x38E38E38E38E38ELL) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & a2) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v22 + a2 > W32UserProbeAddress || v22 + a2 < a2 )
      *(_BYTE *)W32UserProbeAddress = 0;
    v21 = a1;
  }
  v23 = 0;
  v24 = 0LL;
  v25 = a2;
  while ( (unsigned int)v24 < v21 )
  {
    if ( (*(_DWORD *)(v25 + 68) & 1) != 0 )
      ++v23;
    v24 = (unsigned int)(v24 + 1);
    v25 += 72LL;
  }
  if ( v23 )
  {
    v26 = Win32AllocPoolWithQuota();
    v40 = v26;
    if ( !v26 )
      ExRaiseStatus(-1073741801);
    PushW32ThreadLock_0();
  }
  else
  {
    v26 = 0LL;
  }
  if ( a3 )
  {
    v27 = (unsigned __int64)a3 << 6;
    if ( v27 )
    {
      if ( (((-(__int64)(PsGetCurrentProcessWow64Process(v24) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & a4) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v27 + a4 > W32UserProbeAddress || v27 + a4 < a4 )
        *(_BYTE *)W32UserProbeAddress = 0;
    }
  }
  else if ( a4 )
  {
    v18 = -1073741811;
    v19 = v40;
    goto LABEL_122;
  }
  v28 = v26;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  for ( i = 0; i < a1; ++i )
  {
    if ( (*(_DWORD *)(a2 + 68) & 1) == 0 )
      goto LABEL_92;
    if ( v6 >= v23 )
    {
      v18 = -1073741811;
      v19 = v40;
      goto LABEL_122;
    }
    *(_OWORD *)v28 = *(_OWORD *)a2;
    *(_OWORD *)(v28 + 16) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(v28 + 32) = *(_OWORD *)(a2 + 32);
    *(_OWORD *)(v28 + 48) = *(_OWORD *)(a2 + 48);
    *(_QWORD *)(v28 + 64) = *(_QWORD *)(a2 + 64);
    if ( (*(_DWORD *)(v28 + 68) & 1) == 0 )
    {
      v18 = -1073741790;
      v19 = v40;
      goto LABEL_122;
    }
    if ( ((unsigned __int16)a5 & 0x8000) != 0 )
    {
      v30 = *(unsigned __int16 *)(v28 + 14);
      if ( v30 != 0xFFFF )
      {
        if ( v30 >= a3 )
        {
          v18 = -1073741811;
          v19 = v40;
          goto LABEL_122;
        }
LABEL_69:
        v8 = 1;
        if ( v7 > v30 )
          v30 = v7;
        v7 = v30;
      }
    }
    else
    {
      v30 = *(_DWORD *)(v28 + 12);
      if ( v30 != -1 )
      {
        if ( v30 >= a3 )
        {
          v18 = -1073741811;
          v19 = v40;
          goto LABEL_122;
        }
        goto LABEL_69;
      }
    }
    if ( ((unsigned __int16)a5 & 0xC000) != 0 )
    {
      v31 = *(unsigned __int16 *)(v28 + 34);
      if ( v31 != 0xFFFF )
      {
        if ( v31 >= a3 )
        {
          v18 = -1073741811;
          v19 = v40;
          goto LABEL_122;
        }
        v8 = 1;
        if ( v7 > v31 )
          v31 = v7;
        v7 = v31;
      }
      v32 = (unsigned __int16)*(_DWORD *)(v28 + 32);
      if ( v32 != 0xFFFF )
      {
        if ( v32 >= a3 )
        {
          v18 = -1073741811;
          v19 = v40;
          goto LABEL_122;
        }
        v8 = 1;
        if ( v7 > v32 )
          v32 = v7;
        v7 = v32;
      }
    }
    else
    {
      v33 = *(_DWORD *)(v28 + 32);
      if ( v33 != -1 )
      {
        if ( v33 >= a3 )
        {
          v18 = -1073741811;
          v19 = v40;
          goto LABEL_122;
        }
        v8 = 1;
        if ( v7 > v33 )
          v33 = v7;
        v7 = v33;
      }
    }
    ++v6;
    v28 += 72LL;
LABEL_92:
    a2 += 72LL;
  }
  if ( v6 != v23 )
  {
    v18 = -1073741811;
    v19 = v40;
    goto LABEL_122;
  }
  if ( !v8 )
  {
LABEL_101:
    v34 = 0LL;
    goto LABEL_102;
  }
  if ( v7 >= a3 )
  {
    v18 = -1073741811;
    v19 = v40;
    goto LABEL_122;
  }
  v34 = (void *)Win32AllocPoolWithQuota();
  v42 = v34;
  if ( !v34 )
    ExRaiseStatus(-1073741801);
  PushW32ThreadLock_0();
  memmove(v34, (const void *)a4, (unsigned __int64)(v7 + 1) << 6);
LABEL_102:
  if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
    goto LABEL_17;
  if ( !gProtocolType )
  {
    v35 = v7 + 1;
    if ( !v8 )
      v35 = 0;
    LODWORD(v39) = 0;
    LODWORD(v38) = (_DWORD)a5;
    v19 = v40;
    v36 = xxxUserSetDisplayConfig(v6, v40, v35, (__int64)v34, v38, v39, 0, 0LL, 1, 0LL, 0LL, (__int64)v45);
    v18 = v36;
    switch ( v36 )
    {
      case -2147483643:
        v18 = -1073741789;
        goto LABEL_125;
      case -1073741789:
        goto LABEL_125;
      case -1071774970:
        v18 = -2147023286;
        goto LABEL_125;
    }
    if ( v36 < 0
      && v36 != -1073741811
      && v36 != -1073741801
      && v36 != -1073741790
      && v36 != -1073741776
      && v36 != -1073741637
      && (v36 <= -1073741586 || v36 > -1073741574) )
    {
      v18 = -1073741823;
    }
    goto LABEL_122;
  }
  v18 = -1073741790;
LABEL_18:
  v19 = v40;
LABEL_125:
  if ( v42 )
    PopAndFreeAlwaysW32ThreadLock_0();
  if ( v19 )
    PopAndFreeAlwaysW32ThreadLock_0();
  UserSessionSwitchLeaveCrit();
  return (unsigned int)v18;
}
