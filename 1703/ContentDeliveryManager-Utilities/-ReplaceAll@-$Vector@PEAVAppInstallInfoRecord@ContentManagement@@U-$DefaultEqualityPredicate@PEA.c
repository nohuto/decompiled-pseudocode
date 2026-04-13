/*
 * XREFs of ?ReplaceAll@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x180015430
 * Callers:
 *     <none>
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18000711C (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ?RaiseEvent@?$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180017134 (-RaiseEvent@-$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Wi.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x1800171F8 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ??$Destroy@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@1@@Z @ 0x1800191FC (--$Destroy@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV-$G.c)
 *     ??$Construct@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@1@PEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x180019274 (--$Construct@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV-.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3)
{
  __m128i *v3; // rdi
  unsigned int v4; // r14d
  int v6; // r13d
  int v9; // ebx
  __int64 v10; // rsi
  __m128i *v11; // r15
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // eax
  __m128i *v15; // rax
  __m128i *v16; // r14
  __int64 v18; // [rsp+30h] [rbp-38h] BYREF
  int v19; // [rsp+88h] [rbp+20h] BYREF

  v19 = 0;
  v3 = 0LL;
  v4 = 0;
  v6 = 0;
  if ( a2 )
  {
    v3 = (__m128i *)malloc(16LL * a2);
    if ( !v3 )
      return (unsigned int)-2147024882;
    v4 = a2;
  }
  v10 = 0LL;
  if ( v4 )
  {
    v11 = v3;
    while ( 1 )
    {
      v19 = XWinRT::InterfaceLifetimeTraits::Construct<ContentManagement::IAppInstallInfoRecord>(
              &v3[(unsigned int)v10],
              *a3);
      v9 = v19;
      if ( v19 < 0 )
        break;
      if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*v11, 8)) )
        ++v6;
      v10 = (unsigned int)(v10 + 1);
      ++a3;
      ++v11;
      if ( (unsigned int)v10 >= v4 )
        goto LABEL_11;
    }
  }
  else
  {
LABEL_11:
    XWinRT::SerializingLockPolicy::Write((__int64)&v18, a1 + 96, &v19);
    v9 = v19;
    if ( v19 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(&v19, *(unsigned __int8 *)(a1 + 117), a1 + 120);
      v14 = *(_DWORD *)(a1 + 64);
      v9 = 0;
      *(_DWORD *)(a1 + 64) = v10;
      v10 = v14;
      *(_DWORD *)(a1 + 68) = v4;
      *(_DWORD *)(a1 + 72) = v6;
      v15 = *(__m128i **)(a1 + 80);
      *(_QWORD *)(a1 + 80) = v3;
      v3 = v15;
      ++*(_DWORD *)(a1 + 112);
    }
    if ( v18 )
    {
      if ( *(_DWORD *)v18 == 1 )
        *(_DWORD *)(v18 + 8) += 0x10000000;
      else
        ReleaseSRWLockExclusive((PSRWLOCK)(v18 + 8));
      v18 = 0LL;
    }
  }
  if ( v3 )
  {
    if ( (_DWORD)v10 )
    {
      v16 = v3;
      do
      {
        XWinRT::InterfaceLifetimeTraits::Destroy<ContentManagement::IAppInstallInfoRecord>(v16++, v12, v13);
        --v10;
      }
      while ( v10 );
    }
    free(v3);
  }
  if ( v9 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,0,0,0>::RaiseEvent(
                           (unsigned __int8)v19,
                           *(unsigned __int8 *)(a1 + 116),
                           a1,
                           0LL,
                           0);
  return (unsigned int)v9;
}
