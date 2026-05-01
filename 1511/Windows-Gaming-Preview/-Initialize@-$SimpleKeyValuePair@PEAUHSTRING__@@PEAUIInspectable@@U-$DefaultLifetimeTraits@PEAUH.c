/*
 * XREFs of ?Initialize@?$SimpleKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@$00@Internal@Collections@Foundation@Windows@@AEAAJAEBQEAUHSTRING__@@AEBV?$GitStorageType@UIInspectable@@@detail@XWinRT@@@Z @ 0x180015D34
 * Callers:
 *     ?get_Current@Iterator@?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@456@@Z @ 0x180014E20 (-get_Current@Iterator@-$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultHash@PEAUHSTRING__@@@.c)
 * Callees:
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@XWinRT@@QEAAKXZ @ 0x180005ED8 (-Release@ReferencedGitCookie@-$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Wi.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleKeyValuePair<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,1>::Initialize(
        __int64 a1,
        HSTRING *a2,
        __m128i *a3)
{
  HRESULT v5; // eax
  unsigned int v6; // esi
  HSTRING v7; // rdx
  HSTRING v8; // rcx
  __int128 v10; // [rsp+28h] [rbp-28h]
  __m128i Block; // [rsp+40h] [rbp-10h]
  void *Blocka[2]; // [rsp+40h] [rbp-10h]
  HSTRING newString; // [rsp+78h] [rbp+28h] BYREF

  v5 = WindowsDuplicateString(*a2, &newString);
  v6 = v5;
  v7 = newString;
  if ( v5 < 0 )
    v7 = 0LL;
  newString = v7;
  if ( v5 >= 0 )
  {
    Block = *a3;
    BYTE8(v10) = _mm_cvtsi128_si32(_mm_srli_si128(*a3, 8));
    if ( BYTE8(v10) )
    {
      *(_QWORD *)&v10 = a3->m128i_i64[0];
      _InterlockedIncrement((volatile signed __int32 *)Block.m128i_i64[0]);
    }
    else
    {
      *(_QWORD *)&v10 = a3->m128i_i64[0];
      if ( Block.m128i_i64[0] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)Block.m128i_i64[0] + 8LL))(Block.m128i_i64[0]);
    }
    v6 = 0;
    v8 = *(HSTRING *)(a1 + 56);
    *(_QWORD *)(a1 + 56) = newString;
    newString = v8;
    *(_OWORD *)Blocka = *(_OWORD *)(a1 + 64);
    *(_OWORD *)(a1 + 64) = v10;
    if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)Blocka, 8)) )
    {
      XWinRT::detail::GitStorageType<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>::ReferencedGitCookie::Release((volatile signed __int32 *)Blocka[0]);
    }
    else if ( Blocka[0] )
    {
      (*(void (__fastcall **)(void *))(*(_QWORD *)Blocka[0] + 16LL))(Blocka[0]);
    }
  }
  WindowsDeleteString(newString);
  return v6;
}
