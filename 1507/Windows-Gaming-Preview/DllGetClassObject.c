/*
 * XREFs of DllGetClassObject @ 0x180001A50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PEAPEAUIUnknown@@@Z @ 0x180001C74 (-GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PE.c)
 *     atexit @ 0x180025DFC (atexit.c)
 */

HRESULT __stdcall DllGetClassObject(const IID *const rclsid, const IID *const riid, LPVOID *ppv)
{
  __int64 (__fastcall ***i)(); // r9
  Microsoft::WRL::Details *v7; // rcx
  const struct _GUID *v8; // r9
  struct IUnknown **v10; // [rsp+28h] [rbp-10h]
  int v11; // [rsp+50h] [rbp+18h] BYREF

  if ( (`Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::`local static guard' & 1) == 0 )
  {
    `Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::`local static guard' |= 1u;
    Microsoft::WRL::Details::ModuleBase::module_ = (struct Microsoft::WRL::Details::ModuleBase *)&`Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::module;
    `Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::module = (__int64)&Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::`vftable';
    atexit(`Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::`dynamic atexit destructor for 'module'');
  }
  *ppv = 0LL;
  for ( i = &_minATLObjMap_GameListEntryProxy_COM; i < &_pobjectentrymid; ++i )
  {
    if ( *i )
    {
      v7 = (Microsoft::WRL::Details *)(*i)[1];
      if ( *(_QWORD *)v7 == *(_QWORD *)&rclsid->Data1 && *((_QWORD *)v7 + 1) == *(_QWORD *)rclsid->Data4 )
      {
        v8 = (const struct _GUID *)*i;
        v11 = 1;
        return Microsoft::WRL::Details::GetCacheEntry(
                 v7,
                 (struct Microsoft::WRL::Details::ModuleBase *)&v11,
                 &riid->Data1,
                 v8,
                 (PSRWLOCK)ppv,
                 v10);
      }
    }
  }
  return -2147221231;
}
