/*
 * XREFs of ?_FindInsertionPointUniqueUpper@?$_Tree@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ExternalResourcePolicyManifest@@@2@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ExternalResourcePolicyManifest@@@utl@@@2@$0A@@utl@@AEAA?AU?$pair@PEAU?$_TreeNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ExternalResourcePolicyManifest@@@utl@@@utl@@_N@2@AEAPEAU?$_TreeNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ExternalResourcePolicyManifest@@@utl@@@2@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@2@@Z @ 0x1800290B0
 * Callers:
 *     ?_EmplaceImpl@?$_Tree@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ExternalResourcePolicyManifest@@@2@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ExternalResourcePolicyManifest@@@utl@@@2@$0A@@utl@@AEAA?AU?$pair@V?$_TreeIt@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ExternalResourcePolicyManifest@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@PEAU?$_TreeNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ExternalResourcePolicyManifest@@@utl@@@2@1@Z @ 0x180029210 (-_EmplaceImpl@-$_Tree@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@_ea_180029210.c)
 * Callees:
 *     ??$?MGU?$char_traits@G@utl@@V?$allocator@G@1@@utl@@YA_NAEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@0@0@Z @ 0x18002A550 (--$-MGU-$char_traits@G@utl@@V-$allocator@G@1@@utl@@YA_NAEBV-$basic_string@GU-$char_traits@G@utl@.c)
 */

__int64 __fastcall utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_ExternalResourcePolicyManifest>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_ExternalResourcePolicyManifest>>,0>::_FindInsertionPointUniqueUpper(
        __int64 *a1,
        __int64 a2,
        __int64 *a3,
        char **a4)
{
  __int64 v4; // r10
  char *v6; // rbp
  __int64 v7; // rsi
  unsigned __int64 v8; // rsi
  char *v9; // rax
  unsigned __int64 v10; // rcx
  int v11; // edi
  int v12; // r11d
  __int64 v13; // rbx
  signed __int64 v14; // r9
  unsigned __int16 v15; // dx
  bool v16; // sf
  unsigned __int8 v17; // cl
  __int64 v18; // rdx
  __int64 v19; // rcx
  bool v20; // zf
  __int64 result; // rax

  v4 = *a1;
  v6 = *a4;
  v7 = a4[1] - *a4;
  *(_QWORD *)a2 = 0LL;
  v8 = v7 >> 1;
  *(_BYTE *)(a2 + 8) = 0;
  *a3 = 0LL;
  do
  {
    v9 = *(char **)(v4 + 24);
    v10 = (__int64)(*(_QWORD *)(v4 + 32) - (_QWORD)v9) >> 1;
    if ( v8 < v10 )
    {
      v10 = v8;
      v11 = -1;
    }
    else
    {
      v11 = v8 > v10;
    }
    v12 = 0;
    if ( v6 != v9 )
    {
      v13 = 0LL;
      if ( v10 )
      {
        v14 = v6 - v9;
        while ( 1 )
        {
          v15 = *(_WORD *)&v9[v14];
          if ( v15 != *(_WORD *)v9 )
            break;
          ++v13;
          v9 += 2;
          if ( v13 == v10 )
            goto LABEL_12;
        }
        if ( v15 < *(_WORD *)v9 )
        {
          v16 = 1;
          goto LABEL_14;
        }
        v12 = 1;
      }
    }
LABEL_12:
    v16 = v12 < 0;
    if ( !v12 )
      v16 = v11 < 0;
LABEL_14:
    if ( v16 )
    {
      v17 = 0;
    }
    else
    {
      v17 = 1;
      *a3 = v4;
    }
    v18 = v4;
    v4 = *(_QWORD *)(v4 + 8LL * v17 + 8);
  }
  while ( (_UNKNOWN *)v4 != &utl::_TreeSentinel );
  *(_BYTE *)(a2 + 8) = v17;
  v19 = *a3;
  *(_QWORD *)a2 = v18;
  if ( !v19 )
    return a2;
  v20 = (unsigned __int8)utl::operator<<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>(
                           v19 + 24,
                           a4) == 0;
  result = a2;
  if ( !v20 )
    *a3 = 0LL;
  return result;
}
