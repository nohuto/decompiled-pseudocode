/*
 * XREFs of zzzUpdateWindowsAfterModeChange @ 0x1C00D7A00
 * Callers:
 *     zzzResetSharedDesktops @ 0x1C00D8AA0 (zzzResetSharedDesktops.c)
 * Callees:
 *     IsDesktopWindow @ 0x1C0063530 (IsDesktopWindow.c)
 *     GetNewMonitor @ 0x1C0070AA8 (GetNewMonitor.c)
 *     UpdateWindowMonitor @ 0x1C0072260 (UpdateWindowMonitor.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0074E94 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00A7A9C (xxxFlushDeferredWindowEvents.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00D7CB8 (DeleteOrSetRedirectionBitmap.c)
 *     RecreateRedirectionBitmap @ 0x1C00D7E4C (RecreateRedirectionBitmap.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01DE224 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
HANDLE __fastcall zzzUpdateWindowsAfterModeChange(int a1)
{
  _BYTE *v2; // rdi
  _BYTE *v3; // r14
  __m128i *v4; // rbx
  __int64 NewMonitor; // rax
  int v6; // eax
  int v7; // r9d
  int v8; // esi
  HANDLE result; // rax
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
      NewMonitor = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)v2 + 344LL));
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
          DeleteOrSetRedirectionBitmap(v4, v10, 1LL);
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
  result = (HANDLE)gdwDeferWinEvent;
  if ( --gdwDeferWinEvent == 1 && gpPendingNotifies )
    return xxxFlushDeferredWindowEvents();
  return result;
}
