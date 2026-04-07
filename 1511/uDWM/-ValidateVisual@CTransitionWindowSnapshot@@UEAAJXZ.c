/*
 * XREFs of ?ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ @ 0x18003D770
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x18001A4F8 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18001A610 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180023540 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800236A0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::ValidateVisual(CTransitionWindowSnapshot *this, __int64 a2)
{
  bool v3; // zf
  CBaseObject *v4; // rsi
  struct CResource **v5; // rsi
  int v6; // r9d
  int v7; // edx
  int v8; // r8d
  int v9; // ecx
  int RectangleGeometry; // eax
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  struct CRenderDataInstruction *v16; // [rsp+40h] [rbp+8h] BYREF

  v3 = (*((_DWORD *)this + 20) & 0x1000) == 0;
  v4 = 0LL;
  v16 = 0LL;
  if ( v3 )
  {
LABEL_11:
    v14 = CVisual::ValidateVisual(this, a2);
    v11 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0xABu);
    goto LABEL_12;
  }
  if ( *((_DWORD *)this + 64) )
  {
LABEL_10:
    *((_DWORD *)this + 20) &= ~0x1000u;
    goto LABEL_11;
  }
  v5 = (struct CResource **)((char *)this + 288);
  v6 = *((_DWORD *)this + 83) - *((_DWORD *)this + 81);
  v7 = *((_DWORD *)this + 81);
  if ( v6 < 0 )
    v6 = 0;
  v8 = *((_DWORD *)this + 82) - *((_DWORD *)this + 80);
  v9 = *((_DWORD *)this + 80);
  if ( v8 < 0 )
    v8 = 0;
  RectangleGeometry = ResourceHelper::CreateRectangleGeometry(v9, v7, v8, v6, v5);
  v11 = RectangleGeometry;
  if ( RectangleGeometry < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, RectangleGeometry, 0xA3u);
    return v11;
  }
  v12 = CDrawGeometryInstruction::Create(*((struct CResource **)this + 35), *v5, &v16);
  v11 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0xA4u);
    v4 = v16;
  }
  else
  {
    v4 = v16;
    v13 = CVisual::AddInstruction(this, v16);
    v11 = v13;
    if ( v13 >= 0 )
      goto LABEL_10;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0xA5u);
  }
LABEL_12:
  if ( v4 )
    CBaseObject::Release(v4);
  return v11;
}
