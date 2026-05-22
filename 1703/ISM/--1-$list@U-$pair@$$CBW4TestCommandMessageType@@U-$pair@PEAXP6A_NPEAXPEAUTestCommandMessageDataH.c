/*
 * XREFs of ??1?$list@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@2@@std@@QEAA@XZ @ 0x18000A460
 * Callers:
 *     _TestCommandHost::TestCommandHost_::_1_::dtor$11 @ 0x18009F38B (_TestCommandHost--TestCommandHost_--_1_--dtor$11.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::list<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>::~list<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>(
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
      std::_Deallocate(v3, 1uLL, 0x28uLL);
      v3 = v4;
    }
    while ( v4 != *a1 );
  }
  std::_Deallocate(*a1, 1uLL, 0x28uLL);
}
