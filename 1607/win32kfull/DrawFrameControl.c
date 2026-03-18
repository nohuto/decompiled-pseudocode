/*
 * XREFs of DrawFrameControl @ 0x1C005F534
 * Callers:
 *     ?CreateDPIBitmapStrip@@YAHH@Z @ 0x1C0060E84 (-CreateDPIBitmapStrip@@YAHH@Z.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C014E5CC (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C022B5BC (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     MNDrawArrow @ 0x1C0236A44 (MNDrawArrow.c)
 * Callees:
 *     GreGetLayout @ 0x1C005D99C (GreGetLayout.c)
 *     GreSetBkMode @ 0x1C005F858 (GreSetBkMode.c)
 *     GreCreateFontIndirectW @ 0x1C0060558 (GreCreateFontIndirectW.c)
 *     DrawPushButton @ 0x1C00AE7EC (DrawPushButton.c)
 *     GrePolyPatBlt @ 0x1C00AE914 (GrePolyPatBlt.c)
 *     DrawMenuMark @ 0x1C00B04F8 (DrawMenuMark.c)
 *     DrawScrollArrow @ 0x1C00B0604 (DrawScrollArrow.c)
 *     DrawBox @ 0x1C00B0628 (DrawBox.c)
 *     DrawIt @ 0x1C00B0940 (DrawIt.c)
 *     DrawGrip @ 0x1C00B12F4 (DrawGrip.c)
 *     GetCaptionChar @ 0x1C00B2924 (GetCaptionChar.c)
 *     GreSetTextAlign @ 0x1C00B9838 (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C00B98B0 (GreGetTextAlign.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     GreSelectFontInternal @ 0x1C0292FA8 (GreSelectFontInternal.c)
 *     GreSetGraphicsMode @ 0x1C02BA3D4 (GreSetGraphicsMode.c)
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
  RECT v16; // [rsp+30h] [rbp-69h] BYREF
  __int64 v17; // [rsp+40h] [rbp-59h]
  _DWORD v18[4]; // [rsp+48h] [rbp-51h] BYREF
  __int64 v19; // [rsp+58h] [rbp-41h]
  _DWORD v20[36]; // [rsp+60h] [rbp-39h] BYREF
  int v21; // [rsp+118h] [rbp+7Fh]

  v21 = 0;
  v16 = *a2;
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
  if ( *(_WORD *)(gpsi + 8676LL) == 1 )
    a4 |= 0x8000u;
  if ( (a4 & 0x8000) != 0 )
    a4 |= 0x4000u;
  if ( a3 != 2 && a3 != 5 && (a3 != 4 || (a4 & 0x10) != 0) && (a3 != 3 || (a4 & 0x18) == 0) )
  {
    DrawPushButton(a1);
    if ( (a4 & 0x2000) != 0 )
      *a2 = v16;
    v21 = 1;
  }
  if ( !(unsigned int)GreSetBkMode(a1) )
    goto LABEL_19;
  v10 = v16.bottom - v16.top;
  if ( v16.right - v16.left < v16.bottom - v16.top )
    v10 = v16.right - v16.left;
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
  memset(v20, 0, 0x5CuLL);
  v20[0] = v10;
  v20[4] = 400;
  wcscpy((wchar_t *)&v20[7], L"Marlett");
  HIBYTE(v20[5]) = 2;
  FontIndirectW = GreCreateFontIndirectW(v20);
  v17 = GreSelectFontInternal(a1);
  if ( v21 )
  {
    if ( a3 == 1 )
    {
      GetCaptionChar(a4);
      DrawIt(a1);
    }
    else
    {
      if ( a3 != 3 )
      {
        v15 = a3 == 4;
        goto LABEL_42;
      }
      DrawScrollArrow(a1, &v16, a4);
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
        v18[0] = a2->left;
        v18[2] = v13;
        v14 = a2->bottom - top;
        v18[1] = top;
        v18[3] = v14;
        v19 = *(_QWORD *)(gpsi + 5120LL);
        GrePolyPatBlt(a1, 0xF00021u, (struct _POLYPATBLT *)v18, 1u);
      }
      DrawScrollArrow(a1, &v16, a4 & 0x1100 | ((unsigned __int8)~(_BYTE)a4 >> 3) & 1);
      v15 = 1;
      goto LABEL_42;
    }
    DrawMenuMark(a1, &v16);
  }
  else if ( a3 == 4 )
  {
    DrawBox(a1, &v16);
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
