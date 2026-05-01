/*
 * XREFs of ??$_EqualRangeImpl@PEAG@?$_HashTable@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@2@Ustring_hash@tlx@@Ustring_equal_to@5@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBQEAGAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@utl@@@1@2AEA_K@Z @ 0x180048540
 * Callers:
 *     ?StopTrackingEnergyUsage@AppEnergyUsageManager@@IEAAJPEAGKPEAU_SID@@@Z @ 0x18004CBB8 (-StopTrackingEnergyUsage@AppEnergyUsageManager@@IEAAJPEAGKPEAU_SID@@@Z.c)
 * Callees:
 *     ?eq@?$_StringTraits@U?$transform_traits@U?$identity_transform@G@tlx@@@tlx@@@utl@@SA_NPEBG_K01@Z @ 0x1800478FC (-eq@-$_StringTraits@U-$transform_traits@U-$identity_transform@G@tlx@@@tlx@@@utl@@SA_NPEBG_K01@Z.c)
 *     ??$make_range@$$CBG@tlx@@YA?AV?$range@$$CBG@0@PEBG@Z @ 0x1800489B8 (--$make_range@$$CBG@tlx@@YA-AV-$range@$$CBG@0@PEBG@Z.c)
 */

_QWORD *__fastcall utl::_HashTable<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>,tlx::string_hash,tlx::string_equal_to,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>>,0>::_EqualRangeImpl<unsigned short *>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 v8; // r14
  unsigned __int64 v9; // r10
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rbp
  __int64 v13; // rax
  _QWORD *v14; // r11
  _QWORD *v15; // rdi
  __int64 v16; // r11
  _QWORD *result; // rax
  char *v18; // [rsp+20h] [rbp-18h] BYREF
  __int64 v19; // [rsp+28h] [rbp-10h]

  if ( *(_QWORD *)(a1 + 16) )
  {
    v8 = *a3;
    tlx::make_range<unsigned short const>(&v18, *a3);
    v10 = 0LL;
    if ( v19 )
    {
      do
      {
        v11 = *(unsigned __int16 *)&v18[2 * v10++];
        v9 = (1025 * (v9 + v11)) ^ ((1025 * (v9 + v11)) >> 6);
      }
      while ( v10 != v19 );
    }
    v12 = 32769 * ((294921 * ((9 * v9) ^ ((9 * v9) >> 11))) ^ ((294921 * ((9 * v9) ^ ((9 * v9) >> 11))) >> 11));
    v13 = *(_QWORD *)(a1 + 16) + 16 * (v12 & ((8LL << *(_BYTE *)(a1 + 32)) - 1));
    v14 = *(_QWORD **)v13;
    if ( *(_QWORD *)v13 )
    {
      v15 = **(_QWORD ***)(v13 + 8);
      while ( v14 != v15 )
      {
        if ( v14[2] >= v12 )
        {
          if ( v14[2] > v12 )
            break;
          tlx::make_range<unsigned short const>(&v18, v8);
          if ( utl::_StringTraits<tlx::transform_traits<tlx::identity_transform<unsigned short>>>::eq(
                 v18,
                 v19,
                 *(char **)(v16 + 24),
                 (__int64)(*(_QWORD *)(v16 + 32) - *(_QWORD *)(v16 + 24)) >> 1) )
          {
            *a4 = v14;
            *a5 = *v14;
            result = a6;
            *a6 = 1LL;
            return result;
          }
        }
        v14 = (_QWORD *)*v14;
      }
    }
  }
  *a4 = a1;
  *a5 = a1;
  result = a6;
  *a6 = 0LL;
  return result;
}
