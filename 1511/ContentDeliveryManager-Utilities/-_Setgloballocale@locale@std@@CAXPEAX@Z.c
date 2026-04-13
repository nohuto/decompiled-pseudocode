/*
 * XREFs of ?_Setgloballocale@locale@std@@CAXPEAX@Z @ 0x18002335C
 * Callers:
 *     ?_Init@locale@std@@CAPEAV_Locimp@12@_N@Z @ 0x1800230D0 (-_Init@locale@std@@CAPEAV_Locimp@12@_N@Z.c)
 * Callees:
 *     ?_Atexit@@YAXP6AXXZ@Z @ 0x180024644 (-_Atexit@@YAXP6AXXZ@Z.c)
 */

void __fastcall std::locale::_Setgloballocale(void *a1)
{
  if ( !byte_18003D420 )
  {
    byte_18003D420 = 1;
    _Atexit(tidy_global);
  }
  qword_18003D3E0 = a1;
}
