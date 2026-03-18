/*
 * XREFs of ??_EFxInternalIoctlOthersContext@@UEAAPEAXI@Z @ 0x1C0031A40
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 */

FxRequestContext *__fastcall FxInternalIoctlOthersContext::`vector deleting destructor'(
        FxRequestContext *this,
        char a2)
{
  this->__vftable = (FxRequestContext_vtbl *)FxRequestContext::`vftable';
  if ( (a2 & 1) != 0 )
    FxPoolFree(this);
  return this;
}
