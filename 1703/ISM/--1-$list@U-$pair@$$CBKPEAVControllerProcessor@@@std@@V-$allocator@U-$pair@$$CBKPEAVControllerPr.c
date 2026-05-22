/*
 * XREFs of ??1?$list@U?$pair@$$CBKPEAVControllerProcessor@@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@2@@std@@QEAA@XZ @ 0x1800313A4
 * Callers:
 *     _ControllerNavigationManager::ControllerNavigationManager_::_1_::dtor$14 @ 0x1800A0E50 (_ControllerNavigationManager--ControllerNavigationManager_--_1_--dtor$14.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::list<std::pair<unsigned long const,ControllerProcessor *>>::~list<std::pair<unsigned long const,ControllerProcessor *>>(
        char **a1)
{
  char **v1; // rax
  char *v3; // rcx
  char *v4; // rbx

  v1 = (char **)*a1;
  v3 = *(char **)*a1;
  *v1 = (char *)v1;
  *((_QWORD *)*a1 + 1) = *a1;
  a1[1] = 0LL;
  if ( v3 != *a1 )
  {
    do
    {
      v4 = *(char **)v3;
      std::_Deallocate(v3, 1uLL, 0x20uLL);
      v3 = v4;
    }
    while ( v4 != *a1 );
  }
  std::_Deallocate(*a1, 1uLL, 0x20uLL);
}
