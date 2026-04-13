/*
 * XREFs of ?get_Current@Iterator@?$HashMap@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@U?$HashMapOptions@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@6789@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IKeyValuePair@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@456@@Z @ 0x18004E5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180006F08 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$IKeyValuePair@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@Collections@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004ED70 (-Release@-$RuntimeClass@U-$InterfaceList@U-$IKeyValuePair@PEAUHSTRING__@@PEAVTargetedContentValu.c)
 *     ?Make@?$SimpleKeyValuePair@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@$00@Internal@Collections@Foundation@Windows@@SAJAEBQEAUHSTRING__@@AEBV?$GitStorageType@UITargetedContentValue@TargetedContent@ContentManagement@@@detail@XWinRT@@PEAPEAV12345@@Z @ 0x18004EFA4 (-Make@-$SimpleKeyValuePair@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManage.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentValue *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Iterator::get_Current(
        _QWORD *a1,
        _QWORD *a2)
{
  int v4; // edi
  int v5; // ebx
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // rbx
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0LL;
  v11 = 0;
  XWinRT::SerializingLockPolicy::Read((__int64)v10, (RTL_SRWLOCK *)(a1[7] + 152LL), &v11);
  v4 = v11;
  if ( v11 >= 0 )
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
    v6 = a1[8];
    v11 = v5;
    if ( v5 < 0 )
    {
      v4 = v11;
    }
    else
    {
      if ( v6 )
      {
        v4 = v11;
      }
      else
      {
        v4 = -2147483637;
        RoOriginateError(2147483659LL, 0LL);
      }
      if ( v4 >= 0 )
      {
        v12 = 0LL;
        v7 = Windows::Foundation::Collections::Internal::SimpleKeyValuePair<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentValue *>,1>::Make(
               v6,
               v6 + 8,
               &v12);
        v8 = v12;
        v4 = v7;
        if ( v7 >= 0 )
        {
          if ( v12 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
          *a2 = v8;
        }
        if ( v8 )
          Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v8);
      }
    }
  }
  if ( v10[0] )
  {
    if ( *(_DWORD *)v10[0] == 1 )
      --*(_DWORD *)(v10[0] + 8LL);
    else
      ReleaseSRWLockShared((PSRWLOCK)(v10[0] + 8LL));
  }
  return (unsigned int)v4;
}
