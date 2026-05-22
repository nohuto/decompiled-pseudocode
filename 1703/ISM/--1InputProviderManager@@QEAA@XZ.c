/*
 * XREFs of ??1InputProviderManager@@QEAA@XZ @ 0x18000420C
 * Callers:
 *     _OneCoreUAPInputHost::_scalar_deleting_destructor__::_1_::dtor$4 @ 0x18009EE65 (_OneCoreUAPInputHost--_scalar_deleting_destructor__--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall InputProviderManager::~InputProviderManager(InputProviderManager *this)
{
  std::vector<InputProvider>::~vector<InputProvider>(this);
}
