/*
 * XREFs of ??$_FindImpl@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@?$_Tree@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@T_RM_ACTIVITY_IMPORTANCE@@@2@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@T_RM_ACTIVITY_IMPORTANCE@@@utl@@@2@$0A@@utl@@AEBAPEAU?$_TreeNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@T_RM_ACTIVITY_IMPORTANCE@@@utl@@@1@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@1@@Z @ 0x1800285A0
 * Callers:
 *     ?AddImportancePolicy@ResourcePolicyStore@ExecutionModel@@IEAAJAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAV?$map@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@T_RM_ACTIVITY_IMPORTANCE@@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@T_RM_ACTIVITY_IMPORTANCE@@@utl@@@2@@6@@Z @ 0x180026D30 (-AddImportancePolicy@ResourcePolicyStore@ExecutionModel@@IEAAJAEAVRegistryKey@Common@@AEBV-$basi.c)
 *     ?Initialize@ResourcePolicyStore@ExecutionModel@@IEAAJPEBG@Z @ 0x180026E30 (-Initialize@ResourcePolicyStore@ExecutionModel@@IEAAJPEBG@Z.c)
 * Callees:
 *     ??$?MGU?$char_traits@G@utl@@V?$allocator@G@1@@utl@@YA_NAEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@0@0@Z @ 0x18002A550 (--$-MGU-$char_traits@G@utl@@V-$allocator@G@1@@utl@@YA_NAEBV-$basic_string@GU-$char_traits@G@utl@.c)
 */

_QWORD *__fastcall utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_RM_ACTIVITY_IMPORTANCE>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_RM_ACTIVITY_IMPORTANCE>>,0>::_FindImpl<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>(
        _QWORD *a1,
        char **a2)
{
  char *v4; // rsi
  _QWORD *v5; // r15
  _QWORD *v6; // rcx
  unsigned __int64 v7; // r8
  char *v8; // rdx
  unsigned __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // ebp
  int v12; // eax
  __int64 v13; // rdi
  unsigned __int16 *v14; // r9
  signed __int64 v15; // rdx
  unsigned __int16 v16; // r10
  unsigned __int8 v17; // al

  if ( (_QWORD *)a1[2] == a1 )
    return a1;
  v4 = *a2;
  v5 = a1;
  v6 = (_QWORD *)*a1;
  v7 = (a2[1] - *a2) >> 1;
  do
  {
    v8 = (char *)v6[3];
    v9 = (__int64)(v6[4] - (_QWORD)v8) >> 1;
    if ( v9 < v7 )
    {
      v10 = (__int64)(v6[4] - (_QWORD)v8) >> 1;
      v11 = -1;
    }
    else
    {
      v10 = v7;
      v11 = v9 > v7;
    }
    v12 = 0;
    if ( v8 != v4 )
    {
      v13 = 0LL;
      if ( v10 )
      {
        v14 = (unsigned __int16 *)v4;
        v15 = v8 - v4;
        while ( 1 )
        {
          v16 = *(unsigned __int16 *)((char *)v14 + v15);
          if ( v16 != *v14 )
            break;
          ++v13;
          ++v14;
          if ( v13 == v10 )
            goto LABEL_12;
        }
        if ( v16 < *v14 )
        {
          v12 = -1;
          goto LABEL_14;
        }
        v12 = 1;
      }
    }
LABEL_12:
    if ( !v12 )
      v12 = v11;
LABEL_14:
    if ( v12 >= 0 )
    {
      v5 = v6;
      v17 = 0;
    }
    else
    {
      v17 = 1;
    }
    v6 = (_QWORD *)v6[v17 + 1];
  }
  while ( v6 != (_QWORD *)&utl::_TreeSentinel );
  if ( v5 != a1
    && (unsigned __int8)utl::operator<<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>(
                          a2,
                          v5 + 3) )
  {
    return a1;
  }
  else
  {
    return v5;
  }
}
