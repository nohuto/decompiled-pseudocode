/*
 * XREFs of ?AddDirtyRect@CBitmap@@UEAAJPEBUtagRECT@@@Z @ 0x180088BC0
 * Callers:
 *     ?AddDirtyRect@CGdiSpriteBitmap@@UEAAJAEBUtagRECT@@@Z @ 0x18001B6A0 (-AddDirtyRect@CGdiSpriteBitmap@@UEAAJAEBUtagRECT@@@Z.c)
 *     ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x180086800 (-ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008AC64 (-AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUnique.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18002D40C (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CBitmap::AddDirtyRect(CBitmap *this, struct tagRECT *a2)
{
  int v2; // ebp
  LONG left; // eax
  LONG top; // ecx
  LONG right; // edx
  LONG bottom; // eax
  unsigned int v9; // ecx
  unsigned int v10; // r8d
  LONG *v11; // rax
  unsigned int v12; // r10d
  unsigned int v13; // r9d
  __int64 result; // rax
  _DWORD *v16; // r9
  bool IsEmpty; // al
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // edx
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  bool v24; // al
  __int64 v25; // r8
  int v26; // edx
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // rax

  v2 = 0;
  if ( a2 )
  {
    left = a2->left;
    if ( a2->left < 0
      || (top = a2->top, top < 0)
      || (right = a2->right, right <= left)
      || (unsigned int)right > *((_DWORD *)this + 40)
      || (bottom = a2->bottom, bottom <= top)
      || (unsigned int)bottom > *((_DWORD *)this + 41) )
    {
      v2 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x1E8u);
      goto LABEL_20;
    }
  }
  if ( !*((_DWORD *)this + 14) )
    goto LABEL_20;
  if ( *((_BYTE *)this + 228) || *((_DWORD *)this + 56) != *((_DWORD *)this + 36) )
  {
    *((_DWORD *)this + 54) = 0;
    *((_BYTE *)this + 228) = 0;
  }
  if ( !a2 || a2->right - a2->left == *((_DWORD *)this + 40) && a2->bottom - a2->top == *((_DWORD *)this + 41) )
  {
    *((_DWORD *)this + 54) = 0;
    goto LABEL_20;
  }
  v9 = *((_DWORD *)this + 54);
  if ( v9 )
  {
    v10 = a2->right;
    v11 = (LONG *)*((_QWORD *)this + 26);
    if ( v10 <= a2->left )
      goto LABEL_20;
    v12 = a2->bottom;
    v13 = a2->top;
    if ( v12 <= v13 || a2->left >= (unsigned int)*v11 && v13 >= v11[1] && v10 <= v11[2] && v12 <= v11[3] )
      goto LABEL_20;
  }
  else
  {
    *((_DWORD *)this + 55) = *((_DWORD *)this + 36);
  }
  if ( v9 >= 5 )
  {
    do
    {
      --*((_DWORD *)this + 54);
      TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(*((_DWORD **)this + 26));
      IsEmpty = TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(v16);
      if ( v20 )
      {
        if ( IsEmpty )
        {
          *(_QWORD *)(v18 + 8) = 0LL;
          *(_QWORD *)v18 = 0LL;
        }
        else
        {
          *(_OWORD *)v18 = *(_OWORD *)v19;
        }
      }
      else if ( !IsEmpty )
      {
        if ( *(_DWORD *)v19 < *(_DWORD *)v18 )
          *(_DWORD *)v18 = *(_DWORD *)v19;
        v21 = *(_DWORD *)(v19 + 4);
        if ( v21 < *(_DWORD *)(v18 + 4) )
          *(_DWORD *)(v18 + 4) = v21;
        v22 = *(_DWORD *)(v19 + 8);
        if ( v22 > *(_DWORD *)(v18 + 8) )
          *(_DWORD *)(v18 + 8) = v22;
        v23 = *(_DWORD *)(v19 + 12);
        if ( v23 > *(_DWORD *)(v18 + 12) )
          *(_DWORD *)(v18 + 12) = v23;
      }
    }
    while ( *((_DWORD *)this + 54) > 1u );
    TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(*((_DWORD **)this + 26));
    v24 = TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(a2);
    if ( v26 )
    {
      if ( v24 )
      {
        *(_QWORD *)(v25 + 8) = 0LL;
        *(_QWORD *)v25 = 0LL;
      }
      else
      {
        *(struct tagRECT *)v25 = *a2;
      }
    }
    else if ( !v24 )
    {
      if ( a2->left < *(_DWORD *)v25 )
        *(_DWORD *)v25 = a2->left;
      v27 = a2->top;
      if ( v27 < *(_DWORD *)(v25 + 4) )
        *(_DWORD *)(v25 + 4) = v27;
      v28 = a2->right;
      if ( v28 > *(_DWORD *)(v25 + 8) )
        *(_DWORD *)(v25 + 8) = v28;
      v29 = a2->bottom;
      if ( v29 > *(_DWORD *)(v25 + 12) )
        *(_DWORD *)(v25 + 12) = v29;
    }
  }
  else if ( *((_QWORD *)this + 26)
         || (v30 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                     WPF::g_pProcessHeap,
                     80LL),
             (*((_QWORD *)this + 26) = v30) != 0LL) )
  {
    *(struct tagRECT *)(*((_QWORD *)this + 26) + 16LL * (unsigned int)(*((_DWORD *)this + 54))++) = *a2;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x22Au);
  }
LABEL_20:
  if ( (*((_DWORD *)this + 36))++ == -1 )
    *((_DWORD *)this + 36) = 1;
  result = (unsigned int)v2;
  if ( v2 < 0 )
    *((_DWORD *)this + 54) = 0;
  else
    *((_DWORD *)this + 56) = *((_DWORD *)this + 36);
  return result;
}
