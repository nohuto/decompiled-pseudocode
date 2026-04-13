/*
 * XREFs of ??1_Lockit@std@@QEAA@XZ @ 0x18006B038
 * Callers:
 *     ??1_Locinfo@std@@QEAA@XZ @ 0x180022F54 (--1_Locinfo@std@@QEAA@XZ.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x180031454 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$numpunct@G@std@@@std@@YAAEBV?$numpunct@G@0@AEBVlocale@0@@Z @ 0x180032640 (--$use_facet@V-$numpunct@G@std@@@std@@YAAEBV-$numpunct@G@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@@std@@YAAEBV?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@0@AEBVlocale@0@@Z @ 0x18003277C (--$use_facet@V-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@@std@@YAAEBV-.c)
 *     ??$use_facet@V?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@@std@@YAAEBV?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@0@AEBVlocale@0@@Z @ 0x180063CF8 (--$use_facet@V-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@@std@@YAAE.c)
 *     ??$use_facet@V?$numpunct@_W@std@@@std@@YAAEBV?$numpunct@_W@0@AEBVlocale@0@@Z @ 0x180064470 (--$use_facet@V-$numpunct@_W@std@@@std@@YAAEBV-$numpunct@_W@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$ctype@_W@std@@@std@@YAAEBV?$ctype@_W@0@AEBVlocale@0@@Z @ 0x180064740 (--$use_facet@V-$ctype@_W@std@@@std@@YAAEBV-$ctype@_W@0@AEBVlocale@0@@Z.c)
 *     ?_Init@locale@std@@CAPEAV_Locimp@12@_N@Z @ 0x18006B188 (-_Init@locale@std@@CAPEAV_Locimp@12@_N@Z.c)
 *     ?_Locimp_dtor@_Locimp@locale@std@@CAXPEAV123@@Z @ 0x18006B234 (-_Locimp_dtor@_Locimp@locale@std@@CAXPEAV123@@Z.c)
 *     tidy_global @ 0x18006B400 (tidy_global.c)
 *     _std::_Locinfo::_Locinfo_::_1_::dtor$0 @ 0x180071017 (_std--_Locinfo--_Locinfo_--_1_--dtor$0.c)
 *     _std::use_facet_std::numpunct_wchar_t____::_1_::dtor$0 @ 0x18007180A (_std--use_facet_std--numpunct_wchar_t____--_1_--dtor$0.c)
 *     _std::locale::_Locimp::_Locimp_dtor_::_1_::dtor$0 @ 0x180075209 (_std--locale--_Locimp--_Locimp_dtor_--_1_--dtor$0.c)
 * Callees:
 *     _Mtxunlock @ 0x18006D160 (_Mtxunlock.c)
 */

void __fastcall std::_Lockit::~_Lockit(std::_Lockit *this)
{
  __int64 v1; // rax

  v1 = *(int *)this;
  if ( (_DWORD)v1 )
  {
    if ( (int)v1 < 4 )
      Mtxunlock(&stru_1800F3B10 + v1);
  }
  else
  {
    unlock_0(12LL);
  }
}
