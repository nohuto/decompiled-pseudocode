/*
 * XREFs of ?ReplaceAll@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@5@@Z @ 0x180003750
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180003FAC (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x1800046B8 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ??$Construct@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@1@PEAUIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Z @ 0x180005780 (--$Construct@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@InterfaceLif_ea_180005780.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@XWinRT@@QEAAKXZ @ 0x180005ED8 (-Release@ReferencedGitCookie@-$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Wi.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x1800073DC (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3)
{
  __m128i *v3; // rbp
  unsigned int v4; // esi
  int v6; // r13d
  int v9; // edi
  unsigned int v10; // ebx
  __m128i *v11; // r15
  unsigned int v12; // eax
  __m128i *v13; // rax
  __int64 *v14; // rsi
  __int64 v15; // r12
  __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  int v18; // [rsp+88h] [rbp+20h] BYREF

  v18 = 0;
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
  v10 = 0;
  if ( v4 )
  {
    v11 = v3;
    while ( 1 )
    {
      v18 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>(
              &v3[v10],
              *a3);
      v9 = v18;
      if ( v18 < 0 )
        break;
      if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*v11, 8)) )
        ++v6;
      ++v10;
      ++a3;
      ++v11;
      if ( v10 >= v4 )
        goto LABEL_11;
    }
  }
  else
  {
LABEL_11:
    XWinRT::SerializingLockPolicy::Write(&v17, a1 + 96, &v18);
    v9 = v18;
    if ( v18 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(&v18, *(unsigned __int8 *)(a1 + 117), a1 + 120);
      v12 = *(_DWORD *)(a1 + 64);
      v9 = 0;
      *(_DWORD *)(a1 + 64) = v10;
      v10 = v12;
      *(_DWORD *)(a1 + 68) = v4;
      *(_DWORD *)(a1 + 72) = v6;
      v13 = *(__m128i **)(a1 + 80);
      *(_QWORD *)(a1 + 80) = v3;
      v3 = v13;
      ++*(_DWORD *)(a1 + 112);
    }
    if ( v17 )
    {
      if ( *(_DWORD *)v17 == 1 )
        *(_DWORD *)(v17 + 8) += 0x10000000;
      else
        ReleaseSRWLockExclusive((PSRWLOCK)(v17 + 8));
      v17 = 0LL;
    }
  }
  if ( v3 )
  {
    if ( v10 )
    {
      v14 = (__int64 *)v3;
      v15 = v10;
      do
      {
        if ( *((_BYTE *)v14 + 8) )
        {
          XWinRT::detail::GitStorageType<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>::ReferencedGitCookie::Release((void *)*v14);
        }
        else if ( *v14 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)*v14 + 16LL))(*v14);
        }
        *v14 = 0LL;
        *((_BYTE *)v14 + 8) = 0;
        v14 += 2;
        --v15;
      }
      while ( v15 );
    }
    free(v3);
  }
  if ( v9 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent(
                           (unsigned __int8)v18,
                           *(unsigned __int8 *)(a1 + 116),
                           a1,
                           0LL,
                           0);
  return (unsigned int)v9;
}
