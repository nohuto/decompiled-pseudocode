/*
 * XREFs of xxxSetDeskWallpaper @ 0x1C0152250
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C003A8E0 (xxxSystemParametersInfo.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C004DCF0 (xxxSendNotifyMessage.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C005E4A8 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     IsThreadDesktopComposed @ 0x1C008BBD0 (IsThreadDesktopComposed.c)
 *     ?xxxNotifyShellOfWallpaperChange@@YAHXZ @ 0x1C01523A4 (-xxxNotifyShellOfWallpaperChange@@YAHXZ.c)
 *     DwmAsyncNotifyWallpaperChange @ 0x1C015241C (DwmAsyncNotifyWallpaperChange.c)
 *     ?SetGlobalWallpaperSettings@@YAHPEBUtagWALLPAPERSETTINGS@@@Z @ 0x1C0152484 (-SetGlobalWallpaperSettings@@YAHPEBUtagWALLPAPERSETTINGS@@@Z.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x1C0152530 (LoadWallpaperFilenameFromRegistry.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall xxxSetDeskWallpaper(__int64 a1, char *a2)
{
  int v4; // ebp
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 CurrentProcess; // rax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  void *v15; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD v19[4]; // [rsp+30h] [rbp-248h] BYREF
  int v20; // [rsp+50h] [rbp-228h] BYREF
  char v21[524]; // [rsp+54h] [rbp-224h] BYREF

  memset(v21, 0, 0x200uLL);
  v4 = 0;
  v20 = 1;
  if ( g_pWallpaperSettings )
    RtlStringCchCopyW(v21, 256LL, (char *)(g_pWallpaperSettings + 4LL));
  else
    LoadWallpaperFilenameFromRegistry(a1, v21, 256LL);
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    LoadWallpaperFilenameFromRegistry(a1, v21, 256LL);
  }
  else if ( a2 != (char *)-2LL )
  {
    RtlStringCchCopyW(v21, 256LL, a2);
  }
  v6 = *(_QWORD *)(gptiCurrent + 416LL);
  if ( v6 )
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 8) + 160LL);
  else
    v7 = 0LL;
  if ( (PsGetCurrentProcess(gptiCurrent, v5) == gpepCSRSS
     || (CurrentProcess = PsGetCurrentProcess(gpepCSRSS, v8), (unsigned int)PsIsProtectedProcess(CurrentProcess)))
    && v7 )
  {
    v19[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v19;
    ++*(_DWORD *)(v7 + 8);
    v19[1] = v7;
    v10 = xxxSendNotifyMessage((struct tagWND *)v7, 0x34u, 5uLL, 0LL, 1);
    ThreadUnlock1(v18, v17);
  }
  else
  {
    v4 = 1;
    v10 = SetGlobalWallpaperSettings((const struct tagWALLPAPERSETTINGS *)&v20);
  }
  if ( v10 && v4 )
  {
    if ( (unsigned int)IsThreadDesktopComposed(gptiCurrent) )
    {
      v15 = (void *)ReferenceDwmApiPort(v12, v11, v13, v14);
      DwmAsyncNotifyWallpaperChange(v15);
    }
    xxxNotifyShellOfWallpaperChange();
  }
  return v10;
}
