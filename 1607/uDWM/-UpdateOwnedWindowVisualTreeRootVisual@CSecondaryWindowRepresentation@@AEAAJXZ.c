/*
 * XREFs of ?UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ @ 0x180034F18
 * Callers:
 *     ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCResource@@0PEBUMilPointAndSizeL@@@Z @ 0x180034540 (-SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCResource@@0PEBUMilPointAndSizeL@@@Z.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180034740 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x18000B468 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     ?Create@CDrawVisualTreeInstruction@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x180015488 (-Create@CDrawVisualTreeInstruction@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x180017B68 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001A10C (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180020310 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x1800204C4 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::UpdateOwnedWindowVisualTreeRootVisual(
        CSecondaryWindowRepresentation *this)
{
  unsigned int v1; // ebx
  CBaseObject *v2; // rbp
  CBaseObject *v3; // r14
  CVisual *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rcx
  int v9; // eax
  CBaseObject *v10; // rsi
  int v11; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  struct CResource *v16; // [rsp+60h] [rbp+8h] BYREF
  struct CRenderDataInstruction *v17; // [rsp+68h] [rbp+10h] BYREF
  struct CDrawVisualTreeInstruction *v18; // [rsp+70h] [rbp+18h] BYREF

  v1 = 0;
  v2 = 0LL;
  v18 = 0LL;
  v3 = 0LL;
  v17 = 0LL;
  v5 = (CVisual *)*((_QWORD *)this + 7);
  v16 = 0LL;
  if ( !v5 )
    return v1;
  CVisual::ClearInstructions(v5);
  if ( *((_QWORD *)this + 65) )
  {
    v13 = ResourceHelper::CreateRectangleGeometry(
            *((unsigned int *)this + 132),
            *((unsigned int *)this + 133),
            *((unsigned int *)this + 134),
            *((unsigned int *)this + 135),
            &v16);
    v1 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xF5u);
      v3 = v16;
LABEL_13:
      if ( v3 )
        CBaseObject::Release(v3);
      return v1;
    }
    v3 = v16;
    v14 = CDrawGeometryInstruction::Create(*((struct CResource **)this + 65), v16, &v17);
    v1 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xFAu);
      v2 = v17;
    }
    else
    {
      v2 = v17;
      v15 = CVisual::AddInstruction(*((CVisual **)this + 7), v17);
      v1 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xFCu);
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
      v6 = *(_QWORD *)(*(_QWORD *)(v7 + 408) + 32LL);
      goto LABEL_5;
    }
    if ( *((_DWORD *)this + 18) != 3 )
      goto LABEL_5;
    if ( !CWindowData::IsImmersiveWindow(*((CWindowData **)this + 8)) )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(v7 + 416) + 80LL);
      goto LABEL_5;
    }
  }
  v6 = v7;
LABEL_5:
  v8 = *(_QWORD *)(v6 + 384);
  if ( v8 )
  {
    v9 = CDrawVisualTreeInstruction::Create(*(struct CVisual **)(v8 + 280), &v18);
    v10 = v18;
    v1 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x106u);
    }
    else
    {
      v11 = CVisual::AddInstruction(*((CVisual **)this + 7), v18);
      v1 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x109u);
    }
    if ( v10 )
    {
      CBaseObject::Release(v10);
      goto LABEL_11;
    }
  }
  return v1;
}
