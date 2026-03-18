/*
 * XREFs of ??1CMeshGeometry2D@@MEAA@XZ @ 0x18010B4C4
 * Callers:
 *     ??_ECMeshGeometry2D@@MEAAPEAXI@Z @ 0x18010B4F0 (--_ECMeshGeometry2D@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CMeshGeometry2D@@UEAAXXZ @ 0x1801191B0 (-UnRegisterNotifiers@CMeshGeometry2D@@UEAAXXZ.c)
 */

void __fastcall CMeshGeometry2D::~CMeshGeometry2D(CMeshGeometry2D *this)
{
  *(_QWORD *)this = &CMeshGeometry2D::`vftable';
  CMeshGeometry2D::UnRegisterNotifiers(this);
  CGeometry2D::~CGeometry2D(this);
}
