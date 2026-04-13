/*
 * XREFs of ?RemoveAtInternal@?$Vector@PEAVTargetedContentItem@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@5678@U?$VectorOptions@PEAVTargetedContentItem@TargetedContent@ContentManagement@@$0A@$00$0A@@5678@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x18004F524
 * Callers:
 *     ?RemoveAt@?$Vector@PEAVTargetedContentItem@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@5678@U?$VectorOptions@PEAVTargetedContentItem@TargetedContent@ContentManagement@@$0A@$00$0A@@5678@@Internal@Collections@Foundation@Windows@@UEAAJI@Z @ 0x18004CA80 (-RemoveAt@-$Vector@PEAVTargetedContentItem@TargetedContent@ContentManagement@@U-$DefaultEquality.c)
 *     ?RemoveAtEnd@?$Vector@PEAVTargetedContentItem@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@5678@U?$VectorOptions@PEAVTargetedContentItem@TargetedContent@ContentManagement@@$0A@$00$0A@@5678@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x18004CAB0 (-RemoveAtEnd@-$Vector@PEAVTargetedContentItem@TargetedContent@ContentManagement@@U-$DefaultEqual.c)
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180006F40 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ?RaiseEvent@?$VectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180011258 (-RaiseEvent@-$VectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@Application.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180011274 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ??$Destroy@UITargetedContentValue@TargetedContent@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UITargetedContentValue@TargetedContent@ContentManagement@@@detail@1@@Z @ 0x180013180 (--$Destroy@UITargetedContentValue@TargetedContent@ContentManagement@@@InterfaceLifetimeTraits@XW.c)
 *     ?ResizeStorage@?$Vector@PEAVTargetedContentItem@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@5678@U?$VectorOptions@PEAVTargetedContentItem@TargetedContent@ContentManagement@@$0A@$00$0A@@5678@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x180013888 (-ResizeStorage@-$Vector@PEAVTargetedContentItem@TargetedContent@ContentManagement@@U-$DefaultEqu.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<ContentManagement::TargetedContent::TargetedContentItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::TargetedContent::TargetedContentItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentItem *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::TargetedContent::TargetedContentItem *,0,1,0>>::RemoveAtInternal(
        __int64 a1,
        unsigned int a2,
        char a3)
{
  int v6; // edi
  __int64 v7; // r14
  __int64 v8; // rcx
  __int128 v9; // xmm6
  int v10; // ecx
  unsigned int v11; // r8d
  unsigned int v12; // ecx
  unsigned int v13; // edx
  __int128 v15; // [rsp+40h] [rbp-30h] BYREF
  __int64 v16; // [rsp+50h] [rbp-20h] BYREF
  int v17; // [rsp+90h] [rbp+20h] BYREF

  v17 = 0;
  *(_QWORD *)&v15 = 0LL;
  BYTE8(v15) = 0;
  XWinRT::SerializingLockPolicy::Write((__int64)&v16, a1 + 96, &v17);
  v6 = v17;
  if ( v17 >= 0 )
  {
    if ( a3 )
      a2 = *(_DWORD *)(a1 + 64) - 1;
    if ( a2 >= *(_DWORD *)(a1 + 64) )
    {
      v6 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v6 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v17);
      v6 = 0;
      v7 = 16LL * a2;
      v8 = *(_QWORD *)(a1 + 80);
      if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(v7 + v8), 8)) )
        --*(_DWORD *)(a1 + 72);
      v9 = *(_OWORD *)(v7 + v8);
      XWinRT::InterfaceLifetimeTraits::Destroy<ContentManagement::TargetedContent::ITargetedContentValue>((__int64)&v15);
      v15 = v9;
      v10 = *(_DWORD *)(a1 + 64);
      if ( a2 < v10 - 1
        && memmove_s(
             (void *const)(v7 + *(_QWORD *)(a1 + 80)),
             16LL * (v10 - a2 - 1),
             (const void *const)(*(_QWORD *)(a1 + 80) + 16LL * (a2 + 1)),
             16LL * (v10 - a2 - 1)) )
      {
        v6 = -2147418113;
        RoOriginateError(2147549183LL, 0LL);
      }
      else
      {
        ++*(_DWORD *)(a1 + 112);
        --*(_DWORD *)(a1 + 64);
        v11 = *(_DWORD *)(a1 + 68);
        v12 = v11 / 3;
        if ( *(_DWORD *)(a1 + 64) < v11 / 3 )
        {
          v13 = v11 - v12;
          if ( v11 - 1 < v11 - v12 )
            v13 = v11 - 1;
          v6 = Windows::Foundation::Collections::Internal::Vector<ContentManagement::TargetedContent::TargetedContentItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::TargetedContent::TargetedContentItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentItem *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::TargetedContent::TargetedContentItem *,0,1,0>>::ResizeStorage(
                 a1,
                 v13);
        }
      }
    }
  }
  if ( v16 )
  {
    if ( *(_DWORD *)v16 == 1 )
      *(_DWORD *)(v16 + 8) += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(v16 + 8));
  }
  XWinRT::InterfaceLifetimeTraits::Destroy<ContentManagement::TargetedContent::ITargetedContentValue>((__int64)&v15);
  if ( v6 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,0,0,0>::RaiseEvent();
  return (unsigned int)v6;
}
