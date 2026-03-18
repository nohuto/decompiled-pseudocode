/*
 * XREFs of xxxSetDeskWallpaper @ 0x1C012E514
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0068630 (xxxSystemParametersInfo.c)
 * Callees:
 *     IsThreadDesktopComposed @ 0x1C0058D20 (IsThreadDesktopComposed.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00A0A68 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     xxxSendNotifyMessage @ 0x1C00AA4C0 (xxxSendNotifyMessage.c)
 *     ?xxxNotifyShellOfWallpaperChange@@YAHXZ @ 0x1C012E668 (-xxxNotifyShellOfWallpaperChange@@YAHXZ.c)
 *     DwmAsyncNotifyWallpaperChange @ 0x1C012E6E0 (DwmAsyncNotifyWallpaperChange.c)
 *     ?SetGlobalWallpaperSettings@@YAHPEBUtagWALLPAPERSETTINGS@@@Z @ 0x1C012E748 (-SetGlobalWallpaperSettings@@YAHPEBUtagWALLPAPERSETTINGS@@@Z.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x1C012E7F4 (LoadWallpaperFilenameFromRegistry.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall xxxSetDeskWallpaper(__int64 a1, char *a2)
{
  int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 CurrentProcess; // rax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  void *v13; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD v17[4]; // [rsp+30h] [rbp-248h] BYREF
  int v18; // [rsp+50h] [rbp-228h] BYREF
  char v19[524]; // [rsp+54h] [rbp-224h] BYREF

  memset(v19, 0, 0x200uLL);
  v4 = 0;
  v18 = 1;
  if ( g_pWallpaperSettings )
    RtlStringCchCopyW(v19, 256LL, (char *)(g_pWallpaperSettings + 4LL));
  else
    LoadWallpaperFilenameFromRegistry(a1, v19, 256LL);
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    LoadWallpaperFilenameFromRegistry(a1, v19, 256LL);
  }
  else if ( a2 != (char *)-2LL )
  {
    RtlStringCchCopyW(v19, 256LL, a2);
  }
  v5 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( v5 )
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 8) + 160LL);
  else
    v6 = 0LL;
  if ( (PsGetCurrentProcess(gptiCurrent) == gpepCSRSS
     || (CurrentProcess = PsGetCurrentProcess(gpepCSRSS), (unsigned int)PsIsProtectedProcess(CurrentProcess)))
    && v6 )
  {
    v17[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v17;
    ++*(_DWORD *)(v6 + 8);
    v17[1] = v6;
    v8 = xxxSendNotifyMessage((struct tagWND *)v6, 0x34u, 5LL, 0LL, 1);
    ThreadUnlock1(v16, v15);
  }
  else
  {
    v4 = 1;
    v8 = SetGlobalWallpaperSettings((const struct tagWALLPAPERSETTINGS *)&v18);
  }
  if ( v8 && v4 )
  {
    if ( (unsigned int)IsThreadDesktopComposed(gptiCurrent) )
    {
      v13 = (void *)ReferenceDwmApiPort(v10, v9, v11, v12);
      DwmAsyncNotifyWallpaperChange(v13);
    }
    xxxNotifyShellOfWallpaperChange();
  }
  return v8;
}
