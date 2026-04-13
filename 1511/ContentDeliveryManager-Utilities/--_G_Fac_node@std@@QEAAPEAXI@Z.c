/*
 * XREFs of ??_G_Fac_node@std@@QEAAPEAXI@Z @ 0x180022FA0
 * Callers:
 *     std::_dynamic_atexit_destructor_for___Fac_tidy_reg__ @ 0x180029FC0 (std--_dynamic_atexit_destructor_for___Fac_tidy_reg__.c)
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ??3@YAXPEAX@Z_0 @ 0x180027D9C (--3@YAXPEAX@Z_0.c)
 */

std::_Fac_node *__fastcall std::_Fac_node::`scalar deleting destructor'(std::_Fac_node *this, char a2)
{
  void (__fastcall ***v4)(_QWORD, __int64); // rax

  v4 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 16LL))(*((_QWORD *)this + 1));
  if ( v4 )
    (**v4)(v4, 1LL);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
