/*
 * XREFs of ??3@YAXPEAX@Z_0 @ 0x18006F818
 * Callers:
 *     ??_Ebad_alloc@std@@UEAAPEAXI@Z @ 0x18006A660 (--_Ebad_alloc@std@@UEAAPEAXI@Z.c)
 *     ??_Glength_error@std@@UEAAPEAXI@Z @ 0x18006A6A0 (--_Glength_error@std@@UEAAPEAXI@Z.c)
 *     ??_G_Locimp@locale@std@@MEAAPEAXI@Z @ 0x18006B0F0 (--_G_Locimp@locale@std@@MEAAPEAXI@Z.c)
 *     ?_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z @ 0x18006B43C (-_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z.c)
 *     ?_Tidy@ios_base@std@@AEAAXXZ @ 0x18006B4AC (-_Tidy@ios_base@std@@AEAAXXZ.c)
 *     ??_Gtype_info@@UEAAPEAXI@Z @ 0x18006F840 (--_Gtype_info@@UEAAPEAXI@Z.c)
 *     std::_dynamic_atexit_destructor_for___Fac_tidy_reg__ @ 0x180075840 (std--_dynamic_atexit_destructor_for___Fac_tidy_reg__.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall operator delete(void *a1)
{
  __imp_??3@YAXPEAX@Z(a1);
}
