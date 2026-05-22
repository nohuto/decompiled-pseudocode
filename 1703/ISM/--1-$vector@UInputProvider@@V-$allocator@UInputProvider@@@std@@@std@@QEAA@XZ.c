/*
 * XREFs of ??1?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@QEAA@XZ @ 0x180004B24
 * Callers:
 *     ??_GOneCoreUAPInputHost@@MEAAPEAXI@Z @ 0x1800040B4 (--_GOneCoreUAPInputHost@@MEAAPEAXI@Z.c)
 *     ??1InputProviderManager@@QEAA@XZ @ 0x18000420C (--1InputProviderManager@@QEAA@XZ.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<InputProvider>::~vector<InputProvider>(__int64 a1)
{
  char *v2; // rbx
  char *v3; // rsi
  __int64 v4; // rcx

  v2 = *(char **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(char **)(a1 + 8);
    while ( v2 != v3 )
    {
      v4 = *((_QWORD *)v2 + 2);
      *((_QWORD *)v2 + 2) = 0LL;
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      v2 += 24;
    }
    std::_Deallocate(*(char **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) / 24LL, 0x18uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
