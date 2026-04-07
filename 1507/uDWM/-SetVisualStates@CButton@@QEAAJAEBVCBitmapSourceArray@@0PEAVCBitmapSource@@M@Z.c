/*
 * XREFs of ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z @ 0x18001A7C0
 * Callers:
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x180023058 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z @ 0x180015B70 (-CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetDirtyChildren@CVisual@@UEAAXXZ @ 0x18001E280 (-SetDirtyChildren@CVisual@@UEAAXXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CButton::SetVisualStates(
        CButton *this,
        const struct CBitmapSourceArray *a2,
        unsigned __int64 a3,
        struct CBitmapSource *a4,
        float a5)
{
  CBitmapSourceArray *v6; // rcx
  char v7; // bp
  const struct CBitmapSourceArray *v9; // r14
  const struct CBitmapSourceArray *v10; // r11
  unsigned int v11; // edi
  unsigned int v12; // esi
  char v13; // r10
  unsigned int v14; // r9d
  int v15; // eax
  CBitmapSourceArray *v16; // rcx
  unsigned int v17; // r9d
  unsigned int v18; // r11d
  __int64 v19; // r10
  int v20; // eax
  CBaseObject *v21; // rcx
  float v22; // xmm1_4
  bool v23; // zf
  float v24; // xmm0_4
  int v25; // eax
  CVisual *i; // rbx
  void (__fastcall *v28)(CVisual *__hidden); // rsi

  v6 = (CButton *)((char *)this + 328);
  v7 = 0;
  v9 = (const struct CBitmapSourceArray *)a3;
  v10 = a2;
  v11 = 0;
  v12 = *((_DWORD *)v6 + 6);
  if ( v12 == *((_DWORD *)a2 + 6) )
  {
    v13 = 1;
    v14 = 0;
    if ( !v12 )
      goto LABEL_11;
    a3 = 0LL;
    while ( v13 )
    {
      a2 = *(const struct CBitmapSourceArray **)v6;
      if ( *(_QWORD *)(a3 + *(_QWORD *)v6) != *(_QWORD *)(a3 + *(_QWORD *)v10) )
        v13 = 0;
      ++v14;
      a3 += 8LL;
      if ( v14 >= v12 )
      {
        if ( v13 )
          goto LABEL_11;
        break;
      }
    }
  }
  v15 = CBitmapSourceArray::CopyAndAddRef(v6, v10);
  v11 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0x65u);
    return v11;
  }
  v7 = 1;
LABEL_11:
  v16 = (CButton *)((char *)this + 360);
  v17 = *((_DWORD *)this + 96);
  if ( v17 == *((_DWORD *)v9 + 6) )
  {
    LOBYTE(a3) = 1;
    v18 = 0;
    if ( !v17 )
      goto LABEL_21;
    v19 = 0LL;
    while ( (_BYTE)a3 )
    {
      a2 = *(const struct CBitmapSourceArray **)v16;
      a3 = (unsigned __int8)a3;
      if ( *(_QWORD *)(v19 + *(_QWORD *)v16) != *(_QWORD *)(v19 + *(_QWORD *)v9) )
        a3 = 0LL;
      ++v18;
      v19 += 8LL;
      if ( v18 >= v17 )
      {
        if ( (_BYTE)a3 )
          goto LABEL_21;
        break;
      }
    }
  }
  v20 = CBitmapSourceArray::CopyAndAddRef(v16, v9);
  v11 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v20, 0x6Bu);
    return v11;
  }
  v7 = 1;
LABEL_21:
  v21 = (CBaseObject *)*((_QWORD *)this + 49);
  if ( v21 != a4 )
  {
    if ( v21 )
      CBaseObject::Release(v21);
    *((_QWORD *)this + 49) = a4;
    if ( a4 )
      _InterlockedIncrement((volatile signed __int32 *)a4 + 2);
    v7 = 1;
  }
  v22 = a5;
  if ( *((float *)this + 107) == a5 )
  {
    if ( !v7 )
      return v11;
    goto LABEL_26;
  }
  v23 = *((_DWORD *)this + 100) == 1;
  v24 = *((float *)this + 106);
  *((float *)this + 107) = a5;
  if ( v23 )
    v22 = FLOAT_1_0;
  *((float *)this + 106) = v22;
  if ( v7 )
  {
LABEL_26:
    v25 = *((_DWORD *)this + 20);
    if ( (v25 & 0x8000) == 0 )
    {
      *((_DWORD *)this + 20) = v25 | 0x8000;
      for ( i = (CVisual *)*((_QWORD *)this + 3); i; i = (CVisual *)*((_QWORD *)i + 3) )
      {
        if ( (*((_BYTE *)i + 80) & 1) != 0 )
          break;
        v28 = *(void (__fastcall **)(CVisual *__hidden))(*(_QWORD *)i + 32LL);
        if ( v28 == CVisual::SetDirtyChildren )
          CVisual::SetDirtyChildren(i);
        else
          ((void (__fastcall *)(CVisual *, const struct CBitmapSourceArray *, unsigned __int64))v28)(i, a2, a3);
      }
    }
    return v11;
  }
  if ( v24 != v22 )
    CVisual::SetDirtyFlags(this, 0x8000u);
  return v11;
}
