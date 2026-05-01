/*
 * XREFs of DllCanUnloadNow @ 0x180002EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ @ 0x180002650 (-Create@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV-$DefaultM.c)
 *     ?GetObjectCount@ModuleBase@Details@WRL@Microsoft@@UEBAKXZ @ 0x180003640 (-GetObjectCount@ModuleBase@Details@WRL@Microsoft@@UEBAKXZ.c)
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 */

HRESULT __stdcall DllCanUnloadNow()
{
  __int64 *v0; // rbx
  unsigned int (__fastcall *v1)(Microsoft::WRL::Details::ModuleBase *__hidden); // rdi
  unsigned int ObjectCount; // eax

  v0 = Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create();
  v1 = *(unsigned int (__fastcall **)(Microsoft::WRL::Details::ModuleBase *__hidden))(*v0 + 24);
  if ( v1 == Microsoft::WRL::Details::ModuleBase::GetObjectCount )
    ObjectCount = Microsoft::WRL::Details::ModuleBase::GetObjectCount((Microsoft::WRL::Details::ModuleBase *)v0);
  else
    ObjectCount = v1((Microsoft::WRL::Details::ModuleBase *)v0);
  return ObjectCount != 0;
}
