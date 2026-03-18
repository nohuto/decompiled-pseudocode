/*
 * XREFs of DrawFrameControl @ 0x1C00564A4
 * Callers:
 *     ?CreateDPIBitmapStrip@@YAHH@Z @ 0x1C0055E40 (-CreateDPIBitmapStrip@@YAHH@Z.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C01194CC (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C02323CC (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     MNDrawArrow @ 0x1C023EF28 (MNDrawArrow.c)
 * Callees:
 *     DrawMenuMark @ 0x1C004F298 (DrawMenuMark.c)
 *     DrawScrollArrow @ 0x1C004F7E0 (DrawScrollArrow.c)
 *     DrawBox @ 0x1C0050D40 (DrawBox.c)
 *     DrawIt @ 0x1C005105C (DrawIt.c)
 *     GreSetBkMode @ 0x1C00567EC (GreSetBkMode.c)
 *     GreCreateFontIndirectW @ 0x1C005684C (GreCreateFontIndirectW.c)
 *     DrawPushButton @ 0x1C0056BC8 (DrawPushButton.c)
 *     GetCaptionChar @ 0x1C0056C94 (GetCaptionChar.c)
 *     GrePolyPatBlt @ 0x1C00865E0 (GrePolyPatBlt.c)
 *     GreGetLayout @ 0x1C008E4AC (GreGetLayout.c)
 *     GreSetTextAlign @ 0x1C00FA3AC (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C00FAEBC (GreGetTextAlign.c)
 *     DrawGrip @ 0x1C00FAFCC (DrawGrip.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     GreSelectFontInternal @ 0x1C0293D18 (GreSelectFontInternal.c)
 *     GreSetGraphicsMode @ 0x1C02B7D8C (GreSetGraphicsMode.c)
 */

_BOOL8 __fastcall DrawFrameControl(HDC a1, RECT *a2, int a3, unsigned int a4)
{
  int v8; // r14d
  int v10; // r12d
  __int64 FontIndirectW; // r12
  LONG top; // edx
  int v13; // eax
  int v14; // eax
  BOOL v15; // edi
  unsigned __int16 CaptionChar; // ax
  RECT v17; // [rsp+30h] [rbp-69h] BYREF
  LONG left; // [rsp+40h] [rbp-59h]
  LONG v19; // [rsp+44h] [rbp-55h]
  int v20; // [rsp+48h] [rbp-51h]
  int v21; // [rsp+4Ch] [rbp-4Dh]
  __int64 v22; // [rsp+50h] [rbp-49h]
  __int64 v23; // [rsp+58h] [rbp-41h]
  _DWORD v24[36]; // [rsp+60h] [rbp-39h] BYREF
  int v25; // [rsp+118h] [rbp+7Fh]

  v25 = 0;
  v17 = *a2;
  v8 = 0;
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
    DrawPushButton(a1);
    if ( (a4 & 0x2000) != 0 )
      *a2 = v17;
    v25 = 1;
  }
  if ( !(unsigned int)GreSetBkMode(a1) )
    goto LABEL_19;
  v10 = v17.bottom - v17.top;
  if ( v17.right - v17.left < v17.bottom - v17.top )
    v10 = v17.right - v17.left;
  if ( v10 <= 0 )
  {
LABEL_19:
    if ( v8 )
    {
      GreSetGraphicsMode(a1);
      GreSetTextAlign(a1);
    }
    return 0LL;
  }
  memset(v24, 0, 0x5CuLL);
  v24[0] = v10;
  v24[4] = 400;
  *(_OWORD *)&v24[7] = *(_OWORD *)L"Marlett";
  HIBYTE(v24[5]) = 2;
  FontIndirectW = GreCreateFontIndirectW(v24);
  v23 = GreSelectFontInternal(a1);
  if ( v25 )
  {
    if ( a3 == 1 )
    {
      CaptionChar = GetCaptionChar(a4);
      DrawIt(a1, &v17, a4, CaptionChar);
    }
    else
    {
      if ( a3 != 3 )
      {
        v15 = a3 == 4;
        goto LABEL_42;
      }
      DrawScrollArrow(a1);
    }
  }
  else if ( a3 == 2 || a3 == 5 )
  {
    if ( (a4 & 0x18) != 0 )
    {
      if ( (a4 & 0x800) == 0 )
      {
        top = a2->top;
        v13 = a2->right - a2->left;
        left = a2->left;
        v20 = v13;
        v14 = a2->bottom - top;
        v19 = top;
        v21 = v14;
        v22 = *(_QWORD *)(gpsi + 3728LL);
        GrePolyPatBlt(a1);
      }
      DrawScrollArrow(a1);
      v15 = 1;
      goto LABEL_42;
    }
    DrawMenuMark(a1, &v17, a3, a4);
  }
  else if ( a3 == 4 )
  {
    DrawBox(a1, &v17, a4);
  }
  else
  {
    DrawGrip(a1);
  }
  v15 = 1;
LABEL_42:
  if ( v8 )
  {
    GreSetGraphicsMode(a1);
    GreSetTextAlign(a1);
  }
  GreSetBkMode(a1);
  GreSelectFontInternal(a1);
  GreDeleteObject(FontIndirectW);
  return v15;
}
