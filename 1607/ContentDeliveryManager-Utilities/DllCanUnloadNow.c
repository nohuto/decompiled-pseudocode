/*
 * XREFs of DllCanUnloadNow @ 0x180018E90
 * Callers:
 *     <none>
 * Callees:
 *     ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z @ 0x1800187E8 (-TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z.c)
 *     atexit @ 0x180058D18 (atexit.c)
 */

HRESULT __stdcall DllCanUnloadNow()
{
  RTL_SRWLOCK *v0; // rdx
  Microsoft::WRL::Details *v1; // rcx
  HRESULT v2; // ebx

  v2 = 1;
  if ( (`Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::`local static guard' & 1) == 0 )
  {
    `Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::`local static guard' |= 1u;
    Microsoft::WRL::Details::ModuleBase::module_ = (struct Microsoft::WRL::Details::ModuleBase *)&`Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::module;
    `Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::module = (__int64)&Microsoft::WRL::Details::DefaultModule<1>::`vftable';
    atexit(`Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::`dynamic atexit destructor for 'module'');
  }
  if ( Microsoft::WRL::Details::TerminateMap(v1, v0, 0LL) )
    return NdrDllCanUnloadNow(&gPFactory);
  return v2;
}
