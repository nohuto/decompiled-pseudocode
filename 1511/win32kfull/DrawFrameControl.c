/*
 * XREFs of DrawFrameControl @ 0x1C0018084
 * Callers:
 *     ?CreateDPIBitmapStrip@@YAHH@Z @ 0x1C0017A20 (-CreateDPIBitmapStrip@@YAHH@Z.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C0144AAC (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C02327FC (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     MNDrawArrow @ 0x1C023F0C4 (MNDrawArrow.c)
 * Callees:
 *     DrawMenuMark @ 0x1C0013D9C (DrawMenuMark.c)
 *     DrawScrollArrow @ 0x1C001419C (DrawScrollArrow.c)
 *     GetCaptionChar @ 0x1C0014A80 (GetCaptionChar.c)
 *     DrawBox @ 0x1C0014AB0 (DrawBox.c)
 *     DrawIt @ 0x1C0014DCC (DrawIt.c)
 *     DrawPushButton @ 0x1C0016FE4 (DrawPushButton.c)
 *     GreSelectFont @ 0x1C0018350 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C0018468 (GreSetBkMode.c)
 *     GreCreateFontIndirectW @ 0x1C0018888 (GreCreateFontIndirectW.c)
 *     GrePolyPatBlt @ 0x1C003C84C (GrePolyPatBlt.c)
 *     GreGetLayout @ 0x1C006B8B4 (GreGetLayout.c)
 *     GreSetTextAlign @ 0x1C00CCFB8 (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C00CD038 (GreGetTextAlign.c)
 *     DrawGrip @ 0x1C01042BC (DrawGrip.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     GreSetGraphicsMode @ 0x1C02B719C (GreSetGraphicsMode.c)
 */

__int64 __fastcall DrawFrameControl(HDC a1, RECT *a2, int a3, unsigned int a4)
{
  int v8; // r15d
  unsigned int v9; // r14d
  __int16 v10; // ax
  int v11; // r13d
  __int64 FontIndirectW; // r13
  unsigned __int16 CaptionChar; // ax
  LONG top; // edx
  int v16; // eax
  int v17; // eax
  RECT v18; // [rsp+30h] [rbp-69h] BYREF
  LONG left; // [rsp+40h] [rbp-59h]
  LONG v20; // [rsp+44h] [rbp-55h]
  int v21; // [rsp+48h] [rbp-51h]
  int v22; // [rsp+4Ch] [rbp-4Dh]
  __int64 v23; // [rsp+50h] [rbp-49h]
  __int64 v24; // [rsp+58h] [rbp-41h]
  _DWORD v25[36]; // [rsp+60h] [rbp-39h] BYREF
  int v27; // [rsp+110h] [rbp+77h]

  v27 = 0;
  v8 = 0;
  v9 = 1;
  v18 = *a2;
  if ( (GreGetLayout(a1) & 1) != 0 )
  {
    v8 = GreSetGraphicsMode(a1);
    if ( v8 )
    {
      if ( (GreGetTextAlign(a1) & 6) != 6 )
        GreSetTextAlign(a1);
    }
  }
  if ( *(_WORD *)(gpsi + 7284LL) == 1 )
    a4 |= 0x8000u;
  if ( (a4 & 0x8000) != 0 )
    a4 |= 0x4000u;
  if ( a3 != 2 && a3 != 5 && (a3 != 4 || (a4 & 0x10) != 0) && (a3 != 3 || (a4 & 0x18) == 0) )
  {
    v10 = 0x2000;
    if ( a3 != 3 )
      v10 = 12288;
    DrawPushButton(a1, &v18, a4, v10 | a4 & 0xC000);
    if ( (a4 & 0x2000) != 0 )
      *a2 = v18;
    v27 = 1;
  }
  if ( (unsigned int)GreSetBkMode(a1) )
  {
    v11 = v18.bottom - v18.top;
    if ( v18.right - v18.left < v18.bottom - v18.top )
      v11 = v18.right - v18.left;
    if ( v11 > 0 )
    {
      memset(v25, 0, 0x5CuLL);
      v25[0] = v11;
      v25[4] = 400;
      *(_OWORD *)&v25[7] = *(_OWORD *)L"Marlett";
      HIBYTE(v25[5]) = 2;
      FontIndirectW = GreCreateFontIndirectW(v25);
      v24 = GreSelectFont(a1, FontIndirectW);
      if ( v27 )
      {
        if ( a3 == 1 )
        {
          CaptionChar = GetCaptionChar(a4);
          DrawIt(a1, &v18, a4, CaptionChar);
          goto LABEL_22;
        }
        if ( a3 != 3 )
        {
          if ( a3 != 4 )
            v9 = 0;
          goto LABEL_22;
        }
      }
      else
      {
        if ( a3 != 2 && a3 != 5 )
        {
          if ( a3 == 4 )
            DrawBox(a1, &v18, a4);
          else
            DrawGrip(a1);
LABEL_22:
          if ( v8 )
          {
            GreSetGraphicsMode(a1);
            GreSetTextAlign(a1);
          }
          GreSetBkMode(a1);
          GreSelectFont(a1, v24);
          GreDeleteObject(FontIndirectW);
          return v9;
        }
        if ( (a4 & 0x18) == 0 )
        {
          DrawMenuMark(a1, &v18, a3, a4);
          goto LABEL_22;
        }
        if ( (a4 & 0x800) == 0 )
        {
          top = a2->top;
          v16 = a2->right - a2->left;
          left = a2->left;
          v21 = v16;
          v17 = a2->bottom - top;
          v20 = top;
          v22 = v17;
          v23 = *(_QWORD *)(gpsi + 3728LL);
          GrePolyPatBlt(a1);
        }
      }
      DrawScrollArrow(a1);
      goto LABEL_22;
    }
  }
  if ( v8 )
  {
    GreSetGraphicsMode(a1);
    GreSetTextAlign(a1);
  }
  return 0LL;
}
