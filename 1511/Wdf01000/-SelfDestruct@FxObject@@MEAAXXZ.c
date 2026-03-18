/*
 * XREFs of ?SelfDestruct@FxObject@@MEAAXXZ @ 0x1C0009090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxObject::SelfDestruct(FxObject *this)
{
  if ( this )
    ((void (__fastcall *)(FxObject *, __int64))this->~FxObject)(this, 1LL);
}
