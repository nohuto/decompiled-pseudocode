/*
 * XREFs of ?UpdateVisual@CTouchDragVisual@@AEAAJXZ @ 0x180086164
 * Callers:
 *     ?ValidateVisual@CTouchDragVisual@@UEAAJXZ @ 0x1800862C0 (-ValidateVisual@CTouchDragVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x18001DF40 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ??0Mesh2D@@QEAA@PEBUtagRECT@@@Z @ 0x180082E6C (--0Mesh2D@@QEAA@PEBUtagRECT@@@Z.c)
 *     ??1Mesh2D@@QEAA@XZ @ 0x180083064 (--1Mesh2D@@QEAA@XZ.c)
 *     ?TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEBUtagRECT@@PEAV?$DynArray@UMilPoint3F@@$0A@@@PEAV?$DynArray@UMilPoint2D@@$0A@@@PEAV?$DynArray@I$0A@@@PEAV?$DynArray@K$0A@@@@Z @ 0x1800847CC (-TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEB.c)
 *     ?CreateDrawMesh2DInstruction@CTouchDragVisual@@AEAAJPEBUMesh2D@@PEAPEAVCResource@@1@Z @ 0x1800856F8 (-CreateDrawMesh2DInstruction@CTouchDragVisual@@AEAAJPEBUMesh2D@@PEAPEAVCResource@@1@Z.c)
 */

__int64 __fastcall CTouchDragVisual::UpdateVisual(CTouchDragVisual *this)
{
  struct CResource **v1; // r14
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  int v5; // eax
  const struct tagRECT *v6; // rdx
  unsigned int v7; // ebx
  const struct tagRECT *v8; // rdx
  int v9; // eax
  int DrawMesh2DInstruction; // eax
  void *v12[4]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v13[32]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v14[32]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v15[48]; // [rsp+A8h] [rbp-60h] BYREF
  void *v16[18]; // [rsp+D8h] [rbp-30h] BYREF

  v1 = (struct CResource **)((char *)this + 416);
  v3 = (CBaseObject *)*((_QWORD *)this + 52);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *v1 = 0LL;
  }
  v4 = (CBaseObject *)*((_QWORD *)this + 51);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 51) = 0LL;
  }
  v5 = CVisual::ClearInstructions(this);
  v7 = v5;
  if ( v5 >= 0 )
  {
    if ( *((_DWORD *)this + 90) > 1u )
    {
      Mesh2D::Mesh2D((Mesh2D *)v12, v6);
      Mesh2D::Mesh2D((Mesh2D *)v16, v8);
      v9 = CTouchDragVisualHelper::TriangulatePathGeometry(
             COERCE_DOUBLE((unsigned __int64)*((_DWORD *)this + 71)),
             (__int64)this + 336,
             (unsigned int *)this + 94,
             (__int64)v12,
             (__int64)v13,
             (__int64)v14,
             (__int64)v15);
      v7 = v9;
      if ( v9 >= 0 )
      {
        DrawMesh2DInstruction = CTouchDragVisual::CreateDrawMesh2DInstruction(
                                  this,
                                  (const struct Mesh2D *)v12,
                                  (struct CResource **)this + 51,
                                  v1);
        v7 = DrawMesh2DInstruction;
        if ( DrawMesh2DInstruction < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, DrawMesh2DInstruction, 0x106u);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x103u);
      }
      Mesh2D::~Mesh2D(v16);
      Mesh2D::~Mesh2D(v12);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0xF3u);
  }
  return v7;
}
