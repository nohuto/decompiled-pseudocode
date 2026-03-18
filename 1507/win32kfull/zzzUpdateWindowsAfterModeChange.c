/*
 * XREFs of zzzUpdateWindowsAfterModeChange @ 0x1C000A564
 * Callers:
 *     zzzResetSharedDesktops @ 0x1C003DE30 (zzzResetSharedDesktops.c)
 * Callees:
 *     RecreateRedirectionBitmap @ 0x1C000B580 (RecreateRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C000BF8C (DeleteOrSetRedirectionBitmap.c)
 *     IsDesktopWindow @ 0x1C0012B0C (IsDesktopWindow.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C004FB28 (xxxFlushDeferredWindowEvents.c)
 *     UpdateWindowMonitor @ 0x1C005C120 (UpdateWindowMonitor.c)
 *     GetNewMonitor @ 0x1C005C238 (GetNewMonitor.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0060E9C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01E7554 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzUpdateWindowsAfterModeChange(int a1)
{
  _BYTE *v2; // rdi
  _BYTE *v3; // r14
  __int64 v4; // rbx
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // eax
  int v9; // r9d
  int v10; // esi
  __int64 result; // rax
  HBITMAP v12; // [rsp+70h] [rbp+18h] BYREF
  char v13; // [rsp+78h] [rbp+20h] BYREF

  ++gdwDeferWinEvent;
  GreLockVisRgn(*gpDispInfo);
  v2 = (_BYTE *)gSharedInfo[1];
  v3 = &v2[24 * giheLast];
  while ( v2 <= v3 )
  {
    if ( v2[16] == 1 )
    {
      v4 = *(_QWORD *)v2;
      if ( !ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)v2 + 352LL)) )
        GetNewMonitor((struct tagWND *)v4, 0LL, 0LL);
      UpdateWindowMonitor((struct tagWND *)v4);
      if ( (*(_BYTE *)(v4 + 51) & 0x20) != 0
        && (*(_BYTE *)(v4 + 50) & 0x20) == 0
        && (a1 || (unsigned int)IsWindowDesktopComposed(v4)) )
      {
        *(_DWORD *)(v4 + 288) &= ~0x80000u;
        v5 = RecreateRedirectionBitmap((struct tagWND *)v4, 0, (__int64)&v12);
        v8 = IsDesktopWindow(v4, v6, v7, v5);
        v10 = v8;
        if ( v12 )
        {
          if ( !v8
            && v9 < 0
            && (*(_DWORD *)(v4 + 288) & 0x20) != 0
            && (unsigned int)RestoreOldRedirectionBitmap((struct tagWND *)v4, v12) )
          {
            v12 = 0LL;
            goto LABEL_4;
          }
          DeleteOrSetRedirectionBitmap(v4, v12, 1LL);
        }
        if ( v10 )
        {
          UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v13);
          zzzLockDisplayAreaAndInvalidateDCCache(v4, 0LL, 0LL);
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v13);
        }
      }
    }
LABEL_4:
    v2 += 24;
  }
  GreUnlockVisRgn(*gpDispInfo);
  result = gdwDeferWinEvent;
  if ( --gdwDeferWinEvent == 1 && gpPendingNotifies )
    return xxxFlushDeferredWindowEvents();
  return result;
}
