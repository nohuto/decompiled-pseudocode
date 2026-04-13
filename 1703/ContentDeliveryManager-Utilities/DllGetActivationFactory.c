/*
 * XREFs of DllGetActivationFactory @ 0x1800200A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PEAPEAUIUnknown@@@Z @ 0x18001F828 (-GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PE.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     atexit @ 0x18006F800 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DllGetActivationFactory(HSTRING string, PSRWLOCK SRWLock)
{
  PCWSTR StringRawBuffer; // rsi
  const struct Microsoft::WRL::Details::CreatorMap **i; // rbx
  __int64 v6; // rax
  Microsoft::WRL::Details *v7; // rcx
  int v8; // r8d
  int v9; // edx
  const struct _GUID *v10; // r9
  unsigned int v11; // ebx
  BOOL hasEmbedNull; // [rsp+30h] [rbp-58h] BYREF
  int v14; // [rsp+34h] [rbp-54h] BYREF
  _OWORD v15[2]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v16; // [rsp+58h] [rbp-30h]

  if ( (`Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::`local static guard' & 1) == 0 )
  {
    `Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::`local static guard' |= 1u;
    Microsoft::WRL::Details::ModuleBase::module_ = (struct Microsoft::WRL::Details::ModuleBase *)&`Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::moduleSingleton;
    `Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::moduleSingleton = (__int64)&Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::`vftable';
    atexit(`Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::`dynamic atexit destructor for 'moduleSingleton'');
  }
  SRWLock->Ptr = 0LL;
  if ( WindowsIsStringEmpty(string) || WindowsStringHasEmbeddedNull(string, &hasEmbedNull) < 0 || hasEmbedNull )
  {
    v11 = -2147024809;
    v15[0] = *(_OWORD *)L"pActivatibleClassId";
    v16 = *(_QWORD *)L"sId";
    v15[1] = *(_OWORD *)L"ibleClassId";
    RoOriginateErrorW(2147942487LL, 19LL, v15);
  }
  else
  {
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    for ( i = _minATLObjMap_TargetedContentTriggerManagerStatics; i < &_pobjectentrylast; ++i )
    {
      if ( *i )
      {
        v6 = (*((__int64 (**)(void))*i + 1))() - (_QWORD)StringRawBuffer;
        v7 = (Microsoft::WRL::Details *)StringRawBuffer;
        do
        {
          v8 = *(unsigned __int16 *)((char *)v7 + v6);
          v9 = *(unsigned __int16 *)v7 - v8;
          if ( v9 )
            break;
          v7 = (Microsoft::WRL::Details *)((char *)v7 + 2);
        }
        while ( v8 );
        if ( !v9 )
        {
          v10 = (const struct _GUID *)*i;
          v14 = 1;
          return (unsigned int)Microsoft::WRL::Details::GetCacheEntry(
                                 v7,
                                 (struct Microsoft::WRL::Details::ModuleBase *)&v14,
                                 &GUID_00000035_0000_0000_c000_000000000046.Data1,
                                 v10,
                                 SRWLock);
        }
      }
    }
    v11 = -2147221231;
    RoOriginateError(2147746065LL, 0LL);
  }
  return v11;
}
