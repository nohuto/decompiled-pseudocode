/*
 * XREFs of ?ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ @ 0x18000A180
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x18000B468 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x180017B68 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x1800204C4 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800205A0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::ValidateVisual(CTransitionWindowSnapshot *this)
{
  bool v2; // zf
  CBaseObject *v3; // rsi
  struct CResource **v4; // rsi
  int v5; // r9d
  int v6; // edx
  int v7; // r8d
  int v8; // ecx
  int RectangleGeometry; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  struct CRenderDataInstruction *v15; // [rsp+40h] [rbp+8h] BYREF

  v2 = (*((_DWORD *)this + 20) & 0x1000) == 0;
  v3 = 0LL;
  v15 = 0LL;
  if ( v2 )
  {
LABEL_11:
    v13 = CVisual::ValidateVisual(this);
    v10 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xABu);
    goto LABEL_12;
  }
  if ( *((_DWORD *)this + 64) )
  {
LABEL_10:
    *((_DWORD *)this + 20) &= ~0x1000u;
    goto LABEL_11;
  }
  v4 = (struct CResource **)((char *)this + 288);
  v5 = *((_DWORD *)this + 83) - *((_DWORD *)this + 81);
  v6 = *((_DWORD *)this + 81);
  if ( v5 < 0 )
    v5 = 0;
  v7 = *((_DWORD *)this + 82) - *((_DWORD *)this + 80);
  v8 = *((_DWORD *)this + 80);
  if ( v7 < 0 )
    v7 = 0;
  RectangleGeometry = ResourceHelper::CreateRectangleGeometry(v8, v6, v7, v5, v4);
  v10 = RectangleGeometry;
  if ( RectangleGeometry < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, RectangleGeometry, 0xA3u);
    return v10;
  }
  v11 = CDrawGeometryInstruction::Create(*((struct CResource **)this + 35), *v4, &v15);
  v10 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xA4u);
    v3 = v15;
  }
  else
  {
    v3 = v15;
    v12 = CVisual::AddInstruction(this, v15);
    v10 = v12;
    if ( v12 >= 0 )
      goto LABEL_10;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xA5u);
  }
LABEL_12:
  if ( v3 )
    CBaseObject::Release(v3);
  return v10;
}
