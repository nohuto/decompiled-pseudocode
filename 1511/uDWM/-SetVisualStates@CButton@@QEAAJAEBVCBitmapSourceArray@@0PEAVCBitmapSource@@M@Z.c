/*
 * XREFs of ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z @ 0x18001F3A0
 * Callers:
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x1800287A4 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z @ 0x18001BAF0 (-CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?UpdateCurrentGlyphOpacity@CButton@@AEAAX_N@Z @ 0x18001F084 (-UpdateCurrentGlyphOpacity@CButton@@AEAAX_N@Z.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180021E88 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 */

__int64 __fastcall CButton::SetVisualStates(
        CButton *this,
        const struct CBitmapSourceArray *a2,
        const struct CBitmapSourceArray *a3,
        struct CBitmapSource *a4,
        float a5)
{
  CBitmapSourceArray *v6; // rcx
  char v7; // si
  unsigned int v10; // edi
  unsigned int v11; // ebp
  char v12; // r10
  unsigned int v13; // r9d
  __int64 v14; // r8
  int v15; // eax
  CBitmapSourceArray *v16; // rcx
  unsigned int v17; // r9d
  char v18; // r8
  unsigned int v19; // r11d
  __int64 v20; // r10
  int v21; // eax
  CBaseObject *v22; // rcx
  int v23; // eax

  v6 = (CButton *)((char *)this + 328);
  v7 = 0;
  v10 = 0;
  v11 = *((_DWORD *)v6 + 6);
  if ( v11 == *((_DWORD *)a2 + 6) )
  {
    v12 = 1;
    v13 = 0;
    if ( !v11 )
      goto LABEL_11;
    v14 = 0LL;
    while ( v12 )
    {
      if ( *(_QWORD *)(v14 + *(_QWORD *)v6) != *(_QWORD *)(v14 + *(_QWORD *)a2) )
        v12 = 0;
      ++v13;
      v14 += 8LL;
      if ( v13 >= v11 )
      {
        if ( v12 )
          goto LABEL_11;
        break;
      }
    }
  }
  v15 = CBitmapSourceArray::CopyAndAddRef(v6, a2);
  v10 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0x65u);
    return v10;
  }
  v7 = 1;
LABEL_11:
  v16 = (CButton *)((char *)this + 360);
  v17 = *((_DWORD *)this + 96);
  if ( v17 != *((_DWORD *)a3 + 6) )
  {
LABEL_19:
    v21 = CBitmapSourceArray::CopyAndAddRef(v16, a3);
    v10 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v21, 0x6Bu);
      return v10;
    }
    v7 = 1;
    goto LABEL_21;
  }
  v18 = 1;
  v19 = 0;
  if ( v17 )
  {
    v20 = 0LL;
    while ( v18 )
    {
      if ( *(_QWORD *)(v20 + *(_QWORD *)v16) != *(_QWORD *)(v20 + *(_QWORD *)a3) )
        v18 = 0;
      ++v19;
      v20 += 8LL;
      if ( v19 >= v17 )
      {
        if ( v18 )
          goto LABEL_21;
        goto LABEL_19;
      }
    }
    goto LABEL_19;
  }
LABEL_21:
  v22 = (CBaseObject *)*((_QWORD *)this + 49);
  if ( v22 != a4 )
  {
    if ( v22 )
      CBaseObject::Release(v22);
    *((_QWORD *)this + 49) = a4;
    if ( a4 )
      _InterlockedIncrement((volatile signed __int32 *)a4 + 2);
    v7 = 1;
  }
  if ( *((float *)this + 107) != a5 )
  {
    *((float *)this + 107) = a5;
    CButton::UpdateCurrentGlyphOpacity(this, v7);
  }
  if ( v7 )
  {
    v23 = *((_DWORD *)this + 20);
    if ( (v23 & 0x8000) == 0 )
    {
      *((_DWORD *)this + 20) = v23 | 0x8000;
      CVisual::PropagateDirtyChildren(this);
    }
  }
  return v10;
}
