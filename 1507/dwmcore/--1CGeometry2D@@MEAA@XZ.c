/*
 * XREFs of ??1CGeometry2D@@MEAA@XZ @ 0x1800F8B64
 * Callers:
 *     ??_GCGeometry2D@@MEAAPEAXI@Z @ 0x1800F9260 (--_GCGeometry2D@@MEAAPEAXI@Z.c)
 *     ??_ECGeometry2DGroup@@MEAAPEAXI@Z @ 0x1800F92C0 (--_ECGeometry2DGroup@@MEAAPEAXI@Z.c)
 *     ??1CMeshGeometry2D@@MEAA@XZ @ 0x18010B4C4 (--1CMeshGeometry2D@@MEAA@XZ.c)
 * Callees:
 *     ?FreeCaches@CGeometry2D@@AEAAXXZ @ 0x18011C7F0 (-FreeCaches@CGeometry2D@@AEAAXXZ.c)
 */

void __fastcall CGeometry2D::~CGeometry2D(CGeometry2D *this)
{
  *(_QWORD *)this = &CGeometry2D::`vftable';
  CGeometry2D::FreeCaches(this);
  CResource::~CResource(this);
}
