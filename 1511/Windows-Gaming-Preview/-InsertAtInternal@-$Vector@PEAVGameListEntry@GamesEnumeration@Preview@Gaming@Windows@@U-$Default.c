/*
 * XREFs of ?InsertAtInternal@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@5@_N@Z @ 0x1800048C8
 * Callers:
 *     ?InsertAt@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@5@@Z @ 0x180003310 (-InsertAt@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$DefaultEquality.c)
 *     ?Append@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@5@@Z @ 0x180003330 (-Append@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$DefaultEqualityPr.c)
 *     _lambda_a644c9ca355a20c9ec9333f2681dd115_::operator() @ 0x1800091D4 (_lambda_a644c9ca355a20c9ec9333f2681dd115_--operator().c)
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180003FAC (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x1800046B8 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ??$Construct@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@1@PEAUIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Z @ 0x180005780 (--$Construct@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@InterfaceLif_ea_180005780.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@XWinRT@@QEAAKXZ @ 0x180005ED8 (-Release@ReferencedGitCookie@-$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Wi.c)
 *     ?ResizeStorage@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x180005F58 (-ResizeStorage@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$DefaultEqu.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x1800073DC (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     _invalid_parameter_noinfo @ 0x18002682E (_invalid_parameter_noinfo.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4)
{
  int v7; // edi
  void *v8; // rsi
  char v9; // r15
  unsigned int v10; // ecx
  __int64 v11; // rdx
  unsigned int v12; // eax
  void *v13; // rcx
  const void *v14; // rdx
  size_t v15; // r8
  __int64 v16; // rax
  _BYTE v18[4]; // [rsp+30h] [rbp-30h] BYREF
  int v19; // [rsp+34h] [rbp-2Ch] BYREF
  void *Block[2]; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v21[3]; // [rsp+48h] [rbp-18h] BYREF

  Block[0] = 0LL;
  LOBYTE(Block[1]) = 0;
  v19 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>(
          Block,
          a3);
  v7 = v19;
  if ( v19 < 0 )
    return (unsigned int)v7;
  XWinRT::SerializingLockPolicy::Write(v21, a1 + 96, &v19);
  v7 = v19;
  if ( v19 < 0 )
    goto LABEL_7;
  if ( a4 )
    a2 = *(_DWORD *)(a1 + 64);
  if ( a2 > *(_DWORD *)(a1 + 64) )
  {
    v7 = -2147483637;
    RoOriginateError(2147483659LL, 0LL);
    goto LABEL_7;
  }
  if ( *(_DWORD *)(a1 + 64) >= 0x7FFFFFFFu )
    v7 = -2147024882;
  if ( v7 < 0 )
    goto LABEL_7;
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)v18);
  v7 = 0;
  v10 = *(_DWORD *)(a1 + 68);
  if ( *(_DWORD *)(a1 + 64) + 1 > v10 )
  {
    v11 = v10 + (v10 >> 1);
    if ( v10 + 1 > (unsigned int)v11 )
      v11 = v10 + 1;
    v7 = Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::ResizeStorage(
           a1,
           v11);
    if ( v7 < 0 )
      goto LABEL_7;
  }
  v12 = *(_DWORD *)(a1 + 64);
  if ( a2 < v12 )
  {
    v13 = (void *)(*(_QWORD *)(a1 + 80) + 16LL * (a2 + 1));
    v14 = (const void *)(*(_QWORD *)(a1 + 80) + 16LL * a2);
    v15 = 16LL * (v12 - a2);
    if ( v15 )
    {
      if ( !v13 || !v14 )
      {
        *(_DWORD *)_o__errno(v13, v14) = 22;
LABEL_25:
        invalid_parameter_noinfo();
        v7 = -2147418113;
        RoOriginateError(2147549183LL, 0LL);
        goto LABEL_27;
      }
      if ( 16 * (unsigned __int64)(*(_DWORD *)(a1 + 68) - a2 - 1) < v15 )
      {
        *(_DWORD *)_o__errno(v13, v14) = 34;
        goto LABEL_25;
      }
      memmove(v13, v14, v15);
    }
  }
LABEL_27:
  if ( v7 >= 0 )
  {
    v8 = 0LL;
    v9 = 0;
    *(_OWORD *)(*(_QWORD *)(a1 + 80) + 16LL * a2) = *(_OWORD *)Block;
    v16 = *(_QWORD *)(a1 + 80);
    ++*(_DWORD *)(a1 + 64);
    ++*(_DWORD *)(a1 + 112);
    if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(v16 + 16LL * a2), 8)) )
      ++*(_DWORD *)(a1 + 72);
    goto LABEL_8;
  }
LABEL_7:
  v8 = Block[0];
  v9 = (char)Block[1];
LABEL_8:
  if ( v21[0] )
  {
    if ( *(_DWORD *)v21[0] == 1 )
      *(_DWORD *)(v21[0] + 8LL) += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(v21[0] + 8LL));
  }
  if ( v7 >= 0 )
    v7 = Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent();
  if ( v9 )
  {
    XWinRT::detail::GitStorageType<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>::ReferencedGitCookie::Release(v8);
  }
  else if ( v8 )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return (unsigned int)v7;
}
