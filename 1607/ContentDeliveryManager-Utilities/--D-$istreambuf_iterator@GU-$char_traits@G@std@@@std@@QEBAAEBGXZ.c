/*
 * XREFs of ??D?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@QEBAAEBGXZ @ 0x18002916C
 * Callers:
 *     ?_Getffld@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x180027B2C (-_Getffld@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 *     ?_Getifld@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1HAEBVlocale@2@@Z @ 0x180028228 (-_Getifld@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 *     ?_Getffldx@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x1800289E8 (-_Getffldx@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$i.c)
 *     ??$_Getloctxt@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@0@0_KPEBG@Z @ 0x18002A384 (--$_Getloctxt@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@YAHAEAV-$istreambuf_ite.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::istreambuf_iterator<unsigned short>::operator*(__int64 *a1)
{
  __int64 v2; // rcx
  __int16 *v3; // r8
  int v4; // edx
  __int16 v5; // ax

  if ( !*((_BYTE *)a1 + 8) )
  {
    v2 = *a1;
    if ( !v2
      || ((v3 = **(__int16 ***)(v2 + 56)) == 0LL ? (v4 = 0) : (v4 = **(_DWORD **)(v2 + 80)),
          v4 <= 0 ? (v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 48LL))(v2)) : (v5 = *v3),
          v5 == -1) )
    {
      *a1 = 0LL;
    }
    else
    {
      *((_WORD *)a1 + 5) = v5;
    }
    *((_BYTE *)a1 + 8) = 1;
  }
  return (__int64)a1 + 10;
}
