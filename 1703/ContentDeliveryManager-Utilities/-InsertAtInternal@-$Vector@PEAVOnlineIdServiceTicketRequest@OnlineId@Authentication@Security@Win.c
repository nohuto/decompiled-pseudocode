/*
 * XREFs of ?InsertAtInternal@?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@5@_N@Z @ 0x1800173A4
 * Callers:
 *     ?InsertAt@?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUIInstallAppInfo@2InstallControl@Preview@Store@ApplicationModel@5@@Z @ 0x1800144C0 (-InsertAt@-$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Win.c)
 *     ?Append@?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIInstallAppInfo@2InstallControl@Preview@Store@ApplicationModel@5@@Z @ 0x1800144E0 (-Append@-$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windo.c)
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18000711C (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ?RaiseEvent@?$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180017134 (-RaiseEvent@-$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Wi.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x1800171F8 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?ResizeStorage@?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x180019A18 (-ResizeStorage@-$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationMode.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4)
{
  __int64 v5; // rbx
  int v8; // edi
  unsigned int v9; // ecx
  __int64 v10; // rdx
  unsigned int v11; // eax
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF
  int v14; // [rsp+70h] [rbp+18h] BYREF

  v5 = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  v14 = 0;
  XWinRT::SerializingLockPolicy::Write((__int64)v13, a1 + 72, &v14);
  v8 = v14;
  if ( v14 >= 0 )
  {
    if ( a4 )
      a2 = *(_DWORD *)(a1 + 40);
    if ( a2 <= *(_DWORD *)(a1 + 40) )
    {
      if ( *(_DWORD *)(a1 + 40) >= 0x7FFFFFFFu )
        v8 = -2147024882;
      if ( v8 >= 0 )
      {
        XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v14);
        v8 = 0;
        v9 = *(_DWORD *)(a1 + 44);
        if ( *(_DWORD *)(a1 + 40) + 1 <= v9 )
          goto LABEL_15;
        v10 = v9 + (v9 >> 1);
        if ( v9 + 1 > (unsigned int)v10 )
          v10 = v9 + 1;
        v8 = Windows::Foundation::Collections::Internal::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::ResizeStorage(
               a1,
               v10);
        if ( v8 >= 0 )
        {
LABEL_15:
          v11 = *(_DWORD *)(a1 + 40);
          if ( a2 < v11
            && memmove_s(
                 (void *const)(*(_QWORD *)(a1 + 56) + 8LL * (a2 + 1)),
                 8LL * (*(_DWORD *)(a1 + 44) - a2 - 1),
                 (const void *const)(*(_QWORD *)(a1 + 56) + 8LL * a2),
                 8LL * (v11 - a2)) )
          {
            v8 = -2147418113;
            RoOriginateError(2147549183LL, 0LL);
          }
          if ( v8 >= 0 )
          {
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * a2) = v5;
            v5 = 0LL;
            ++*(_DWORD *)(a1 + 40);
            ++*(_DWORD *)(a1 + 88);
          }
        }
      }
    }
    else
    {
      v8 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
  }
  if ( v13[0] )
  {
    if ( *(_DWORD *)v13[0] == 1 )
      *(_DWORD *)(v13[0] + 8LL) += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(v13[0] + 8LL));
  }
  if ( v8 >= 0 )
    v8 = Windows::Foundation::Collections::Internal::VectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,0,0,0>::RaiseEvent();
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)v8;
}
