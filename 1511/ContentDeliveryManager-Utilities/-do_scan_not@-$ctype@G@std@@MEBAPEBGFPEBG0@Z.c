/*
 * XREFs of ?do_scan_not@?$ctype@G@std@@MEBAPEBGFPEBG0@Z @ 0x18000AA90
 * Callers:
 *     <none>
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

unsigned __int16 *__fastcall std::ctype<unsigned short>::do_scan_not(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4)
{
  unsigned __int16 *i; // rsi

  for ( i = a3; i != a4; ++i )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, a2, *i) )
      break;
  }
  return i;
}
