/*
 * XREFs of ??1CSurfaceBrush@@UEAA@XZ @ 0x1801212B0
 * Callers:
 *     ??_GCSurfaceBrush@@UEAAPEAXI@Z @ 0x180121300 (--_GCSurfaceBrush@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseResources@CSurfaceBrush@@AEAAXXZ @ 0x18012239C (-ReleaseResources@CSurfaceBrush@@AEAAXXZ.c)
 */

void __fastcall CSurfaceBrush::~CSurfaceBrush(CSurfaceBrush *this)
{
  *(_QWORD *)this = &CSurfaceBrush::`vftable'{for `CSpriteVisualContent'};
  *((_QWORD *)this + 6) = &CSurfaceBrush::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 7) = &CSurfaceBrush::`vftable'{for `IVisualListenerInfoProvider'};
  CSurfaceBrush::ReleaseResources(this);
  CResource::~CResource(this);
}
