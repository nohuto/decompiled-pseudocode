/*
 * XREFs of ?InsertAtInternal@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUITargetedContentTriggerInternal@2TargetedContent@Services@5@_N@Z @ 0x18004FECC
 * Callers:
 *     ?InsertAt@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUITargetedContentTriggerInternal@2TargetedContent@Services@5@@Z @ 0x18004EC30 (-InsertAt@-$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@.c)
 *     ?Append@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJPEAUITargetedContentTriggerInternal@2TargetedContent@Services@5@@Z @ 0x18004EC50 (-Append@-$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U.c)
 *     Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_32632dfdfd926559a6510a11dedcbccd___ @ 0x18004F110 (Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer__lambda_32632.c)
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18000711C (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ?RaiseEvent@?$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180017134 (-RaiseEvent@-$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Wi.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x1800171F8 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ??$Destroy@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@1@@Z @ 0x1800191FC (--$Destroy@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV-$G.c)
 *     ?ResizeStorage@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x180019A74 (-ResizeStorage@-$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Win.c)
 *     ??$Construct@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@detail@1@PEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Z @ 0x180050584 (--$Construct@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Interf.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,0,1,0>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4)
{
  int v7; // ebx
  unsigned int v8; // ecx
  unsigned int v9; // edx
  unsigned int v10; // eax
  __int128 v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // rax
  _BYTE v15[4]; // [rsp+30h] [rbp-30h] BYREF
  int v16; // [rsp+34h] [rbp-2Ch] BYREF
  __int128 v17; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v18[3]; // [rsp+48h] [rbp-18h] BYREF

  *(_QWORD *)&v17 = 0LL;
  BYTE8(v17) = 0;
  v16 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal>(
          &v17,
          a3);
  v7 = v16;
  if ( v16 >= 0 )
  {
    XWinRT::SerializingLockPolicy::Write((__int64)v18, a1 + 96, &v16);
    v7 = v16;
    if ( v16 >= 0 )
    {
      if ( a4 )
        a2 = *(_DWORD *)(a1 + 64);
      if ( a2 <= *(_DWORD *)(a1 + 64) )
      {
        if ( *(_DWORD *)(a1 + 64) >= 0x7FFFFFFFu )
          v7 = -2147024882;
        if ( v7 >= 0 )
        {
          XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)v15);
          v7 = 0;
          v8 = *(_DWORD *)(a1 + 68);
          if ( *(_DWORD *)(a1 + 64) + 1 <= v8 )
            goto LABEL_15;
          v9 = v8 + (v8 >> 1);
          if ( v8 + 1 > v9 )
            v9 = v8 + 1;
          v7 = Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,0,1,0>>::ResizeStorage(
                 a1,
                 v9);
          if ( v7 >= 0 )
          {
LABEL_15:
            v10 = *(_DWORD *)(a1 + 64);
            if ( a2 < v10
              && memmove_s(
                   (void *const)(*(_QWORD *)(a1 + 80) + 16LL * (a2 + 1)),
                   16LL * (*(_DWORD *)(a1 + 68) - a2 - 1),
                   (const void *const)(*(_QWORD *)(a1 + 80) + 16LL * a2),
                   16LL * (v10 - a2)) )
            {
              v7 = -2147418113;
              RoOriginateError(2147549183LL, 0LL);
            }
            if ( v7 >= 0 )
            {
              v11 = v17;
              v12 = *(_QWORD *)(a1 + 80);
              *(_QWORD *)&v17 = 0LL;
              BYTE8(v17) = 0;
              *(_OWORD *)(v12 + 16LL * a2) = v11;
              v13 = *(_QWORD *)(a1 + 80);
              ++*(_DWORD *)(a1 + 64);
              ++*(_DWORD *)(a1 + 112);
              if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(v13 + 16LL * a2), 8)) )
                ++*(_DWORD *)(a1 + 72);
            }
          }
        }
      }
      else
      {
        v7 = -2147483637;
        RoOriginateError(2147483659LL, 0LL);
      }
    }
    if ( v18[0] )
    {
      if ( *(_DWORD *)v18[0] == 1 )
        *(_DWORD *)(v18[0] + 8LL) += 0x10000000;
      else
        ReleaseSRWLockExclusive((PSRWLOCK)(v18[0] + 8LL));
    }
    if ( v7 >= 0 )
      v7 = Windows::Foundation::Collections::Internal::VectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,0,0,0>::RaiseEvent();
  }
  else
  {
    *(_QWORD *)&v17 = 0LL;
    BYTE8(v17) = 0;
  }
  XWinRT::InterfaceLifetimeTraits::Destroy<ContentManagement::IAppInstallInfoRecord>((__int64)&v17);
  return (unsigned int)v7;
}
