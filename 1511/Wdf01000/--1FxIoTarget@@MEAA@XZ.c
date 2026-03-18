/*
 * XREFs of ??1FxIoTarget@@MEAA@XZ @ 0x1C0075728
 * Callers:
 *     ??_EFxIoTarget@@MEAAPEAXI@Z @ 0x1C0075740 (--_EFxIoTarget@@MEAAPEAXI@Z.c)
 *     ??_EFxIoTargetSelf@@MEAAPEAXI@Z @ 0x1C0076BA0 (--_EFxIoTargetSelf@@MEAAPEAXI@Z.c)
 *     ??_GFxIoTargetRemote@@UEAAPEAXI@Z @ 0x1C0077420 (--_GFxIoTargetRemote@@UEAAPEAXI@Z.c)
 *     ??_EFxUsbDevice@@MEAAPEAXI@Z @ 0x1C007AAC0 (--_EFxUsbDevice@@MEAAPEAXI@Z.c)
 *     ??1FxUsbPipe@@MEAA@XZ @ 0x1C007F454 (--1FxUsbPipe@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FxIoTarget::~FxIoTarget(FxIoTarget *this, unsigned int a2, unsigned int a3)
{
  this->__vftable = (FxIoTarget_vtbl *)&FxIoTarget::`vftable';
  FxNonPagedObject::~FxNonPagedObject(this, a2, a3);
}
