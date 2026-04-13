/*
 * XREFs of ?_Setgloballocale@locale@std@@CAXPEAX@Z @ 0x18006B3C0
 * Callers:
 *     ?_Init@locale@std@@CAPEAV_Locimp@12@_N@Z @ 0x18006B188 (-_Init@locale@std@@CAPEAV_Locimp@12@_N@Z.c)
 * Callees:
 *     ?_Atexit@@YAXP6AXXZ@Z @ 0x18006D168 (-_Atexit@@YAXP6AXXZ@Z.c)
 */

void __fastcall std::locale::_Setgloballocale(void *a1)
{
  if ( !byte_1800F3C08 )
  {
    byte_1800F3C08 = 1;
    _Atexit(tidy_global);
  }
  qword_1800F3BC0 = a1;
}
