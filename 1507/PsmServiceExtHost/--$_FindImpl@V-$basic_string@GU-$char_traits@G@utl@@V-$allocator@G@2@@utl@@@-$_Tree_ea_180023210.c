/*
 * XREFs of ??$_FindImpl@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@?$_Tree@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ExternalResourcePolicyManifest@@@2@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ExternalResourcePolicyManifest@@@utl@@@2@$0A@@utl@@AEBAPEAU?$_TreeNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ExternalResourcePolicyManifest@@@utl@@@1@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@1@@Z @ 0x180023210
 * Callers:
 *     ?AddExternalResourcePolicy@ResourcePolicyStore@ExecutionModel@@IEAAJAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAV?$map@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ExternalResourcePolicyManifest@@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ExternalResourcePolicyManifest@@@utl@@@2@@6@@Z @ 0x18001CD00 (-AddExternalResourcePolicy@ResourcePolicyStore@ExecutionModel@@IEAAJAEAVRegistryKey@Common@@AEBV.c)
 *     ?Initialize@ResourcePolicyStore@ExecutionModel@@IEAAJPEBG@Z @ 0x18001D360 (-Initialize@ResourcePolicyStore@ExecutionModel@@IEAAJPEBG@Z.c)
 * Callees:
 *     ??$?MGU?$char_traits@G@utl@@V?$allocator@G@1@@utl@@YA_NAEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@0@0@Z @ 0x180023560 (--$-MGU-$char_traits@G@utl@@V-$allocator@G@1@@utl@@YA_NAEBV-$basic_string@GU-$char_traits@G@utl@.c)
 */

_QWORD *__fastcall utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_ExternalResourcePolicyManifest>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_ExternalResourcePolicyManifest>>,0>::_FindImpl<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>(
        _QWORD *a1,
        char **a2)
{
  _QWORD *v3; // r9
  char *v4; // rdi
  unsigned __int64 v5; // rsi
  _QWORD *v6; // r14
  char *v7; // r8
  unsigned __int64 v8; // rax
  __int64 v9; // rbx
  int v10; // ebp
  int v11; // r11d
  __int64 v12; // r10
  unsigned __int16 *v13; // rax
  signed __int64 v14; // r8
  unsigned __int16 v15; // cx
  unsigned __int8 v16; // al

  if ( (_QWORD *)a1[2] == a1 )
    return a1;
  v3 = (_QWORD *)*a1;
  v4 = *a2;
  v5 = (a2[1] - *a2) >> 1;
  v6 = a1;
  do
  {
    v7 = (char *)v3[3];
    v8 = (__int64)(v3[4] - (_QWORD)v7) >> 1;
    if ( v8 < v5 )
    {
      v9 = (__int64)(v3[4] - (_QWORD)v7) >> 1;
      v10 = -1;
    }
    else
    {
      v9 = (a2[1] - *a2) >> 1;
      v10 = v8 > v5;
    }
    v11 = 0;
    if ( v7 != v4 )
    {
      v12 = 0LL;
      if ( v9 )
      {
        v13 = (unsigned __int16 *)*a2;
        v14 = v7 - v4;
        while ( 1 )
        {
          v15 = *(unsigned __int16 *)((char *)v13 + v14);
          if ( v15 != *v13 )
            break;
          ++v12;
          ++v13;
          if ( v12 == v9 )
          {
            v11 = v10;
            goto LABEL_13;
          }
        }
        if ( v15 < *v13 )
        {
          v11 = -1;
          goto LABEL_13;
        }
        v11 = 1;
      }
    }
    if ( !v11 )
      v11 = v10;
LABEL_13:
    if ( v11 >= 0 )
    {
      v6 = v3;
      v16 = 0;
    }
    else
    {
      v16 = 1;
    }
    v3 = (_QWORD *)v3[v16 + 1];
  }
  while ( v3 != (_QWORD *)&utl::_TreeSentinel );
  if ( v6 != a1
    && (unsigned __int8)utl::operator<<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>(
                          a2,
                          v6 + 3) )
  {
    return a1;
  }
  else
  {
    return v6;
  }
}
