/*
 * XREFs of ?GetMany@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@5@PEAI@Z @ 0x1800032E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveDemand@?$StorageTempTraits@V?$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@XWinRT@@PEAUIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@V123@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@8@@XWinRT@@SAJPEAV?$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@2@PEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Z @ 0x1800042C8 (-ResolveDemand@-$StorageTempTraits@V-$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Ga.c)
 *     ??$Construct@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@V?$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@1@@Z @ 0x18000561C (--$Construct@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@InterfaceLifetimeTraits@X.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@XWinRT@@QEAAKXZ @ 0x180005E4C (-Release@ReferencedGitCookie@-$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Wi.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180007600 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ??_V@YAXPEAX@Z @ 0x180025E1C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180026044 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x1800269AC (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        _DWORD *a5)
{
  _QWORD *v5; // r12
  unsigned __int64 v6; // r15
  __int64 v8; // rbx
  __int64 v9; // rsi
  unsigned int v10; // r13d
  char *v11; // rdi
  unsigned __int64 v12; // rax
  char *v13; // rax
  int i; // ecx
  unsigned int v15; // ecx
  int v16; // r14d
  unsigned int v17; // r12d
  __int64 j; // rbx
  __int64 v19; // r15
  char *v20; // rdi
  __int64 v21; // r15
  unsigned int v23; // [rsp+20h] [rbp-58h]
  char *v24; // [rsp+30h] [rbp-48h]
  __int128 v25; // [rsp+40h] [rbp-38h]
  __int64 v26; // [rsp+50h] [rbp-28h] BYREF
  __int128 v27; // [rsp+60h] [rbp-18h] BYREF
  int v30; // [rsp+D0h] [rbp+58h] BYREF
  _QWORD *v31; // [rsp+D8h] [rbp+60h]

  v31 = a4;
  v5 = a4;
  v6 = a3;
  v8 = a1;
  v9 = 0LL;
  v10 = 0;
  v30 = 0;
  if ( a3 )
    memset(a4, 0, 8LL * a3);
  *a5 = 0;
  v11 = 0LL;
  v24 = 0LL;
  XWinRT::SerializingLockPolicy::Read(&v26, v8 + 96, &v30);
  if ( *(_DWORD *)(v8 + 72) )
  {
    v12 = 16 * v6;
    if ( !is_mul_ok(v6, 0x10uLL) )
      v12 = -1LL;
    v13 = (char *)operator new[](v12, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v13;
    v24 = v13;
    if ( v13 )
    {
      for ( i = v6 - 1; i >= 0; --i )
      {
        *(_QWORD *)v13 = 0LL;
        v13[8] = 0;
        v13 += 16;
      }
    }
    else
    {
      v11 = 0LL;
      v24 = 0LL;
    }
    v8 = a1;
  }
  v15 = *(_DWORD *)(v8 + 64);
  v23 = v15;
  if ( a2 <= v15 )
  {
    v16 = v30;
  }
  else
  {
    v16 = -2147483637;
    RoOriginateError(2147483659LL, 0LL);
    v30 = -2147483637;
    v15 = v23;
  }
  if ( v16 >= 0 )
  {
    if ( *(_DWORD *)(v8 + 72) )
    {
      if ( (_DWORD)v6 )
      {
        v17 = a2;
        do
        {
          if ( v17 >= v15 )
            break;
          v25 = *(_OWORD *)(*(_QWORD *)(v8 + 80) + 16LL * v17);
          if ( v11 )
          {
            *(_QWORD *)v11 = 0LL;
            v11[8] = 0;
          }
          v11[8] = BYTE8(v25);
          if ( BYTE8(v25) )
          {
            *(_QWORD *)v11 = v25;
            _InterlockedIncrement((volatile signed __int32 *)v25);
          }
          else
          {
            *(_QWORD *)v11 = v25;
            if ( (_QWORD)v25 )
            {
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v25 + 8LL))(v25);
              v8 = a1;
            }
          }
          v16 = 0;
          v30 = 0;
          ++v10;
          ++v17;
          v11 += 16;
          v15 = v23;
        }
        while ( v10 < (unsigned int)v6 );
        v5 = v31;
      }
    }
    else if ( (_DWORD)v6 )
    {
      do
      {
        if ( (unsigned int)v9 + a2 >= v15 )
          break;
        v27 = *(_OWORD *)(*(_QWORD *)(v8 + 80) + 16LL * ((unsigned int)v9 + a2));
        v16 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>(
                &v5[v9],
                &v27);
        if ( v16 < 0 )
          break;
        v9 = (unsigned int)(v9 + 1);
        v15 = v23;
      }
      while ( (unsigned int)v9 < (unsigned int)v6 );
      v10 = 0;
    }
  }
  if ( v26 )
  {
    if ( *(_DWORD *)v26 == 1 )
      --*(_DWORD *)(v26 + 8);
    else
      ReleaseSRWLockShared((PSRWLOCK)(v26 + 8));
    v26 = 0LL;
  }
  if ( v16 < 0 )
  {
LABEL_46:
    if ( (_DWORD)v9 )
    {
      v19 = (unsigned int)v9;
      do
      {
        if ( *v5 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 16LL))(*v5);
          *v5 = 0LL;
        }
        ++v5;
        --v19;
      }
      while ( v19 );
    }
    if ( (unsigned int)v9 < v10 )
    {
      v20 = &v24[16 * (unsigned int)v9];
      v21 = v10 - (unsigned int)v9;
      do
      {
        if ( v20[8] )
        {
          XWinRT::detail::GitStorageType<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>::ReferencedGitCookie::Release(*(void **)v20);
        }
        else if ( *(_QWORD *)v20 )
        {
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v20 + 16LL))(*(_QWORD *)v20);
        }
        v20[8] = 0;
        *(_QWORD *)v20 = 0LL;
        v20 += 16;
        --v21;
      }
      while ( v21 );
    }
  }
  else
  {
    if ( v10 )
    {
      for ( j = 0LL; (unsigned int)j < (unsigned int)v6; j = (unsigned int)(j + 1) )
      {
        if ( (unsigned int)j + a2 >= v23 )
          break;
        v16 = XWinRT::StorageTempTraits<XWinRT::detail::GitStorageType<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry *,XWinRT::detail::GitStorageType<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>::ResolveDemand(
                &v24[16 * (unsigned int)j],
                &v5[j]);
        if ( v16 < 0 )
          goto LABEL_46;
        LODWORD(v9) = v9 + 1;
      }
    }
    *a5 = v9;
  }
  operator delete[](v24);
  return (unsigned int)v16;
}
