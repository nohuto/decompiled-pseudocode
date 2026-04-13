/*
 * XREFs of ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x1800295D0
 * Callers:
 *     ?_Getffld@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x180027B2C (-_Getffld@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 *     ?_Getifld@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1HAEBVlocale@2@@Z @ 0x180028228 (-_Getifld@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 *     ?_Getffldx@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x1800289E8 (-_Getffldx@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$i.c)
 *     ??$_Getloctxt@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@0@0_KPEBG@Z @ 0x18002A384 (--$_Getloctxt@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@YAHAEAV-$istreambuf_ite.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::istreambuf_iterator<unsigned short>::_Inc(__int64 *a1)
{
  __int64 v2; // rcx
  int v3; // edx
  __int16 **v4; // rcx
  __int16 *v5; // rdx
  __int16 v6; // ax

  v2 = *a1;
  if ( !v2
    || (!**(_QWORD **)(v2 + 56) ? (v3 = 0) : (v3 = **(_DWORD **)(v2 + 80)),
        v3 <= 0
      ? (v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 56LL))(v2))
      : (--**(_DWORD **)(v2 + 80), v4 = *(__int16 ***)(v2 + 56), v5 = *v4, ++*v4, v6 = *v5),
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
