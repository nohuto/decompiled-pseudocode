/*
 * XREFs of ?InsertAtInternal@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@5@_N@Z @ 0x180007F84
 * Callers:
 *     ?InsertAt@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@5@@Z @ 0x180006A80 (-InsertAt@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$DefaultEquality.c)
 *     ?Append@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@5@@Z @ 0x180006AA0 (-Append@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$DefaultEqualityPr.c)
 *     _lambda_e7d66ec3c204a83377ccb333ff70ed66_::operator() @ 0x18000B4F8 (_lambda_e7d66ec3c204a83377ccb333ff70ed66_--operator().c)
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180007DB8 (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180007DD4 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ??$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UIInspectable@@@detail@1@@Z @ 0x180008DF0 (--$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV-$GitStorageType@UIInspectable.c)
 *     ??$Construct@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@1@PEAUIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Z @ 0x180008E70 (--$Construct@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@InterfaceLifetimeTraits@X.c)
 *     ?ResizeStorage@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x1800094A0 (-ResizeStorage@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$DefaultEqu.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18000A688 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     _invalid_parameter_noinfo @ 0x18002700E (_invalid_parameter_noinfo.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4)
{
  const void *v7; // rdx
  size_t v8; // r8
  int v9; // ebx
  unsigned int v10; // ecx
  __int64 v11; // rdx
  unsigned int v12; // eax
  void *v13; // rcx
  __int128 v14; // xmm0
  __int64 v15; // rax
  __int64 v16; // rax
  _BYTE v18[4]; // [rsp+30h] [rbp-30h] BYREF
  int v19; // [rsp+34h] [rbp-2Ch] BYREF
  __int128 v20; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v21[3]; // [rsp+48h] [rbp-18h] BYREF

  *(_QWORD *)&v20 = 0LL;
  BYTE8(v20) = 0;
  v19 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>(&v20, a3);
  v9 = v19;
  if ( v19 < 0 )
  {
    *(_QWORD *)&v20 = 0LL;
    BYTE8(v20) = 0;
    goto LABEL_33;
  }
  XWinRT::SerializingLockPolicy::Write(v21, a1 + 96, &v19);
  v9 = v19;
  if ( v19 >= 0 )
  {
    if ( a4 )
      a2 = *(_DWORD *)(a1 + 64);
    if ( a2 > *(_DWORD *)(a1 + 64) )
    {
      v9 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
      goto LABEL_27;
    }
    if ( *(_DWORD *)(a1 + 64) >= 0x7FFFFFFFu )
      v9 = -2147024882;
    if ( v9 < 0 )
      goto LABEL_27;
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)v18);
    v9 = 0;
    v10 = *(_DWORD *)(a1 + 68);
    if ( *(_DWORD *)(a1 + 64) + 1 > v10 )
    {
      v11 = v10 + (v10 >> 1);
      if ( v10 + 1 > (unsigned int)v11 )
        v11 = v10 + 1;
      v9 = Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::ResizeStorage(
             a1,
             v11);
      if ( v9 < 0 )
        goto LABEL_27;
    }
    v12 = *(_DWORD *)(a1 + 64);
    if ( a2 < v12 )
    {
      v13 = (void *)(*(_QWORD *)(a1 + 80) + 16LL * (a2 + 1));
      v7 = (const void *)(*(_QWORD *)(a1 + 80) + 16LL * a2);
      v8 = 16LL * (v12 - a2);
      if ( v8 )
      {
        if ( v13 && v7 )
        {
          if ( 16 * (unsigned __int64)(*(_DWORD *)(a1 + 68) - a2 - 1) >= v8 )
          {
            memmove(v13, v7, v8);
            goto LABEL_24;
          }
          *(_DWORD *)_o__errno(v13, v7) = 34;
        }
        else
        {
          *(_DWORD *)_o__errno(v13, v7) = 22;
        }
        invalid_parameter_noinfo();
        v9 = -2147418113;
        RoOriginateError(2147549183LL, 0LL);
      }
    }
LABEL_24:
    if ( v9 >= 0 )
    {
      v14 = v20;
      v15 = *(_QWORD *)(a1 + 80);
      *(_QWORD *)&v20 = 0LL;
      BYTE8(v20) = 0;
      *(_OWORD *)(v15 + 16LL * a2) = v14;
      v16 = *(_QWORD *)(a1 + 80);
      ++*(_DWORD *)(a1 + 64);
      ++*(_DWORD *)(a1 + 112);
      if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(v16 + 16LL * a2), 8)) )
        ++*(_DWORD *)(a1 + 72);
    }
  }
LABEL_27:
  if ( v21[0] )
  {
    if ( *(_DWORD *)v21[0] == 1 )
      *(_DWORD *)(v21[0] + 8LL) += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(v21[0] + 8LL));
  }
  if ( v9 >= 0 )
    v9 = Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent();
LABEL_33:
  XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>(&v20, v7, v8);
  return (unsigned int)v9;
}
