/*
 * XREFs of ??$_FindImpl@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@?$_Tree@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_CpuPolicyManifest@@@2@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_CpuPolicyManifest@@@utl@@@2@$0A@@utl@@AEBAPEAU?$_TreeNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_CpuPolicyManifest@@@utl@@@1@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@1@@Z @ 0x180028820
 * Callers:
 *     ?AddCpuPolicy@ResourcePolicyStore@ExecutionModel@@IEAAJAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAV?$map@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_CpuPolicyManifest@@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_CpuPolicyManifest@@@utl@@@2@@6@@Z @ 0x180026BDC (-AddCpuPolicy@ResourcePolicyStore@ExecutionModel@@IEAAJAEAVRegistryKey@Common@@AEBV-$basic_strin.c)
 *     ?Initialize@ResourcePolicyStore@ExecutionModel@@IEAAJPEBG@Z @ 0x180026E30 (-Initialize@ResourcePolicyStore@ExecutionModel@@IEAAJPEBG@Z.c)
 * Callees:
 *     ??$?MGU?$char_traits@G@utl@@V?$allocator@G@1@@utl@@YA_NAEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@0@0@Z @ 0x18002A550 (--$-MGU-$char_traits@G@utl@@V-$allocator@G@1@@utl@@YA_NAEBV-$basic_string@GU-$char_traits@G@utl@.c)
 */

_QWORD *__fastcall utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_CpuPolicyManifest>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_CpuPolicyManifest>>,0>::_FindImpl<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>(
        _QWORD *a1,
        char **a2)
{
  _QWORD *v4; // rdi
  char *v5; // r12
  unsigned __int64 v6; // rbp
  _QWORD *v7; // r14
  char *v8; // r10
  unsigned __int64 v9; // rax
  __int64 v10; // r9
  int v11; // esi
  int v12; // r11d
  __int64 v13; // rcx
  unsigned __int16 *v14; // rax
  signed __int64 v15; // r10
  unsigned __int16 v16; // dx
  bool v17; // sf
  int v18; // r11d
  unsigned __int8 v19; // al

  if ( (_QWORD *)a1[2] == a1 )
    return a1;
  v4 = (_QWORD *)*a1;
  v5 = *a2;
  v6 = (a2[1] - *a2) >> 1;
  v7 = a1;
  do
  {
    v8 = (char *)v4[3];
    v9 = (__int64)(v4[4] - (_QWORD)v8) >> 1;
    if ( v9 < v6 )
    {
      v10 = (__int64)(v4[4] - (_QWORD)v8) >> 1;
      v11 = -1;
    }
    else
    {
      v10 = v6;
      v11 = v9 > v6;
    }
    v12 = 0;
    if ( v8 != v5 )
    {
      v13 = 0LL;
      if ( v10 )
      {
        v14 = (unsigned __int16 *)v5;
        v15 = v8 - v5;
        while ( 1 )
        {
          v16 = *(unsigned __int16 *)((char *)v14 + v15);
          if ( v16 != *v14 )
            break;
          ++v13;
          ++v14;
          if ( v13 == v10 )
            goto LABEL_10;
        }
        if ( v16 < *v14 )
        {
          v18 = -1;
          goto LABEL_14;
        }
        v12 = 1;
      }
    }
LABEL_10:
    v17 = v12 < 0;
    if ( v12 )
      goto LABEL_15;
    v18 = v11;
LABEL_14:
    v17 = v18 < 0;
LABEL_15:
    if ( v17 )
    {
      v19 = 1;
    }
    else
    {
      v7 = v4;
      v19 = 0;
    }
    v4 = (_QWORD *)v4[v19 + 1];
  }
  while ( v4 != (_QWORD *)&utl::_TreeSentinel );
  if ( v7 != a1
    && (unsigned __int8)utl::operator<<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>(
                          a2,
                          v7 + 3) )
  {
    return a1;
  }
  else
  {
    return v7;
  }
}
