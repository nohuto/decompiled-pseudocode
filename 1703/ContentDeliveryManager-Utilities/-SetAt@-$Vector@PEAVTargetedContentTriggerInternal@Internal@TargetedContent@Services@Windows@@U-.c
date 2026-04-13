/*
 * XREFs of ?SetAt@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUITargetedContentTriggerInternal@2TargetedContent@Services@5@@Z @ 0x18004EA80
 * Callers:
 *     <none>
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18000711C (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ?RaiseEvent@?$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180017134 (-RaiseEvent@-$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Wi.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x1800171F8 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ??$Destroy@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@1@@Z @ 0x1800191FC (--$Destroy@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV-$G.c)
 *     ??$Construct@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@detail@1@PEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Z @ 0x180050584 (--$Construct@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Interf.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,0,1,0>>::SetAt(
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
  v5 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal>(
         &v8,
         a3);
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
          XWinRT::InterfaceLifetimeTraits::Destroy<ContentManagement::IAppInstallInfoRecord>((__int64)&v10);
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
  XWinRT::InterfaceLifetimeTraits::Destroy<ContentManagement::IAppInstallInfoRecord>((__int64)&v8);
  XWinRT::InterfaceLifetimeTraits::Destroy<ContentManagement::IAppInstallInfoRecord>((__int64)&v10);
  if ( v5 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,0,0,0>::RaiseEvent();
  return (unsigned int)v5;
}
