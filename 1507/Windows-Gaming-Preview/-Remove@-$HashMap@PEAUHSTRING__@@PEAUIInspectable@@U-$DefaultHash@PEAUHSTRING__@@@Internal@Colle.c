/*
 * XREFs of ?Remove@?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@@Z @ 0x180014DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180003E80 (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x1800045E8 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@XWinRT@@QEAAKXZ @ 0x180005E4C (-Release@ReferencedGitCookie@-$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Wi.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180007554 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ?Lookup@?$XHashMap@PEAUHSTRING__@@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@@4@@XWinRT@@QEAAJAEBQEAUHSTRING__@@PEAPEAVCPair@12@@Z @ 0x1800169F8 (-Lookup@-$XHashMap@PEAUHSTRING__@@V-$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@-$.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ?FreeNode@?$XHashMap@PEAUHSTRING__@@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@@4@@XWinRT@@AEAAJPEAVCNode@12@@Z @ 0x1800190D0 (-FreeNode@-$XHashMap@PEAUHSTRING__@@V-$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@.c)
 *     ??3@YAXPEAX@Z @ 0x180025E28 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180026020 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Remove(
        __int64 a1,
        __int64 a2)
{
  int v3; // esi
  HSTRING v4; // rbx
  volatile signed __int32 *v5; // r15
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  void *v8; // rcx
  HSTRING *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 i; // rax
  HSTRING *v15; // [rsp+30h] [rbp-30h] BYREF
  HSTRING v16; // [rsp+38h] [rbp-28h]
  __int128 v17; // [rsp+40h] [rbp-20h]
  __int64 v18; // [rsp+50h] [rbp-10h] BYREF
  char v19; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+48h] BYREF
  int v21; // [rsp+B8h] [rbp+58h] BYREF

  v20 = a2;
  if ( !*(_BYTE *)(a1 + 176) )
  {
    v3 = -2147418113;
    RoOriginateError(2147549183LL, 0LL);
    return (unsigned int)v3;
  }
  v4 = 0LL;
  v21 = 0;
  v5 = 0LL;
  v16 = 0LL;
  *(_QWORD *)&v17 = 0LL;
  BYTE8(v17) = 0;
  XWinRT::SerializingLockPolicy::Write((__int64)&v18, a1 + 152, &v21);
  v3 = v21;
  if ( v21 >= 0 )
  {
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v19);
    v15 = 0LL;
    v21 = XWinRT::XHashMap<HSTRING__ *,XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<IInspectable>>>::Lookup(
            a1 + 64,
            &v20,
            &v15);
    v3 = v21;
    if ( v21 >= 0 )
    {
      if ( !v15 )
      {
        v3 = -2147483637;
        RoOriginateError(2147483659LL, 0LL);
        v21 = -2147483637;
      }
      if ( v3 >= 0 )
      {
        if ( **(int **)(a1 + 168) > 1 )
        {
          v6 = operator new(4uLL, (const struct std::nothrow_t *)&std::nothrow);
          v7 = v6;
          if ( v6 )
            *v6 = 1;
          else
            v7 = 0LL;
          if ( !v7 )
          {
            v4 = v16;
            v3 = -2147024882;
LABEL_24:
            v5 = (volatile signed __int32 *)v17;
            goto LABEL_25;
          }
          v8 = *(void **)(a1 + 168);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v8, 0xFFFFFFFF) == 1 )
            operator delete(v8);
          *(_QWORD *)(a1 + 168) = v7;
        }
        v9 = v15;
        v4 = *v15;
        WindowsDeleteString(0LL);
        v10 = (unsigned int)(*((_DWORD *)v9 + 8) % *(_DWORD *)(a1 + 88));
        v11 = *(_QWORD *)(a1 + 72);
        v12 = *(_QWORD *)(v11 + 8 * v10);
        v17 = *(_OWORD *)(v9 + 1);
        if ( v9 == (HSTRING *)v12 )
        {
          *(_QWORD *)(v11 + 8 * v10) = v9[3];
        }
        else
        {
          for ( i = *(_QWORD *)(v12 + 24); (HSTRING *)i != v9; i = *(_QWORD *)(i + 24) )
            v12 = i;
          *(_QWORD *)(v12 + 24) = v9[3];
        }
        XWinRT::XHashMap<HSTRING__ *,XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<IInspectable>>>::FreeNode(
          a1 + 64,
          v9);
        v3 = 0;
        goto LABEL_24;
      }
    }
  }
LABEL_25:
  if ( v18 )
  {
    if ( *(_DWORD *)v18 == 1 )
      *(_DWORD *)(v18 + 8) += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(v18 + 8));
  }
  if ( BYTE8(v17) )
  {
    XWinRT::detail::GitStorageType<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>::ReferencedGitCookie::Release(v5);
  }
  else if ( v5 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  WindowsDeleteString(v4);
  if ( v3 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent();
  return (unsigned int)v3;
}
