/*
 * XREFs of ??1CAnalogExclusiveView@@EEAA@XZ @ 0x18013B22C
 * Callers:
 *     ??_ECAnalogExclusiveView@@EEAAPEAXI@Z @ 0x18013B250 (--_ECAnalogExclusiveView@@EEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAnalogExclusiveView::~CAnalogExclusiveView(CAnalogExclusiveView *this)
{
  *(_QWORD *)this = &CAnalogExclusiveView::`vftable'{for `CResource'};
  *((_QWORD *)this + 5) = &CAnalogExclusiveView::`vftable'{for `ICompositionSurfaceInfoListener'};
  CResource::~CResource(this);
}
