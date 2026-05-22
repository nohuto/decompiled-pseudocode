/*
 * XREFs of ??1?$unordered_map@IUViewHeirarchyEntry@ViewHeirarchy@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUViewHeirarchyEntry@ViewHeirarchy@@@std@@@4@@std@@QEAA@XZ @ 0x18006D4FC
 * Callers:
 *     _ViewHeirarchy::_ViewHeirarchy_::_1_::dtor$7 @ 0x1800A2AF0 (_ViewHeirarchy--_ViewHeirarchy_--_1_--dtor$7.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

__int64 __fastcall std::unordered_map<unsigned int,ViewHeirarchy::ViewHeirarchyEntry>::~unordered_map<unsigned int,ViewHeirarchy::ViewHeirarchyEntry>(
        _QWORD *a1)
{
  char *v2; // rcx

  v2 = (char *)a1[3];
  if ( v2 )
  {
    std::_Deallocate(v2, (__int64)(a1[5] - (_QWORD)v2) >> 3, 8uLL);
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  return std::list<std::pair<unsigned int const,ViewHeirarchy::ViewHeirarchyEntry>>::~list<std::pair<unsigned int const,ViewHeirarchy::ViewHeirarchyEntry>>(a1 + 1);
}
