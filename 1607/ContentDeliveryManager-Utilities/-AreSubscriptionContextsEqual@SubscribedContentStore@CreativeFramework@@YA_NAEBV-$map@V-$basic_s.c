/*
 * XREFs of ?AreSubscriptionContextsEqual@SubscribedContentStore@CreativeFramework@@YA_NAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@0@Z @ 0x1800334EC
 * Callers:
 *     ?ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEAW4SubscriptionActivationFlags@12@@Z @ 0x180033668 (-ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV-$map@V-$ba.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180027270 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ??$find_if@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@@std@@V_lambda_30b10436083aba01be8f7c4a25a13343_@@@std@@YA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@@0@V10@0V_lambda_30b10436083aba01be8f7c4a25a13343_@@@Z @ 0x180038794 (--$find_if@V-$_Tree_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_strin.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall CreativeFramework::SubscribedContentStore::AreSubscriptionContextsEqual(void ****a1, _QWORD *a2)
{
  __int64 *v3; // rax
  bool v4; // r8
  void ***v5; // rsi
  void **v6; // rdi
  _QWORD *v7; // rbx
  _QWORD *v8; // rax
  void **v9; // rax
  void **i; // rcx
  __int64 v12; // [rsp+20h] [rbp-50h]
  void *v13[4]; // [rsp+28h] [rbp-48h] BYREF
  void *v14[5]; // [rsp+48h] [rbp-28h] BYREF
  char v15; // [rsp+A8h] [rbp+38h] BYREF

  v12 = -2LL;
  v3 = (__int64 *)a1[1];
  v4 = v3 == (__int64 *)a2[1];
  if ( v3 == (__int64 *)a2[1] )
  {
    v5 = *a1;
    v6 = **a1;
    while ( v6 != (void **)v5 )
    {
      v13[3] = (void *)7;
      v13[2] = 0LL;
      LOWORD(v13[0]) = 0;
      std::wstring::assign(v13, v6 + 4, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
      v14[3] = (void *)7;
      v14[2] = 0LL;
      LOWORD(v14[0]) = 0;
      std::wstring::assign(v14, v6 + 8, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
      v7 = (_QWORD *)*a2;
      v8 = (_QWORD *)std::find_if<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>>,_lambda_30b10436083aba01be8f7c4a25a13343_>(
                       &v15,
                       *(_QWORD *)*a2,
                       *a2,
                       v13,
                       v12);
      v4 = *v8 != (_QWORD)v7;
      if ( (_QWORD *)*v8 == v7 )
        break;
      if ( !*((_BYTE *)v6 + 25) )
      {
        v9 = (void **)v6[2];
        if ( *((_BYTE *)v9 + 25) )
        {
          for ( i = (void **)v6[1]; !*((_BYTE *)i + 25) && v6 == i[2]; i = (void **)i[1] )
            v6 = i;
          v6 = i;
        }
        else
        {
          do
          {
            v6 = v9;
            v9 = (void **)*v9;
          }
          while ( !*((_BYTE *)v9 + 25) );
        }
      }
    }
  }
  return v4;
}
