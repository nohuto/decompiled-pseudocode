/*
 * XREFs of NtGdiExtEscape @ 0x14027EE60
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x14006FBA8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1400CE980 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400D02BC (-UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?GreExtEscape@@YAHPEAUHDC__@@HHPEADH1@Z @ 0x14016DE10 (-GreExtEscape@@YAHPEAUHDC__@@HHPEADH1@Z.c)
 *     PALLOCNOZ @ 0x140184030 (PALLOCNOZ.c)
 *     ?GreIsUMPD@@YA_NPEAUHDC__@@@Z @ 0x140224558 (-GreIsUMPD@@YA_NPEAUHDC__@@@Z.c)
 *     ?UmfdDispatchWinLogonEscape@@YAXPEAUtagUMFD_WINLOGON_ESCAPE_ARGUMENT@@@Z @ 0x1402254BC (-UmfdDispatchWinLogonEscape@@YAXPEAUtagUMFD_WINLOGON_ESCAPE_ARGUMENT@@@Z.c)
 *     GreNamedEscape @ 0x14027EC38 (GreNamedEscape.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x140282670 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?GreScalingDispatchEscape@@YAJPEAUtagGDISCALE_ESCAPE_ARGUMENT@@@Z @ 0x140290888 (-GreScalingDispatchEscape@@YAJPEAUtagGDISCALE_ESCAPE_ARGUMENT@@@Z.c)
 *     Feature_Servicing_UmfdDeadlockFix__private_IsEnabledDeviceUsageNoInline @ 0x14032A224 (Feature_Servicing_UmfdDeadlockFix__private_IsEnabledDeviceUsageNoInline.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14033A28C (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall NtGdiExtEscape(
        HDC a1,
        const void *a2,
        int a3,
        unsigned int a4,
        signed int a5,
        struct tagUMFD_WINLOGON_ESCAPE_ARGUMENT *a6,
        signed int a7,
        char *a8)
{
  signed int v8; // ebx
  unsigned int v9; // r13d
  int v10; // r12d
  int v11; // r15d
  char *v12; // rsi
  struct tagUMFD_WINLOGON_ESCAPE_ARGUMENT *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // r8
  signed int v19; // eax
  __int64 v20; // r8
  __int64 v21; // rdx
  int v22; // ecx
  __int64 SessionState; // rax
  unsigned int v24; // eax
  __int64 v25; // rax
  unsigned int v26; // eax
  wchar_t *Str1; // [rsp+60h] [rbp-348h]
  unsigned int WinLogonW32PID; // [rsp+70h] [rbp-338h]
  __int64 v33; // [rsp+90h] [rbp-318h] BYREF
  __int128 v34; // [rsp+98h] [rbp-310h]
  __int64 v35; // [rsp+A8h] [rbp-300h]
  __int64 v36; // [rsp+B0h] [rbp-2F8h] BYREF
  __int128 v37; // [rsp+B8h] [rbp-2F0h]
  __int64 v38; // [rsp+C8h] [rbp-2E0h]
  _BYTE v39[56]; // [rsp+D0h] [rbp-2D8h] BYREF
  char v40; // [rsp+108h] [rbp-2A0h] BYREF
  char v41; // [rsp+128h] [rbp-280h] BYREF
  _WORD v42[264]; // [rsp+150h] [rbp-258h] BYREF

  v8 = a7;
  Str1 = 0LL;
  v9 = -1;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v10 = 0;
  v11 = 0;
  v12 = 0LL;
  v13 = 0LL;
  if ( a5 < 0 || a7 < 0 || a3 < 0 || a1 && a2 )
    goto LABEL_75;
  WinLogonW32PID = GrepGetWinLogonW32PID();
  if ( WinLogonW32PID && WinLogonW32PID == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
  {
    UmfdDispatchWinLogonEscape(a6);
    return 0LL;
  }
  if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost(v15, v14, v16) )
  {
    UmfdDispatchEscape(a6);
    return 0LL;
  }
  if ( a2 )
  {
    if ( a3 > 260 )
      goto LABEL_75;
    Str1 = v42;
    GreProbeAndReadFromUntrustedVa(v42, 2LL * a3, a2, 2LL * a3, 2uLL);
    v42[a3] = 0;
    v8 = a7;
  }
  if ( Str1 && !_wcsicmp(Str1, L"GSESC") && (int)GreScalingDispatchEscape(a6) >= 0 )
    return 0LL;
  if ( a5 )
  {
    if ( GreIsUMPD(a1) )
    {
      v19 = a5;
      if ( a5 > 32 )
      {
        v13 = a6;
        GreProbeForReadFromUntrustedVa(a6, a5, 1uLL);
        goto LABEL_29;
      }
    }
    else
    {
      v19 = a5;
      if ( a5 > 32 )
      {
        if ( a5 <= 40960000 )
        {
          v13 = (struct tagUMFD_WINLOGON_ESCAPE_ARGUMENT *)PALLOCNOZ(a5, 1886221383LL, v18);
          v19 = a5;
        }
        if ( !v13 )
          goto LABEL_75;
        v10 = 1;
        goto LABEL_28;
      }
    }
    v13 = (struct tagUMFD_WINLOGON_ESCAPE_ARGUMENT *)&v40;
LABEL_28:
    GreProbeAndReadFromUntrustedVa(v13, v19, a6, v19, 1uLL);
  }
LABEL_29:
  if ( v8 )
  {
    if ( GreIsUMPD(a1) )
    {
      v12 = a8;
      GreProbeForWriteToUntrustedVa(a8, v8, 1uLL);
    }
    else
    {
      if ( v8 > 32 )
      {
        if ( v8 <= 40960000 )
          v12 = (char *)PALLOCNOZ(v8, 1886221383LL, v20);
        if ( !v12 )
          goto LABEL_75;
        v11 = 1;
      }
      else
      {
        v12 = &v41;
      }
      memset_0(v12, 0, v8);
    }
  }
  if ( (unsigned int)Feature_Servicing_UmfdDeadlockFix__private_IsEnabledDeviceUsageNoInline() )
  {
    SessionState = W32GetSessionState(v22, v21);
    EUDCCountRegion::EUDCCountRegion(
      (EUDCCountRegion *)v39,
      (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4864LL));
    if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v39) )
    {
      if ( v10 && v13 )
        PushThreadGuardedObject(&v33, v13, Win32FreePool);
      if ( v11 && v12 )
        PushThreadGuardedObject(&v36, v12, Win32FreePool);
      if ( Str1 )
        v24 = GreNamedEscape(Str1, a4, a5, v13, v8, v12);
      else
        v24 = GreExtEscape(a1, a4, a5, (char *)v13, v8, v12);
      v9 = v24;
      if ( v10 && v13 )
        PopThreadGuardedObject(&v33);
      if ( v11 && v12 )
        PopThreadGuardedObject(&v36);
    }
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v39);
  }
  else
  {
    if ( v10 && v13 )
      PushThreadGuardedObject(&v33, v13, Win32FreePool);
    if ( v11 && v12 )
      PushThreadGuardedObject(&v36, v12, Win32FreePool);
    v25 = W32GetSessionState(v22, v21);
    EUDCCountRegion::EUDCCountRegion(
      (EUDCCountRegion *)v39,
      (struct Gre::Font::GLOBALS *)(*(_QWORD *)(v25 + 96) + 4864LL));
    if ( Str1 )
      v26 = GreNamedEscape(Str1, a4, a5, v13, v8, v12);
    else
      v26 = GreExtEscape(a1, a4, a5, (char *)v13, v8, v12);
    v9 = v26;
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v39);
    if ( v10 && v13 )
      PopThreadGuardedObject(&v33);
    if ( v11 && v12 )
      PopThreadGuardedObject(&v36);
  }
  if ( v8 && v12 != a8 )
    GreProbeAndWriteToUntrustedVa(a8, v8, v12, v8, 1uLL);
LABEL_75:
  if ( v11 && v12 )
    Win32FreePool(v12);
  if ( v10 )
  {
    if ( v13 )
      Win32FreePool(v13);
  }
  return v9;
}
