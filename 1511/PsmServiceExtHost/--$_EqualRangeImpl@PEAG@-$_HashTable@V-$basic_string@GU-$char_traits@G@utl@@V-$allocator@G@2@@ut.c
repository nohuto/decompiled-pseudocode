/*
 * XREFs of ??$_EqualRangeImpl@PEAG@?$_HashTable@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@2@Ustring_hash@tlx@@Ustring_equal_to@5@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBQEAGAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@utl@@@1@2AEA_K@Z @ 0x18004F4F0
 * Callers:
 *     ?StopTrackingEnergyUsage@AppEnergyUsageManager@@IEAAJPEAGKPEAU_SID@@@Z @ 0x180053790 (-StopTrackingEnergyUsage@AppEnergyUsageManager@@IEAAJPEAGKPEAU_SID@@@Z.c)
 * Callees:
 *     ??$make_range@$$CBG@tlx@@YA?AV?$range@$$CBG@0@PEBG@Z @ 0x18004D37C (--$make_range@$$CBG@tlx@@YA-AV-$range@$$CBG@0@PEBG@Z.c)
 *     ?eq@?$_StringTraits@U?$transform_traits@U?$identity_transform@G@tlx@@@tlx@@@utl@@SA_NPEBG_K01@Z @ 0x18004D52C (-eq@-$_StringTraits@U-$transform_traits@U-$identity_transform@G@tlx@@@tlx@@@utl@@SA_NPEBG_K01@Z.c)
 */

_QWORD *__fastcall utl::_HashTable<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>,tlx::string_hash,tlx::string_equal_to,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>>,0>::_EqualRangeImpl<unsigned short *>(
        __int64 a1,
        __int64 a2,
        _WORD **a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  _WORD *v8; // r15
  unsigned int v9; // r10d
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rax
  _QWORD *v13; // r11
  _QWORD *v14; // rdi
  __int64 v15; // r11
  _QWORD *result; // rax
  char *v17; // [rsp+20h] [rbp-10h] BYREF
  __int64 v18; // [rsp+28h] [rbp-8h]
  unsigned __int64 v19; // [rsp+50h] [rbp+20h]

  if ( *(_QWORD *)(a1 + 16) )
  {
    v8 = *a3;
    tlx::make_range<unsigned short const>(&v17, *a3);
    v10 = 0LL;
    if ( v18 )
    {
      do
      {
        v11 = *(unsigned __int16 *)&v17[2 * v10++];
        v9 = (1025 * (v9 + v11)) ^ ((1025 * (v9 + v11)) >> 6);
      }
      while ( v10 != v18 );
    }
    v19 = 32769 * (((9 * v9) >> 11) ^ (9 * v9));
    LODWORD(v19) = 32769 * (((294921 * (((9 * v9) >> 11) ^ (9 * v9))) >> 11) ^ (294921 * (((9 * v9) >> 11) ^ (9 * v9))));
    v12 = *(_QWORD *)(a1 + 16) + 16 * (v19 & ((8LL << *(_BYTE *)(a1 + 32)) - 1));
    v13 = *(_QWORD **)v12;
    if ( *(_QWORD *)v12 )
    {
      v14 = **(_QWORD ***)(v12 + 8);
      while ( v13 != v14 )
      {
        if ( v13[2] >= v19 )
        {
          if ( v13[2] > v19 )
            break;
          tlx::make_range<unsigned short const>(&v17, v8);
          if ( utl::_StringTraits<tlx::transform_traits<tlx::identity_transform<unsigned short>>>::eq(
                 v17,
                 v18,
                 *(char **)(v15 + 24),
                 (__int64)(*(_QWORD *)(v15 + 32) - *(_QWORD *)(v15 + 24)) >> 1) )
          {
            *a4 = v13;
            *a5 = *v13;
            result = a6;
            *a6 = 1LL;
            return result;
          }
        }
        v13 = (_QWORD *)*v13;
      }
    }
  }
  *a4 = a1;
  *a5 = a1;
  result = a6;
  *a6 = 0LL;
  return result;
}
