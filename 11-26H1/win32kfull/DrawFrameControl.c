/*
 * XREFs of DrawFrameControl @ 0x140125D60
 * Callers:
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x140125A40 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1401F04C0 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1402F5658 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     MNDrawArrow @ 0x1402FA3FC (MNDrawArrow.c)
 * Callees:
 *     ?UserCreateFontIndirectW@@YAPEAUHFONT__@@PEAUtagLOGFONTW@@@Z @ 0x140102088 (-UserCreateFontIndirectW@@YAPEAUHFONT__@@PEAUtagLOGFONTW@@@Z.c)
 *     GreGetTextAlign @ 0x1401205E8 (GreGetTextAlign.c)
 *     ?DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z @ 0x1401256F0 (-DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z.c)
 *     ?GetCaptionChar@@YAGI@Z @ 0x140125918 (-GetCaptionChar@@YAGI@Z.c)
 *     GreSetBkMode @ 0x140126104 (GreSetBkMode.c)
 *     GreSelectFont @ 0x140126190 (GreSelectFont.c)
 *     GreGetLayout @ 0x1401264BC (GreGetLayout.c)
 *     DrawPushButton @ 0x140126508 (DrawPushButton.c)
 *     GrePolyPatBlt @ 0x140126C64 (GrePolyPatBlt.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x140126D24 (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     ?DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z @ 0x1401270D8 (-DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z.c)
 *     GreSetTextAlign @ 0x14012742C (GreSetTextAlign.c)
 *     GreSetGraphicsMode @ 0x1401274B8 (GreSetGraphicsMode.c)
 *     ?DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1402155BC (-DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall DrawFrameControl(HDC a1, struct tagRECT *a2, int a3, int a4)
{
  unsigned int v8; // esi
  int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax
  int v13; // ecx
  unsigned int v14; // edi
  LONG v15; // r13d
  __int64 v16; // r13
  unsigned __int16 CaptionChar; // r9
  unsigned int v18; // r8d
  __int64 left; // rcx
  __int64 top; // rdx
  int v22; // eax
  int v23; // eax
  RECT v24; // [rsp+30h] [rbp-69h] BYREF
  __int64 v25; // [rsp+40h] [rbp-59h]
  _DWORD v26[4]; // [rsp+48h] [rbp-51h] BYREF
  __int64 v27; // [rsp+58h] [rbp-41h]
  struct tagLOGFONTW v28; // [rsp+60h] [rbp-39h] BYREF
  int v30; // [rsp+110h] [rbp+77h]

  v30 = 0;
  v24 = *a2;
  v8 = 1;
  v9 = 0;
  if ( (GreGetLayout(a1) & 1) != 0 )
  {
    v9 = GreSetGraphicsMode(a1);
    if ( v9 )
    {
      if ( (GreGetTextAlign(a1) & 6) != 6 )
        GreSetTextAlign(a1);
    }
  }
  UserSessionState = W32GetUserSessionState(v11, v10);
  v13 = a4 | 0x8000;
  if ( *(_WORD *)(*(_QWORD *)(UserSessionState + 19904) + 6996LL) != 1 )
    v13 = a4;
  v14 = v13 | 0x4000;
  if ( (v13 & 0x8000) == 0 )
    v14 = v13;
  if ( a3 != 2 && a3 != 5 && (a3 != 4 || (v14 & 0x10) != 0) && (a3 != 3 || (v14 & 0x18) == 0) )
  {
    DrawPushButton(a1);
    if ( (v14 & 0x2000) != 0 )
      *a2 = v24;
    v30 = 1;
  }
  if ( (unsigned int)GreSetBkMode(a1) )
  {
    v15 = v24.right - v24.left;
    if ( v24.right - v24.left >= v24.bottom - v24.top )
      v15 = v24.bottom - v24.top;
    if ( v15 > 0 )
    {
      memset_0(&v28, 0, sizeof(v28));
      v28.lfHeight = v15;
      v28.lfWeight = 400;
      wcscpy(v28.lfFaceName, L"Marlett");
      v28.lfCharSet = 2;
      v16 = UserCreateFontIndirectW(&v28);
      v25 = GreSelectFont(a1, v16);
      if ( v30 )
      {
        if ( a3 == 1 )
        {
          CaptionChar = GetCaptionChar(v14);
        }
        else
        {
          if ( a3 != 3 )
          {
            if ( a3 != 4 )
              v8 = 0;
            goto LABEL_22;
          }
          CaptionChar = (v14 & 2) != 0 ? 52 : 54;
          if ( (v14 & 1) == 0 )
            CaptionChar = (v14 & 2) != 0 ? 51 : 53;
        }
        v18 = v14;
      }
      else
      {
        if ( a3 != 2 && a3 != 5 )
        {
          if ( a3 == 4 )
            DrawBox(a1, &v24, v14);
          else
            DrawGrip(a1, a2, v14);
LABEL_22:
          if ( v9 )
          {
            GreSetGraphicsMode(a1);
            GreSetTextAlign(a1);
          }
          GreSetBkMode(a1);
          GreSelectFont(a1, v25);
          GreDeleteObject(v16);
          return v8;
        }
        if ( (v14 & 0x18) == 0 )
        {
          DrawMenuMark(a1, &v24, a3, v14);
          goto LABEL_22;
        }
        if ( (v14 & 0x800) == 0 )
        {
          left = (unsigned int)a2->left;
          top = (unsigned int)a2->top;
          v22 = a2->right - left;
          v26[0] = a2->left;
          v26[2] = v22;
          v23 = a2->bottom - top;
          v26[1] = top;
          v26[3] = v23;
          v27 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(left, top) + 19904) + 4728LL);
          GrePolyPatBlt(a1, 0xF00021u, (struct _POLYPATBLT *)v26, 1u);
        }
        v18 = v14 & 0x1100 | (((v14 >> 3) & 1) == 0);
        CaptionChar = (((v14 >> 3) & 1) == 0) + 53;
      }
      DrawIt(a1, &v24, v18, CaptionChar);
      goto LABEL_22;
    }
  }
  if ( v9 )
  {
    GreSetGraphicsMode(a1);
    GreSetTextAlign(a1);
  }
  return 0LL;
}
