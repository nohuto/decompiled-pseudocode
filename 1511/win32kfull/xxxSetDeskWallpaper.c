/*
 * XREFs of xxxSetDeskWallpaper @ 0x1C010D0A0
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0126360 (xxxSystemParametersInfo.c)
 * Callees:
 *     IsThreadDesktopComposed @ 0x1C00662F4 (IsThreadDesktopComposed.c)
 *     xxxSendNotifyMessage @ 0x1C0078B80 (xxxSendNotifyMessage.c)
 *     ?xxxNotifyShellOfWallpaperChange@@YAHXZ @ 0x1C010D1F4 (-xxxNotifyShellOfWallpaperChange@@YAHXZ.c)
 *     DwmAsyncNotifyWallpaperChange @ 0x1C010D26C (DwmAsyncNotifyWallpaperChange.c)
 *     ?SetGlobalWallpaperSettings@@YAHPEBUtagWALLPAPERSETTINGS@@@Z @ 0x1C010D2D4 (-SetGlobalWallpaperSettings@@YAHPEBUtagWALLPAPERSETTINGS@@@Z.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x1C010D380 (LoadWallpaperFilenameFromRegistry.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C011DDB4 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall xxxSetDeskWallpaper(__int64 a1, const unsigned __int16 *a2)
{
  int v4; // ebp
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 CurrentProcess; // rax
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  void *v19; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD v23[4]; // [rsp+30h] [rbp-248h] BYREF
  int v24; // [rsp+50h] [rbp-228h] BYREF
  unsigned __int16 v25[262]; // [rsp+54h] [rbp-224h] BYREF

  memset(v25, 0, 0x200uLL);
  v4 = 0;
  v24 = 1;
  if ( g_pWallpaperSettings )
    RtlStringCchCopyW(v25, 0x100uLL, (const unsigned __int16 *)(g_pWallpaperSettings + 4LL));
  else
    LoadWallpaperFilenameFromRegistry(a1, v25, 256LL);
  if ( (unsigned __int64)a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    LoadWallpaperFilenameFromRegistry(a1, v25, 256LL);
  }
  else if ( a2 != (const unsigned __int16 *)-2LL )
  {
    RtlStringCchCopyW(v25, 0x100uLL, a2);
  }
  v8 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( v8 )
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 8) + 160LL);
  else
    v9 = 0LL;
  if ( (PsGetCurrentProcess(gptiCurrent, v5, v6, v7) == gpepCSRSS
     || (CurrentProcess = PsGetCurrentProcess(gpepCSRSS, v10, v11, v12),
         (unsigned int)PsIsProtectedProcess(CurrentProcess)))
    && v9 )
  {
    v23[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v23;
    ++*(_DWORD *)(v9 + 8);
    v23[1] = v9;
    v14 = xxxSendNotifyMessage((struct tagWND *)v9, 0x34u, 5uLL, 0LL, 1);
    ThreadUnlock1(v22, v21);
  }
  else
  {
    v4 = 1;
    v14 = SetGlobalWallpaperSettings((const struct tagWALLPAPERSETTINGS *)&v24);
  }
  if ( v14 && v4 )
  {
    if ( (unsigned int)IsThreadDesktopComposed(gptiCurrent) )
    {
      v19 = (void *)ReferenceDwmApiPort(v16, v15, v17, v18);
      DwmAsyncNotifyWallpaperChange(v19);
    }
    xxxNotifyShellOfWallpaperChange();
  }
  return v14;
}
