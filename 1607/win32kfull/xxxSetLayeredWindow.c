/*
 * XREFs of xxxSetLayeredWindow @ 0x1C00650AC
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     ComposeWindow @ 0x1C0096658 (ComposeWindow.c)
 *     xxxSetWindowStyle @ 0x1C00A1758 (xxxSetWindowStyle.c)
 *     CreateFade @ 0x1C013FE3C (CreateFade.c)
 * Callees:
 *     zzzUpdateLayeredWindow @ 0x1C0053734 (zzzUpdateLayeredWindow.c)
 *     xxxRedrawWindow @ 0x1C0059F20 (xxxRedrawWindow.c)
 *     TrackLayeredZorder @ 0x1C0062A4C (TrackLayeredZorder.c)
 *     UpdateWindowSpriteDPI @ 0x1C0062C8C (UpdateWindowSpriteDPI.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C00632E0 (UserGetRedirectedWindowOrigin.c)
 *     IsDesktopWindow @ 0x1C0063530 (IsDesktopWindow.c)
 *     CreateSprite @ 0x1C0065B68 (CreateSprite.c)
 *     IsWindowBeingDestroyed @ 0x1C0065CC0 (IsWindowBeingDestroyed.c)
 *     DwmAsyncTextChange @ 0x1C0067F5C (DwmAsyncTextChange.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00723B0 (IsToplevelWindowDesktopComposed.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0074E94 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     _GetTopLevelWindow @ 0x1C0075DF0 (_GetTopLevelWindow.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     SendDwmIconChange @ 0x1C00AAFF0 (SendDwmIconChange.c)
 *     GreGetSprite @ 0x1C012D374 (GreGetSprite.c)
 *     xxxUpdateThreadsWindows @ 0x1C02053DC (xxxUpdateThreadsWindows.c)
 */

__int64 __fastcall xxxSetLayeredWindow(__m128i *a1, __int64 a2, __int64 *a3, __int64 a4)
{
  int v4; // edi
  int v6; // r15d
  struct tagWND *TopLevelWindow; // rax
  __int64 v9; // rcx
  LONG *m128i_i32; // r12
  __int64 result; // rax
  unsigned int updated; // r14d
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  void *v16; // rax
  __int64 Sprite; // rax
  __int64 DCEx; // rax
  HDC v19; // rdi
  LONG v20; // edx
  LONG v21; // r8d
  LONG v22; // ecx
  LONG v23; // eax
  __int64 RectRgnIndirect; // rax
  __int64 v25; // rdi
  HRGN v26; // rsi
  int v27; // edx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  struct tagSIZE v31; // [rsp+50h] [rbp-30h] BYREF
  struct tagPOINT v32; // [rsp+58h] [rbp-28h] BYREF
  _QWORD v33[4]; // [rsp+60h] [rbp-20h] BYREF
  int v34; // [rsp+C0h] [rbp+40h] BYREF
  int v35; // [rsp+C4h] [rbp+44h]
  struct tagPOINT v36; // [rsp+C8h] [rbp+48h] BYREF

  v4 = 0;
  v6 = a2;
  if ( a3 )
    *a3 = 0LL;
  TopLevelWindow = (struct tagWND *)GetTopLevelWindow(a1, a2, a3, a4);
  if ( TopLevelWindow )
  {
    if ( TopLevelWindow == (struct tagWND *)a1 )
    {
      v4 = 1;
    }
    else if ( a1[19].m128i_i16[2] >= 0x602u )
    {
      v4 = 1;
    }
  }
  if ( (unsigned int)IsDesktopWindow((__int64)a1) && (unsigned int)IsWindowDesktopComposed(v9) )
    v4 = 1;
  if ( !v4 )
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
      v13 = ValidateHmonitorNoRip(a1[21].m128i_i64[1]);
      UpdateWindowSpriteDPI((__int64)a1, v13);
      if ( (unsigned int)IsToplevelWindowDesktopComposed(a1, v14, v15) )
      {
        SendDwmIconChange((struct tagWND *)a1);
        v16 = (void *)ReferenceDwmApiPort();
        DwmAsyncTextChange(v16);
      }
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v34);
      zzzLockDisplayAreaAndInvalidateDCCache(a1, 17LL);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v34);
      if ( (a1[3].m128i_i8[7] & 0x10) != 0 )
      {
        if ( !v6 )
          return updated;
        DCEx = _GetDCEx(a1[5].m128i_i64[1], 0LL, 3LL);
        v19 = (HDC)DCEx;
        if ( DCEx )
        {
          v20 = *m128i_i32;
          v21 = a1[7].m128i_i32[1];
          v22 = a1[7].m128i_i32[2] - *m128i_i32;
          v34 = 0;
          v35 = 0;
          v23 = a1[7].m128i_i32[3] - v21;
          v32.x = v20;
          v31.cx = v22;
          v31.cy = v23;
          v32.y = v21;
          UserGetRedirectedWindowOrigin((__int64)v19, (__int64)&v34);
          v36.x = *m128i_i32 - v34;
          v36.y = a1[7].m128i_i32[1] - v35;
          updated = zzzUpdateLayeredWindow(a1, v19, &v32, &v31, v19, &v36, 0, 0LL, 12, 0LL);
          _ReleaseDC(v19);
        }
      }
      else
      {
        v6 = 0;
      }
      if ( v6 )
      {
        RectRgnIndirect = GreCreateRectRgnIndirect(&a1[7]);
        v25 = a1[5].m128i_i64[1];
        v26 = (HRGN)RectRgnIndirect;
        if ( v25 )
        {
          v33[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v33;
          v33[1] = v25;
          v27 = *(_DWORD *)(v25 + 128);
          v28 = (unsigned int)-*(_DWORD *)(v25 + 132);
          ++*(_DWORD *)(v25 + 8);
          GreOffsetRgn(RectRgnIndirect, (unsigned int)-v27, v28);
        }
        xxxRedrawWindow((struct tagWND *)v25, 0LL, v26, 1157);
        if ( v25 )
          ThreadUnlock1(v30, v29);
        xxxUpdateThreadsWindows(gptiCurrent, a1, v26);
        GreDeleteObject(v26);
      }
      return updated;
    }
    return 2151546883LL;
  }
  Sprite = GreGetSprite(v9, a1->m128i_i64[0]);
  a1[18].m128i_i32[0] = a1[18].m128i_i32[0] & 0xFFFFFF9F | 0x40;
  if ( a3 )
    *a3 = Sprite;
  return 0LL;
}
