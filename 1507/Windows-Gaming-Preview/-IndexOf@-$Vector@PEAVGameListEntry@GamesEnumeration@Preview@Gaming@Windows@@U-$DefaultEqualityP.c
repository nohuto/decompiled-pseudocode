/*
 * XREFs of ?IndexOf@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@5@PEAIPEAE@Z @ 0x180002D40
 * Callers:
 *     <none>
 * Callees:
 *     ?IndexOfInternal@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@AEAAJPEAV?$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@XWinRT@@IPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@5@PEAIPEAE@Z @ 0x180004C34 (-IndexOfInternal@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$DefaultE.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@XWinRT@@QEAAKXZ @ 0x180005E4C (-Release@ReferencedGitCookie@-$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Wi.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180007600 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ??_V@YAXPEAX@Z @ 0x180025E1C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180026044 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::IndexOf(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _BYTE *a4)
{
  int v6; // ebx
  _QWORD *v8; // rbp
  unsigned int v9; // r14d
  char *v10; // rdx
  int v11; // ecx
  __int64 v12; // r8
  int v13; // esi
  unsigned int v14; // ebx
  unsigned __int64 v15; // rax
  char *v16; // rax
  int i; // ecx
  unsigned int v18; // r15d
  int v19; // ecx
  _QWORD *v20; // rdi
  __int64 v21; // r15
  __int128 v23; // [rsp+40h] [rbp-58h]
  __int64 v24[9]; // [rsp+50h] [rbp-48h] BYREF
  char *v25; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+10h]

  v26 = a2;
  v6 = a2;
  *a3 = 0;
  *a4 = 0;
  v8 = 0LL;
  v9 = 0;
  XWinRT::SerializingLockPolicy::Read(v24, a1 + 96, &v25);
  v12 = -1LL;
  v13 = (int)v25;
  if ( (int)v25 >= 0 )
  {
    if ( *(_DWORD *)(a1 + 72) )
    {
      v14 = *(_DWORD *)(a1 + 64);
      v15 = 16LL * v14;
      if ( !is_mul_ok(v14, 0x10uLL) )
        v15 = -1LL;
      v16 = (char *)operator new[](v15, (const struct std::nothrow_t *)&std::nothrow);
      v8 = v16;
      v25 = v16;
      if ( v16 )
      {
        for ( i = v14 - 1; i >= 0; --i )
        {
          *(_QWORD *)v16 = 0LL;
          v16[8] = 0;
          v16 += 16;
        }
      }
      else
      {
        v8 = 0LL;
      }
      if ( v8 )
      {
        v18 = 0;
        if ( *(_DWORD *)(a1 + 64) )
        {
          LODWORD(v25) = 0;
          do
          {
            v23 = *(_OWORD *)(*(_QWORD *)(a1 + 80) + 16LL * v18);
            v10 = (char *)&v8[2 * v18];
            if ( v10 )
            {
              *(_QWORD *)v10 = 0LL;
              v10[8] = 0;
            }
            v10[8] = BYTE8(v23);
            if ( BYTE8(v23) )
            {
              *(_QWORD *)v10 = v23;
              _InterlockedIncrement((volatile signed __int32 *)v23);
            }
            else
            {
              *(_QWORD *)v10 = v23;
              if ( (_QWORD)v23 )
                (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v23 + 8LL))(v23);
            }
            ++v9;
            ++v18;
          }
          while ( v18 < *(_DWORD *)(a1 + 64) );
          v13 = (int)v25;
        }
      }
      else
      {
        v13 = -2147024882;
      }
      v6 = v26;
    }
    else
    {
      v13 = Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::IndexOfInternal(
              v11,
              *(_QWORD *)(a1 + 80),
              *(_DWORD *)(a1 + 64),
              v6,
              (__int64)a3,
              (__int64)a4);
    }
    v12 = -1LL;
  }
  v19 = v24[0];
  if ( v24[0] )
  {
    if ( *(_DWORD *)v24[0] == 1 )
      --*(_DWORD *)(v24[0] + 8);
    else
      ReleaseSRWLockShared((PSRWLOCK)(v24[0] + 8));
    v24[0] = 0LL;
  }
  if ( v13 >= 0 )
  {
    if ( !v9 )
      goto LABEL_40;
    v13 = Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::IndexOfInternal(
            v19,
            (_DWORD)v8,
            v9,
            v6,
            (__int64)a3,
            (__int64)a4);
  }
  if ( v9 )
  {
    v20 = v8;
    v21 = v9;
    do
    {
      if ( *((_BYTE *)v20 + 8) )
      {
        XWinRT::detail::GitStorageType<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>::ReferencedGitCookie::Release((void *)*v20);
      }
      else if ( *v20 )
      {
        (*(void (__fastcall **)(_QWORD, char *, __int64))(*(_QWORD *)*v20 + 16LL))(*v20, v10, v12);
      }
      *((_BYTE *)v20 + 8) = 0;
      *v20 = 0LL;
      v20 += 2;
      --v21;
    }
    while ( v21 );
  }
LABEL_40:
  operator delete[](v8);
  return (unsigned int)v13;
}
