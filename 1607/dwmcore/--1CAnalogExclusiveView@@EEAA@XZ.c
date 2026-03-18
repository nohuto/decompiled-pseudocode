/*
 * XREFs of ??1CAnalogExclusiveView@@EEAA@XZ @ 0x1801653E0
 * Callers:
 *     ??_ECAnalogExclusiveView@@EEAAPEAXI@Z @ 0x180165400 (--_ECAnalogExclusiveView@@EEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAnalogExclusiveView::~CAnalogExclusiveView(CAnalogExclusiveView *this)
{
  *(_QWORD *)this = &CAnalogExclusiveView::`vftable'{for `CResource'};
  *((_QWORD *)this + 14) = &CAnalogExclusiveView::`vftable'{for `ICompositionSurfaceInfoListener'};
  CResource::~CResource(this);
}
