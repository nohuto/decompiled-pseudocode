/*
 * XREFs of xxxSetLayeredWindow @ 0x1C0056D10
 * Callers:
 *     ComposeWindow @ 0x1C000B878 (ComposeWindow.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     xxxSetWindowStyle @ 0x1C0068470 (xxxSetWindowStyle.c)
 *     CreateFade @ 0x1C010E24C (CreateFade.c)
 * Callees:
 *     CreateSprite @ 0x1C000CFD8 (CreateSprite.c)
 *     TrackLayeredZorder @ 0x1C000F54C (TrackLayeredZorder.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C0012A30 (UserGetRedirectedWindowOrigin.c)
 *     IsDesktopWindow @ 0x1C0012B0C (IsDesktopWindow.c)
 *     DwmAsyncTextChange @ 0x1C0055C54 (DwmAsyncTextChange.c)
 *     IsWindowBeingDestroyed @ 0x1C0056CC4 (IsWindowBeingDestroyed.c)
 *     UpdateWindowSpriteDPI @ 0x1C0058A40 (UpdateWindowSpriteDPI.c)
 *     zzzUpdateLayeredWindow @ 0x1C0058F3C (zzzUpdateLayeredWindow.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0060E9C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     _GetTopLevelWindow @ 0x1C0062200 (_GetTopLevelWindow.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0065EE4 (IsToplevelWindowDesktopComposed.c)
 *     SendDwmIconChange @ 0x1C007E14C (SendDwmIconChange.c)
 *     xxxRedrawWindow @ 0x1C008E8E0 (xxxRedrawWindow.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     GreGetSprite @ 0x1C00FE75C (GreGetSprite.c)
 *     xxxUpdateThreadsWindows @ 0x1C020DBB8 (xxxUpdateThreadsWindows.c)
 */

__int64 __fastcall xxxSetLayeredWindow(struct tagWND *a1, int a2, __int64 *a3)
{
  int v3; // edi
  struct tagWND *TopLevelWindow; // rax
  __int64 v8; // rcx
  __int64 result; // rax
  unsigned int updated; // r14d
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  void *v17; // rax
  __int64 Sprite; // rax
  __int64 DCEx; // rax
  __int64 v20; // rdi
  __int64 RectRgnIndirect; // rax
  __int64 v22; // rdi
  __int64 v23; // rsi
  int v24; // edx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  _QWORD v28[4]; // [rsp+60h] [rbp-20h] BYREF
  int v29; // [rsp+C0h] [rbp+40h] BYREF
  int v30; // [rsp+C4h] [rbp+44h]
  int v31; // [rsp+C8h] [rbp+48h] BYREF
  int v32; // [rsp+CCh] [rbp+4Ch]

  v3 = 0;
  if ( a3 )
    *a3 = 0LL;
  TopLevelWindow = (struct tagWND *)GetTopLevelWindow(a1);
  if ( TopLevelWindow )
  {
    if ( TopLevelWindow == a1 )
    {
      v3 = 1;
    }
    else if ( *((_WORD *)a1 + 154) >= 0x602u )
    {
      v3 = 1;
    }
  }
  if ( (unsigned int)IsDesktopWindow((__int64)a1) && (unsigned int)IsWindowDesktopComposed(v8) )
    v3 = 1;
  if ( !v3 )
    return 2151546883LL;
  if ( (*((_DWORD *)a1 + 72) & 0x20) == 0 )
  {
    if ( !(unsigned int)IsWindowBeingDestroyed((__int64)a1) )
    {
      result = CreateSprite((HDEV)*gpDispInfo, (__int64)a1, (struct tagRECT *)a1 + 7, a3);
      updated = result;
      if ( (int)result < 0 )
        return result;
      SetOrClrWF(1LL, a1, 2568LL, 1LL);
      TrackLayeredZorder(a1, v11, v12, v13);
      v14 = ValidateHmonitorNoRip(*((_QWORD *)a1 + 44));
      UpdateWindowSpriteDPI(a1, v14);
      if ( (unsigned int)IsToplevelWindowDesktopComposed(a1, v15, v16) )
      {
        SendDwmIconChange(a1);
        v17 = (void *)ReferenceDwmApiPort();
        DwmAsyncTextChange(v17, *(_QWORD *)a1);
      }
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v29);
      zzzLockDisplayAreaAndInvalidateDCCache(a1, 17LL, 0LL);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v29);
      if ( (*((_BYTE *)a1 + 55) & 0x10) != 0 )
      {
        if ( !a2 )
          return updated;
        DCEx = _GetDCEx(*((_QWORD *)a1 + 11), 0LL, 3LL);
        v20 = DCEx;
        if ( DCEx )
        {
          v29 = 0;
          v30 = 0;
          UserGetRedirectedWindowOrigin(DCEx, (__int64)&v29);
          v31 = *((_DWORD *)a1 + 28) - v29;
          v32 = *((_DWORD *)a1 + 29) - v30;
          updated = zzzUpdateLayeredWindow(a1, v20, (__int64)&v31, 0, 0LL, 12, 0LL);
          _ReleaseDC(v20);
        }
      }
      else
      {
        a2 = 0;
      }
      if ( a2 )
      {
        RectRgnIndirect = GreCreateRectRgnIndirect((char *)a1 + 112);
        v22 = *((_QWORD *)a1 + 11);
        v23 = RectRgnIndirect;
        if ( v22 )
        {
          v28[0] = *(_QWORD *)(gptiCurrent + 376LL);
          *(_QWORD *)(gptiCurrent + 376LL) = v28;
          v28[1] = v22;
          v24 = *(_DWORD *)(v22 + 128);
          v25 = (unsigned int)-*(_DWORD *)(v22 + 132);
          ++*(_DWORD *)(v22 + 8);
          GreOffsetRgn(RectRgnIndirect, (unsigned int)-v24, v25);
        }
        xxxRedrawWindow((struct tagWND *)v22);
        if ( v22 )
          ThreadUnlock1(v27, v26);
        xxxUpdateThreadsWindows(gptiCurrent, a1, v23);
        GreDeleteObject(v23);
      }
      return updated;
    }
    return 2151546883LL;
  }
  Sprite = GreGetSprite(v8, *(_QWORD *)a1);
  *((_DWORD *)a1 + 72) = *((_DWORD *)a1 + 72) & 0xFFFFFF9F | 0x40;
  if ( a3 )
    *a3 = Sprite;
  return 0LL;
}
