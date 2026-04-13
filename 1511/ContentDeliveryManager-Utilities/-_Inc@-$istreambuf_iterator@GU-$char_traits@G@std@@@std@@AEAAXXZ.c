/*
 * XREFs of ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x1800183E4
 * Callers:
 *     ?_Getifld@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1HAEBVlocale@2@@Z @ 0x180016658 (-_Getifld@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 *     ?_Getffld@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x180016B3C (-_Getffld@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 *     ?_Getffldx@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x180017830 (-_Getffldx@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$i.c)
 *     ??$_Getloctxt@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@0@0_KPEBG@Z @ 0x180019008 (--$_Getloctxt@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@YAHAEAV-$istreambuf_ite.c)
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

void __fastcall std::istreambuf_iterator<unsigned short>::_Inc(__int64 *a1)
{
  __int64 v1; // rdi
  int v3; // ecx
  __int16 **v4; // rcx
  __int16 *v5; // rdx
  __int16 v6; // ax

  v1 = *a1;
  if ( !*a1
    || (!**(_QWORD **)(v1 + 56) ? (v3 = 0) : (v3 = **(_DWORD **)(v1 + 80)),
        v3 <= 0
      ? (v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 56LL))(v1))
      : (--**(_DWORD **)(v1 + 80), v4 = *(__int16 ***)(v1 + 56), v5 = *v4, ++*v4, v6 = *v5),
        v6 == -1) )
  {
    *a1 = 0LL;
    *((_BYTE *)a1 + 8) = 1;
  }
  else
  {
    *((_BYTE *)a1 + 8) = 0;
  }
}
