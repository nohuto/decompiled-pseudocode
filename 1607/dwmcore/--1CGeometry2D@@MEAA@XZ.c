/*
 * XREFs of ??1CGeometry2D@@MEAA@XZ @ 0x18012B1F0
 * Callers:
 *     ??_GCGeometry2D@@MEAAPEAXI@Z @ 0x18012B7C0 (--_GCGeometry2D@@MEAAPEAXI@Z.c)
 *     ??_ECGeometry2DGroup@@MEAAPEAXI@Z @ 0x18012B810 (--_ECGeometry2DGroup@@MEAAPEAXI@Z.c)
 *     ??1CMeshGeometry2D@@MEAA@XZ @ 0x180143664 (--1CMeshGeometry2D@@MEAA@XZ.c)
 * Callees:
 *     ?FreeCaches@CGeometry2D@@AEAAXXZ @ 0x180155BC0 (-FreeCaches@CGeometry2D@@AEAAXXZ.c)
 */

void __fastcall CGeometry2D::~CGeometry2D(CGeometry2D *this)
{
  *(_QWORD *)this = &CGeometry2D::`vftable';
  CGeometry2D::FreeCaches(this);
  CResource::~CResource(this);
}
