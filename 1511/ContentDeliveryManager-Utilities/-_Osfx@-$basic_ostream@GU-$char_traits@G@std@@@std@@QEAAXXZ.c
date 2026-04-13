/*
 * XREFs of ?_Osfx@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAXXZ @ 0x180014A08
 * Callers:
 *     ?flush@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAAEAV12@XZ @ 0x180012094 (-flush@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAAAEAV12@XZ.c)
 *     ??1sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@XZ @ 0x1800121C0 (--1sentry@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ?clear@ios_base@std@@QEAAXH_N@Z @ 0x18000AF9C (-clear@ios_base@std@@QEAAXH_N@Z.c)
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

void __fastcall std::basic_ostream<unsigned short>::_Osfx(__int64 a1)
{
  __int64 v2; // rdi
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
