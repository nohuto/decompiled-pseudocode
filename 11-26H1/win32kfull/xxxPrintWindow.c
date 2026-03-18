/*
 * XREFs of xxxPrintWindow @ 0x14011CB78
 * Callers:
 *     NtUserPrintWindow @ 0x1402B9110 (NtUserPrintWindow.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetRedirectionFlags @ 0x140042B14 (GetRedirectionFlags.c)
 *     GetStyleWindow @ 0x1400463E0 (GetStyleWindow.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x14009C140 (GreSpDwmSyncCaptureSurfaceBits.c)
 *     UnsetRedirectedWindow @ 0x1400A3250 (UnsetRedirectedWindow.c)
 *     GreBitBltInternal @ 0x1400B5980 (GreBitBltInternal.c)
 *     Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline @ 0x14011CF38 (Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x14011E2E4 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     IntersectRect @ 0x14012B290 (IntersectRect.c)
 *     SetRedirectedWindow @ 0x14014DABC (SetRedirectedWindow.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall xxxPrintWindow(struct tagWND *a1, Gre::Base *a2, char a3)
{
  struct tagWND *v3; // rdi
  unsigned int v4; // esi
  int v5; // r13d
  __int64 v7; // rcx
  struct tagTHREADINFO *v8; // rax
  _DWORD *v9; // rdx
  int v10; // r12d
  int v11; // eax
  int v12; // r14d
  int v13; // r15d
  __int64 StyleWindow; // rax
  struct tagWND *v15; // rbx
  __int64 v16; // rax
  __int128 v17; // xmm0
  __int64 v18; // rax
  struct tagWND *v19; // r12
  int v20; // r12d
  __int64 v21; // rdx
  __int64 v22; // rcx
  char v23; // bl
  __int64 UserSessionState; // rax
  __int64 v25; // rcx
  float *v26; // rax
  float v27; // xmm2_4
  __int64 DCEx; // rbx
  __int128 v30; // [rsp+68h] [rbp-21h] BYREF
  __int128 v31; // [rsp+78h] [rbp-11h] BYREF
  __int128 v32; // [rsp+88h] [rbp-1h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+98h] [rbp+Fh] BYREF
  struct tagWND *v34; // [rsp+A0h] [rbp+17h]
  int v36; // [rsp+100h] [rbp+77h]
  int v37; // [rsp+108h] [rbp+7Fh]

  v3 = a1;
  v4 = 0;
  v5 = 0;
  v32 = 0LL;
  Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(&BugCheckParameter3, (__int64)a1);
  if ( (unsigned int)Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline() )
  {
    v8 = PtiCurrent(v7);
    if ( !(unsigned __int8)Win32ProcessCapability::CheckAccess(*((_QWORD *)v8 + 57), 2LL) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4950LL);
  }
  v9 = (_DWORD *)*((_QWORD *)v3 + 5);
  v10 = a3 & 1;
  if ( (a3 & 1) != 0 )
  {
    v11 = v9[27];
    v12 = v9[28] - v9[26];
    v37 = v9[26] - v9[22];
    v36 = v11 - v9[23];
    v13 = v9[29] - v11;
  }
  else
  {
    v37 = 0;
    v36 = 0;
    v12 = v9[24] - v9[22];
    v13 = v9[25] - v9[23];
  }
  if ( (a3 & 2) != 0 )
  {
    if ( (unsigned int)IsWindowDesktopComposed(v3) )
    {
      StyleWindow = GetStyleWindow((__int64)v3, 2568);
      v15 = (struct tagWND *)StyleWindow;
      if ( StyleWindow )
      {
        if ( (struct tagWND *)StyleWindow != v3 )
        {
          v16 = *((_QWORD *)v3 + 5);
          if ( v10 )
            v17 = *(_OWORD *)(v16 + 104);
          else
            v17 = *(_OWORD *)(v16 + 88);
          v18 = *((_QWORD *)v15 + 5);
          v30 = v17;
          v31 = *(_OWORD *)(v18 + 88);
          LODWORD(v30) = v17 - v31;
          HIDWORD(v30) = HIDWORD(v17) - DWORD1(v31);
          DWORD1(v30) = DWORD1(v17) - DWORD1(v31);
          HIDWORD(v31) -= DWORD1(v31);
          DWORD2(v30) = DWORD2(v17) - v31;
          DWORD2(v31) -= v31;
          *(_QWORD *)&v31 = 0LL;
          v4 = IntersectRect(&v32, &v31, &v30);
          if ( !v4 )
            goto LABEL_39;
          v3 = v15;
          v19 = v34;
          v13 = HIDWORD(v32) - DWORD1(v32);
          v36 = DWORD1(v32);
          v12 = DWORD2(v32) - v32;
          v37 = v32;
          v34 = v15;
          HMLockObject(v15);
          if ( v19 )
            HMUnlockObject(v19);
        }
        v5 = 1;
      }
    }
  }
  if ( (GetRedirectionFlags((__int64)v3, (__int64)v9) & 8) != 0 )
  {
    v20 = 0;
LABEL_27:
    xxxInternalUpdateWindow(v3, 1u);
    if ( v5 )
    {
      v23 = 0;
      UserSessionState = W32GetUserSessionState(v22, v21);
      if ( (unsigned __int8)ExIsFastResourceHeldExclusive(*(_QWORD *)(UserSessionState + 16)) == 1 )
      {
        v23 = 1;
        LeaveMitRitHazardCrit();
      }
      UserSessionSwitchLeaveCrit(v25);
      v26 = (float *)*((_QWORD *)v3 + 27);
      v27 = FLOAT_1_0;
      if ( v26 )
        v27 = *v26;
      v4 = GreSpDwmSyncCaptureSurfaceBits(*(Gre::Base **)v3, (HDC)a2, v27, v37, v36, v12, v13);
      EnterCrit(1LL, 0LL);
      if ( v23 )
        EnterMitRitHazardCrit();
    }
    else
    {
      v4 = 1;
      DCEx = _GetDCEx(v3, 0LL, 3LL);
      GreBitBltInternal(a2, 0, 0, v12, v13, DCEx, v37, v36, 0x80CC0020, 0, 0);
      _ReleaseDC(DCEx);
    }
    if ( v20 && ((*(_DWORD *)(*((_QWORD *)v3 + 5) + 232LL) & 1) != 0 || (*((_DWORD *)v3 + 95) & 0x20000000) != 0) )
    {
      UnsetRedirectedWindow(v3, 8LL);
      *(_DWORD *)(*((_QWORD *)v3 + 5) + 232LL) &= ~1u;
      *((_DWORD *)v3 + 95) &= ~0x20000000u;
    }
    goto LABEL_39;
  }
  if ( (int)SetRedirectedWindow(v3) >= 0 )
  {
    if ( v5 )
      *((_DWORD *)v3 + 95) |= 0x20000000u;
    else
      *(_DWORD *)(*((_QWORD *)v3 + 5) + 232LL) |= 1u;
    v20 = 1;
    goto LABEL_27;
  }
  if ( (*(_BYTE *)(*((_QWORD *)v3 + 5) + 26LL) & 0x20) != 0 )
    v4 = 1;
LABEL_39:
  Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(&BugCheckParameter3);
  return v4;
}
