/*
 * XREFs of ??1?$list@U?$pair@$$CBIUViewHeirarchyEntry@ViewHeirarchy@@@std@@V?$allocator@U?$pair@$$CBIUViewHeirarchyEntry@ViewHeirarchy@@@std@@@2@@std@@QEAA@XZ @ 0x18006E714
 * Callers:
 *     ??1ViewHeirarchy@@UEAA@XZ @ 0x18006D378 (--1ViewHeirarchy@@UEAA@XZ.c)
 *     ??1?$unordered_map@IUViewHeirarchyEntry@ViewHeirarchy@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUViewHeirarchyEntry@ViewHeirarchy@@@std@@@4@@std@@QEAA@XZ @ 0x18006D4FC (--1-$unordered_map@IUViewHeirarchyEntry@ViewHeirarchy@@U-$hash@I@std@@U-$equal_to@I@4@V-$allocat.c)
 *     _ViewHeirarchy::ViewHeirarchy_::_1_::dtor$16 @ 0x1800A2C10 (_ViewHeirarchy--ViewHeirarchy_--_1_--dtor$16.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::list<std::pair<unsigned int const,ViewHeirarchy::ViewHeirarchyEntry>>::~list<std::pair<unsigned int const,ViewHeirarchy::ViewHeirarchyEntry>>(
        char **a1)
{
  char *v2; // rdi
  char *v3; // rsi
  __int64 v4; // rcx

  v2 = *(char **)*a1;
  *(_QWORD *)*a1 = *a1;
  *((_QWORD *)*a1 + 1) = *a1;
  a1[1] = 0LL;
  if ( v2 != *a1 )
  {
    do
    {
      v3 = *(char **)v2;
      v4 = *((_QWORD *)v2 + 3);
      if ( v4 )
      {
        *((_QWORD *)v2 + 3) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      std::_Deallocate(v2, 1uLL, 0x28uLL);
      v2 = v3;
    }
    while ( v3 != *a1 );
  }
  std::_Deallocate(*a1, 1uLL, 0x28uLL);
}
