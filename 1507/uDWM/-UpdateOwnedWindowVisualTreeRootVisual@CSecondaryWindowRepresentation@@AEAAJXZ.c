/*
 * XREFs of ?UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ @ 0x18003472C
 * Callers:
 *     ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCResource@@0PEBUMilPointAndSizeL@@@Z @ 0x180033D48 (-SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCResource@@0PEBUMilPointAndSizeL@@@Z.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180033F40 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x180010AD0 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x180014A30 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180017DC4 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x18001DF40 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18001E130 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Create@CDrawVisualTreeInstruction@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1800350D8 (-Create@CDrawVisualTreeInstruction@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::UpdateOwnedWindowVisualTreeRootVisual(
        CSecondaryWindowRepresentation *this)
{
  unsigned int v1; // ebx
  CBaseObject *v2; // rsi
  struct CResource *v3; // rbp
  CVisual *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  struct CDrawVisualTreeInstruction *v15; // [rsp+50h] [rbp+8h] BYREF
  struct CResource *v16; // [rsp+58h] [rbp+10h] BYREF
  struct CRenderDataInstruction *v17; // [rsp+60h] [rbp+18h] BYREF

  v1 = 0;
  v2 = 0LL;
  v15 = 0LL;
  v3 = 0LL;
  v17 = 0LL;
  v5 = (CVisual *)*((_QWORD *)this + 7);
  v16 = 0LL;
  if ( !v5 )
    return v1;
  CVisual::ClearInstructions(v5);
  if ( *((_QWORD *)this + 65) )
  {
    v12 = ResourceHelper::CreateRectangleGeometry(
            *((_DWORD *)this + 132),
            *((_DWORD *)this + 133),
            *((_DWORD *)this + 134),
            *((_DWORD *)this + 135),
            &v16);
    v1 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0xF5u);
      v3 = v16;
LABEL_13:
      if ( v3 )
        CBaseObject::Release(v3);
      return v1;
    }
    v3 = v16;
    v13 = CDrawGeometryInstruction::Create(*((struct CResource **)this + 65), v16, &v17);
    v1 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0xFAu);
      v2 = v17;
    }
    else
    {
      v2 = v17;
      v14 = CVisual::AddInstruction(*((CVisual **)this + 7), v17);
      v1 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0xFCu);
    }
LABEL_11:
    if ( v2 )
      CBaseObject::Release(v2);
    goto LABEL_13;
  }
  v6 = 0LL;
  v7 = *((_QWORD *)this + 8);
  if ( *((_DWORD *)this + 18) != 1 )
  {
    if ( *((_DWORD *)this + 18) == 2 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(v7 + 384) + 32LL);
      goto LABEL_5;
    }
    if ( *((_DWORD *)this + 18) != 3 )
      goto LABEL_5;
    if ( !CWindowData::IsImmersiveWindow(*((CWindowData **)this + 8)) )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(v7 + 392) + 80LL);
      goto LABEL_5;
    }
  }
  v6 = v7;
LABEL_5:
  v8 = *(_QWORD *)(v6 + 368);
  if ( v8 )
  {
    v9 = CDrawVisualTreeInstruction::Create(*(struct CVisual **)(v8 + 280), &v15);
    v1 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x106u);
    }
    else
    {
      v10 = CVisual::AddInstruction(*((CVisual **)this + 7), v15);
      v1 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x109u);
    }
    if ( v15 )
    {
      CBaseObject::Release(v15);
      goto LABEL_11;
    }
  }
  return v1;
}
