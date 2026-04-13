/*
 * XREFs of ??$_Construct@V?$_String_iterator@V?$_String_val@U?$_Simple_types@_W@std@@@std@@@std@@@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXV?$_String_iterator@V?$_String_val@U?$_Simple_types@_W@std@@@std@@@1@0Uforward_iterator_tag@1@@Z @ 0x18004A18C
 * Callers:
 *     ?GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@PEAUHSTRING__@@@Z @ 0x1800476F0 (-GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VCorrelationV.c)
 * Callees:
 *     ?_Grow@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA_N_K_N@Z @ 0x180012F3C (-_Grow@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA_N_K_N@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180030C9C (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 */

char __fastcall std::string::_Construct<std::_String_iterator<std::_String_val<std::_Simple_types<wchar_t>>>>(
        __int64 a1,
        char *a2,
        char *a3)
{
  _UNKNOWN **v3; // rax
  char *v5; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r14
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v3 = &retaddr;
  v5 = a2;
  v7 = (a3 - a2) >> 1;
  v8 = *(_QWORD *)(a1 + 16);
  if ( v8 <= v7 && *(_QWORD *)(a1 + 24) != v7 )
  {
    LOBYTE(v3) = std::string::_Grow((void **)a1, v7, 1);
    if ( (_BYTE)v3 )
    {
      *(_QWORD *)(a1 + 16) = v8;
      if ( *(_QWORD *)(a1 + 24) < 0x10uLL )
        v3 = (_UNKNOWN **)a1;
      else
        v3 = *(_UNKNOWN ***)a1;
      *((_BYTE *)v3 + v8) = 0;
    }
  }
  try
  {
    while ( v5 != a3 )
    {
      LOBYTE(v3) = (unsigned __int8)std::string::append((size_t *)a1, 1uLL, *v5);
      v5 += 2;
    }
  }
  catch ( ... )
  {
    std::string::_Tidy((void **)a1, 1, 0LL);
    throw;
  }
  return (char)v3;
}
