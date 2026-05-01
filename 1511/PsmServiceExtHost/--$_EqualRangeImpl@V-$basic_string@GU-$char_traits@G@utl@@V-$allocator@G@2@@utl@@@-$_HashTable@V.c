/*
 * XREFs of ??$_EqualRangeImpl@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@?$_HashTable@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@2@Ustring_hash@tlx@@Ustring_equal_to@5@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@1@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@utl@@@1@2AEA_K@Z @ 0x18004F648
 * Callers:
 *     ?RecvCallback@AppEnergyUsageManager@@UEAAXW4RMExecServiceProviderCallbackType@2ExecutionModel@@PEAXJ@Z @ 0x180052790 (-RecvCallback@AppEnergyUsageManager@@UEAAXW4RMExecServiceProviderCallbackType@2ExecutionModel@@P.c)
 * Callees:
 *     ?eq@?$_StringTraits@U?$transform_traits@U?$identity_transform@G@tlx@@@tlx@@@utl@@SA_NPEBG_K01@Z @ 0x18004D52C (-eq@-$_StringTraits@U-$transform_traits@U-$identity_transform@G@tlx@@@tlx@@@utl@@SA_NPEBG_K01@Z.c)
 */

_QWORD *__fastcall utl::_HashTable<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>,tlx::string_hash,tlx::string_equal_to,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>>,0>::_EqualRangeImpl<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 **a4,
        __int64 *a5,
        _QWORD *a6)
{
  char *v8; // r14
  unsigned int v9; // edx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // rbx
  int v13; // eax
  unsigned int v14; // edx
  __int64 v15; // rax
  __int64 *v16; // r11
  __int64 *v17; // rbp
  _QWORD *result; // rax
  unsigned __int64 v19; // [rsp+40h] [rbp+8h]

  if ( *(_QWORD *)(a1 + 16) )
  {
    v8 = *(char **)a3;
    v9 = 0;
    v10 = *(_QWORD *)(a3 + 8);
    v11 = 0LL;
    v12 = (v10 - (__int64)v8) >> 1;
    if ( v12 )
    {
      do
      {
        v13 = *(unsigned __int16 *)&v8[2 * v11++];
        v9 = (1025 * (v9 + v13)) ^ ((1025 * (v9 + v13)) >> 6);
      }
      while ( v11 != v12 );
    }
    v14 = 32769 * (((9 * v9) >> 11) ^ (9 * v9));
    v19 = v14;
    LODWORD(v19) = 32769 * (((9 * v14) >> 11) ^ (9 * v14));
    v15 = *(_QWORD *)(a1 + 16) + 16 * (v19 & ((8LL << *(_BYTE *)(a1 + 32)) - 1));
    v16 = *(__int64 **)v15;
    if ( *(_QWORD *)v15 )
    {
      v17 = **(__int64 ***)(v15 + 8);
      while ( v16 != v17 )
      {
        if ( v16[2] >= v19 )
        {
          if ( v16[2] > v19 )
            break;
          if ( utl::_StringTraits<tlx::transform_traits<tlx::identity_transform<unsigned short>>>::eq(
                 v8,
                 v12,
                 (char *)v16[3],
                 (v16[4] - v16[3]) >> 1) )
          {
            *a4 = v16;
            *a5 = *v16;
            result = a6;
            *a6 = 1LL;
            return result;
          }
        }
        v16 = (__int64 *)*v16;
      }
    }
  }
  *a4 = (__int64 *)a1;
  *a5 = a1;
  result = a6;
  *a6 = 0LL;
  return result;
}
