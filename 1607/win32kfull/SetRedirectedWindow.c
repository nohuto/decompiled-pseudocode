/*
 * XREFs of SetRedirectedWindow @ 0x1C00620F4
 * Callers:
 *     _SetLayeredWindowAttributes @ 0x1C0061F00 (_SetLayeredWindowAttributes.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     xxxSetWindowStyle @ 0x1C00A1758 (xxxSetWindowStyle.c)
 *     xxxPrintWindow @ 0x1C01DE6D4 (xxxPrintWindow.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0035534 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     GetRedirectionBitmap @ 0x1C0053B30 (GetRedirectionBitmap.c)
 *     xxxInternalInvalidate @ 0x1C005EB10 (xxxInternalInvalidate.c)
 *     HintSpriteShape @ 0x1C00623A8 (HintSpriteShape.c)
 *     UpdateWindowSpriteDPI @ 0x1C0062C8C (UpdateWindowSpriteDPI.c)
 *     RedirectDCEs @ 0x1C0063468 (RedirectDCEs.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C0063658 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C00637B4 (CreateOrGetRedirectionBitmap.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00723B0 (IsToplevelWindowDesktopComposed.c)
 *     _IsTopLevelWindow @ 0x1C00725F0 (_IsTopLevelWindow.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     FillRect @ 0x1C00AE8B8 (FillRect.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00D7CB8 (DeleteOrSetRedirectionBitmap.c)
 *     IncrementCompositedCount @ 0x1C01DE3F0 (IncrementCompositedCount.c)
 */

__int64 __fastcall SetRedirectedWindow(struct tagWND *a1, int a2)
{
  int v3; // r12d
  unsigned int v4; // esi
  __int64 v5; // rdx
  __int64 RedirectionBitmap; // r8
  __int64 v7; // r14
  BOOL v8; // edi
  int v10; // edi
  __int64 v11; // rax
  __m128i *v12; // r15
  __int64 v13; // rdi
  HBRUSH v14; // r14
  __int64 SolidBrush; // rax
  __m128i v16; // xmm0
  int v17; // eax
  __int64 v18; // r15
  __int64 v19; // r9
  __int64 Prop; // rax
  RECT v21; // [rsp+20h] [rbp-10h] BYREF
  HBITMAP v22; // [rsp+70h] [rbp+40h] BYREF

  v22 = 0LL;
  v3 = ((unsigned __int8)~(_BYTE)a2 >> 4) & 1;
  v4 = a2 & 0xFFFFFFEF;
  RedirectionBitmap = GetRedirectionBitmap((__int64)a1);
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
      v8 = 0;
      if ( (unsigned int)IsToplevelWindowDesktopComposed(a1, v5, 0LL) )
        v8 = v4 == 1;
      if ( !(unsigned int)IsTopLevelWindow(a1) && (*(_BYTE *)(v7 + 84) & 0x40) == 0 && v4 == 1 )
        v8 = 1;
      if ( !v8 )
        return 2151546885LL;
    }
    v10 = CreateOrGetRedirectionBitmap(a1, 0LL, 0LL, &v22);
    if ( v10 < 0 )
      return (unsigned int)v10;
    if ( (unsigned int)SetRedirectionBitmap(a1, v22, 0) )
    {
      SetOrClrWF(1LL, a1, 2848LL, 1LL);
      v11 = ValidateHmonitorNoRip(*((_QWORD *)a1 + 43));
      UpdateWindowSpriteDPI(a1, v11);
    }
    else
    {
      DeleteOrSetRedirectionBitmap(a1, v22, 0LL);
      v10 = -1073741801;
    }
    if ( v10 < 0 )
      return (unsigned int)v10;
    if ( v4 == 2 )
      IncrementCompositedCount(a1);
    if ( v4 == 1 )
    {
      v12 = (__m128i *)((char *)a1 + 112);
      if ( *((_QWORD *)a1 + 14) == *((_QWORD *)a1 + 16)
        && *((_QWORD *)a1 + 15) == *((_QWORD *)a1 + 17)
        && !*((_QWORD *)a1 + 25)
        || IsRectEmptyInl((const struct tagRECT *)a1 + 7) )
      {
        v19 = 0LL;
      }
      else
      {
        v13 = 0LL;
        v14 = (HBRUSH)ghbrWhite;
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 376LL) + 1008LL) )
        {
          SolidBrush = GreCreateSolidBrush();
          v13 = SolidBrush;
          if ( SolidBrush )
            v14 = (HBRUSH)SolidBrush;
        }
        v16 = *v12;
        v17 = _mm_cvtsi128_si32(*v12);
        v21.bottom = v16.m128i_i32[3] - v16.m128i_i32[1];
        v21.top = 0;
        v21.right = v16.m128i_i32[2] - v17;
        v21.left = 0;
        v18 = GreSelectBitmap(ghdcMem, v22);
        FillRect(ghdcMem, &v21, v14);
        if ( v13 )
          GreDeleteObject(v13);
        GreSelectBitmap(ghdcMem, v18);
        v19 = 1LL;
      }
      HintSpriteShape(*gpDispInfo, a1, v22, v19);
    }
    RedirectDCEs(a1);
  }
  if ( v3 )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v22);
    xxxInternalInvalidate(a1, (HRGN)1, 0x485u);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v22);
  }
  Prop = GetProp(a1, (unsigned __int16)atomLayer, 1LL);
  *(_DWORD *)(Prop + 32) |= v4;
  return 0LL;
}
