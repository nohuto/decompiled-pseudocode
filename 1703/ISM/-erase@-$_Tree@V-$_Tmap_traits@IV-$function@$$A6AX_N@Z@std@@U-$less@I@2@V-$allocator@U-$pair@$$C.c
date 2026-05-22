/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x180007CD4
 * Callers:
 *     ??1MPCRawInputProvider@@MEAA@XZ @ 0x180053B5C (--1MPCRawInputProvider@@MEAA@XZ.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@2@0@Z @ 0x180007E70 (-erase@-$_Tree@V-$_Tmap_traits@IV-$function@$$A6AX_N@Z@std@@U-$less@I@2@V-$allocato_ea_180007E70.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::erase(
        __int64 **a1,
        unsigned int *a2)
{
  __int64 *v2; // r8
  __int64 *v4; // r9
  __int64 v5; // r11
  __int64 *v6; // rax
  unsigned int v7; // r10d
  __int64 *v8; // rax
  __int64 *v9; // rcx
  __int64 *v10; // rax
  __int64 v11; // rbx
  __int64 *v12; // rcx
  __int64 *i; // rcx
  char v15; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v4 = *a1;
  v5 = (__int64)(*a1 + 1);
  v6 = *(__int64 **)v5;
  if ( !*(_BYTE *)(*(_QWORD *)v5 + 25LL) )
  {
    v7 = *a2;
    do
    {
      if ( *((_DWORD *)v6 + 8) >= v7 )
      {
        if ( *((_BYTE *)v4 + 25) && v7 < *((_DWORD *)v6 + 8) )
          v4 = v6;
        v2 = v6;
        v6 = (__int64 *)*v6;
      }
      else
      {
        v6 = (__int64 *)v6[2];
      }
    }
    while ( !*((_BYTE *)v6 + 25) );
  }
  v8 = v4;
  if ( *((_BYTE *)v4 + 25) )
    v8 = *a1 + 1;
  v9 = (__int64 *)*v8;
  if ( !*(_BYTE *)(*v8 + 25) )
  {
    do
    {
      if ( *a2 >= *((_DWORD *)v9 + 8) )
      {
        v9 = (__int64 *)v9[2];
      }
      else
      {
        v4 = v9;
        v9 = (__int64 *)*v9;
      }
    }
    while ( !*((_BYTE *)v9 + 25) );
  }
  v10 = v2;
  v11 = 0LL;
  while ( v10 != v4 )
  {
    ++v11;
    if ( !*((_BYTE *)v10 + 25) )
    {
      v12 = (__int64 *)v10[2];
      if ( *((_BYTE *)v12 + 25) )
      {
        for ( i = (__int64 *)v10[1]; !*((_BYTE *)i + 25) && v10 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v10 = i;
        v10 = i;
      }
      else
      {
        do
        {
          v10 = v12;
          v12 = (__int64 *)*v12;
        }
        while ( !*((_BYTE *)v12 + 25) );
      }
    }
  }
  std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::erase(
    a1,
    &v15,
    v2,
    v4);
  return v11;
}
