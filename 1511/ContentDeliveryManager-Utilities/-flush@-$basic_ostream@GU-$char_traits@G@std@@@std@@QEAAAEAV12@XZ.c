/*
 * XREFs of ?flush@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAAEAV12@XZ @ 0x180012094
 * Callers:
 *     ?flush@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAAEAV12@XZ @ 0x180012094 (-flush@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAAAEAV12@XZ.c)
 *     ?_Ipfx@?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA_N_N@Z @ 0x180014A94 (-_Ipfx@-$basic_istream@GU-$char_traits@G@std@@@std@@QEAA_N_N@Z.c)
 * Callees:
 *     ?clear@ios_base@std@@QEAAXH_N@Z @ 0x18000AF9C (-clear@ios_base@std@@QEAAXH_N@Z.c)
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ?flush@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAAEAV12@XZ @ 0x180012094 (-flush@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAAAEAV12@XZ.c)
 *     ?_Osfx@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAXXZ @ 0x180014A08 (-_Osfx@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAAXXZ.c)
 *     ?uncaught_exception@std@@YA_NXZ @ 0x1800235D4 (-uncaught_exception@std@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::basic_ostream<unsigned short>::flush(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdi
  std::ios_base *v6; // rcx
  int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rdi

  v2 = *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 + 72);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v3 = *(int *)(*(_QWORD *)a1 + 4LL);
    if ( !*(_DWORD *)(v3 + a1 + 16) )
    {
      v4 = *(_QWORD *)(v3 + a1 + 80);
      if ( v4 )
        std::basic_ostream<unsigned short>::flush(v4);
    }
    v5 = *(int *)(*(_QWORD *)a1 + 4LL);
    if ( !*(_DWORD *)(v5 + a1 + 16)
      && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + a1 + 72) + 104LL))(*(_QWORD *)(v5 + a1 + 72)) == -1 )
    {
      v6 = (std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
      v7 = *((_DWORD *)v6 + 4) | 4;
      std::ios_base::clear(v6, v7, 0);
    }
    if ( !std::uncaught_exception() )
      std::basic_ostream<unsigned short>::_Osfx(a1);
    v8 = *(int *)(*(_QWORD *)a1 + 4LL);
    v9 = *(_QWORD *)(v8 + a1 + 72);
    if ( v9 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 16LL))(*(_QWORD *)(v8 + a1 + 72));
  }
  return a1;
}
