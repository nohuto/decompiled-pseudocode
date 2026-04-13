/*
 * XREFs of ?SetAt@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x18000F6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180006F40 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ?RaiseEvent@?$VectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180011258 (-RaiseEvent@-$VectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@Application.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180011274 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ??$Destroy@UITargetedContentValue@TargetedContent@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UITargetedContentValue@TargetedContent@ContentManagement@@@detail@1@@Z @ 0x180013180 (--$Destroy@UITargetedContentValue@TargetedContent@ContentManagement@@@InterfaceLifetimeTraits@XW.c)
 *     ??$Construct@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@1@PEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x1800131FC (--$Construct@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV-.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::SetAt(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // rsi
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  __int128 v10; // xmm6
  __int64 v11; // rdx
  __int64 v12; // r8
  __int128 v14; // [rsp+40h] [rbp-11h] BYREF
  __int128 Destination; // [rsp+58h] [rbp+7h] BYREF
  __int128 v16; // [rsp+68h] [rbp+17h] BYREF
  _QWORD v17[4]; // [rsp+78h] [rbp+27h] BYREF
  int v18; // [rsp+D0h] [rbp+7Fh] BYREF

  v3 = a2;
  *(_QWORD *)&v16 = 0LL;
  BYTE8(v16) = 0;
  *(_QWORD *)&v14 = 0LL;
  BYTE8(v14) = 0;
  v6 = XWinRT::InterfaceLifetimeTraits::Construct<ContentManagement::IAppInstallInfoRecord>(&v14, a3);
  v18 = v6;
  if ( v6 >= 0 )
  {
    XWinRT::SerializingLockPolicy::Write((__int64)v17, a1 + 96, &v18);
    v6 = v18;
    if ( v18 >= 0 )
    {
      if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 64) )
      {
        v6 = -2147483637;
        RoOriginateError(2147483659LL, 0LL);
      }
      if ( v6 >= 0 )
      {
        XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(&v18, *(unsigned __int8 *)(a1 + 117), a1 + 120);
        v6 = 0;
        *(_QWORD *)&Destination = 0LL;
        BYTE8(Destination) = 0;
        if ( memmove_s(&Destination, 0x10uLL, (const void *const)(16 * v3 + *(_QWORD *)(a1 + 80)), 0x10uLL) )
        {
          v6 = -2147418113;
          RoOriginateError(2147549183LL, 0LL);
        }
        else
        {
          *(_OWORD *)(*(_QWORD *)(a1 + 80) + 16 * v3) = v14;
          *(_QWORD *)&v14 = 0LL;
          BYTE8(v14) = 0;
          ++*(_DWORD *)(a1 + 112);
          v10 = Destination;
          XWinRT::InterfaceLifetimeTraits::Destroy<ContentManagement::TargetedContent::ITargetedContentValue>(
            &v16,
            v8,
            v9);
          v16 = v10;
          if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(*(_QWORD *)(a1 + 80) + 16 * v3), 8)) )
            ++*(_DWORD *)(a1 + 72);
          if ( BYTE8(Destination) )
            --*(_DWORD *)(a1 + 72);
        }
      }
    }
    if ( v17[0] )
    {
      if ( *(_DWORD *)v17[0] == 1 )
        *(_DWORD *)(v17[0] + 8LL) += 0x10000000;
      else
        ReleaseSRWLockExclusive((PSRWLOCK)(v17[0] + 8LL));
    }
  }
  else
  {
    *(_QWORD *)&v14 = 0LL;
    BYTE8(v14) = 0;
  }
  XWinRT::InterfaceLifetimeTraits::Destroy<ContentManagement::TargetedContent::ITargetedContentValue>(&v14, v5, v7);
  XWinRT::InterfaceLifetimeTraits::Destroy<ContentManagement::TargetedContent::ITargetedContentValue>(&v16, v11, v12);
  if ( v6 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,0,0,0>::RaiseEvent(
                           (unsigned __int8)v18,
                           *(unsigned __int8 *)(a1 + 116),
                           a1,
                           3LL,
                           v3);
  return (unsigned int)v6;
}
