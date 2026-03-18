/*
 * XREFs of SetRedirectedWindow @ 0x1C0079E60
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     xxxSetWindowStyle @ 0x1C0058020 (xxxSetWindowStyle.c)
 *     _SetLayeredWindowAttributes @ 0x1C0079C68 (_SetLayeredWindowAttributes.c)
 *     xxxPrintWindow @ 0x1C01E7E84 (xxxPrintWindow.c)
 * Callees:
 *     FillRect @ 0x1C003C7F0 (FillRect.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0041E08 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     _IsTopLevelWindow @ 0x1C0056918 (_IsTopLevelWindow.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00569D8 (IsToplevelWindowDesktopComposed.c)
 *     GetRedirectionBitmap @ 0x1C006BF60 (GetRedirectionBitmap.c)
 *     RedirectDCEs @ 0x1C007A688 (RedirectDCEs.c)
 *     HintSpriteShape @ 0x1C007B8EC (HintSpriteShape.c)
 *     UpdateWindowSpriteDPI @ 0x1C007BDC4 (UpdateWindowSpriteDPI.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C007C284 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C007C3E0 (CreateOrGetRedirectionBitmap.c)
 *     xxxInternalInvalidate @ 0x1C007D060 (xxxInternalInvalidate.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C007F730 (DeleteOrSetRedirectionBitmap.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     IncrementCompositedCount @ 0x1C01E7BA0 (IncrementCompositedCount.c)
 */

__int64 __fastcall SetRedirectedWindow(struct tagWND *a1, int a2)
{
  int v3; // r15d
  unsigned int v4; // r14d
  __int64 v5; // rdi
  int RedirectionBitmap; // ebx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 Prop; // rax
  __m128i *v11; // rdx
  __m128i v12; // xmm0
  int v13; // eax
  __int64 v14; // rbx
  BOOL v15; // ebx
  RECT v16; // [rsp+20h] [rbp-10h] BYREF
  HBITMAP v17; // [rsp+70h] [rbp+40h] BYREF

  v17 = 0LL;
  v3 = ((unsigned __int8)~(_BYTE)a2 >> 4) & 1;
  v4 = a2 & 0xFFFFFFEF;
  if ( GetRedirectionBitmap((__int64)a1) )
  {
    if ( v4 == 1 )
      HintSpriteShape((HDEV)*gpDispInfo);
  }
  else
  {
    v5 = *((_QWORD *)a1 + 19);
    if ( (*(_BYTE *)(v5 + 84) & 0xC0) != 0 )
    {
      v15 = 0;
      if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
        v15 = v4 == 1;
      if ( !(unsigned int)IsTopLevelWindow((__int64)a1) && (*(_BYTE *)(v5 + 84) & 0x40) == 0 && v4 == 1 )
        v15 = 1;
      if ( !v15 )
        return 2151546885LL;
    }
    RedirectionBitmap = CreateOrGetRedirectionBitmap(a1, 0LL, 0LL, &v17);
    if ( RedirectionBitmap < 0 )
      return (unsigned int)RedirectionBitmap;
    if ( (unsigned int)SetRedirectionBitmap(a1, v17, 0) )
    {
      SetOrClrWF(1LL, a1, 2848LL, 1LL);
      v7 = ValidateHmonitorNoRip(*((_QWORD *)a1 + 44));
      UpdateWindowSpriteDPI(a1, v7);
    }
    else
    {
      DeleteOrSetRedirectionBitmap(a1, v17, 0LL);
      RedirectionBitmap = -1073741801;
    }
    if ( RedirectionBitmap < 0 )
      return (unsigned int)RedirectionBitmap;
    if ( v4 == 2 )
      IncrementCompositedCount(a1);
    if ( v4 == 1 )
    {
      v8 = *((_QWORD *)a1 + 14) - *((_QWORD *)a1 + 16);
      if ( !v8 )
        v8 = *((_QWORD *)a1 + 15) - *((_QWORD *)a1 + 17);
      if ( (v8 || *((_QWORD *)a1 + 25)) && !IsRectEmptyInl((const struct tagRECT *)a1 + 7) )
      {
        v12 = *v11;
        v13 = _mm_cvtsi128_si32(*v11);
        v16.bottom = v12.m128i_i32[3] - v12.m128i_i32[1];
        v16.top = 0;
        v16.right = v12.m128i_i32[2] - v13;
        v16.left = 0;
        v14 = GreSelectBitmap(ghdcMem, v17);
        FillRect(ghdcMem, &v16, ghbrWhite);
        GreSelectBitmap(ghdcMem, v14);
      }
      HintSpriteShape((HDEV)*gpDispInfo);
    }
    RedirectDCEs(a1);
  }
  if ( v3 )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v17);
    xxxInternalInvalidate(a1, (HRGN)1, 0x485u);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v17);
  }
  Prop = GetProp((__int64)a1, (unsigned __int16)atomLayer, 1LL);
  *(_DWORD *)(Prop + 32) |= v4;
  return 0LL;
}
