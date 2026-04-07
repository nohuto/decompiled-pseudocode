/*
 * XREFs of ?_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180013B78
 * Callers:
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x180014730 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 * Callees:
 *     ?GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCResource@@XZ @ 0x180005614 (-GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCResource@@XZ.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x180017B68 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18001F7A4 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180020310 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x1800204C4 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_ValidateDCompVisual(CAnimatedTransitionVisual *this)
{
  CBaseObject *v1; // rdi
  unsigned int v2; // esi
  int v4; // eax
  __int64 v5; // rax
  LONG v6; // r8d
  CVisual *v7; // rcx
  struct CResource *BrushNoRef; // rax
  int v10; // eax
  int v11; // eax
  struct tagPOINT v12; // [rsp+90h] [rbp+8h] BYREF

  v1 = 0LL;
  v2 = 0;
  v12 = 0LL;
  v4 = *((_DWORD *)this + 22);
  if ( (v4 & 0x1000) == 0 && (v4 & 0x2000) == 0 && (v4 & 0x20) == 0 )
    return v2;
  if ( *((_BYTE *)this + 959) )
  {
    v5 = *((_QWORD *)this + 89);
    v6 = *((_DWORD *)this + 211);
    v12.x = *((_DWORD *)this + 210);
    v12.y = v6;
    v7 = **(CVisual ***)(v5 + 48);
    if ( *((_DWORD *)v7 + 26) != v12.x || *((_DWORD *)v7 + 27) != v6 )
      CVisual::SetOffset(v7, &v12);
    goto LABEL_5;
  }
  if ( (v4 & 0x2000) != 0 )
    CVisual::ClearInstructions(*((CVisual **)this + 89));
  if ( *(_DWORD *)(*((_QWORD *)this + 89) + 256LL) )
    goto LABEL_5;
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 87) + 16LL) + 656LL))(
    *(_QWORD *)(*((_QWORD *)this + 87) + 16LL),
    *(unsigned int *)(*((_QWORD *)this + 87) + 24LL));
  BrushNoRef = CAnimatedTransitionVisual::GetBrushNoRef(this);
  v10 = CDrawGeometryInstruction::Create(
          BrushNoRef,
          *((struct CResource **)this + 87),
          (struct CDrawGeometryInstruction **)&v12);
  v2 = v10;
  if ( v10 >= 0 )
  {
    v1 = (CBaseObject *)v12;
    v11 = CVisual::AddInstruction(*((CVisual **)this + 89), *(struct CRenderDataInstruction **)&v12);
    v2 = v11;
    if ( v11 >= 0 )
    {
LABEL_5:
      *((_DWORD *)this + 22) &= 0xFFFFCFDF;
      goto LABEL_6;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x5D3u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x5D2u);
    v1 = (CBaseObject *)v12;
  }
LABEL_6:
  if ( v1 )
    CBaseObject::Release(v1);
  return v2;
}
