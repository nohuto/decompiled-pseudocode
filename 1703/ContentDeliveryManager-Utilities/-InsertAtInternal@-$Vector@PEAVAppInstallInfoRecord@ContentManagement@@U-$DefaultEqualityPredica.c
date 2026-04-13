/*
 * XREFs of ?InsertAtInternal@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUIAppInstallInfoRecord@ContentManagement@@_N@Z @ 0x180017938
 * Callers:
 *     ?ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x18000C268 (-ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU-$IVectorView@PEAVInstallAppInfo.c)
 *     ?InsertAt@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x180014FE0 (-InsertAt@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredicate@PEAVA.c)
 *     ?Append@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x180015000 (-Append@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredicate@PEAVApp.c)
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18000711C (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ?RaiseEvent@?$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180017134 (-RaiseEvent@-$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Wi.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x1800171F8 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ??$Destroy@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@1@@Z @ 0x1800191FC (--$Destroy@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV-$G.c)
 *     ??$Construct@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@1@PEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x180019274 (--$Construct@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV-.c)
 *     ?ResizeStorage@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x180019A74 (-ResizeStorage@-$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Win.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // ebx
  unsigned int v10; // ecx
  __int64 v11; // rdx
  unsigned int v12; // eax
  __int128 v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // rax
  _BYTE v17[4]; // [rsp+30h] [rbp-30h] BYREF
  int v18; // [rsp+34h] [rbp-2Ch] BYREF
  __int128 v19; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v20[3]; // [rsp+48h] [rbp-18h] BYREF

  *(_QWORD *)&v19 = 0LL;
  BYTE8(v19) = 0;
  v18 = XWinRT::InterfaceLifetimeTraits::Construct<ContentManagement::IAppInstallInfoRecord>(&v19, a3);
  v9 = v18;
  if ( v18 >= 0 )
  {
    XWinRT::SerializingLockPolicy::Write((__int64)v20, a1 + 96, &v18);
    v9 = v18;
    if ( v18 >= 0 )
    {
      if ( a4 )
        a2 = *(_DWORD *)(a1 + 64);
      if ( a2 <= *(_DWORD *)(a1 + 64) )
      {
        if ( *(_DWORD *)(a1 + 64) >= 0x7FFFFFFFu )
          v9 = -2147024882;
        if ( v9 >= 0 )
        {
          XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)v17);
          v9 = 0;
          v10 = *(_DWORD *)(a1 + 68);
          if ( *(_DWORD *)(a1 + 64) + 1 <= v10 )
            goto LABEL_15;
          v11 = v10 + (v10 >> 1);
          if ( v10 + 1 > (unsigned int)v11 )
            v11 = v10 + 1;
          v9 = Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,0,1,0>>::ResizeStorage(
                 a1,
                 v11);
          if ( v9 >= 0 )
          {
LABEL_15:
            v12 = *(_DWORD *)(a1 + 64);
            if ( a2 < v12
              && memmove_s(
                   (void *const)(*(_QWORD *)(a1 + 80) + 16LL * (a2 + 1)),
                   16LL * (*(_DWORD *)(a1 + 68) - a2 - 1),
                   (const void *const)(*(_QWORD *)(a1 + 80) + 16LL * a2),
                   16LL * (v12 - a2)) )
            {
              v9 = -2147418113;
              RoOriginateError(2147549183LL, 0LL);
            }
            if ( v9 >= 0 )
            {
              v13 = v19;
              v14 = *(_QWORD *)(a1 + 80);
              *(_QWORD *)&v19 = 0LL;
              BYTE8(v19) = 0;
              *(_OWORD *)(v14 + 16LL * a2) = v13;
              v15 = *(_QWORD *)(a1 + 80);
              ++*(_DWORD *)(a1 + 64);
              ++*(_DWORD *)(a1 + 112);
              if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(v15 + 16LL * a2), 8)) )
                ++*(_DWORD *)(a1 + 72);
            }
          }
        }
      }
      else
      {
        v9 = -2147483637;
        RoOriginateError(2147483659LL, 0LL);
      }
    }
    if ( v20[0] )
    {
      if ( *(_DWORD *)v20[0] == 1 )
        *(_DWORD *)(v20[0] + 8LL) += 0x10000000;
      else
        ReleaseSRWLockExclusive((PSRWLOCK)(v20[0] + 8LL));
    }
    if ( v9 >= 0 )
      v9 = Windows::Foundation::Collections::Internal::VectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,0,0,0>::RaiseEvent();
  }
  else
  {
    *(_QWORD *)&v19 = 0LL;
    BYTE8(v19) = 0;
  }
  XWinRT::InterfaceLifetimeTraits::Destroy<ContentManagement::IAppInstallInfoRecord>(&v19, v7, v8);
  return (unsigned int)v9;
}
