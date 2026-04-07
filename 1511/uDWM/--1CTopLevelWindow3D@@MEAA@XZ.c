/*
 * XREFs of ??1CTopLevelWindow3D@@MEAA@XZ @ 0x180036278
 * Callers:
 *     ??_GCTopLevelWindow3D@@MEAAPEAXI@Z @ 0x180033940 (--_GCTopLevelWindow3D@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180033AB4 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ @ 0x180036208 (-ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ.c)
 */

void __fastcall CTopLevelWindow3D::~CTopLevelWindow3D(CTopLevelWindow3D *this)
{
  *(_QWORD *)this = &CTopLevelWindow3D::`vftable'{for `CVisual'};
  *((_QWORD *)this + 33) = &CTopLevelWindow3D::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  CTopLevelWindow3D::ReleaseSceneObjects(this);
  CTopLevelWindow3D::StopAnimation((unsigned __int64)this);
  CVisual::~CVisual(this);
}
