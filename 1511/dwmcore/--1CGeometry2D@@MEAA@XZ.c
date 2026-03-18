/*
 * XREFs of ??1CGeometry2D@@MEAA@XZ @ 0x180112D18
 * Callers:
 *     ??_GCGeometry2D@@MEAAPEAXI@Z @ 0x180113320 (--_GCGeometry2D@@MEAAPEAXI@Z.c)
 *     ??_ECGeometry2DGroup@@MEAAPEAXI@Z @ 0x180113380 (--_ECGeometry2DGroup@@MEAAPEAXI@Z.c)
 *     ??1CMeshGeometry2D@@MEAA@XZ @ 0x180126D6C (--1CMeshGeometry2D@@MEAA@XZ.c)
 * Callees:
 *     ?FreeCaches@CGeometry2D@@AEAAXXZ @ 0x180133440 (-FreeCaches@CGeometry2D@@AEAAXXZ.c)
 */

void __fastcall CGeometry2D::~CGeometry2D(CGeometry2D *this)
{
  *(_QWORD *)this = &CGeometry2D::`vftable';
  CGeometry2D::FreeCaches(this);
  CResource::~CResource(this);
}
