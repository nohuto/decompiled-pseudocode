/*
 * XREFs of ?GetMany@Iterator@?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJIQEAPEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@456@PEAI@Z @ 0x1800157E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@XWinRT@@QEAAKXZ @ 0x180005E4C (-Release@ReferencedGitCookie@-$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Wi.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180007600 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180016480 (-Release@-$RuntimeClass@U-$InterfaceList@U-$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@Coll.c)
 *     ?GetNext@?$XHashMap@PEAUHSTRING__@@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@@4@@XWinRT@@QEAAPEAVCPair@12@AEAPEAUTXPOSITION@2@@Z @ 0x180016B14 (-GetNext@-$XHashMap@PEAUHSTRING__@@V-$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@-.c)
 *     ??$Make@V?$SimpleKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@$00@Internal@Collections@Foundation@Windows@@Upermission@12345@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$SimpleKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@$00@Internal@Collections@Foundation@Windows@@@12@$$QEAUpermission@?$SimpleKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@$00@Internal@Collections@Foundation@Windows@@@Z @ 0x180016EE4 (--$Make@V-$SimpleKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultLifetimeTraits@PEAUHSTR.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     memset @ 0x1800269AC (memset.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Iterator::GetMany(
        _QWORD *a1,
        unsigned int a2,
        _QWORD *a3,
        _DWORD *a4)
{
  __int64 v4; // r14
  _QWORD *v5; // r12
  unsigned int v6; // edi
  int v8; // ebx
  __int64 v9; // r15
  unsigned int v10; // ebx
  HRESULT v11; // esi
  __int64 v12; // rdi
  __int64 v13; // r14
  HSTRING v14; // rcx
  __m128i v15; // xmm0
  __m128i v16; // xmm1
  int v18; // [rsp+20h] [rbp-60h] BYREF
  unsigned int v19; // [rsp+24h] [rbp-5Ch]
  int v20; // [rsp+28h] [rbp-58h]
  HSTRING newString; // [rsp+30h] [rbp-50h] BYREF
  __int64 v22; // [rsp+38h] [rbp-48h] BYREF
  __int64 v23; // [rsp+40h] [rbp-40h]
  __int64 v24; // [rsp+48h] [rbp-38h] BYREF
  __m128i v25; // [rsp+50h] [rbp-30h]
  void *Block[2]; // [rsp+60h] [rbp-20h]
  __int64 v27; // [rsp+70h] [rbp-10h] BYREF

  v18 = 0;
  v4 = 0LL;
  *a4 = 0;
  v5 = a3;
  v6 = a2;
  v19 = 0;
  if ( a2 )
    memset(a3, 0, 8LL * a2);
  XWinRT::SerializingLockPolicy::Read((__int64)&v27, (RTL_SRWLOCK *)(a1[7] + 152LL), &v18);
  if ( v18 >= 0 )
  {
    if ( *(_QWORD *)(a1[7] + 168LL) == a1[9] )
    {
      v8 = 0;
    }
    else
    {
      v8 = -2147483636;
      RoOriginateError(2147483660LL, 0LL);
    }
    v18 = v8;
  }
  v9 = a1[8];
  v10 = 0;
  v11 = v18;
  v24 = v9;
  v20 = 0;
  if ( v18 >= 0 )
  {
    while ( v10 < v6 )
    {
      if ( v11 >= 0 )
      {
        if ( !v9 )
          break;
        v12 = 0LL;
        v23 = 0LL;
        Microsoft::WRL::Details::Make<Windows::Foundation::Collections::Internal::SimpleKeyValuePair<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,1>,Windows::Foundation::Collections::Internal::SimpleKeyValuePair<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,1>::permission>(&v22);
        v13 = v22;
        if ( v22 )
        {
          v11 = WindowsDuplicateString(*(HSTRING *)v9, &newString);
          if ( v11 >= 0 )
          {
            *(_OWORD *)Block = *(_OWORD *)(v9 + 8);
            v25.m128i_i8[8] = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)Block, 8));
            if ( v25.m128i_i8[8] )
            {
              v25.m128i_i64[0] = (__int64)Block[0];
              _InterlockedIncrement((volatile signed __int32 *)Block[0]);
              v9 = v24;
              v12 = v23;
              v13 = v22;
            }
            else
            {
              v25.m128i_i64[0] = (__int64)Block[0];
              if ( Block[0] )
                (*(void (__fastcall **)(void *))(*(_QWORD *)Block[0] + 8LL))(Block[0]);
            }
            v11 = 0;
            v14 = *(HSTRING *)(v13 + 56);
            v15 = v25;
            *(_QWORD *)(v13 + 56) = newString;
            v16 = *(__m128i *)(v13 + 64);
            newString = v14;
            *(__m128i *)(v13 + 64) = v15;
            *(__m128i *)Block = v16;
            v25 = v16;
            if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v16, 8)) )
            {
              XWinRT::detail::GitStorageType<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>::ReferencedGitCookie::Release((volatile signed __int32 *)Block[0]);
            }
            else if ( Block[0] )
            {
              (*(void (__fastcall **)(void *))(*(_QWORD *)Block[0] + 16LL))(Block[0]);
            }
            v25.m128i_i64[0] = 0LL;
            v10 = v20;
            v25.m128i_i8[8] = 0;
          }
          else
          {
            newString = 0LL;
          }
          WindowsDeleteString(newString);
          newString = 0LL;
          if ( v11 >= 0 )
          {
            v12 = v13;
            v13 = 0LL;
            v22 = 0LL;
            v23 = v12;
          }
          if ( v13 )
          {
            v22 = 0LL;
            Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v13);
          }
          v18 = v11;
          if ( v11 < 0 )
          {
            v4 = v19;
          }
          else
          {
            if ( v12 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
              v10 = v20;
            }
            v5[v10] = v12;
            XWinRT::XHashMap<HSTRING__ *,XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<IInspectable>>>::GetNext(
              a1[7] + 64LL,
              &v24);
            v9 = v24;
            v4 = ++v19;
            if ( !v24 )
            {
              if ( v12 )
              {
                v23 &= v24;
                Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v12);
              }
              break;
            }
          }
          if ( v12 )
          {
            v23 = 0LL;
            Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v12);
          }
        }
        else
        {
          v4 = v19;
          v11 = -2147024882;
          v18 = -2147024882;
        }
        v6 = a2;
      }
      v20 = ++v10;
      if ( v11 < 0 )
        goto LABEL_42;
    }
    if ( v11 >= 0 )
    {
      a1[8] = v9;
      *a4 = v4;
      goto LABEL_44;
    }
LABEL_42:
    if ( (_DWORD)v4 )
    {
      do
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 16LL))(*v5);
        *v5++ = 0LL;
        --v4;
      }
      while ( v4 );
    }
  }
LABEL_44:
  if ( v27 )
  {
    if ( *(_DWORD *)v27 == 1 )
      --*(_DWORD *)(v27 + 8);
    else
      ReleaseSRWLockShared((PSRWLOCK)(v27 + 8));
  }
  return (unsigned int)v11;
}
