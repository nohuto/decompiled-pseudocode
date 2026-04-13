/*
 * XREFs of _anonymous_namespace_::SplitString @ 0x18001EDF4
 * Callers:
 *     _anonymous_namespace_::GetImpressionEventExpirationTime @ 0x18001EED0 (_anonymous_namespace_--GetImpressionEventExpirationTime.c)
 * Callees:
 *     ?push_back@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAX$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180023580 (-push_back@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V.c)
 *     ?substr@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV12@_K0@Z @ 0x180024BF0 (-substr@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV12@_K0@Z.c)
 *     ?find_first_not_of@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KPEBG_K@Z @ 0x180024C28 (-find_first_not_of@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KPEBG_K@Z.c)
 *     ?find_first_of@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KPEBG_K@Z @ 0x180024CD4 (-find_first_of@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KPEBG_K@Z.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall anonymous_namespace_::SplitString(_QWORD *a1, __int64 a2)
{
  __int64 first_not_of; // rsi
  __int64 first_of; // rbp
  __int64 v6; // rax
  int v8; // [rsp+20h] [rbp-58h]
  __int64 v9; // [rsp+28h] [rbp-50h]
  _QWORD *v10; // [rsp+30h] [rbp-48h]
  void *v11[4]; // [rsp+38h] [rbp-40h] BYREF

  v9 = -2LL;
  v10 = a1;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v8 = 1;
  if ( *(_QWORD *)(a2 + 16) )
  {
    first_not_of = std::wstring::find_first_not_of(a2, L"`");
    do
    {
      first_of = std::wstring::find_first_of(a2, L"`", first_not_of);
      v6 = std::wstring::substr(a2, v11, first_not_of, first_of - first_not_of, v8, v9, v10);
      std::vector<std::wstring>::push_back(a1, v6);
      if ( v11[3] >= (void *)8 )
        operator delete(v11[0]);
      first_not_of = first_of + 1;
    }
    while ( first_of != -1 );
  }
  return a1;
}
