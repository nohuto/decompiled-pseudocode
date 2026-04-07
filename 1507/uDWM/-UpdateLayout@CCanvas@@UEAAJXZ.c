/*
 * XREFs of ?UpdateLayout@CCanvas@@UEAAJXZ @ 0x180019A50
 * Callers:
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x18001E290 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18001C850 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CCanvas::UpdateLayout(CCanvas *this)
{
  __int64 v2; // rcx
  int v3; // ebp
  unsigned int v4; // esi
  unsigned int v5; // r8d
  int v6; // edx
  int v7; // edi
  struct tagSIZE v8; // rax
  unsigned int v9; // eax
  int v10; // eax
  __int64 (__fastcall *v11)(CVisual *__hidden, const struct tagSIZE *); // rbp
  int v12; // eax
  void (__fastcall *v13)(CVisual *__hidden, unsigned int); // rdi
  int v14; // eax
  CVisual *v15; // rdi
  int v16; // ecx
  __int64 v17; // rdi
  char v18; // si
  __int64 v19; // r14
  void (__fastcall *v20)(CVisual *__hidden, unsigned int); // r15
  int v21; // eax
  CVisual *i; // r14
  int v23; // ecx
  void (__fastcall *v24)(CVisual *__hidden); // r15
  void (__fastcall *v26)(CVisual *__hidden); // rsi
  void (__fastcall *v27)(CVisual *__hidden, unsigned int); // rdi
  unsigned int v28; // eax
  int v29; // eax
  struct tagSIZE v30; // [rsp+70h] [rbp+8h] BYREF
  __int64 v31; // [rsp+78h] [rbp+10h]

  v2 = *((_QWORD *)this + 3);
  v3 = 0;
  if ( v2 )
  {
    v4 = *((_DWORD *)this + 30);
    v5 = *((_DWORD *)this + 31);
    v6 = *((_DWORD *)this + 33);
    v7 = *((_DWORD *)this + 32);
    if ( __PAIR64__(v5, v4) != 0x7FFFFFFF7FFFFFFFLL || v7 != 0x7FFFFFFF || v6 != 0x7FFFFFFF )
    {
      v8 = (struct tagSIZE)*((_QWORD *)this + 14);
      v30 = v8;
      if ( v5 == 0x7FFFFFFF )
      {
        v28 = 0;
        if ( v4 != 0x7FFFFFFF )
          v28 = v4;
        v4 = v28;
        LODWORD(v31) = v28;
      }
      else if ( v4 == 0x7FFFFFFF )
      {
        v4 = *(_DWORD *)(v2 + 112) - v8.cx - v5;
        LODWORD(v31) = v4;
      }
      else
      {
        v9 = *(_DWORD *)(v2 + 112) - v5;
        LODWORD(v31) = v4;
        v30.cx = v9 - v4;
      }
      if ( v6 == 0x7FFFFFFF )
      {
        v29 = 0;
        if ( v7 != 0x7FFFFFFF )
          v29 = v7;
        v7 = v29;
        HIDWORD(v31) = v29;
      }
      else if ( v7 == 0x7FFFFFFF )
      {
        v7 = *(_DWORD *)(v2 + 116) - *((_DWORD *)this + 29) - v6;
        HIDWORD(v31) = v7;
      }
      else
      {
        v10 = *(_DWORD *)(v2 + 116) - v7;
        HIDWORD(v31) = v7;
        v30.cy = v10 - v6;
      }
      if ( v30.cx <= 0 )
        v30.cx = 0;
      if ( v30.cy <= 0 )
        v30.cy = 0;
      v11 = *(__int64 (__fastcall **)(CVisual *__hidden, const struct tagSIZE *))(*(_QWORD *)this + 80LL);
      if ( v11 == CVisual::SetSize )
        v12 = CVisual::SetSize(this, &v30);
      else
        v12 = v11(this, &v30);
      v3 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x181u);
        goto LABEL_22;
      }
      if ( v4 != *((_DWORD *)this + 26) || v7 != *((_DWORD *)this + 27) )
      {
        *((_QWORD *)this + 13) = v31;
        v27 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
        if ( v27 == CVisual::SetDirtyFlags )
          CVisual::SetDirtyFlags(this, 8u);
        else
          v27(this, 8u);
      }
    }
  }
  v13 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
  if ( v13 == CVisual::SetDirtyFlags )
  {
    v14 = *((_DWORD *)this + 20);
    if ( (v14 & 4) == 0 )
    {
      v15 = (CVisual *)*((_QWORD *)this + 3);
      for ( *((_DWORD *)this + 20) = v14 | 4; v15; v15 = (CVisual *)*((_QWORD *)v15 + 3) )
      {
        v16 = *((_DWORD *)v15 + 20);
        if ( (v16 & 1) != 0 )
          break;
        v26 = *(void (__fastcall **)(CVisual *__hidden))(*(_QWORD *)v15 + 32LL);
        if ( v26 == CVisual::SetDirtyChildren )
          *((_DWORD *)v15 + 20) = v16 | 1;
        else
          v26(v15);
      }
    }
  }
  else
  {
    v13(this, 4u);
  }
LABEL_22:
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x36u);
  }
  else
  {
    LODWORD(v17) = -1;
    v18 = 0;
    while ( 1 )
    {
      if ( v18 )
      {
        v17 = (unsigned int)(v17 + 1);
      }
      else
      {
        v18 = 1;
        v17 = 0LL;
      }
      if ( (unsigned int)v17 >= *((_DWORD *)this + 18) )
        break;
      v19 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v17);
      v20 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v19 + 24LL);
      if ( v20 == CVisual::SetDirtyFlags )
      {
        v21 = *(_DWORD *)(v19 + 80);
        if ( (v21 & 2) == 0 )
        {
          *(_DWORD *)(v19 + 80) = v21 | 2;
          for ( i = *(CVisual **)(v19 + 24); i; i = (CVisual *)*((_QWORD *)i + 3) )
          {
            v23 = *((_DWORD *)i + 20);
            if ( (v23 & 1) != 0 )
              break;
            v24 = *(void (__fastcall **)(CVisual *__hidden))(*(_QWORD *)i + 32LL);
            if ( v24 == CVisual::SetDirtyChildren )
              *((_DWORD *)i + 20) = v23 | 1;
            else
              v24(i);
          }
        }
      }
      else
      {
        v20(*(CVisual **)(*((_QWORD *)this + 6) + 8 * v17), 2u);
      }
    }
  }
  return (unsigned int)v3;
}
