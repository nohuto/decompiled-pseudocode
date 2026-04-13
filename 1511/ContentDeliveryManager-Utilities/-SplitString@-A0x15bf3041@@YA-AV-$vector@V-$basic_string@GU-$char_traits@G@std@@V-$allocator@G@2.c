/*
 * XREFs of ?SplitString@?A0x15bf3041@@YA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@PEBG@Z @ 0x18000DB70
 * Callers:
 *     ?GetImpressionEventExpirationTime@?A0x15bf3041@@YA_KPEBG0_K@Z @ 0x18000DE38 (-GetImpressionEventExpirationTime@-A0x15bf3041@@YA_KPEBG0_K@Z.c)
 * Callees:
 *     ?substr@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV12@_K0@Z @ 0x180012890 (-substr@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV12@_K0@Z.c)
 *     ?_Assign_rv@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX$$QEAV12@@Z @ 0x180014D04 (-_Assign_rv@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?_Reallocate@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@IEAAX_K@Z @ 0x18001653C (-_Reallocate@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator.c)
 *     ?_Xlen@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@IEBAXXZ @ 0x180016630 (-_Xlen@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$ba.c)
 *     __security_check_cookie @ 0x180027BD0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall `anonymous namespace'::SplitString(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rcx
  unsigned __int64 v6; // rdx
  char *v7; // r8
  __int64 v8; // rcx
  const wchar_t *v9; // rax
  char *v10; // rax
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rcx
  _QWORD *v13; // rax
  unsigned __int64 v14; // r9
  _QWORD *v15; // rax
  char *i; // r14
  __int64 v17; // rcx
  const wchar_t *v18; // rax
  char *v19; // rax
  __int64 v20; // r14
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rdx
  __int64 v33; // rcx
  int v35; // [rsp+20h] [rbp-68h]
  __int64 v36; // [rsp+28h] [rbp-60h]
  _QWORD *v37; // [rsp+30h] [rbp-58h]
  void *v38[4]; // [rsp+38h] [rbp-50h] BYREF

  v36 = -2LL;
  v37 = a1;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v35 = 1;
  v4 = a2[2];
  if ( v4 )
  {
    if ( a2[3] < 8uLL )
      v5 = a2;
    else
      v5 = (_QWORD *)*a2;
    v6 = (unsigned __int64)v5 + 2 * v4;
    if ( a2[3] < 8uLL )
      v7 = (char *)a2;
    else
      v7 = (char *)*a2;
    while ( 1 )
    {
      if ( (unsigned __int64)v7 >= v6 )
      {
        v11 = -1LL;
        goto LABEL_20;
      }
      v8 = 1LL;
      v9 = L"`";
      while ( *v9 != *(_WORD *)v7 )
      {
        ++v9;
        if ( !--v8 )
        {
          v9 = 0LL;
          break;
        }
      }
      if ( !v9 )
        break;
      v7 += 2;
    }
    if ( a2[3] < 8uLL )
      v10 = (char *)a2;
    else
      v10 = (char *)*a2;
    v11 = (v7 - v10) >> 1;
    do
    {
LABEL_20:
      v12 = a2[2];
      if ( v11 < v12 )
      {
        if ( a2[3] < 8uLL )
          v13 = a2;
        else
          v13 = (_QWORD *)*a2;
        v14 = (unsigned __int64)v13 + 2 * v12;
        if ( a2[3] < 8uLL )
          v15 = a2;
        else
          v15 = (_QWORD *)*a2;
        for ( i = (char *)v15 + 2 * v11; (unsigned __int64)i < v14; i += 2 )
        {
          v17 = 1LL;
          v18 = L"`";
          while ( *v18 != *(_WORD *)i )
          {
            ++v18;
            if ( !--v17 )
            {
              v18 = 0LL;
              break;
            }
          }
          if ( v18 )
          {
            if ( a2[3] < 8uLL )
              v19 = (char *)a2;
            else
              v19 = (char *)*a2;
            v20 = (i - v19) >> 1;
            goto LABEL_41;
          }
        }
      }
      v20 = -1LL;
LABEL_41:
      v21 = std::wstring::substr(a2, v38, v11, v20 - v11, v35, v36, v37);
      v22 = v21;
      v23 = a1[1];
      if ( v21 >= v23 || *a1 > v21 )
      {
        v29 = a1[2];
        if ( v23 == v29 && !((__int64)(v29 - v23) >> 5) )
        {
          v30 = (__int64)(v23 - *a1) >> 5;
          if ( 0x7FFFFFFFFFFFFFFLL == v30 )
            std::vector<std::wstring>::_Xlen();
          v31 = (v29 - *a1) >> 5;
          if ( 0x7FFFFFFFFFFFFFFLL - (v31 >> 1) >= v31 )
            v32 = (v31 >> 1) + v31;
          else
            v32 = 0LL;
          if ( v32 < v30 + 1 )
            v32 = v30 + 1;
          std::vector<std::wstring>::_Reallocate(a1, v32);
        }
      }
      else
      {
        v24 = v21 - *a1;
        v25 = a1[2];
        if ( v23 == v25 && !((__int64)(v25 - v23) >> 5) )
        {
          v26 = (__int64)(v23 - *a1) >> 5;
          if ( 0x7FFFFFFFFFFFFFFLL == v26 )
            std::vector<std::wstring>::_Xlen();
          v27 = (v25 - *a1) >> 5;
          if ( 0x7FFFFFFFFFFFFFFLL - (v27 >> 1) >= v27 )
            v28 = (v27 >> 1) + v27;
          else
            v28 = 0LL;
          if ( v28 < v26 + 1 )
            v28 = v26 + 1;
          std::vector<std::wstring>::_Reallocate(a1, v28);
        }
        v22 = *a1 + (v24 & 0xFFFFFFFFFFFFFFE0uLL);
      }
      v33 = a1[1];
      if ( v33 )
      {
        *(_QWORD *)(v33 + 24) = 7LL;
        *(_QWORD *)(v33 + 16) = 0LL;
        *(_WORD *)v33 = 0;
        std::wstring::_Assign_rv(v33, v22);
      }
      a1[1] += 32LL;
      if ( v38[3] >= (void *)8 )
        operator delete(v38[0]);
      v11 = v20 + 1;
    }
    while ( v20 != -1 );
  }
  return a1;
}
