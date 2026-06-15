/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@0@Z @ 0x18006579C
 * Callers:
 *     ??1?$CAutoPtr@VCResourcePriorityTracker@@@ATL@@QEAA@XZ @ 0x180066734 (--1-$CAutoPtr@VCResourcePriorityTracker@@@ATL@@QEAA@XZ.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@@Z @ 0x18000D400 (-erase@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@$0A@@std@@@s.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@Z @ 0x180065748 (-_Erase@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@$0A@@std@@@.c)
 */

__int64 ***__fastcall std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::erase(
        __int64 ****a1,
        __int64 ***a2,
        __int64 **a3,
        __int64 **a4)
{
  __int64 ***v6; // rdx
  __int64 ***v7; // rax
  __int64 *v8; // rax
  __int64 *i; // rcx
  __int64 *j; // rdx
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF
  __int64 **v13; // [rsp+40h] [rbp+18h]
  __int64 **v14; // [rsp+48h] [rbp+20h]

  v14 = a4;
  v13 = a3;
  v6 = (__int64)*a1;
  if ( a3 == **a1 && a4 == (__int64 **)v6 )
  {
    std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Erase(
      (__int64)a1,
      *(void **)(v6 + 8));
    (*a1)[1] = (__int64 **)*a1;
    **a1 = (__int64 **)*a1;
    (*a1)[2] = (__int64 **)*a1;
    v7 = *a1;
    a1[1] = 0LL;
    *a2 = *v7;
  }
  else
  {
    while ( a3 != a4 )
    {
      v8 = (__int64 *)a3;
      if ( !*((_BYTE *)a3 + 25) )
      {
        i = a3[2];
        if ( *((_BYTE *)i + 25) )
        {
          for ( i = a3[1]; !*((_BYTE *)i + 25) && a3 == (__int64 **)i[2]; i = (__int64 *)i[1] )
          {
            a3 = (__int64 **)i;
            v13 = (__int64 **)i;
          }
        }
        else
        {
          for ( j = (__int64 *)*i; !*((_BYTE *)j + 25); j = (__int64 *)*j )
            i = j;
        }
        v13 = (__int64 **)i;
      }
      std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::erase(
        a1,
        &v12,
        v8);
      a4 = v14;
      a3 = v13;
    }
    *a2 = a3;
  }
  return a2;
}
