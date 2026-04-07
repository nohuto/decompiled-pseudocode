/*
 * XREFs of ?UpdateBitmap@CImage@@QEAAJXZ @ 0x18003C750
 * Callers:
 *     ?ValidateVisual@CImage@@UEAAJXZ @ 0x18003C830 (-ValidateVisual@CImage@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z @ 0x180013914 (-Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18001A610 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180023350 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180023540 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?CreateOrUpdateImageBrush@CBitmapSource@@QEAAJPEAPEAVCResource@@00W4Enum@MilStretch@@@Z @ 0x180073CFC (-CreateOrUpdateImageBrush@CBitmapSource@@QEAAJPEAPEAVCResource@@00W4Enum@MilStretch@@@Z.c)
 */

__int64 __fastcall CImage::UpdateBitmap(struct CResource **this)
{
  CBaseObject *v1; // rsi
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  struct CBitmapSource *v8; // rcx
  int v9; // eax
  int v10; // eax
  char *v12; // rbx
  int updated; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  struct CRenderDataInstruction *v17; // [rsp+40h] [rbp+8h] BYREF
  struct CRenderDataInstruction *v18; // [rsp+48h] [rbp+10h] BYREF

  v17 = 0LL;
  v1 = 0LL;
  v18 = 0LL;
  if ( this[34] )
  {
    if ( this[33] )
    {
      v12 = (char *)(this + 37);
      if ( !this[37] )
        CVisual::SetDirtyFlags((CVisual *)this, 32);
      updated = CBitmapSource::CreateOrUpdateImageBrush(this[33], this + 35, this + 36, v12, *((_DWORD *)this + 80));
      v7 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0xC1u);
        return v7;
      }
      if ( *((_DWORD *)this + 64) )
        return v7;
      v14 = CDrawGeometryInstruction::Create(this[35], this[34], &v18);
      v7 = v14;
      if ( v14 >= 0 )
      {
        v1 = v18;
        v15 = CVisual::AddInstruction((CVisual *)this, v18);
        v7 = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0xCBu);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0xC9u);
        v1 = v18;
      }
      goto LABEL_17;
    }
    v16 = CVisual::ClearInstructions((CVisual *)this);
    v7 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0xD0u);
  }
  else
  {
    v3 = this[35];
    if ( v3 )
    {
      CBaseObject::Release(v3);
      this[35] = 0LL;
    }
    v4 = this[36];
    if ( v4 )
    {
      CBaseObject::Release(v4);
      this[36] = 0LL;
    }
    v5 = this[37];
    if ( v5 )
    {
      CBaseObject::Release(v5);
      this[37] = 0LL;
    }
    v6 = CVisual::ClearInstructions((CVisual *)this);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0xDAu);
      return v7;
    }
    v8 = this[33];
    if ( v8 )
    {
      v9 = CDrawNineGridInstruction::Create(v8, &v17);
      v7 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x24Du);
      if ( (v7 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0xDEu);
      }
      else
      {
        v10 = CVisual::AddInstruction((CVisual *)this, v17);
        v7 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0xDFu);
      }
      if ( v17 )
      {
        CBaseObject::Release(v17);
LABEL_17:
        if ( v1 )
          CBaseObject::Release(v1);
      }
    }
  }
  return v7;
}
