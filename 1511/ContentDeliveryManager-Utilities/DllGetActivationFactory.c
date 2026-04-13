/*
 * XREFs of DllGetActivationFactory @ 0x1800068C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PEAPEAUIUnknown@@@Z @ 0x180006338 (-GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PE.c)
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     __security_check_cookie @ 0x180027BD0 (__security_check_cookie.c)
 *     atexit @ 0x180027D64 (atexit.c)
 */

__int64 __fastcall DllGetActivationFactory(HSTRING string, PSRWLOCK SRWLock)
{
  PCWSTR StringRawBuffer; // rbp
  __int64 (__fastcall ***i)(); // rdi
  __int64 v6; // rax
  Microsoft::WRL::Details *v7; // rcx
  __int64 v8; // rax
  int v9; // r8d
  int v10; // edx
  const struct _GUID *v11; // r9
  unsigned int v12; // ebx
  int v14; // [rsp+30h] [rbp-58h] BYREF
  BOOL hasEmbedNull; // [rsp+34h] [rbp-54h] BYREF
  _OWORD v16[2]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v17; // [rsp+58h] [rbp-30h]

  if ( (`Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::`local static guard' & 1) == 0 )
  {
    `Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::`local static guard' |= 1u;
    Microsoft::WRL::Details::ModuleBase::module_ = (struct Microsoft::WRL::Details::ModuleBase *)&`Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::module;
    `Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::module = (__int64)&Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::`vftable';
    atexit(`Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::`dynamic atexit destructor for 'module'');
  }
  SRWLock->Ptr = 0LL;
  if ( WindowsIsStringEmpty(string) || WindowsStringHasEmbeddedNull(string, &hasEmbedNull) < 0 || hasEmbedNull )
  {
    v12 = -2147024809;
    v16[0] = *(_OWORD *)L"pActivatibleClassId";
    v17 = *(_QWORD *)L"sId";
    v16[1] = *(_OWORD *)L"ibleClassId";
    RoOriginateErrorW(2147942487LL, 19LL, v16);
  }
  else
  {
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    for ( i = _minATLObjMap_ContentManagementService; i < (__int64 (__fastcall ***)())_pobjectentrylast; ++i )
    {
      if ( *i )
      {
        v6 = ((__int64 (__fastcall *)(__int64 (__fastcall *)()))(*i)[1])((*i)[1]);
        v7 = (Microsoft::WRL::Details *)StringRawBuffer;
        v8 = v6 - (_QWORD)StringRawBuffer;
        do
        {
          v9 = *(unsigned __int16 *)((char *)v7 + v8);
          v10 = *(unsigned __int16 *)v7 - v9;
          if ( v10 )
            break;
          v7 = (Microsoft::WRL::Details *)((char *)v7 + 2);
        }
        while ( v9 );
        if ( !v10 )
        {
          v11 = (const struct _GUID *)*i;
          v14 = 1;
          return (unsigned int)Microsoft::WRL::Details::GetCacheEntry(
                                 v7,
                                 (struct Microsoft::WRL::Details::ModuleBase *)&v14,
                                 &GUID_00000035_0000_0000_c000_000000000046.Data1,
                                 v11,
                                 SRWLock);
        }
      }
    }
    v12 = -2147221231;
    RoOriginateError(2147746065LL, 0LL);
  }
  return v12;
}
