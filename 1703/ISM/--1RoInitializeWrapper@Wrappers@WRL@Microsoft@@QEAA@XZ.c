/*
 * XREFs of ??1RoInitializeWrapper@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180001B7C
 * Callers:
 *     _OneCoreUAPInputHost::_scalar_deleting_destructor__::_1_::dtor$1 @ 0x18009EE35 (_OneCoreUAPInputHost--_scalar_deleting_destructor__--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::RoInitializeWrapper::~RoInitializeWrapper(
        Microsoft::WRL::Wrappers::RoInitializeWrapper *this)
{
  if ( *(int *)this >= 0 )
    RoUninitialize();
}
