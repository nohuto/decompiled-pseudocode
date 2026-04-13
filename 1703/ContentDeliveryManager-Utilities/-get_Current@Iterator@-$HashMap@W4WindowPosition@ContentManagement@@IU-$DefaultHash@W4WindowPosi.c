/*
 * XREFs of ?get_Current@Iterator@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@456@@Z @ 0x18005CEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x1800070E8 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005D350 (-Release@-$RuntimeClass@U-$InterfaceList@U-$IKeyValuePair@W4WindowPosition@ContentManagement@@I@.c)
 *     ??$Make@V?$SimpleKeyValuePair@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@4567@$00@Internal@Collections@Foundation@Windows@@Upermission@12345@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$SimpleKeyValuePair@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@4567@$00@Internal@Collections@Foundation@Windows@@@12@$$QEAUpermission@?$SimpleKeyValuePair@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@4567@$00@Internal@Collections@Foundation@Windows@@@Z @ 0x18005E190 (--$Make@V-$SimpleKeyValuePair@W4WindowPosition@ContentManagement@@IU-$DefaultLifetimeTraits@W4Wi.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::HashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultHash<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::Iterator::get_Current(
        _QWORD *a1,
        _QWORD *a2)
{
  int v4; // edi
  int v5; // ebx
  _DWORD *v6; // rsi
  _DWORD *v7; // rbx
  _DWORD *v8; // rcx
  int v9; // edx
  __int64 v11[5]; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+50h] [rbp+8h] BYREF
  _DWORD *v13; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0LL;
  v12 = 0;
  XWinRT::SerializingLockPolicy::Read((__int64)v11, (RTL_SRWLOCK *)(a1[7] + 152LL), &v12);
  v4 = v12;
  if ( v12 >= 0 )
  {
    if ( *(_QWORD *)(a1[7] + 168LL) == a1[9] )
    {
      v5 = 0;
    }
    else
    {
      v5 = -2147483636;
      RoOriginateError(2147483660LL, 0LL);
    }
    v6 = (_DWORD *)a1[8];
    v12 = v5;
    if ( v5 < 0 )
    {
      v4 = v12;
    }
    else
    {
      if ( v6 )
      {
        v4 = v12;
      }
      else
      {
        v4 = -2147483637;
        RoOriginateError(2147483659LL, 0LL);
      }
      if ( v4 >= 0 )
      {
        Microsoft::WRL::Details::Make<Windows::Foundation::Collections::Internal::SimpleKeyValuePair<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,1>,Windows::Foundation::Collections::Internal::SimpleKeyValuePair<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,1>::permission>(&v13);
        v7 = v13;
        if ( v13 )
        {
          v8 = v13;
          v9 = v6[1];
          v4 = 0;
          v13[14] = *v6;
          v7[15] = v9;
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v8);
          *a2 = v7;
          Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IKeyValuePair<enum ContentManagement::WindowPosition,unsigned int>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v7);
        }
        else
        {
          v4 = -2147024882;
        }
      }
    }
  }
  if ( v11[0] )
  {
    if ( *(_DWORD *)v11[0] == 1 )
      --*(_DWORD *)(v11[0] + 8);
    else
      ReleaseSRWLockShared((PSRWLOCK)(v11[0] + 8));
  }
  return (unsigned int)v4;
}
