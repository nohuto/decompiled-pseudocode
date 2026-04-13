/*
 * XREFs of ?GetMany@Iterator@?$HashMap@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@U?$HashMapOptions@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@6789@@Internal@Collections@Foundation@Windows@@UEAAJIQEAPEAU?$IKeyValuePair@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@456@PEAI@Z @ 0x18004E320
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180006F08 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$IKeyValuePair@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@Collections@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004ED70 (-Release@-$RuntimeClass@U-$InterfaceList@U-$IKeyValuePair@PEAUHSTRING__@@PEAVTargetedContentValu.c)
 *     ?Make@?$SimpleKeyValuePair@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@$00@Internal@Collections@Foundation@Windows@@SAJAEBQEAUHSTRING__@@AEBV?$GitStorageType@UITargetedContentValue@TargetedContent@ContentManagement@@@detail@XWinRT@@PEAPEAV12345@@Z @ 0x18004EFA4 (-Make@-$SimpleKeyValuePair@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManage.c)
 *     ?GetNext@?$XHashMap@PEAUHSTRING__@@V?$GitStorageType@UITargetedContentValue@TargetedContent@ContentManagement@@@detail@XWinRT@@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@U?$HashMapOptions@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@6789@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UITargetedContentValue@TargetedContent@ContentManagement@@@detail@XWinRT@@@4@@XWinRT@@QEAAPEAVCPair@12@AEAPEAUTXPOSITION@2@@Z @ 0x18004FE10 (-GetNext@-$XHashMap@PEAUHSTRING__@@V-$GitStorageType@UITargetedContentValue@TargetedContent@Cont.c)
 *     memset_0 @ 0x180058F42 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentValue *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Iterator::GetMany(
        _QWORD *a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int *a4)
{
  unsigned int v4; // r12d
  _QWORD *v5; // r15
  unsigned int v6; // ebx
  int v8; // ebx
  __int64 v9; // r14
  __int64 v10; // r13
  int v11; // edi
  int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // rbx
  unsigned int *v15; // rax
  __int64 v17; // [rsp+20h] [rbp-20h] BYREF
  __int64 v18; // [rsp+28h] [rbp-18h] BYREF
  __int64 v19; // [rsp+30h] [rbp-10h] BYREF
  int v20; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v21; // [rsp+88h] [rbp+48h]
  unsigned int *v22; // [rsp+98h] [rbp+58h]

  v22 = a4;
  v21 = a2;
  v20 = 0;
  v4 = 0;
  *a4 = 0;
  v5 = a3;
  v6 = a2;
  if ( a2 )
    memset_0(a3, 0, 8LL * a2);
  XWinRT::SerializingLockPolicy::Read((__int64)&v19, (RTL_SRWLOCK *)(a1[7] + 152LL), &v20);
  if ( v20 >= 0 )
  {
    if ( *(_QWORD *)(a1[7] + 168LL) == a1[9] )
    {
      v8 = 0;
    }
    else
    {
      v8 = -2147483636;
      RoOriginateError(2147483660LL, 0LL);
    }
    v20 = v8;
    v6 = v21;
  }
  v9 = a1[8];
  v10 = 0LL;
  v11 = v20;
  v18 = v9;
  if ( v20 >= 0 )
  {
    while ( (unsigned int)v10 < v6 )
    {
      if ( v11 >= 0 )
      {
        if ( !v9 )
          break;
        v17 = 0LL;
        v12 = Windows::Foundation::Collections::Internal::SimpleKeyValuePair<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentValue *>,1>::Make(
                v9,
                v9 + 8,
                &v17);
        v13 = v17;
        v11 = v12;
        v20 = v12;
        if ( v12 >= 0 )
        {
          if ( v17 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
          v5[v10] = v13;
          XWinRT::XHashMap<HSTRING__ *,XWinRT::detail::GitStorageType<ContentManagement::TargetedContent::ITargetedContentValue>,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentValue *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<ContentManagement::TargetedContent::ITargetedContentValue>>>::GetNext(
            a1[7] + 64LL,
            &v18);
          v9 = v18;
          ++v4;
          if ( !v18 )
          {
            if ( v13 )
            {
              v17 = 0LL;
              Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v13);
            }
            break;
          }
        }
        if ( v13 )
        {
          v17 = 0LL;
          Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v13);
        }
        v6 = v21;
      }
      v10 = (unsigned int)(v10 + 1);
      if ( v11 < 0 )
        goto LABEL_20;
    }
    if ( v11 >= 0 )
    {
      v15 = v22;
      a1[8] = v9;
      *v15 = v4;
      goto LABEL_23;
    }
LABEL_20:
    if ( v4 )
    {
      v14 = v4;
      do
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 16LL))(*v5);
        *v5++ = 0LL;
        --v14;
      }
      while ( v14 );
    }
  }
LABEL_23:
  if ( v19 )
  {
    if ( *(_DWORD *)v19 == 1 )
      --*(_DWORD *)(v19 + 8);
    else
      ReleaseSRWLockShared((PSRWLOCK)(v19 + 8));
  }
  return (unsigned int)v11;
}
