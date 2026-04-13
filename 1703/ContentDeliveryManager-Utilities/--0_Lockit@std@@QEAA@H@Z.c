/*
 * XREFs of ??0_Lockit@std@@QEAA@H@Z @ 0x18006AFB4
 * Callers:
 *     ??0_Locinfo@std@@QEAA@PEBD@Z @ 0x180022EBC (--0_Locinfo@std@@QEAA@PEBD@Z.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x180031454 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$numpunct@G@std@@@std@@YAAEBV?$numpunct@G@0@AEBVlocale@0@@Z @ 0x180032640 (--$use_facet@V-$numpunct@G@std@@@std@@YAAEBV-$numpunct@G@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@@std@@YAAEBV?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@0@AEBVlocale@0@@Z @ 0x18003277C (--$use_facet@V-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@@std@@YAAEBV-.c)
 *     ??$use_facet@V?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@@std@@YAAEBV?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@0@AEBVlocale@0@@Z @ 0x180063CF8 (--$use_facet@V-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@@std@@YAAE.c)
 *     ??$use_facet@V?$numpunct@_W@std@@@std@@YAAEBV?$numpunct@_W@0@AEBVlocale@0@@Z @ 0x180064470 (--$use_facet@V-$numpunct@_W@std@@@std@@YAAEBV-$numpunct@_W@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$ctype@_W@std@@@std@@YAAEBV?$ctype@_W@0@AEBVlocale@0@@Z @ 0x180064740 (--$use_facet@V-$ctype@_W@std@@@std@@YAAEBV-$ctype@_W@0@AEBVlocale@0@@Z.c)
 *     ?_Init@locale@std@@CAPEAV_Locimp@12@_N@Z @ 0x18006B188 (-_Init@locale@std@@CAPEAV_Locimp@12@_N@Z.c)
 *     ?_Locimp_dtor@_Locimp@locale@std@@CAXPEAV123@@Z @ 0x18006B234 (-_Locimp_dtor@_Locimp@locale@std@@CAXPEAV123@@Z.c)
 *     tidy_global @ 0x18006B400 (tidy_global.c)
 * Callees:
 *     _Mtxlock @ 0x18006D158 (_Mtxlock.c)
 *     _lock_0 @ 0x18006F996 (_lock_0.c)
 */

std::_Lockit *__fastcall std::_Lockit::_Lockit(std::_Lockit *this, int a2)
{
  *(_DWORD *)this = a2;
  if ( a2 )
  {
    if ( a2 < 4 )
      Mtxlock(&stru_1800F3B10 + a2);
  }
  else
  {
    lock_0(12LL);
  }
  return this;
}
