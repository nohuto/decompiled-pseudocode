/*
 * XREFs of ?flush@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAAEAV12@XZ @ 0x1800255F8
 * Callers:
 *     ??0sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@AEAV12@@Z @ 0x180024B44 (--0sentry@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAA@AEAV12@@Z.c)
 *     ?_Ipfx@?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA_N_N@Z @ 0x180027488 (-_Ipfx@-$basic_istream@GU-$char_traits@G@std@@@std@@QEAA_N_N@Z.c)
 * Callees:
 *     ?clear@ios_base@std@@QEAAXH_N@Z @ 0x18001C28C (-clear@ios_base@std@@QEAAXH_N@Z.c)
 *     ??0sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@AEAV12@@Z @ 0x180024B44 (--0sentry@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAA@AEAV12@@Z.c)
 *     ?_Osfx@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAXXZ @ 0x180027418 (-_Osfx@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAAXXZ.c)
 *     ?uncaught_exception@std@@YA_NXZ @ 0x1800548CC (-uncaught_exception@std@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::basic_ostream<unsigned short>::flush(__int64 a1)
{
  __int64 v2; // rcx
  std::ios_base *v3; // rcx
  int v4; // edx
  __int64 v5; // rcx
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  char v8; // [rsp+30h] [rbp-18h]

  if ( *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 + 72) )
  {
    std::basic_ostream<unsigned short>::sentry::sentry((__int64)&v7, a1);
    if ( v8 )
    {
      v2 = *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 + 72);
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v2 + 104LL))(v2) == -1 )
      {
        v3 = (std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        v4 = *((_DWORD *)v3 + 4) | 4;
        std::ios_base::clear(v3, v4, 0);
      }
    }
    if ( !std::uncaught_exception() )
      std::basic_ostream<unsigned short>::_Osfx(v7);
    v5 = *(_QWORD *)(*(int *)(*(_QWORD *)v7 + 4LL) + v7 + 72);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return a1;
}
