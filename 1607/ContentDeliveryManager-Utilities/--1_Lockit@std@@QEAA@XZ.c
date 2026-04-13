/*
 * XREFs of ??1_Lockit@std@@QEAA@XZ @ 0x180054480
 * Callers:
 *     ??1_Locinfo@std@@QEAA@XZ @ 0x18001B944 (--1_Locinfo@std@@QEAA@XZ.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x180029768 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$numpunct@G@std@@@std@@YAAEBV?$numpunct@G@0@AEBVlocale@0@@Z @ 0x18002A04C (--$use_facet@V-$numpunct@G@std@@@std@@YAAEBV-$numpunct@G@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@@std@@YAAEBV?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@0@AEBVlocale@0@@Z @ 0x18002A190 (--$use_facet@V-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@@std@@YAAEBV-.c)
 *     ?_Init@locale@std@@CAPEAV_Locimp@12@_N@Z @ 0x1800545F0 (-_Init@locale@std@@CAPEAV_Locimp@12@_N@Z.c)
 *     ?_Locimp_dtor@_Locimp@locale@std@@CAXPEAV123@@Z @ 0x1800546A4 (-_Locimp_dtor@_Locimp@locale@std@@CAXPEAV123@@Z.c)
 *     tidy_global @ 0x180054890 (tidy_global.c)
 *     _std::_Locinfo::_Locinfo_::_1_::dtor$0 @ 0x18005A376 (_std--_Locinfo--_Locinfo_--_1_--dtor$0.c)
 *     _std::use_facet_std::numpunct_unsigned_short____::_1_::dtor$0 @ 0x18005AC56 (_std--use_facet_std--numpunct_unsigned_short____--_1_--dtor$0.c)
 *     _std::locale::_Locimp::_Locimp_dtor_::_1_::dtor$0 @ 0x18005C92C (_std--locale--_Locimp--_Locimp_dtor_--_1_--dtor$0.c)
 * Callees:
 *     _Mtxunlock @ 0x18005669C (_Mtxunlock.c)
 */

void __fastcall std::_Lockit::~_Lockit(std::_Lockit *this)
{
  __int64 v1; // rax

  v1 = *(int *)this;
  if ( (_DWORD)v1 )
  {
    if ( (int)v1 < 4 )
      Mtxunlock(&stru_18008B5B0 + v1);
  }
  else
  {
    unlock_0(12LL);
  }
}
