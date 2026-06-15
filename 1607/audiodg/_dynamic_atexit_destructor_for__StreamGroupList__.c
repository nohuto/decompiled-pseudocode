/*
 * XREFs of _dynamic_atexit_destructor_for__StreamGroupList__ @ 0x14001BB40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall dynamic_atexit_destructor_for__StreamGroupList__()
{
  ATL::CAtlList<CStreamGroup *,ATL::CElementTraits<CStreamGroup *>>::~CAtlList<CStreamGroup *,ATL::CElementTraits<CStreamGroup *>>();
}
