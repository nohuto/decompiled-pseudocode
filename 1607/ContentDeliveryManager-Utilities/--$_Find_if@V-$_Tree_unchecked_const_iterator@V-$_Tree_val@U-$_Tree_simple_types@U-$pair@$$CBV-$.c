/*
 * XREFs of ??$_Find_if@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@U_Iterator_base0@2@@std@@V_lambda_30b10436083aba01be8f7c4a25a13343_@@@std@@YA?AV?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@U_Iterator_base0@2@@0@V10@0V_lambda_30b10436083aba01be8f7c4a25a13343_@@@Z @ 0x180038ECC
 * Callers:
 *     ??$find_if@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@@std@@V_lambda_30b10436083aba01be8f7c4a25a13343_@@@std@@YA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@@0@V10@0V_lambda_30b10436083aba01be8f7c4a25a13343_@@@Z @ 0x180038794 (--$find_if@V-$_Tree_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_strin.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180027270 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 **__fastcall std::_Find_if<std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>,std::_Iterator_base0>,_lambda_30b10436083aba01be8f7c4a25a13343_>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4)
{
  __int64 *v6; // rbx
  const WCHAR *v7; // r8
  const WCHAR *v8; // rcx
  const WCHAR *v9; // r8
  const WCHAR *v10; // rcx
  char v11; // bl
  __int64 *v12; // rax
  __int64 *i; // rax
  LPCWCH lpString2[3]; // [rsp+30h] [rbp-39h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-21h]
  LPCWCH v17[2]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v18; // [rsp+60h] [rbp-9h]
  unsigned __int64 v19; // [rsp+68h] [rbp-1h]
  __int64 v20; // [rsp+70h] [rbp+7h]
  LPCWCH *v21; // [rsp+78h] [rbp+Fh]
  __int64 v22; // [rsp+80h] [rbp+17h]
  __int64 *v23; // [rsp+D8h] [rbp+6Fh]

  v23 = a2;
  v20 = -2LL;
  v22 = a4;
  while ( a2 != a3 )
  {
    v21 = lpString2;
    v6 = a2 + 4;
    v16 = 7LL;
    lpString2[2] = 0LL;
    LOWORD(lpString2[0]) = 0;
    std::wstring::assign((void **)lpString2, (void **)a2 + 4, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    v19 = 7LL;
    v18 = 0LL;
    LOWORD(v17[0]) = 0;
    std::wstring::assign((void **)v17, (void **)v6 + 4, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    v7 = (const WCHAR *)lpString2;
    if ( v16 >= 8 )
      v7 = lpString2[0];
    if ( *(_QWORD *)(a4 + 24) < 8uLL )
      v8 = (const WCHAR *)a4;
    else
      v8 = *(const WCHAR **)a4;
    if ( CompareStringOrdinal(v8, -1, v7, -1, 1) != 2 )
      goto LABEL_13;
    v9 = (const WCHAR *)v17;
    if ( v19 >= 8 )
      v9 = v17[0];
    v10 = (const WCHAR *)(a4 + 32);
    if ( *(_QWORD *)(a4 + 56) >= 8uLL )
      v10 = *(const WCHAR **)v10;
    v11 = 1;
    if ( CompareStringOrdinal(v10, -1, v9, -1, 1) != 2 )
LABEL_13:
      v11 = 0;
    if ( v19 >= 8 )
      operator delete((void *)v17[0]);
    v19 = 7LL;
    v18 = 0LL;
    LOWORD(v17[0]) = 0;
    if ( v16 >= 8 )
      operator delete((void *)lpString2[0]);
    a2 = v23;
    if ( v11 )
      break;
    if ( !*((_BYTE *)v23 + 25) )
    {
      v12 = (__int64 *)v23[2];
      if ( *((_BYTE *)v12 + 25) )
      {
        for ( i = (__int64 *)v23[1]; !*((_BYTE *)i + 25) && a2 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          a2 = i;
        a2 = i;
        v23 = i;
      }
      else
      {
        do
        {
          a2 = v12;
          v12 = (__int64 *)*v12;
        }
        while ( !*((_BYTE *)v12 + 25) );
        v23 = a2;
      }
    }
  }
  *a1 = a2;
  if ( *(_QWORD *)(a4 + 56) >= 8uLL )
    operator delete(*(void **)(a4 + 32));
  *(_QWORD *)(a4 + 56) = 7LL;
  *(_QWORD *)(a4 + 48) = 0LL;
  *(_WORD *)(a4 + 32) = 0;
  if ( *(_QWORD *)(a4 + 24) >= 8uLL )
    operator delete(*(void **)a4);
  *(_QWORD *)(a4 + 24) = 7LL;
  *(_QWORD *)(a4 + 16) = 0LL;
  *(_WORD *)a4 = 0;
  return a1;
}
