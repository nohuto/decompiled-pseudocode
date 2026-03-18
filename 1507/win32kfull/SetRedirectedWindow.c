/*
 * XREFs of SetRedirectedWindow @ 0x1C000E0B0
 * Callers:
 *     _SetLayeredWindowAttributes @ 0x1C0057144 (_SetLayeredWindowAttributes.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     xxxSetWindowStyle @ 0x1C0068470 (xxxSetWindowStyle.c)
 *     xxxPrintWindow @ 0x1C01E7A14 (xxxPrintWindow.c)
 * Callees:
 *     DeleteOrSetRedirectionBitmap @ 0x1C000BF8C (DeleteOrSetRedirectionBitmap.c)
 *     xxxInternalInvalidate @ 0x1C000DB50 (xxxInternalInvalidate.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C000DDF8 (CreateOrGetRedirectionBitmap.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C000E358 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     HintSpriteShape @ 0x1C000E9D0 (HintSpriteShape.c)
 *     RedirectDCEs @ 0x1C00129A0 (RedirectDCEs.c)
 *     UpdateWindowSpriteDPI @ 0x1C0058A40 (UpdateWindowSpriteDPI.c)
 *     GetRedirectionBitmap @ 0x1C0059490 (GetRedirectionBitmap.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0065EE4 (IsToplevelWindowDesktopComposed.c)
 *     _IsTopLevelWindow @ 0x1C00665B0 (_IsTopLevelWindow.c)
 *     FillRect @ 0x1C0086584 (FillRect.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00918C4 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     IncrementCompositedCount @ 0x1C01E7730 (IncrementCompositedCount.c)
 */

__int64 __fastcall SetRedirectedWindow(struct tagWND *a1, int a2)
{
  int v3; // r15d
  unsigned int v4; // r14d
  __int64 v5; // rdx
  __int64 RedirectionBitmap; // r8
  __int64 v7; // rdi
  int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 Prop; // rax
  __m128i *v14; // rdx
  __m128i v15; // xmm0
  int v16; // eax
  __int64 v17; // rbx
  BOOL v18; // ebx
  RECT v19; // [rsp+20h] [rbp-10h] BYREF
  HBITMAP v20; // [rsp+70h] [rbp+40h] BYREF

  v20 = 0LL;
  v3 = ((unsigned __int8)~(_BYTE)a2 >> 4) & 1;
  v4 = a2 & 0xFFFFFFEF;
  RedirectionBitmap = GetRedirectionBitmap(a1);
  if ( RedirectionBitmap )
  {
    if ( v4 == 1 )
      HintSpriteShape(*gpDispInfo, a1, RedirectionBitmap, 0LL);
  }
  else
  {
    v7 = *((_QWORD *)a1 + 19);
    if ( (*(_BYTE *)(v7 + 84) & 0xC0) != 0 )
    {
      v18 = 0;
      if ( (unsigned int)IsToplevelWindowDesktopComposed(a1, v5, 0LL) )
        v18 = v4 == 1;
      if ( !(unsigned int)IsTopLevelWindow(a1) && (*(_BYTE *)(v7 + 84) & 0x40) == 0 && v4 == 1 )
        v18 = 1;
      if ( !v18 )
        return 2151546885LL;
    }
    v8 = CreateOrGetRedirectionBitmap((__int64)a1, 0, 0LL, (HSURF *)&v20);
    if ( v8 < 0 )
      return (unsigned int)v8;
    if ( (unsigned int)SetRedirectionBitmap(a1, v20, 0) )
    {
      SetOrClrWF(1LL, a1, 2848LL, 1LL);
      v9 = ValidateHmonitorNoRip(*((_QWORD *)a1 + 44));
      UpdateWindowSpriteDPI(a1, v9);
    }
    else
    {
      DeleteOrSetRedirectionBitmap((__int64)a1, (HSURF)v20, 0);
      v8 = -1073741801;
    }
    if ( v8 < 0 )
      return (unsigned int)v8;
    if ( v4 == 2 )
      IncrementCompositedCount(a1);
    if ( v4 == 1 )
    {
      v10 = *((_QWORD *)a1 + 14) - *((_QWORD *)a1 + 16);
      if ( !v10 )
        v10 = *((_QWORD *)a1 + 15) - *((_QWORD *)a1 + 17);
      if ( (v10 || *((_QWORD *)a1 + 25)) && !(unsigned int)IsRectEmptyInl((const struct tagRECT *)a1 + 7) )
      {
        v15 = *v14;
        v16 = _mm_cvtsi128_si32(*v14);
        v19.bottom = v15.m128i_i32[3] - v15.m128i_i32[1];
        v19.top = 0;
        v19.right = v15.m128i_i32[2] - v16;
        v19.left = 0;
        v17 = GreSelectBitmap(ghdcMem, v20);
        FillRect(ghdcMem, &v19, ghbrWhite);
        GreSelectBitmap(ghdcMem, v17);
        v11 = 1LL;
      }
      else
      {
        v11 = 0LL;
      }
      HintSpriteShape(*gpDispInfo, a1, v20, v11);
    }
    RedirectDCEs(a1);
  }
  if ( v3 )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v20);
    xxxInternalInvalidate(a1, (HRGN)1, 0x485u);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v20);
  }
  Prop = GetProp(a1, (unsigned __int16)atomLayer, 1LL);
  *(_DWORD *)(Prop + 32) |= v4;
  return 0LL;
}
