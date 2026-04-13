/*
 * XREFs of ?_Osfx@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAAXXZ @ 0x1800645AC
 * Callers:
 *     ??1sentry@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAA@XZ @ 0x180064618 (--1sentry@-$basic_ostream@_WU-$char_traits@_W@std@@@std@@QEAA@XZ.c)
 *     ?flush@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAAAEAV12@XZ @ 0x18006465C (-flush@-$basic_ostream@_WU-$char_traits@_W@std@@@std@@QEAAAEAV12@XZ.c)
 * Callees:
 *     ?clear@ios_base@std@@QEAAXH_N@Z @ 0x18002382C (-clear@ios_base@std@@QEAAXH_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::wostream::_Osfx(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  int v4; // edx

  try
  {
    v2 = *(int *)(*(_QWORD *)a1 + 4LL);
    if ( !*(_DWORD *)(v2 + a1 + 16)
      && (*(_BYTE *)(v2 + a1 + 24) & 2) != 0
      && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + a1 + 72) + 104LL))(*(_QWORD *)(v2 + a1 + 72)) == -1 )
    {
      v3 = a1 + *(int *)(*(_QWORD *)a1 + 4LL);
      v4 = *(_DWORD *)(v3 + 16);
      if ( !*(_QWORD *)(v3 + 72) )
        LOBYTE(v4) = v4 | 4;
      std::ios_base::clear((std::ios_base *)v3, v4 | 4, 0);
    }
  }
  catch ( ... )
  {
  }
}
