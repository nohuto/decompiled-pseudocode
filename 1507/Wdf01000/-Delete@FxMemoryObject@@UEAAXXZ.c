/*
 * XREFs of ?Delete@FxMemoryObject@@UEAAXXZ @ 0x1C00774A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxMemoryObject::Delete(FxMemoryObject *this)
{
  (*(void (__fastcall **)(_FX_DRIVER_GLOBALS **))&this[-1].m_Globals->DestroyEvent.m_DbgFlagIsInitialized)(&this[-1].m_Globals);
}
