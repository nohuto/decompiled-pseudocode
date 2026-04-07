/*
 * XREFs of ?UpdateLayout@CVisual@@UEAAJXZ @ 0x18001D1B0
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180013ED0 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?UpdateLayout@CText@@UEAAJXZ @ 0x1800160D0 (-UpdateLayout@CText@@UEAAJXZ.c)
 *     ?UpdateLayout@CButton@@UEAAJXZ @ 0x18001A620 (-UpdateLayout@CButton@@UEAAJXZ.c)
 *     ?UpdateLayout@CAtlasedRectsVisual@@UEAAJXZ @ 0x18001B1A0 (-UpdateLayout@CAtlasedRectsVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x18001E290 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?UpdateLayout@CTopLevelWindow@@UEAAJXZ @ 0x18001FCA0 (-UpdateLayout@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateLayout@CAccent@@UEAAJXZ @ 0x180036960 (-UpdateLayout@CAccent@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180012F30 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?SetSize@CText@@UEAAJPEBUtagSIZE@@@Z @ 0x180015DD0 (-SetSize@CText@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CVisual::UpdateLayout(CVisual *this)
{
  __int64 v2; // rcx
  unsigned int v3; // esi
  unsigned int v4; // r8d
  unsigned int v5; // edx
  int v6; // r10d
  int v7; // r9d
  struct tagSIZE v8; // rax
  unsigned int v9; // ebp
  int v10; // r14d
  __int64 v11; // rcx
  __int64 (__fastcall *v12)(struct tagSIZE *, const struct tagSIZE *); // rdi
  bool v13; // zf
  void (__fastcall *v14)(CThumbnailVisual *, int); // rdi
  int v15; // eax
  CVisual *v16; // rdi
  int v17; // ecx
  void (__fastcall *v18)(CVisual *__hidden); // r15
  void (__fastcall *v19)(CThumbnailVisual *, int); // rdi
  int v20; // eax
  CVisual *i; // rbx
  int v22; // ecx
  void (__fastcall *v24)(CVisual *__hidden, unsigned int); // rdi
  int v25; // eax
  void (__fastcall *v26)(CVisual *__hidden); // rdi
  struct tagSIZE v27; // [rsp+70h] [rbp+8h]
  __int64 v28; // [rsp+78h] [rbp+10h]
  struct tagSIZE v29; // [rsp+80h] [rbp+18h] BYREF

  v2 = *((_QWORD *)this + 3);
  v3 = 0;
  if ( !v2 )
    goto LABEL_27;
  v4 = *((_DWORD *)this + 30);
  v5 = *((_DWORD *)this + 31);
  v6 = *((_DWORD *)this + 33);
  v7 = *((_DWORD *)this + 32);
  if ( __PAIR64__(v5, v4) == 0x7FFFFFFF7FFFFFFFLL && v7 == 0x7FFFFFFF && v6 == 0x7FFFFFFF )
    goto LABEL_27;
  v8 = (struct tagSIZE)*((_QWORD *)this + 14);
  v9 = 0;
  v27 = v8;
  v10 = 0;
  v28 = 0LL;
  if ( v5 == 0x7FFFFFFF )
  {
    if ( v4 != 0x7FFFFFFF )
      goto LABEL_6;
  }
  else
  {
    if ( v4 != 0x7FFFFFFF )
    {
      v27.cx = *(_DWORD *)(v2 + 112) - v5 - v4;
LABEL_6:
      LODWORD(v28) = *((_DWORD *)this + 30);
      v9 = v28;
      goto LABEL_7;
    }
    v9 = *(_DWORD *)(v2 + 112) - v8.cx - v5;
    LODWORD(v28) = v9;
  }
LABEL_7:
  if ( v6 != 0x7FFFFFFF )
  {
    if ( v7 == 0x7FFFFFFF )
    {
      v10 = *(_DWORD *)(v2 + 116) - *((_DWORD *)this + 29) - v6;
      HIDWORD(v28) = v10;
      goto LABEL_10;
    }
    v27.cy = *(_DWORD *)(v2 + 116) - v7 - v6;
    goto LABEL_9;
  }
  if ( v7 != 0x7FFFFFFF )
  {
LABEL_9:
    HIDWORD(v28) = *((_DWORD *)this + 32);
    v10 = HIDWORD(v28);
  }
LABEL_10:
  if ( v27.cx <= 0 )
    v27.cx = 0;
  if ( v27.cy <= 0 )
    v27.cy = 0;
  v11 = *(_QWORD *)this;
  v29 = v27;
  v12 = *(__int64 (__fastcall **)(struct tagSIZE *, const struct tagSIZE *))(v11 + 80);
  if ( v12 == CVisual::SetSize )
  {
    if ( *((_QWORD *)this + 14) != v27 )
    {
      v13 = (*((_BYTE *)this + 84) & 1) == 0;
      *((struct tagSIZE *)this + 14) = v27;
      if ( !v13 )
        (*(void (__fastcall **)(CVisual *, __int64))(v11 + 24))(this, 16LL);
      v14 = *(void (__fastcall **)(CThumbnailVisual *, int))(*(_QWORD *)this + 24LL);
      if ( (char *)v14 == (char *)CVisual::SetDirtyFlags )
      {
        v15 = *((_DWORD *)this + 20);
        if ( (v15 & 2) == 0 )
        {
          v16 = (CVisual *)*((_QWORD *)this + 3);
          for ( *((_DWORD *)this + 20) = v15 | 2; v16; v16 = (CVisual *)*((_QWORD *)v16 + 3) )
          {
            v17 = *((_DWORD *)v16 + 20);
            if ( (v17 & 1) != 0 )
              break;
            v18 = *(void (__fastcall **)(CVisual *__hidden))(*(_QWORD *)v16 + 32LL);
            if ( v18 == CVisual::SetDirtyChildren )
              *((_DWORD *)v16 + 20) = v17 | 1;
            else
              v18(v16);
          }
        }
      }
      else if ( v14 == CThumbnailVisual::SetDirtyFlags )
      {
        CThumbnailVisual::SetDirtyFlags(this, 2);
      }
      else
      {
        v14(this, 2);
      }
    }
  }
  else
  {
    if ( (char *)v12 == (char *)CText::SetSize )
      v25 = CText::SetSize(this, &v29);
    else
      v25 = v12((struct tagSIZE *)this, &v29);
    v3 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v25, 0x181u);
      return v3;
    }
  }
  if ( v9 != *((_DWORD *)this + 26) || v10 != *((_DWORD *)this + 27) )
  {
    *((_QWORD *)this + 13) = v28;
    v24 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v24 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 8u);
    else
      v24(this, 8u);
  }
LABEL_27:
  v19 = *(void (__fastcall **)(CThumbnailVisual *, int))(*(_QWORD *)this + 24LL);
  if ( (char *)v19 == (char *)CVisual::SetDirtyFlags )
  {
    v20 = *((_DWORD *)this + 20);
    if ( (v20 & 4) == 0 )
    {
      *((_DWORD *)this + 20) = v20 | 4;
      for ( i = (CVisual *)*((_QWORD *)this + 3); i; i = (CVisual *)*((_QWORD *)i + 3) )
      {
        v22 = *((_DWORD *)i + 20);
        if ( (v22 & 1) != 0 )
          break;
        v26 = *(void (__fastcall **)(CVisual *__hidden))(*(_QWORD *)i + 32LL);
        if ( v26 == CVisual::SetDirtyChildren )
          *((_DWORD *)i + 20) = v22 | 1;
        else
          v26(i);
      }
    }
  }
  else if ( v19 == CThumbnailVisual::SetDirtyFlags )
  {
    CThumbnailVisual::SetDirtyFlags(this, 4);
  }
  else
  {
    v19(this, 4);
  }
  return v3;
}
