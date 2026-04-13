/*
 * XREFs of ?_Osfx@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAXXZ @ 0x180027418
 * Callers:
 *     ??1sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@XZ @ 0x180024AFC (--1sentry@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAA@XZ.c)
 *     ?flush@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAAEAV12@XZ @ 0x1800255F8 (-flush@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAAAEAV12@XZ.c)
 *     ??$?6GU?$char_traits@G@std@@@std@@YAAEAV?$basic_ostream@GU?$char_traits@G@std@@@0@AEAV10@PEBG@Z @ 0x1800384E4 (--$-6GU-$char_traits@G@std@@@std@@YAAEAV-$basic_ostream@GU-$char_traits@G@std@@@0@AEAV10@PEBG@Z.c)
 *     ??6?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@G@Z @ 0x180053618 (--6-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAAAEAV01@G@Z.c)
 * Callees:
 *     ?clear@ios_base@std@@QEAAXH_N@Z @ 0x18001C28C (-clear@ios_base@std@@QEAAXH_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::basic_ostream<unsigned short>::_Osfx(__int64 a1)
{
  __int64 v2; // rcx
  std::ios_base *v3; // rcx
  int v4; // edx

  try
  {
    v2 = *(int *)(*(_QWORD *)a1 + 4LL);
    if ( !*(_DWORD *)(v2 + a1 + 16)
      && (*(_BYTE *)(v2 + a1 + 24) & 2) != 0
      && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + a1 + 72) + 104LL))(*(_QWORD *)(v2 + a1 + 72)) == -1 )
    {
      v3 = (std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
      v4 = *((_DWORD *)v3 + 4) | 4;
      std::ios_base::clear(v3, v4, 0);
    }
  }
  catch ( ... )
  {
  }
}
