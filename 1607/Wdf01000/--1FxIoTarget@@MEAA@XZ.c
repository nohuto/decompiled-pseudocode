/*
 * XREFs of ??1FxIoTarget@@MEAA@XZ @ 0x1C00836C8
 * Callers:
 *     ??_EFxIoTarget@@MEAAPEAXI@Z @ 0x1C00836E0 (--_EFxIoTarget@@MEAAPEAXI@Z.c)
 *     ??_EFxIoTargetSelf@@MEAAPEAXI@Z @ 0x1C0084B40 (--_EFxIoTargetSelf@@MEAAPEAXI@Z.c)
 *     ??_GFxIoTargetRemote@@UEAAPEAXI@Z @ 0x1C0084EC0 (--_GFxIoTargetRemote@@UEAAPEAXI@Z.c)
 *     ??1FxUsbPipe@@MEAA@XZ @ 0x1C0088CA4 (--1FxUsbPipe@@MEAA@XZ.c)
 *     ??_EFxUsbDevice@@MEAAPEAXI@Z @ 0x1C008ABD0 (--_EFxUsbDevice@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxIoTarget::~FxIoTarget(FxIoTarget *this, unsigned int a2, unsigned int a3)
{
  this->__vftable = (FxIoTarget_vtbl *)&FxIoTarget::`vftable';
  FxNonPagedObject::~FxNonPagedObject(this, a2, a3);
}
