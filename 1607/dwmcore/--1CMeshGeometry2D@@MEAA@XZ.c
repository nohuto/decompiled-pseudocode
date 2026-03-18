/*
 * XREFs of ??1CMeshGeometry2D@@MEAA@XZ @ 0x180143664
 * Callers:
 *     ??_ECMeshGeometry2D@@MEAAPEAXI@Z @ 0x180143690 (--_ECMeshGeometry2D@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CMeshGeometry2D@@UEAAXXZ @ 0x180151BB0 (-UnRegisterNotifiers@CMeshGeometry2D@@UEAAXXZ.c)
 */

void __fastcall CMeshGeometry2D::~CMeshGeometry2D(CMeshGeometry2D *this)
{
  *(_QWORD *)this = &CMeshGeometry2D::`vftable';
  CMeshGeometry2D::UnRegisterNotifiers(this);
  CGeometry2D::~CGeometry2D(this);
}
