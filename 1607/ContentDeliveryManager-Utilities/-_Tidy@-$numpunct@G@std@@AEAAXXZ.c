/*
 * XREFs of ?_Tidy@?$numpunct@G@std@@AEAAXXZ @ 0x180027ACC
 * Callers:
 *     _std::numpunct_unsigned_short_::_Init_::_1_::catch$0 @ 0x18005ACEC (_std--numpunct_unsigned_short_--_Init_--_1_--catch$0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::numpunct<unsigned short>::_Tidy(void **a1)
{
  operator delete[](a1[2]);
  operator delete[](a1[4]);
  operator delete[](a1[5]);
}
