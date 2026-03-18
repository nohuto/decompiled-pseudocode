/*
 * XREFs of ??_GFxSelfManagedIoMachine@@QEAAPEAXI@Z @ 0x1C0087A1C
 * Callers:
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x1C00877E0 (--1FxPkgPnp@@MEAA@XZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 */

FxSelfManagedIoMachine *__fastcall FxSelfManagedIoMachine::`scalar deleting destructor'(FxSelfManagedIoMachine *this)
{
  if ( this )
    FxPoolFree(this);
  return this;
}
