/*
 * XREFs of ??_GFxSelfManagedIoMachine@@QEAAPEAXI@Z @ 0x1C00960FC
 * Callers:
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x1C0095EC0 (--1FxPkgPnp@@MEAA@XZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 */

FxSelfManagedIoMachine *__fastcall FxSelfManagedIoMachine::`scalar deleting destructor'(FxSelfManagedIoMachine *this)
{
  if ( this )
    FxPoolFree(this);
  return this;
}
