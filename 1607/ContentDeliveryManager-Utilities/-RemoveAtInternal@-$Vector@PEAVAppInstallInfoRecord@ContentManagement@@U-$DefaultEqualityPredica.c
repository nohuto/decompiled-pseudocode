/*
 * XREFs of ?RemoveAtInternal@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x180011C50
 * Callers:
 *     ?RemoveAt@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJI@Z @ 0x18000F880 (-RemoveAt@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredicate@PEAVA.c)
 *     ?RemoveAtEnd@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x18000F8B0 (-RemoveAtEnd@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredicate@PE.c)
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180006F40 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ?RaiseEvent@?$VectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180011258 (-RaiseEvent@-$VectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@Application.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180011274 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ??$Destroy@UITargetedContentValue@TargetedContent@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UITargetedContentValue@TargetedContent@ContentManagement@@@detail@1@@Z @ 0x180013180 (--$Destroy@UITargetedContentValue@TargetedContent@ContentManagement@@@InterfaceLifetimeTraits@XW.c)
 *     ?ResizeStorage@?$Vector@PEAVTargetedContentItem@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@5678@U?$VectorOptions@PEAVTargetedContentItem@TargetedContent@ContentManagement@@$0A@$00$0A@@5678@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x180013888 (-ResizeStorage@-$Vector@PEAVTargetedContentItem@TargetedContent@ContentManagement@@U-$DefaultEqu.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::RemoveAtInternal(
        __int64 a1,
        unsigned int a2,
        char a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r14
  __int64 v12; // rcx
  __int128 v13; // xmm6
  int v14; // ecx
  __int64 v15; // rdx
  __int128 v17; // [rsp+40h] [rbp-30h] BYREF
  __int64 v18; // [rsp+50h] [rbp-20h] BYREF
  int v19; // [rsp+90h] [rbp+20h] BYREF

  v19 = 0;
  *(_QWORD *)&v17 = 0LL;
  BYTE8(v17) = 0;
  XWinRT::SerializingLockPolicy::Write((__int64)&v18, a1 + 96, &v19);
  v8 = v19;
  if ( v19 >= 0 )
  {
    if ( a3 )
      a2 = *(_DWORD *)(a1 + 64) - 1;
    if ( a2 >= *(_DWORD *)(a1 + 64) )
    {
      v8 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v8 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v19);
      v8 = 0;
      v11 = 16LL * a2;
      v12 = *(_QWORD *)(a1 + 80);
      if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(v11 + v12), 8)) )
        --*(_DWORD *)(a1 + 72);
      v13 = *(_OWORD *)(v11 + v12);
      XWinRT::InterfaceLifetimeTraits::Destroy<ContentManagement::TargetedContent::ITargetedContentValue>(&v17, v9, v10);
      v17 = v13;
      v14 = *(_DWORD *)(a1 + 64);
      if ( a2 < v14 - 1
        && memmove_s(
             (void *const)(v11 + *(_QWORD *)(a1 + 80)),
             16LL * (v14 - a2 - 1),
             (const void *const)(*(_QWORD *)(a1 + 80) + 16LL * (a2 + 1)),
             16LL * (v14 - a2 - 1)) )
      {
        v8 = -2147418113;
        RoOriginateError(2147549183LL, 0LL);
      }
      else
      {
        ++*(_DWORD *)(a1 + 112);
        --*(_DWORD *)(a1 + 64);
        v7 = *(unsigned int *)(a1 + 68);
        LODWORD(v6) = (2863311531u * (unsigned __int64)(unsigned int)v7) >> 32;
        if ( *(_DWORD *)(a1 + 64) < (unsigned int)v7 / 3 )
        {
          v15 = (unsigned int)v7 - (unsigned int)v7 / 3;
          if ( (int)v7 - 1 < (unsigned int)v15 )
            v15 = (unsigned int)(v7 - 1);
          v8 = Windows::Foundation::Collections::Internal::Vector<ContentManagement::TargetedContent::TargetedContentItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::TargetedContent::TargetedContentItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentItem *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::TargetedContent::TargetedContentItem *,0,1,0>>::ResizeStorage(
                 a1,
                 v15);
        }
      }
    }
  }
  if ( v18 )
  {
    if ( *(_DWORD *)v18 == 1 )
      *(_DWORD *)(v18 + 8) += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(v18 + 8));
  }
  XWinRT::InterfaceLifetimeTraits::Destroy<ContentManagement::TargetedContent::ITargetedContentValue>(&v17, v6, v7);
  if ( v8 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,0,0,0>::RaiseEvent();
  return (unsigned int)v8;
}
