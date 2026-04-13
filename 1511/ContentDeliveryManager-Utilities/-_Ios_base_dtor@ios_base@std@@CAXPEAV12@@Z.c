/*
 * XREFs of ?_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z @ 0x1800233DC
 * Callers:
 *     ??_Gios_base@std@@UEAAPEAXI@Z @ 0x18000B130 (--_Gios_base@std@@UEAAPEAXI@Z.c)
 *     ?GetImpressionEventExpirationTime@?A0x15bf3041@@YA_KPEBG0_K@Z @ 0x18000DE38 (-GetImpressionEventExpirationTime@-A0x15bf3041@@YA_KPEBG0_K@Z.c)
 *     ??_D?$basic_istringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18000E014 (--_D-$basic_istringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??1?$basic_ios@GU?$char_traits@G@std@@@std@@UEAA@XZ @ 0x1800121A8 (--1-$basic_ios@GU-$char_traits@G@std@@@std@@UEAA@XZ.c)
 *     ??_G?$basic_istream@GU?$char_traits@G@std@@@std@@UEAAPEAXI@Z @ 0x1800148F4 (--_G-$basic_istream@GU-$char_traits@G@std@@@std@@UEAAPEAXI@Z.c)
 *     ??_E?$basic_istringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAAPEAXI@Z @ 0x180014960 (--_E-$basic_istringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_Glocale@std@@QEAAPEAXI@Z @ 0x180014870 (--_Glocale@std@@QEAAPEAXI@Z.c)
 *     ?_Tidy@ios_base@std@@AEAAXXZ @ 0x180023428 (-_Tidy@ios_base@std@@AEAAXXZ.c)
 */

void __fastcall std::ios_base::_Ios_base_dtor(struct std::ios_base *this)
{
  __int64 v1; // rax
  std::locale *v3; // rcx

  v1 = *((_QWORD *)this + 1);
  if ( !v1 || (--byte_18003D428[v1], byte_18003D428[v1] <= 0) )
  {
    std::ios_base::_Tidy(this);
    v3 = (std::locale *)*((_QWORD *)this + 8);
    if ( v3 )
      std::locale::`scalar deleting destructor'(v3, 1);
  }
}
