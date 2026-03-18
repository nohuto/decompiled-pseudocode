/*
 * XREFs of xxxDrawWindowFrame @ 0x14025B5E8
 * Callers:
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x140121918 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1402D87C4 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     GetCaptionHeight @ 0x140032E38 (GetCaptionHeight.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxDrawCaptionBar @ 0x140122F88 (xxxDrawCaptionBar.c)
 *     GetWindowBorders @ 0x140123A0C (GetWindowBorders.c)
 *     DrawEdge @ 0x1401266B0 (DrawEdge.c)
 *     IsVisible @ 0x140128400 (IsVisible.c)
 *     GetRect @ 0x14012B140 (GetRect.c)
 *     Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline @ 0x1401D90A0 (Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline.c)
 *     xxxDrawScrollBar @ 0x1401F0344 (xxxDrawScrollBar.c)
 *     ?UserModeSupportsUserModeScrollBars@NonClient@Scrollbar@@YA_NXZ @ 0x14023EF80 (-UserModeSupportsUserModeScrollBars@NonClient@Scrollbar@@YA_NXZ.c)
 *     xxxMenuBarDraw @ 0x14024FBA4 (xxxMenuBarDraw.c)
 *     DrawSize @ 0x140258578 (DrawSize.c)
 *     xxxClientDrawScrollBar @ 0x1402D7DB4 (xxxClientDrawScrollBar.c)
 *     xxxClientDrawSize @ 0x1402D7E84 (xxxClientDrawSize.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall xxxDrawWindowFrame(const struct tagWND *a1, Gre::Base *a2, __int16 a3)
{
  __int64 v6; // rdx
  char v7; // al
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int v10; // r8d
  unsigned int WindowBorders; // esi
  __int64 v12; // rcx
  unsigned __int32 v13; // r14d
  _BYTE *v14; // rdx
  char v15; // r8
  bool v16; // cl
  int v17; // r8d
  __int32 v18; // r14d
  __int64 v19; // rax
  unsigned __int8 v20; // dl
  __int64 v21; // rdx
  Scrollbar::NonClient *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdx
  Scrollbar::NonClient *v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdx
  Scrollbar::NonClient *v28; // rcx
  __int64 v29; // rcx
  __m128i v30; // [rsp+20h] [rbp-30h] BYREF
  __int128 v31; // [rsp+30h] [rbp-20h] BYREF

  v31 = 0LL;
  if ( (unsigned int)IsVisible((__int64)a1) )
  {
    v6 = *((_QWORD *)a1 + 5);
    v7 = *(_BYTE *)(v6 + 17);
    if ( (v7 & 1) == 0 || v7 < 0 )
    {
      v8 = *(_QWORD *)(v6 + 88) - *(_QWORD *)(v6 + 104);
      if ( !v8 )
        v8 = *(_QWORD *)(v6 + 96) - *(_QWORD *)(v6 + 112);
      if ( v8 && (*(_QWORD *)(v6 + 136) || (unsigned int)GreGetClipBox(a2, &v31, 1LL) != 1) )
      {
        v9 = *((_QWORD *)a1 + 5);
        v30 = 0LL;
        if ( (*(_BYTE *)(v9 + 31) & 0x20) == 0 || (*(_BYTE *)(v9 + 17) & 1) != 0 )
        {
          WindowBorders = GetWindowBorders(*(_DWORD *)(v9 + 28), *(_DWORD *)(v9 + 24));
          GetRect(a1, (__int64)&v30, 34);
          v12 = *((_QWORD *)a1 + 5);
          v30.m128i_i32[0] += WindowBorders;
          v13 = v30.m128i_i32[1] + WindowBorders;
          v30.m128i_i32[2] -= WindowBorders;
          v30.m128i_i32[3] -= WindowBorders;
          if ( (((a3 & 0x2000) == 0) & *(_BYTE *)(v12 + 16)) != 0 )
            v13 += xxxMenuBarDraw(a1, (HDC)a2, WindowBorders, WindowBorders);
          v14 = (_BYTE *)*((_QWORD *)a1 + 5);
          v15 = v14[30];
          if ( (v15 & 0xC0) != 0 )
            goto LABEL_23;
          v16 = 0;
          if ( (v15 & 4) == 0 )
            v16 = (v14[24] & 1) == 0;
          if ( !v16 || (v14[25] & 1) != 0 || (v14[26] & 2) != 0 && (v14[17] & 1) == 0 )
          {
LABEL_23:
            v17 = a3 & 0x2000 | 0x900D;
            if ( (a3 & 1) == 0 )
              v17 = a3 & 0x2000 | 0x900C;
            xxxDrawCaptionBar(a1, a2, v17 | 0x800);
          }
          v18 = GetCaptionHeight((__int64)a1) + v13;
          v19 = *((_QWORD *)a1 + 5);
          v30.m128i_i32[1] = v18;
          if ( (*(_BYTE *)(v19 + 20) & 0x10) != 0 )
          {
            WindowBorders += 2;
            DrawEdge((HDC)a2, &v30, 0xAu, 8207);
          }
          v20 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL);
          if ( (((a3 & 0x2000) == 0) & (v20 >> 1)) != 0 )
          {
            if ( (v20 & 4) != 0 )
            {
              if ( (unsigned int)Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline()
                && Scrollbar::NonClient::UserModeSupportsUserModeScrollBars(v22, v21) )
              {
                if ( (_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent(v23) + 130, 0, 0) & 1) == 0 )
                  xxxClientDrawSize(
                    *(_QWORD *)a1,
                    a2,
                    WindowBorders,
                    WindowBorders,
                    v30.m128i_i64[0],
                    v30.m128i_i64[1],
                    v31,
                    *((_QWORD *)&v31 + 1));
              }
              else
              {
                DrawSize((__int64 *)a1, (HDC)a2, WindowBorders, WindowBorders);
              }
            }
            if ( (unsigned int)Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline()
              && Scrollbar::NonClient::UserModeSupportsUserModeScrollBars(v25, v24) )
            {
              if ( (_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent(v26) + 130, 0, 0) & 1) == 0 )
                xxxClientDrawScrollBar(*(_QWORD *)a1, a2, 1LL);
            }
            else
            {
              xxxDrawScrollBar(a1, (HDC)a2, 1u);
            }
          }
          if ( (((a3 & 0x2000) == 0) & (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) >> 2)) != 0 )
          {
            if ( (unsigned int)Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline()
              && Scrollbar::NonClient::UserModeSupportsUserModeScrollBars(v28, v27) )
            {
              if ( (_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent(v29) + 130, 0, 0) & 1) == 0 )
                xxxClientDrawScrollBar(*(_QWORD *)a1, a2, 0LL);
            }
            else
            {
              xxxDrawScrollBar(a1, (HDC)a2, 0);
            }
          }
        }
        else
        {
          v10 = ((*(_BYTE *)(v9 + 16) & 0x40 | 0x240300u) >> 6) | 0x2000;
          if ( (a3 & 0x2000) == 0 )
            v10 = (*(_BYTE *)(v9 + 16) & 0x40 | 0x240300u) >> 6;
          xxxDrawCaptionBar(a1, a2, v10);
        }
      }
    }
  }
}
