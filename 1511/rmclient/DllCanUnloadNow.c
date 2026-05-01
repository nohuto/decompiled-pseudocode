/*
 * XREFs of DllCanUnloadNow @ 0x180006E60
 * Callers:
 *     <none>
 * Callees:
 *     atexit @ 0x180008F14 (atexit.c)
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 */

HRESULT __stdcall DllCanUnloadNow()
{
  __int64 (__fastcall *v0)(Microsoft::WRL::Details::ModuleBase *); // rbx
  volatile unsigned int v1; // eax

  if ( (`Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::`local static guard' & 1) == 0 )
  {
    Microsoft::WRL::Details::ModuleBase::module_ = (struct Microsoft::WRL::Details::ModuleBase *)&`Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::module;
    `Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::`local static guard' |= 1u;
    `Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::module = &Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::`vftable';
    atexit(`Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::`dynamic atexit destructor for 'module'');
  }
  v0 = *(__int64 (__fastcall **)(Microsoft::WRL::Details::ModuleBase *))(`Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::module
                                                                       + 24LL);
  if ( v0 == Microsoft::WRL::Details::ModuleBase::GetObjectCount )
    v1 = Microsoft::WRL::Details::ModuleBase::objectCount_;
  else
    v1 = v0((Microsoft::WRL::Details::ModuleBase *)&`Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::module);
  return v1 != 0;
}
