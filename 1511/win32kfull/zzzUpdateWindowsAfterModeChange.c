/*
 * XREFs of zzzUpdateWindowsAfterModeChange @ 0x1C009AA24
 * Callers:
 *     zzzResetSharedDesktops @ 0x1C009A600 (zzzResetSharedDesktops.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C004EC70 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     UpdateWindowMonitor @ 0x1C006CF60 (UpdateWindowMonitor.c)
 *     GetNewMonitor @ 0x1C006DEC0 (GetNewMonitor.c)
 *     IsDesktopWindow @ 0x1C007AA1C (IsDesktopWindow.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C007F730 (DeleteOrSetRedirectionBitmap.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00907F4 (xxxFlushDeferredWindowEvents.c)
 *     RecreateRedirectionBitmap @ 0x1C009AB98 (RecreateRedirectionBitmap.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01E79C4 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzUpdateWindowsAfterModeChange(int a1)
{
  _BYTE *v2; // rdi
  _BYTE *v3; // r14
  __m128i *v4; // rbx
  __int64 NewMonitor; // rax
  int v6; // eax
  int v7; // r9d
  int v8; // esi
  __int64 result; // rax
  HBITMAP v10; // [rsp+70h] [rbp+18h] BYREF
  char v11; // [rsp+78h] [rbp+20h] BYREF

  ++gdwDeferWinEvent;
  GreLockVisRgn(*gpDispInfo);
  v2 = (_BYTE *)gSharedInfo[1];
  v3 = &v2[24 * giheLast];
  while ( v2 <= v3 )
  {
    if ( v2[16] == 1 )
    {
      v4 = *(__m128i **)v2;
      NewMonitor = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)v2 + 352LL));
      if ( !NewMonitor )
        NewMonitor = GetNewMonitor(v4, 0LL, 0LL);
      UpdateWindowMonitor((struct tagWND *)v4, NewMonitor);
      if ( (v4[3].m128i_i8[3] & 0x20) != 0
        && (v4[3].m128i_i8[2] & 0x20) == 0
        && (a1 || (unsigned int)IsWindowDesktopComposed(v4)) )
      {
        v4[18].m128i_i32[0] &= ~0x80000u;
        RecreateRedirectionBitmap((struct tagWND *)v4, 0, (__int64)&v10);
        v6 = IsDesktopWindow((__int64)v4);
        v8 = v6;
        if ( v10 )
        {
          if ( !v6
            && v7 < 0
            && (v4[18].m128i_i32[0] & 0x20) != 0
            && (unsigned int)RestoreOldRedirectionBitmap((struct tagWND *)v4, v10) )
          {
            v10 = 0LL;
            goto LABEL_4;
          }
          DeleteOrSetRedirectionBitmap((__int64)v4, (__int64)v10, 1);
        }
        if ( v8 )
        {
          UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v11);
          zzzLockDisplayAreaAndInvalidateDCCache((__int64)v4, 0, 0LL);
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v11);
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
