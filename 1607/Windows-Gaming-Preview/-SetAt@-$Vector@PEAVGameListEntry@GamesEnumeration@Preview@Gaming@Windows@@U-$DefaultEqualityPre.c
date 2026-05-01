/*
 * XREFs of ?SetAt@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@5@@Z @ 0x1800068B0
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180007DB8 (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180007DD4 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ??$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UIInspectable@@@detail@1@@Z @ 0x180008DF0 (--$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV-$GitStorageType@UIInspectable.c)
 *     ??$Construct@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@1@PEAUIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Z @ 0x180008E70 (--$Construct@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@InterfaceLifetimeTraits@X.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18000A688 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     _invalid_parameter_noinfo @ 0x18002700E (_invalid_parameter_noinfo.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::SetAt(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // r14
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx
  bool v10; // zf
  const void *v11; // rdx
  __int128 v12; // xmm6
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  __int128 v18; // [rsp+40h] [rbp-11h] BYREF
  __int128 v19; // [rsp+58h] [rbp+7h] BYREF
  __int128 v20; // [rsp+68h] [rbp+17h] BYREF
  _QWORD v21[4]; // [rsp+78h] [rbp+27h] BYREF
  int v22; // [rsp+D0h] [rbp+7Fh] BYREF

  v3 = a2;
  *(_QWORD *)&v20 = 0LL;
  BYTE8(v20) = 0;
  *(_QWORD *)&v18 = 0LL;
  BYTE8(v18) = 0;
  v6 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>(&v18, a3);
  v22 = v6;
  if ( v6 >= 0 )
  {
    XWinRT::SerializingLockPolicy::Write(v21, a1 + 96, &v22);
    v6 = v22;
    if ( v22 >= 0 )
    {
      if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 64) )
      {
        v6 = -2147483637;
        RoOriginateError(2147483659LL, 0LL);
      }
      if ( v6 >= 0 )
      {
        XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(&v22, *(unsigned __int8 *)(a1 + 117), a1 + 120);
        v6 = 0;
        *(_QWORD *)&v19 = 0LL;
        BYTE8(v19) = 0;
        v9 = *(_QWORD *)(a1 + 80);
        v10 = 16 * v3 + v9 == 0;
        v11 = (const void *)(16 * v3 + v9);
        if ( v10 )
        {
          *(_DWORD *)_o__errno(v8, v11) = 22;
          invalid_parameter_noinfo();
          v6 = -2147418113;
          RoOriginateError(2147549183LL, 0LL);
        }
        else
        {
          memmove(&v19, v11, 0x10uLL);
          *(_OWORD *)(*(_QWORD *)(a1 + 80) + 16 * v3) = v18;
          *(_QWORD *)&v18 = 0LL;
          BYTE8(v18) = 0;
          ++*(_DWORD *)(a1 + 112);
          v12 = v19;
          XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>(&v20, v13, v14);
          v20 = v12;
          if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(*(_QWORD *)(a1 + 80) + 16 * v3), 8)) )
            ++*(_DWORD *)(a1 + 72);
          if ( BYTE8(v19) )
            --*(_DWORD *)(a1 + 72);
        }
      }
    }
    if ( v21[0] )
    {
      if ( *(_DWORD *)v21[0] == 1 )
        *(_DWORD *)(v21[0] + 8LL) += 0x10000000;
      else
        ReleaseSRWLockExclusive((PSRWLOCK)(v21[0] + 8LL));
    }
  }
  else
  {
    *(_QWORD *)&v18 = 0LL;
    BYTE8(v18) = 0;
  }
  XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>(&v18, v5, v7);
  XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>(&v20, v15, v16);
  if ( v6 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent(
                           (unsigned __int8)v22,
                           *(unsigned __int8 *)(a1 + 116),
                           a1,
                           3LL,
                           v3);
  return (unsigned int)v6;
}
