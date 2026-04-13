/*
 * XREFs of ?_Setgloballocale@locale@std@@CAXPEAX@Z @ 0x18005484C
 * Callers:
 *     ?_Init@locale@std@@CAPEAV_Locimp@12@_N@Z @ 0x1800545F0 (-_Init@locale@std@@CAPEAV_Locimp@12@_N@Z.c)
 * Callees:
 *     ?_Atexit@@YAXP6AXXZ@Z @ 0x1800566AC (-_Atexit@@YAXP6AXXZ@Z.c)
 */

void __fastcall std::locale::_Setgloballocale(void *a1)
{
  if ( !byte_18008B6A8 )
  {
    byte_18008B6A8 = 1;
    _Atexit(tidy_global);
  }
  qword_18008B668 = a1;
}
