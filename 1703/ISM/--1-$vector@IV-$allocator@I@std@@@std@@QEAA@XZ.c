/*
 * XREFs of ??1?$vector@IV?$allocator@I@std@@@std@@QEAA@XZ @ 0x18006B474
 * Callers:
 *     _ViewHeirarchy::GetAllAncestors_::_1_::dtor$0 @ 0x1800A2B00 (_ViewHeirarchy--GetAllAncestors_--_1_--dtor$0.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::vector<unsigned int>::~vector<unsigned int>(__int64 a1)
{
  char *v2; // rcx

  v2 = *(char **)a1;
  if ( v2 )
  {
    std::_Deallocate(v2, (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 2, 4uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
