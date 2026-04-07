/*
 * XREFs of ?AddDirtyRect@CBitmap@@UEAAJPEBUtagRECT@@@Z @ 0x18009BD80
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18009C690 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

__int64 __fastcall CBitmap::AddDirtyRect(CBitmap *this, const struct tagRECT *a2)
{
  int v4; // esi
  LONG right; // eax
  LONG bottom; // eax
  __int64 v7; // rdx
  LONG *v8; // r8
  unsigned __int8 IsEmpty; // al
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // al
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned __int8 v18; // al
  __int64 v19; // r8
  char v20; // al
  __int64 v21; // r8
  int v22; // edx
  unsigned int top; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  __int64 v26; // rax
  int v27; // eax

  v4 = 0;
  if ( a2 )
  {
    if ( a2->left < 0
      || a2->top < 0
      || (right = a2->right, right <= a2->left)
      || (unsigned int)right > *((_DWORD *)this + 40)
      || (bottom = a2->bottom, bottom <= a2->top)
      || (unsigned int)bottom > *((_DWORD *)this + 41) )
    {
      v4 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024809, 0x1E8u);
      goto LABEL_56;
    }
  }
  if ( *((_DWORD *)this + 14) )
  {
    if ( *((_BYTE *)this + 228) || *((_DWORD *)this + 56) != *((_DWORD *)this + 36) )
    {
      *((_DWORD *)this + 54) = 0;
      *((_BYTE *)this + 228) = 0;
    }
    if ( !a2 || a2->right - a2->left == *((_DWORD *)this + 40) && a2->bottom - a2->top == *((_DWORD *)this + 41) )
    {
      *((_DWORD *)this + 54) = 0;
      goto LABEL_56;
    }
    v7 = *((unsigned int *)this + 54);
    if ( (_DWORD)v7 )
    {
      if ( (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(
                              a2,
                              v7,
                              *((_QWORD *)this + 26))
        || a2->left >= (unsigned int)*v8
        && a2->top >= (unsigned int)v8[1]
        && a2->right <= (unsigned int)v8[2]
        && a2->bottom <= (unsigned int)v8[3] )
      {
        goto LABEL_56;
      }
    }
    else
    {
      *((_DWORD *)this + 55) = *((_DWORD *)this + 36);
    }
    if ( (unsigned int)v7 < 5 )
    {
      if ( *((_QWORD *)this + 26)
        || (v26 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                    WPF::g_pProcessHeap,
                    80LL),
            (*((_QWORD *)this + 26) = v26) != 0LL) )
      {
        *(struct tagRECT *)(*((_QWORD *)this + 26) + 16LL * (unsigned int)(*((_DWORD *)this + 54))++) = *a2;
      }
      else
      {
        v4 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x22Au);
      }
    }
    else
    {
      do
      {
        --*((_DWORD *)this + 54);
        IsEmpty = TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(
                    *((_QWORD *)this + 26),
                    v7,
                    *((_QWORD *)this + 26));
        v12 = TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(v11, IsEmpty, v10);
        if ( (_DWORD)v7 )
        {
          if ( v12 )
          {
            *(_QWORD *)(v13 + 8) = 0LL;
            *(_QWORD *)v13 = 0LL;
          }
          else
          {
            *(_OWORD *)v13 = *(_OWORD *)v14;
          }
        }
        else if ( !v12 )
        {
          if ( *(_DWORD *)v14 < *(_DWORD *)v13 )
            *(_DWORD *)v13 = *(_DWORD *)v14;
          v15 = *(_DWORD *)(v14 + 4);
          if ( v15 < *(_DWORD *)(v13 + 4) )
            *(_DWORD *)(v13 + 4) = v15;
          v16 = *(_DWORD *)(v14 + 8);
          if ( v16 > *(_DWORD *)(v13 + 8) )
            *(_DWORD *)(v13 + 8) = v16;
          v17 = *(_DWORD *)(v14 + 12);
          if ( v17 > *(_DWORD *)(v13 + 12) )
            *(_DWORD *)(v13 + 12) = v17;
        }
      }
      while ( *((_DWORD *)this + 54) > 1u );
      v18 = TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(
              *((_QWORD *)this + 26),
              v7,
              *((_QWORD *)this + 26));
      v20 = TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(a2, v18, v19);
      if ( v22 )
      {
        if ( v20 )
        {
          *(_QWORD *)(v21 + 8) = 0LL;
          *(_QWORD *)v21 = 0LL;
        }
        else
        {
          *(struct tagRECT *)v21 = *a2;
        }
      }
      else if ( !v20 )
      {
        if ( a2->left < *(_DWORD *)v21 )
          *(_DWORD *)v21 = a2->left;
        top = a2->top;
        if ( top < *(_DWORD *)(v21 + 4) )
          *(_DWORD *)(v21 + 4) = top;
        v24 = a2->right;
        if ( v24 > *(_DWORD *)(v21 + 8) )
          *(_DWORD *)(v21 + 8) = v24;
        v25 = a2->bottom;
        if ( v25 > *(_DWORD *)(v21 + 12) )
          *(_DWORD *)(v21 + 12) = v25;
      }
    }
  }
LABEL_56:
  v27 = *((_DWORD *)this + 36) + 1;
  if ( *((_DWORD *)this + 36) == -1 )
    v27 = 1;
  *((_DWORD *)this + 36) = v27;
  if ( v4 < 0 )
    *((_DWORD *)this + 54) = 0;
  else
    *((_DWORD *)this + 56) = v27;
  return (unsigned int)v4;
}
