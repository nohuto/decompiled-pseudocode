/*
 * XREFs of ??_GFxSelfManagedIoMachine@@QEAAPEAXI@Z @ 0x1C009CC6C
 * Callers:
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x1C009CA20 (--1FxPkgPnp@@MEAA@XZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 */

FxSelfManagedIoMachine *__fastcall FxSelfManagedIoMachine::`scalar deleting destructor'(FxSelfManagedIoMachine *this)
{
  if ( this )
    FxPoolFree(this);
  return this;
}
