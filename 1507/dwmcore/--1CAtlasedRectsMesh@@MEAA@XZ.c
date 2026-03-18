/*
 * XREFs of ??1CAtlasedRectsMesh@@MEAA@XZ @ 0x18006F6D4
 * Callers:
 *     ??_ECAtlasedRectsMesh@@MEAAPEAXI@Z @ 0x18006F300 (--_ECAtlasedRectsMesh@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CAtlasedRectsMesh@@UEAAXXZ @ 0x18006F360 (-UnRegisterNotifiers@CAtlasedRectsMesh@@UEAAXXZ.c)
 */

void __fastcall CAtlasedRectsMesh::~CAtlasedRectsMesh(CAtlasedRectsMesh *this)
{
  *(_QWORD *)this = &CAtlasedRectsMesh::`vftable'{for `CResource'};
  *((_QWORD *)this + 5) = &CAtlasedRectsMesh::`vftable'{for `IDeviceResourceNotify'};
  CAtlasedRectsMesh::UnRegisterNotifiers((void **)this);
  CAtlasedRects::~CAtlasedRects(this);
}
