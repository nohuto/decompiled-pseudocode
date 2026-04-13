/*
 * XREFs of ??3@YAXPEAX@Z_0 @ 0x180058D36
 * Callers:
 *     ??_Ebad_alloc@std@@UEAAPEAXI@Z @ 0x180053A70 (--_Ebad_alloc@std@@UEAAPEAXI@Z.c)
 *     ??_Glength_error@std@@UEAAPEAXI@Z @ 0x180053AB0 (--_Glength_error@std@@UEAAPEAXI@Z.c)
 *     ??_G_Locimp@locale@std@@MEAAPEAXI@Z @ 0x180054540 (--_G_Locimp@locale@std@@MEAAPEAXI@Z.c)
 *     ?_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z @ 0x1800548DC (-_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z.c)
 *     ?_Tidy@ios_base@std@@AEAAXXZ @ 0x180054954 (-_Tidy@ios_base@std@@AEAAXXZ.c)
 *     ??_Gtype_info@@UEAAPEAXI@Z @ 0x180058D80 (--_Gtype_info@@UEAAPEAXI@Z.c)
 *     std::_dynamic_atexit_destructor_for___Fac_tidy_reg__ @ 0x18005D3D0 (std--_dynamic_atexit_destructor_for___Fac_tidy_reg__.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall operator delete(void *a1)
{
  __imp_??3@YAXPEAX@Z(a1);
}
