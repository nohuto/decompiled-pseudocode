/*
 * XREFs of ??$_Find@PEBG@?$_HashTable@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@2@Ustring_hash@tlx@@Ustring_equal_to@5@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@2@$0A@@utl@@QEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@utl@@@1@AEBQEBG@Z @ 0x180002440
 * Callers:
 *     ?IsGoodEnergyState@AppEnergyUsageManager@@UEAAHPEBG@Z @ 0x1800023D0 (-IsGoodEnergyState@AppEnergyUsageManager@@UEAAHPEBG@Z.c)
 *     ?GetOrCreateEnergyInformation@AppEnergyUsageManager@@IEAAJPEBGPEAV?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@Z @ 0x180049AC8 (-GetOrCreateEnergyInformation@AppEnergyUsageManager@@IEAAJPEBGPEAV-$ComPtr@VAppEnergyInformation.c)
 *     ?QueryApplicationEnergyUsage@AppEnergyUsageManager@@UEAAJPEBGW4AppEnergyManagerUsageFlags@@PEAK@Z @ 0x18004B5F0 (-QueryApplicationEnergyUsage@AppEnergyUsageManager@@UEAAJPEBGW4AppEnergyManagerUsageFlags@@PEAK@.c)
 *     ?RegisterForEnergyChangeNotifications@AppEnergyUsageManager@@UEAAJPEBGW4AppEnergyManagerUsageFlags@@PEAT_LARGE_INTEGER@@2@Z @ 0x18004BB90 (-RegisterForEnergyChangeNotifications@AppEnergyUsageManager@@UEAAJPEBGW4AppEnergyManagerUsageFla.c)
 *     ?ResetTotalEnergyUsage@AppEnergyUsageManager@@UEAAJPEBGW4AppEnergyManagerUsageFlags@@@Z @ 0x18004C2D0 (-ResetTotalEnergyUsage@AppEnergyUsageManager@@UEAAJPEBGW4AppEnergyManagerUsageFlags@@@Z.c)
 *     ?UnRegisterForEnergyChangeNotifications@AppEnergyUsageManager@@UEAAJPEBGW4AppEnergyManagerUsageFlags@@@Z @ 0x18004CC60 (-UnRegisterForEnergyChangeNotifications@AppEnergyUsageManager@@UEAAJPEBGW4AppEnergyManagerUsageF.c)
 * Callees:
 *     ?eq@?$_StringTraits@U?$transform_traits@U?$identity_transform@G@tlx@@@tlx@@@utl@@SA_NPEBG_K01@Z @ 0x1800478FC (-eq@-$_StringTraits@U-$transform_traits@U-$identity_transform@G@tlx@@@tlx@@@utl@@SA_NPEBG_K01@Z.c)
 *     ??$make_range@$$CBG@tlx@@YA?AV?$range@$$CBG@0@PEBG@Z @ 0x1800489B8 (--$make_range@$$CBG@tlx@@YA-AV-$range@$$CBG@0@PEBG@Z.c)
 */

_QWORD *__fastcall utl::_HashTable<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>,tlx::string_hash,tlx::string_equal_to,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>>,0>::_Find<unsigned short const *>(
        __int64 a1,
        _QWORD *a2,
        _WORD **a3)
{
  _WORD *v6; // rdi
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  unsigned __int64 v11; // r14
  __int64 v12; // rax
  _QWORD *v13; // r11
  _QWORD *v14; // rbp
  __int64 v15; // r11
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF

  *a2 = 0LL;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v6 = *a3;
    v7 = 0LL;
    v8 = 0LL;
    if ( *v6 )
    {
      do
        ++v8;
      while ( v6[v8] );
    }
    v9 = 0LL;
    if ( v8 )
    {
      do
      {
        v10 = (unsigned __int16)v6[v9++];
        v7 = (1025 * (v7 + v10)) ^ ((1025 * (v7 + v10)) >> 6);
      }
      while ( v9 != v8 );
    }
    v11 = 32769 * ((294921 * ((9 * v7) ^ ((9 * v7) >> 11))) ^ ((294921 * ((9 * v7) ^ ((9 * v7) >> 11))) >> 11));
    v12 = *(_QWORD *)(a1 + 16) + 16 * (v11 & ((8LL << *(_BYTE *)(a1 + 32)) - 1));
    v13 = *(_QWORD **)v12;
    if ( *(_QWORD *)v12 )
    {
      v14 = **(_QWORD ***)(v12 + 8);
      while ( v13 != v14 )
      {
        if ( v13[2] >= v11 )
        {
          if ( v13[2] > v11 )
            break;
          tlx::make_range<unsigned short const>(v16, v6);
          if ( (unsigned __int8)utl::_StringTraits<tlx::transform_traits<tlx::identity_transform<unsigned short>>>::eq(
                                  v16[0],
                                  v16[1],
                                  *(_QWORD *)(v15 + 24),
                                  (__int64)(*(_QWORD *)(v15 + 32) - *(_QWORD *)(v15 + 24)) >> 1) )
          {
            *a2 = v13;
            return a2;
          }
        }
        v13 = (_QWORD *)*v13;
      }
    }
  }
  *a2 = a1;
  return a2;
}
