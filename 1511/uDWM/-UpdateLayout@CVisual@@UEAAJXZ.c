/*
 * XREFs of ?UpdateLayout@CVisual@@UEAAJXZ @ 0x1800225C0
 * Callers:
 *     ?UpdateLayout@CAccent@@UEAAJXZ @ 0x1800155F0 (-UpdateLayout@CAccent@@UEAAJXZ.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180019A20 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?UpdateLayout@CText@@UEAAJXZ @ 0x18001AF90 (-UpdateLayout@CText@@UEAAJXZ.c)
 *     ?UpdateLayout@CButton@@UEAAJXZ @ 0x18001F200 (-UpdateLayout@CButton@@UEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800236A0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?UpdateLayout@CTopLevelWindow@@UEAAJXZ @ 0x180025180 (-UpdateLayout@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x1800189B0 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?SetSize@CText@@UEAAJPEBUtagSIZE@@@Z @ 0x18001AC90 (-SetSize@CText@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CVisual::UpdateLayout(CVisual *this, __int64 a2)
{
  __int64 v3; // rcx
  void (__fastcall *v4)(CVisual *__hidden); // r8
  unsigned int v5; // esi
  int v6; // ebp
  struct tagSIZE v7; // rax
  int v8; // r14d
  __int64 v9; // rcx
  __int64 (__fastcall *v10)(struct tagSIZE *, const struct tagSIZE *); // rdi
  bool v11; // zf
  void (__fastcall *v12)(CThumbnailVisual *, int); // rdi
  int v13; // eax
  __int64 v14; // rdi
  int v15; // ecx
  void (__fastcall *v16)(CVisual *__hidden); // r15
  void (__fastcall *v17)(CThumbnailVisual *, int); // rdi
  int v18; // eax
  __int64 i; // rbx
  int v20; // ecx
  void (__fastcall *v22)(CVisual *__hidden, unsigned int); // rdi
  int v23; // eax
  void (__fastcall *v24)(CVisual *__hidden); // rdi
  struct tagSIZE v25; // [rsp+70h] [rbp+8h]
  __int64 v26; // [rsp+78h] [rbp+10h]
  struct tagSIZE v27; // [rsp+80h] [rbp+18h] BYREF

  v3 = *((_QWORD *)this + 3);
  v4 = CVisual::SetDirtyChildren;
  v5 = 0;
  if ( !v3 )
    goto LABEL_29;
  a2 = *((unsigned int *)this + 30);
  if ( *((_QWORD *)this + 15) == 0x7FFFFFFF7FFFFFFFLL
    && *((_DWORD *)this + 32) == 0x7FFFFFFF
    && *((_DWORD *)this + 33) == 0x7FFFFFFF )
  {
    goto LABEL_29;
  }
  v6 = 0;
  v7 = (struct tagSIZE)*((_QWORD *)this + 14);
  v8 = 0;
  v25 = v7;
  v26 = 0LL;
  if ( *((_DWORD *)this + 31) != 0x7FFFFFFF )
  {
    if ( (_DWORD)a2 == 0x7FFFFFFF )
    {
      v6 = *(_DWORD *)(v3 + 112) - v7.cx - *((_DWORD *)this + 31);
      LODWORD(v26) = v6;
      goto LABEL_8;
    }
    v25.cx = *(_DWORD *)(v3 + 112) - *((_DWORD *)this + 31) - a2;
    goto LABEL_7;
  }
  if ( (_DWORD)a2 != 0x7FFFFFFF )
  {
LABEL_7:
    LODWORD(v26) = *((_DWORD *)this + 30);
    v6 = v26;
  }
LABEL_8:
  if ( *((_DWORD *)this + 33) != 0x7FFFFFFF )
  {
    if ( *((_DWORD *)this + 32) == 0x7FFFFFFF )
    {
      v8 = *(_DWORD *)(v3 + 116) - *((_DWORD *)this + 29) - *((_DWORD *)this + 33);
      goto LABEL_11;
    }
    v25.cy = *(_DWORD *)(v3 + 116) - *((_DWORD *)this + 32) - *((_DWORD *)this + 33);
LABEL_10:
    v8 = *((_DWORD *)this + 32);
LABEL_11:
    HIDWORD(v26) = v8;
    goto LABEL_12;
  }
  if ( *((_DWORD *)this + 32) != 0x7FFFFFFF )
    goto LABEL_10;
LABEL_12:
  if ( v25.cx <= 0 )
    v25.cx = 0;
  if ( v25.cy <= 0 )
    v25.cy = 0;
  v9 = *(_QWORD *)this;
  v27 = v25;
  v10 = *(__int64 (__fastcall **)(struct tagSIZE *, const struct tagSIZE *))(v9 + 80);
  if ( v10 == CVisual::SetSize )
  {
    if ( *((_QWORD *)this + 14) != v25 )
    {
      v11 = (*((_BYTE *)this + 84) & 1) == 0;
      *((struct tagSIZE *)this + 14) = v25;
      if ( !v11 )
      {
        (*(void (__fastcall **)(CVisual *, __int64, void (__fastcall *)(CVisual *__hidden)))(v9 + 24))(
          this,
          16LL,
          CVisual::SetDirtyChildren);
        v4 = CVisual::SetDirtyChildren;
      }
      v12 = *(void (__fastcall **)(CThumbnailVisual *, int))(*(_QWORD *)this + 24LL);
      if ( (char *)v12 == (char *)CVisual::SetDirtyFlags )
      {
        v13 = *((_DWORD *)this + 20);
        if ( (v13 & 2) == 0 )
        {
          v14 = *((_QWORD *)this + 3);
          for ( *((_DWORD *)this + 20) = v13 | 2; v14; v14 = *(_QWORD *)(v14 + 24) )
          {
            v15 = *(_DWORD *)(v14 + 80);
            if ( (v15 & 1) != 0 )
              break;
            v16 = *(void (__fastcall **)(CVisual *__hidden))(*(_QWORD *)v14 + 32LL);
            if ( v16 == CVisual::SetDirtyChildren )
            {
              *(_DWORD *)(v14 + 80) = v15 | 1;
            }
            else
            {
              ((void (__fastcall *)(__int64, __int64, void (__fastcall *)(CVisual *__hidden)))v16)(
                v14,
                a2,
                CVisual::SetDirtyChildren);
              v4 = CVisual::SetDirtyChildren;
            }
          }
        }
      }
      else if ( v12 == CThumbnailVisual::SetDirtyFlags )
      {
        CThumbnailVisual::SetDirtyFlags(this, 2);
      }
      else
      {
        ((void (__fastcall *)(CVisual *, __int64, void (__fastcall *)(CVisual *__hidden)))v12)(
          this,
          2LL,
          CVisual::SetDirtyChildren);
      }
    }
  }
  else
  {
    if ( (char *)v10 == (char *)CText::SetSize )
      v23 = CText::SetSize(this, &v27);
    else
      v23 = ((__int64 (__fastcall *)(CVisual *, struct tagSIZE *, void (__fastcall *)(CVisual *__hidden)))v10)(
              this,
              &v27,
              CVisual::SetDirtyChildren);
    v5 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v23, 0x181u);
      return v5;
    }
  }
  if ( v6 != *((_DWORD *)this + 26) || v8 != *((_DWORD *)this + 27) )
  {
    *((_QWORD *)this + 13) = v26;
    v22 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v22 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 8u);
    else
      ((void (__fastcall *)(CVisual *, __int64, void (__fastcall *)(CVisual *__hidden)))v22)(this, 8LL, v4);
  }
LABEL_29:
  v17 = *(void (__fastcall **)(CThumbnailVisual *, int))(*(_QWORD *)this + 24LL);
  if ( (char *)v17 == (char *)CVisual::SetDirtyFlags )
  {
    v18 = *((_DWORD *)this + 20);
    if ( (v18 & 4) == 0 )
    {
      *((_DWORD *)this + 20) = v18 | 4;
      for ( i = *((_QWORD *)this + 3); i; i = *(_QWORD *)(i + 24) )
      {
        v20 = *(_DWORD *)(i + 80);
        if ( (v20 & 1) != 0 )
          break;
        v24 = *(void (__fastcall **)(CVisual *__hidden))(*(_QWORD *)i + 32LL);
        if ( v24 == CVisual::SetDirtyChildren )
          *(_DWORD *)(i + 80) = v20 | 1;
        else
          ((void (__fastcall *)(__int64, __int64, void (__fastcall *)(CVisual *__hidden)))v24)(
            i,
            a2,
            CVisual::SetDirtyChildren);
      }
    }
  }
  else if ( v17 == CThumbnailVisual::SetDirtyFlags )
  {
    CThumbnailVisual::SetDirtyFlags(this, 4);
  }
  else
  {
    ((void (__fastcall *)(CVisual *, __int64, void (__fastcall *)(CVisual *__hidden)))v17)(
      this,
      4LL,
      CVisual::SetDirtyChildren);
  }
  return v5;
}
