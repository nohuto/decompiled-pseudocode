/*
 * XREFs of ?_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18000C7B8
 * Callers:
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18000D5C0 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 * Callees:
 *     ?GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCResource@@XZ @ 0x18000C130 (-GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCResource@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18001A610 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x18001D2DC (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x1800224E8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180023350 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180023540 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_ValidateDCompVisual(CAnimatedTransitionVisual *this)
{
  int v1; // eax
  CBaseObject *v2; // rdi
  unsigned int v3; // esi
  __int64 v5; // rax
  LONG v6; // r8d
  CVisual *v7; // rcx
  float *v9; // rax
  __int64 v10; // rdx
  struct CResource *BrushNoRef; // rax
  int v12; // eax
  int v13; // eax
  struct tagPOINT v14; // [rsp+30h] [rbp-50h] BYREF
  int v15; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v16[4]; // [rsp+3Ch] [rbp-44h] BYREF
  _BYTE v17[56]; // [rsp+40h] [rbp-40h] BYREF

  v1 = *((_DWORD *)this + 22);
  v2 = 0LL;
  v3 = 0;
  v14 = 0LL;
  if ( (v1 & 0x1000) == 0 && (v1 & 0x2000) == 0 && (v1 & 0x20) == 0 )
    return v3;
  if ( *((_BYTE *)this + 959) )
  {
    v5 = *((_QWORD *)this + 89);
    v6 = *((_DWORD *)this + 211);
    v14.x = *((_DWORD *)this + 210);
    v14.y = v6;
    v7 = **(CVisual ***)(v5 + 48);
    if ( *((_DWORD *)v7 + 26) != v14.x || *((_DWORD *)v7 + 27) != v6 )
      CVisual::SetOffset(v7, &v14);
    goto LABEL_5;
  }
  if ( (v1 & 0x2000) != 0 )
    CVisual::ClearInstructions(*((CVisual **)this + 89));
  if ( *(_DWORD *)(*((_QWORD *)this + 89) + 256LL) )
    goto LABEL_5;
  v15 = 99;
  memset_0(v16, 0, 0x38uLL);
  v9 = (float *)v17;
  v10 = 4LL;
  do
  {
    *v9 = (float)*(int *)((char *)v9 + this - (CAnimatedTransitionVisual *)v17 + 840);
    ++v9;
    --v10;
  }
  while ( v10 );
  CResource::Send(*((CResource **)this + 87), &v15, 0x3Cu);
  BrushNoRef = CAnimatedTransitionVisual::GetBrushNoRef(this);
  v12 = CDrawGeometryInstruction::Create(
          BrushNoRef,
          *((struct CResource **)this + 87),
          (struct CDrawGeometryInstruction **)&v14);
  v3 = v12;
  if ( v12 >= 0 )
  {
    v2 = (CBaseObject *)v14;
    v13 = CVisual::AddInstruction(*((CVisual **)this + 89), *(struct CRenderDataInstruction **)&v14);
    v3 = v13;
    if ( v13 >= 0 )
    {
LABEL_5:
      *((_DWORD *)this + 22) &= 0xFFFFCFDF;
      goto LABEL_6;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x5C5u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x5C4u);
    v2 = (CBaseObject *)v14;
  }
LABEL_6:
  if ( v2 )
    CBaseObject::Release(v2);
  return v3;
}
