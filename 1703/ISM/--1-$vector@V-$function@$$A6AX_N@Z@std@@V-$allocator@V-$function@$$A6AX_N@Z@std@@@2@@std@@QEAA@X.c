/*
 * XREFs of ??1?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAA@XZ @ 0x180007C50
 * Callers:
 *     _MPC3DStateHelper::FireEventsOnInputThread_::_1_::dtor$0 @ 0x18009F05B (_MPC3DStateHelper--FireEventsOnInputThread_--_1_--dtor$0.c)
 *     _MPC3DStateHelper::FireEventsOnInputThread_::_1_::dtor$1 @ 0x18009F067 (_MPC3DStateHelper--FireEventsOnInputThread_--_1_--dtor$1.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<std::function<void (bool)>>::~vector<std::function<void (bool)>>(__int64 a1, __int64 a2)
{
  char *v2; // rbx
  char *v4; // rsi
  char *v5; // rcx

  v2 = *(char **)a1;
  if ( *(_QWORD *)a1 )
  {
    v4 = *(char **)(a1 + 8);
    while ( v2 != v4 )
    {
      v5 = (char *)*((_QWORD *)v2 + 7);
      if ( v5 )
      {
        LOBYTE(a2) = v5 != v2;
        (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v5 + 32LL))(v5, a2);
        *((_QWORD *)v2 + 7) = 0LL;
      }
      v2 += 64;
    }
    std::_Deallocate(*(char **)a1, (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 6, 0x40uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
