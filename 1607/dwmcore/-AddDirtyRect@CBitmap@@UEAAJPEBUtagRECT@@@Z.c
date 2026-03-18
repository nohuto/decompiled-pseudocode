/*
 * XREFs of ?AddDirtyRect@CBitmap@@UEAAJPEBUtagRECT@@@Z @ 0x180084E80
 * Callers:
 *     ?AddDirtyRect@CGdiSpriteBitmap@@UEAAJAEBUtagRECT@@@Z @ 0x18002B5E0 (-AddDirtyRect@CGdiSpriteBitmap@@UEAAJAEBUtagRECT@@@Z.c)
 *     ?AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180094200 (-AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUnique.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180081704 (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180081744 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmap::AddDirtyRect(CBitmap *this, struct tagRECT *a2)
{
  int v4; // esi
  LONG v5; // eax
  LONG v6; // eax
  unsigned int v7; // r11d
  int v8; // eax
  _DWORD *v10; // r9
  bool IsEmpty; // al
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // edx
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  bool v18; // al
  __int64 v19; // r8
  int v20; // edx
  unsigned int top; // eax
  unsigned int right; // eax
  unsigned int bottom; // eax
  __int64 v24; // rax

  v4 = 0;
  if ( a2
    && (a2->left < 0
     || a2->top < 0
     || (v5 = a2->right, v5 <= a2->left)
     || (unsigned int)v5 > *((_DWORD *)this + 40)
     || (v6 = a2->bottom, v6 <= a2->top)
     || (unsigned int)v6 > *((_DWORD *)this + 41)) )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x1E8u);
  }
  else
  {
    if ( !*((_DWORD *)this + 14) )
      goto LABEL_15;
    if ( *((_BYTE *)this + 228) || *((_DWORD *)this + 56) != *((_DWORD *)this + 36) )
    {
      *((_DWORD *)this + 54) = 0;
      *((_BYTE *)this + 228) = 0;
    }
    if ( !a2 || a2->right - a2->left == *((_DWORD *)this + 40) && a2->bottom - a2->top == *((_DWORD *)this + 41) )
    {
      *((_DWORD *)this + 54) = 0;
    }
    else
    {
      v7 = *((_DWORD *)this + 54);
      if ( v7 )
      {
        if ( TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain(
               *((unsigned int **)this + 26),
               (unsigned int *)a2) )
        {
          goto LABEL_15;
        }
      }
      else
      {
        *((_DWORD *)this + 55) = *((_DWORD *)this + 36);
      }
      if ( v7 >= 5 )
      {
        do
        {
          --*((_DWORD *)this + 54);
          TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(*((_DWORD **)this + 26));
          IsEmpty = TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(v10);
          if ( v14 )
          {
            if ( IsEmpty )
            {
              *(_QWORD *)(v12 + 8) = 0LL;
              *(_QWORD *)v12 = 0LL;
            }
            else
            {
              *(_OWORD *)v12 = *(_OWORD *)v13;
            }
          }
          else if ( !IsEmpty )
          {
            if ( *(_DWORD *)v13 < *(_DWORD *)v12 )
              *(_DWORD *)v12 = *(_DWORD *)v13;
            v15 = *(_DWORD *)(v13 + 4);
            if ( v15 < *(_DWORD *)(v12 + 4) )
              *(_DWORD *)(v12 + 4) = v15;
            v16 = *(_DWORD *)(v13 + 8);
            if ( v16 > *(_DWORD *)(v12 + 8) )
              *(_DWORD *)(v12 + 8) = v16;
            v17 = *(_DWORD *)(v13 + 12);
            if ( v17 > *(_DWORD *)(v12 + 12) )
              *(_DWORD *)(v12 + 12) = v17;
          }
        }
        while ( *((_DWORD *)this + 54) > 1u );
        TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(*((_DWORD **)this + 26));
        v18 = TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(a2);
        if ( v20 )
        {
          if ( v18 )
          {
            *(_QWORD *)(v19 + 8) = 0LL;
            *(_QWORD *)v19 = 0LL;
          }
          else
          {
            *(struct tagRECT *)v19 = *a2;
          }
        }
        else if ( !v18 )
        {
          if ( a2->left < *(_DWORD *)v19 )
            *(_DWORD *)v19 = a2->left;
          top = a2->top;
          if ( top < *(_DWORD *)(v19 + 4) )
            *(_DWORD *)(v19 + 4) = top;
          right = a2->right;
          if ( right > *(_DWORD *)(v19 + 8) )
            *(_DWORD *)(v19 + 8) = right;
          bottom = a2->bottom;
          if ( bottom > *(_DWORD *)(v19 + 12) )
            *(_DWORD *)(v19 + 12) = bottom;
        }
      }
      else if ( *((_QWORD *)this + 26)
             || (v24 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                         WPF::g_pProcessHeap,
                         80LL),
                 (*((_QWORD *)this + 26) = v24) != 0LL) )
      {
        *(struct tagRECT *)(*((_QWORD *)this + 26) + 16LL * (unsigned int)(*((_DWORD *)this + 54))++) = *a2;
      }
      else
      {
        v4 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x22Au);
      }
    }
  }
LABEL_15:
  v8 = *((_DWORD *)this + 36) + 1;
  if ( *((_DWORD *)this + 36) == -1 )
    v8 = 1;
  *((_DWORD *)this + 36) = v8;
  if ( v4 < 0 )
    *((_DWORD *)this + 54) = 0;
  else
    *((_DWORD *)this + 56) = v8;
  return (unsigned int)v4;
}
