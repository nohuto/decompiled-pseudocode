/*
 * XREFs of ??1_Lockit@std@@QEAA@XZ @ 0x180023598
 * Callers:
 *     ??1_Locinfo@std@@QEAA@XZ @ 0x18000A624 (--1_Locinfo@std@@QEAA@XZ.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x1800188B4 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@@std@@YAAEBV?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@0@AEBVlocale@0@@Z @ 0x180018C90 (--$use_facet@V-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@@std@@YAAEBV-.c)
 *     ??$use_facet@V?$numpunct@G@std@@@std@@YAAEBV?$numpunct@G@0@AEBVlocale@0@@Z @ 0x180018DD8 (--$use_facet@V-$numpunct@G@std@@@std@@YAAEBV-$numpunct@G@0@AEBVlocale@0@@Z.c)
 *     ?_Init@locale@std@@CAPEAV_Locimp@12@_N@Z @ 0x1800230D0 (-_Init@locale@std@@CAPEAV_Locimp@12@_N@Z.c)
 *     ?_Locimp_dtor@_Locimp@locale@std@@CAXPEAV123@@Z @ 0x180023194 (-_Locimp_dtor@_Locimp@locale@std@@CAXPEAV123@@Z.c)
 *     tidy_global @ 0x1800233A0 (tidy_global.c)
 *     _std::_Locinfo::_Locinfo_::_1_::dtor$0 @ 0x180028A07 (_std--_Locinfo--_Locinfo_--_1_--dtor$0.c)
 *     _std::use_facet_std::numpunct_unsigned_short____::_1_::dtor$0 @ 0x1800292D5 (_std--use_facet_std--numpunct_unsigned_short____--_1_--dtor$0.c)
 *     _std::locale::_Locimp::_Locimp_dtor_::_1_::dtor$0 @ 0x1800297F3 (_std--locale--_Locimp--_Locimp_dtor_--_1_--dtor$0.c)
 * Callees:
 *     _Mtxunlock @ 0x1800246BC (_Mtxunlock.c)
 */

void __fastcall std::_Lockit::~_Lockit(std::_Lockit *this)
{
  __int64 v1; // rax

  v1 = *(int *)this;
  if ( (_DWORD)v1 )
  {
    if ( (int)v1 < 4 )
      Mtxunlock(&CriticalSection + v1);
  }
  else
  {
    unlock_0(12LL);
  }
}
