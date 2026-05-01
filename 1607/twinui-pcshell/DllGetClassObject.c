/*
 * XREFs of DllGetClassObject @ 0x180004110
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PEAPEAUIUnknown@@@Z @ 0x1800016D4 (-GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PE.c)
 *     atexit @ 0x18002EB20 (atexit.c)
 */

HRESULT __stdcall DllGetClassObject(const IID *const rclsid, const IID *const riid, LPVOID *ppv)
{
  const struct Microsoft::WRL::Details::CreatorMap **i; // r9
  Microsoft::WRL::Details *v7; // rcx
  const struct _GUID *v8; // r9
  int v10; // [rsp+50h] [rbp+18h] BYREF

  if ( (`Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::`local static guard' & 1) == 0 )
  {
    `Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::`local static guard' |= 1u;
    Microsoft::WRL::Details::ModuleBase::module_ = (struct Microsoft::WRL::Details::ModuleBase *)&`Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::module;
    `Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::module = (__int64)&Microsoft::WRL::Details::DefaultModule<1>::`vftable';
    atexit(`Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::`dynamic atexit destructor for 'module'');
  }
  *ppv = 0LL;
  for ( i = _minATLObjMap_PCShellImmersiveComponentCreator_COM;
        i < (const struct Microsoft::WRL::Details::CreatorMap **)&_pobjectentrymid;
        ++i )
  {
    if ( *i )
    {
      v7 = (Microsoft::WRL::Details *)*((_QWORD *)*i + 1);
      if ( *(_QWORD *)v7 == *(_QWORD *)&rclsid->Data1 && *((_QWORD *)v7 + 1) == *(_QWORD *)rclsid->Data4 )
      {
        v8 = (const struct _GUID *)*i;
        v10 = 1;
        return Microsoft::WRL::Details::GetCacheEntry(
                 v7,
                 (struct Microsoft::WRL::Details::ModuleBase *)&v10,
                 &riid->Data1,
                 v8,
                 (PSRWLOCK)ppv);
      }
    }
  }
  return -2147221231;
}
