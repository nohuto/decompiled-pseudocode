/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@IUInputData@MPCProcessor@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180048BB0
 * Callers:
 *     ??_EMPCProcessor@@UEAAPEAXI@Z @ 0x180048B30 (--_EMPCProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@IUInputData@MPCProcessor@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@4@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAX@2@@Z @ 0x180048C94 (-_Erase@-$_Tree@V-$_Tmap_traits@IUInputData@MPCProcessor@@U-$less@I@std@@V-$allocator@U-$pair@$$.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Tree<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>::~_Tree<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>(
        char **a1)
{
  char *v2; // rbx
  char *i; // rdi

  v2 = (char *)*((_QWORD *)*a1 + 1);
  for ( i = v2; !i[25]; v2 = i )
  {
    std::_Tree<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>::_Erase(
      a1,
      *((_QWORD *)i + 2));
    i = *(char **)i;
    std::_Deallocate(v2, 1uLL, 0x790uLL);
  }
  *((_QWORD *)*a1 + 1) = *a1;
  *(_QWORD *)*a1 = *a1;
  *((_QWORD *)*a1 + 2) = *a1;
  a1[1] = 0LL;
  std::_Deallocate(*a1, 1uLL, 0x790uLL);
}
