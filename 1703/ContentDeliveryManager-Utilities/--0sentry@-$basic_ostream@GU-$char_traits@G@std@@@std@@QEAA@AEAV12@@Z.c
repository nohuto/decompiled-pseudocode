/*
 * XREFs of ??0sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@AEAV12@@Z @ 0x18002C19C
 * Callers:
 *     ?flush@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAAEAV12@XZ @ 0x18002CD58 (-flush@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAAAEAV12@XZ.c)
 *     ??$?6GU?$char_traits@G@std@@@std@@YAAEAV?$basic_ostream@GU?$char_traits@G@std@@@0@AEAV10@PEBG@Z @ 0x18003DC90 (--$-6GU-$char_traits@G@std@@@std@@YAAEAV-$basic_ostream@GU-$char_traits@G@std@@@0@AEAV10@PEBG@Z.c)
 * Callees:
 *     ?flush@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAAEAV12@XZ @ 0x18002CD58 (-flush@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAAAEAV12@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::basic_ostream<unsigned short>::sentry::sentry(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  *(_QWORD *)a1 = a2;
  v4 = *(_QWORD *)(*(int *)(*(_QWORD *)a2 + 4LL) + a2 + 72);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = *(int *)(*(_QWORD *)a2 + 4LL);
  if ( !*(_DWORD *)(v5 + a2 + 16) )
  {
    v6 = *(_QWORD *)(v5 + a2 + 80);
    if ( v6 )
      std::basic_ostream<unsigned short>::flush(v6);
  }
  *(_BYTE *)(a1 + 8) = *(_DWORD *)(*(int *)(*(_QWORD *)a2 + 4LL) + a2 + 16) == 0;
  return a1;
}
