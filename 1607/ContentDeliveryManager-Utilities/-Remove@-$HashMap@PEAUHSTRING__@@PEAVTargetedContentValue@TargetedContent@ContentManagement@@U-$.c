/*
 * XREFs of ?Remove@?$HashMap@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@U?$HashMapOptions@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@6789@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@@Z @ 0x18004D7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180006F40 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ?RaiseEvent@?$VectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180011258 (-RaiseEvent@-$VectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@Application.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180011274 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ??$Destroy@UITargetedContentValue@TargetedContent@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UITargetedContentValue@TargetedContent@ContentManagement@@@detail@1@@Z @ 0x180013180 (--$Destroy@UITargetedContentValue@TargetedContent@ContentManagement@@@InterfaceLifetimeTraits@XW.c)
 *     ?Lookup@?$XHashMap@PEAUHSTRING__@@V?$GitStorageType@UITargetedContentValue@TargetedContent@ContentManagement@@@detail@XWinRT@@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@U?$HashMapOptions@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@6789@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UITargetedContentValue@TargetedContent@ContentManagement@@@detail@XWinRT@@@4@@XWinRT@@QEAAJAEBQEAUHSTRING__@@PEAPEAVCPair@12@@Z @ 0x18004FCF4 (-Lookup@-$XHashMap@PEAUHSTRING__@@V-$GitStorageType@UITargetedContentValue@TargetedContent@Conte.c)
 *     ?FreeNode@?$XHashMap@PEAUHSTRING__@@V?$GitStorageType@UITargetedContentValue@TargetedContent@ContentManagement@@@detail@XWinRT@@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@U?$HashMapOptions@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@6789@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UITargetedContentValue@TargetedContent@ContentManagement@@@detail@XWinRT@@@4@@XWinRT@@AEAAJPEAVCNode@12@@Z @ 0x180052BB8 (-FreeNode@-$XHashMap@PEAUHSTRING__@@V-$GitStorageType@UITargetedContentValue@TargetedContent@Con.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058B88 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentValue *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Remove(
        __int64 a1,
        __int64 a2)
{
  int v3; // edi
  HSTRING v4; // rbx
  _DWORD *v5; // rax
  _DWORD *v6; // rbx
  void *v7; // rcx
  HSTRING *v8; // rdi
  __int128 v9; // xmm6
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 i; // rax
  HSTRING *v15; // [rsp+30h] [rbp-40h] BYREF
  HSTRING v16; // [rsp+38h] [rbp-38h]
  __int128 v17; // [rsp+40h] [rbp-30h] BYREF
  __int64 v18; // [rsp+50h] [rbp-20h] BYREF
  char v19; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+38h] BYREF
  int v21; // [rsp+B8h] [rbp+48h] BYREF

  v20 = a2;
  if ( !*(_BYTE *)(a1 + 176) )
  {
    v3 = -2147418113;
    RoOriginateError(2147549183LL, 0LL);
    return (unsigned int)v3;
  }
  v4 = 0LL;
  *(_QWORD *)&v17 = 0LL;
  v21 = 0;
  v16 = 0LL;
  BYTE8(v17) = 0;
  XWinRT::SerializingLockPolicy::Write((__int64)&v18, a1 + 152, &v21);
  v3 = v21;
  if ( v21 >= 0 )
  {
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v19);
    v15 = 0LL;
    v21 = XWinRT::XHashMap<HSTRING__ *,XWinRT::detail::GitStorageType<ContentManagement::TargetedContent::ITargetedContentValue>,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentValue *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<ContentManagement::TargetedContent::ITargetedContentValue>>>::Lookup(
            a1 + 64,
            &v20,
            &v15);
    v3 = v21;
    if ( v21 >= 0 )
    {
      if ( !v15 )
      {
        v3 = -2147483637;
        RoOriginateError(2147483659LL, 0LL);
        v21 = -2147483637;
      }
      if ( v3 >= 0 )
      {
        if ( **(int **)(a1 + 168) > 1 )
        {
          v5 = operator new(4uLL, (const struct std::nothrow_t *)&std::nothrow);
          v6 = v5;
          if ( v5 )
            *v5 = 1;
          else
            v6 = 0LL;
          if ( !v6 )
          {
            v4 = v16;
            v3 = -2147024882;
            goto LABEL_24;
          }
          v7 = *(void **)(a1 + 168);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7, 0xFFFFFFFF) == 1 )
            operator delete(v7);
          *(_QWORD *)(a1 + 168) = v6;
        }
        v8 = v15;
        v4 = *v15;
        WindowsDeleteString(0LL);
        v9 = *(_OWORD *)(v8 + 1);
        XWinRT::InterfaceLifetimeTraits::Destroy<ContentManagement::TargetedContent::ITargetedContentValue>((__int64)&v17);
        v10 = (unsigned int)(*((_DWORD *)v8 + 8) % *(_DWORD *)(a1 + 88));
        v11 = *(_QWORD *)(a1 + 72);
        v17 = v9;
        v12 = *(_QWORD *)(v11 + 8 * v10);
        if ( v8 == (HSTRING *)v12 )
        {
          *(_QWORD *)(v11 + 8 * v10) = v8[3];
        }
        else
        {
          for ( i = *(_QWORD *)(v12 + 24); (HSTRING *)i != v8; i = *(_QWORD *)(i + 24) )
            v12 = i;
          *(_QWORD *)(v12 + 24) = v8[3];
        }
        XWinRT::XHashMap<HSTRING__ *,XWinRT::detail::GitStorageType<ContentManagement::TargetedContent::ITargetedContentValue>,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentValue *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<ContentManagement::TargetedContent::ITargetedContentValue>>>::FreeNode(
          a1 + 64,
          v8);
        v3 = 0;
      }
    }
  }
LABEL_24:
  if ( v18 )
  {
    if ( *(_DWORD *)v18 == 1 )
      *(_DWORD *)(v18 + 8) += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(v18 + 8));
  }
  XWinRT::InterfaceLifetimeTraits::Destroy<ContentManagement::TargetedContent::ITargetedContentValue>((__int64)&v17);
  WindowsDeleteString(v4);
  if ( v3 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,0,0,0>::RaiseEvent();
  return (unsigned int)v3;
}
