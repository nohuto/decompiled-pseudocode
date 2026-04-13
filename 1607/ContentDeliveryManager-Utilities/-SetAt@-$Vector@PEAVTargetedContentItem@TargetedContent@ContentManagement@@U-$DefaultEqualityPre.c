/*
 * XREFs of ?SetAt@?$Vector@PEAVTargetedContentItem@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@5678@U?$VectorOptions@PEAVTargetedContentItem@TargetedContent@ContentManagement@@$0A@$00$0A@@5678@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUITargetedContentItem@TargetedContent@ContentManagement@@@Z @ 0x18004C8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180006F40 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ?RaiseEvent@?$VectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180011258 (-RaiseEvent@-$VectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@Application.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180011274 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ??$Destroy@UITargetedContentValue@TargetedContent@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UITargetedContentValue@TargetedContent@ContentManagement@@@detail@1@@Z @ 0x180013180 (--$Destroy@UITargetedContentValue@TargetedContent@ContentManagement@@@InterfaceLifetimeTraits@XW.c)
 *     ??$Construct@UITargetedContentItem@TargetedContent@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UITargetedContentItem@TargetedContent@ContentManagement@@@detail@1@PEAUITargetedContentItem@TargetedContent@ContentManagement@@@Z @ 0x18004FFBC (--$Construct@UITargetedContentItem@TargetedContent@ContentManagement@@@InterfaceLifetimeTraits@X.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<ContentManagement::TargetedContent::TargetedContentItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::TargetedContent::TargetedContentItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentItem *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::TargetedContent::TargetedContentItem *,0,1,0>>::SetAt(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // rsi
  int v5; // ebx
  __int128 v6; // xmm6
  __int128 v8; // [rsp+40h] [rbp-11h] BYREF
  __int128 Destination; // [rsp+58h] [rbp+7h] BYREF
  __int128 v10; // [rsp+68h] [rbp+17h] BYREF
  _QWORD v11[4]; // [rsp+78h] [rbp+27h] BYREF
  int v12; // [rsp+D0h] [rbp+7Fh] BYREF

  v3 = a2;
  *(_QWORD *)&v10 = 0LL;
  BYTE8(v10) = 0;
  *(_QWORD *)&v8 = 0LL;
  BYTE8(v8) = 0;
  v5 = XWinRT::InterfaceLifetimeTraits::Construct<ContentManagement::TargetedContent::ITargetedContentItem>(&v8, a3);
  v12 = v5;
  if ( v5 >= 0 )
  {
    XWinRT::SerializingLockPolicy::Write((__int64)v11, a1 + 96, &v12);
    v5 = v12;
    if ( v12 >= 0 )
    {
      if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 64) )
      {
        v5 = -2147483637;
        RoOriginateError(2147483659LL, 0LL);
      }
      if ( v5 >= 0 )
      {
        XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v12);
        v5 = 0;
        *(_QWORD *)&Destination = 0LL;
        BYTE8(Destination) = 0;
        if ( memmove_s(&Destination, 0x10uLL, (const void *const)(16 * v3 + *(_QWORD *)(a1 + 80)), 0x10uLL) )
        {
          v5 = -2147418113;
          RoOriginateError(2147549183LL, 0LL);
        }
        else
        {
          *(_OWORD *)(*(_QWORD *)(a1 + 80) + 16 * v3) = v8;
          *(_QWORD *)&v8 = 0LL;
          BYTE8(v8) = 0;
          ++*(_DWORD *)(a1 + 112);
          v6 = Destination;
          XWinRT::InterfaceLifetimeTraits::Destroy<ContentManagement::TargetedContent::ITargetedContentValue>((__int64)&v10);
          v10 = v6;
          if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(*(_QWORD *)(a1 + 80) + 16 * v3), 8)) )
            ++*(_DWORD *)(a1 + 72);
          if ( BYTE8(Destination) )
            --*(_DWORD *)(a1 + 72);
        }
      }
    }
    if ( v11[0] )
    {
      if ( *(_DWORD *)v11[0] == 1 )
        *(_DWORD *)(v11[0] + 8LL) += 0x10000000;
      else
        ReleaseSRWLockExclusive((PSRWLOCK)(v11[0] + 8LL));
    }
  }
  else
  {
    *(_QWORD *)&v8 = 0LL;
    BYTE8(v8) = 0;
  }
  XWinRT::InterfaceLifetimeTraits::Destroy<ContentManagement::TargetedContent::ITargetedContentValue>((__int64)&v8);
  XWinRT::InterfaceLifetimeTraits::Destroy<ContentManagement::TargetedContent::ITargetedContentValue>((__int64)&v10);
  if ( v5 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,0,0,0>::RaiseEvent();
  return (unsigned int)v5;
}
