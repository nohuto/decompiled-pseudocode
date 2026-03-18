/*
 * XREFs of xxxSetLayeredWindow @ 0x1C007D4C8
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     xxxSetWindowStyle @ 0x1C0058020 (xxxSetWindowStyle.c)
 *     ComposeWindow @ 0x1C0080214 (ComposeWindow.c)
 *     CreateFade @ 0x1C0139CBC (CreateFade.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C004EC70 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     _GetTopLevelWindow @ 0x1C004FBD0 (_GetTopLevelWindow.c)
 *     xxxRedrawWindow @ 0x1C00520F0 (xxxRedrawWindow.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00569D8 (IsToplevelWindowDesktopComposed.c)
 *     zzzUpdateLayeredWindow @ 0x1C006BA10 (zzzUpdateLayeredWindow.c)
 *     DwmAsyncTextChange @ 0x1C00743D8 (DwmAsyncTextChange.c)
 *     TrackLayeredZorder @ 0x1C007A464 (TrackLayeredZorder.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C007A940 (UserGetRedirectedWindowOrigin.c)
 *     IsDesktopWindow @ 0x1C007AA1C (IsDesktopWindow.c)
 *     UpdateWindowSpriteDPI @ 0x1C007BDC4 (UpdateWindowSpriteDPI.c)
 *     CreateSprite @ 0x1C007DF3C (CreateSprite.c)
 *     IsWindowBeingDestroyed @ 0x1C007E090 (IsWindowBeingDestroyed.c)
 *     SendDwmIconChange @ 0x1C007ED30 (SendDwmIconChange.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     GreGetSprite @ 0x1C0109EFC (GreGetSprite.c)
 *     xxxUpdateThreadsWindows @ 0x1C020E344 (xxxUpdateThreadsWindows.c)
 */

__int64 __fastcall xxxSetLayeredWindow(__m128i *a1, int a2, __int64 *a3)
{
  int v3; // edi
  struct tagWND *TopLevelWindow; // rax
  __int64 v8; // rcx
  LONG *m128i_i32; // r12
  __int64 result; // rax
  unsigned int updated; // r14d
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  void *v18; // rax
  __int64 Sprite; // rax
  __int64 DCEx; // rax
  __int64 v21; // rdi
  LONG v22; // edx
  LONG v23; // r8d
  LONG v24; // ecx
  LONG v25; // ecx
  __int64 RectRgnIndirect; // rax
  __int64 v27; // rdi
  HRGN v28; // rsi
  int v29; // edx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  struct tagSIZE v33; // [rsp+50h] [rbp-30h] BYREF
  struct tagPOINT v34; // [rsp+58h] [rbp-28h] BYREF
  _QWORD v35[4]; // [rsp+60h] [rbp-20h] BYREF
  int v36; // [rsp+C0h] [rbp+40h] BYREF
  int v37; // [rsp+C4h] [rbp+44h]
  int v38; // [rsp+C8h] [rbp+48h] BYREF
  int v39; // [rsp+CCh] [rbp+4Ch]

  v3 = 0;
  if ( a3 )
    *a3 = 0LL;
  TopLevelWindow = (struct tagWND *)GetTopLevelWindow((__int64)a1);
  if ( TopLevelWindow )
  {
    if ( TopLevelWindow == (struct tagWND *)a1 )
    {
      v3 = 1;
    }
    else if ( a1[19].m128i_i16[2] >= 0x602u )
    {
      v3 = 1;
    }
  }
  if ( (unsigned int)IsDesktopWindow((__int64)a1) && (unsigned int)IsWindowDesktopComposed(v8) )
    v3 = 1;
  if ( !v3 )
    return 2151546883LL;
  if ( (a1[18].m128i_i32[0] & 0x20) == 0 )
  {
    if ( !(unsigned int)IsWindowBeingDestroyed(a1) )
    {
      m128i_i32 = a1[7].m128i_i32;
      result = CreateSprite((HDEV)*gpDispInfo);
      updated = result;
      if ( (int)result < 0 )
        return result;
      SetOrClrWF(1LL, a1, 2568LL, 1LL);
      TrackLayeredZorder((struct tagWND *)a1);
      v12 = ValidateHmonitorNoRip(a1[22].m128i_i64[0]);
      UpdateWindowSpriteDPI(a1->m128i_i64, v12, v13);
      if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      {
        SendDwmIconChange(a1);
        v18 = (void *)ReferenceDwmApiPort(v15, v14, v16, v17);
        DwmAsyncTextChange(v18, a1->m128i_i64[0]);
      }
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v36);
      zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 17, 0LL);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v36);
      if ( (a1[3].m128i_i8[7] & 0x10) != 0 )
      {
        if ( !a2 )
          return updated;
        DCEx = _GetDCEx(a1[5].m128i_i64[1], 0LL, 3LL);
        v21 = DCEx;
        if ( DCEx )
        {
          v22 = *m128i_i32;
          v23 = a1[7].m128i_i32[1];
          v24 = a1[7].m128i_i32[2] - *m128i_i32;
          v36 = 0;
          v37 = 0;
          v33.cx = v24;
          v25 = a1[7].m128i_i32[3] - v23;
          v34.x = v22;
          v33.cy = v25;
          v34.y = v23;
          UserGetRedirectedWindowOrigin(DCEx, (__int64)&v36);
          v38 = *m128i_i32 - v36;
          v39 = a1[7].m128i_i32[1] - v37;
          updated = zzzUpdateLayeredWindow(a1, v21, &v34, &v33, v21, (__int64)&v38, 0, 0LL, 0xCu, 0LL);
          _ReleaseDC(v21);
        }
      }
      else
      {
        a2 = 0;
      }
      if ( a2 )
      {
        RectRgnIndirect = GreCreateRectRgnIndirect(&a1[7]);
        v27 = a1[5].m128i_i64[1];
        v28 = (HRGN)RectRgnIndirect;
        if ( v27 )
        {
          v35[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v35;
          v35[1] = v27;
          v29 = *(_DWORD *)(v27 + 128);
          v30 = (unsigned int)-*(_DWORD *)(v27 + 132);
          ++*(_DWORD *)(v27 + 8);
          GreOffsetRgn(RectRgnIndirect, (unsigned int)-v29, v30);
        }
        xxxRedrawWindow((struct tagWND *)v27, 0LL, v28, 1157);
        if ( v27 )
          ThreadUnlock1(v32, v31);
        xxxUpdateThreadsWindows(gptiCurrent, a1, v28);
        GreDeleteObject(v28);
      }
      return updated;
    }
    return 2151546883LL;
  }
  Sprite = GreGetSprite(v8, a1->m128i_i64[0]);
  a1[18].m128i_i32[0] = a1[18].m128i_i32[0] & 0xFFFFFF9F | 0x40;
  if ( a3 )
    *a3 = Sprite;
  return 0LL;
}
