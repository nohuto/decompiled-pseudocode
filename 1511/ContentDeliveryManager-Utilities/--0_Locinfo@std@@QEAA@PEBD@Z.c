/*
 * XREFs of ??0_Locinfo@std@@QEAA@PEBD@Z @ 0x18000A588
 * Callers:
 *     ?_Getcat@?$ctype@G@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x18000A8A4 (-_Getcat@-$ctype@G@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 *     ?_Getcat@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x180019340 (-_Getcat@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@SA_KPEAPEBVfacet@l.c)
 *     ?_Getcat@?$numpunct@G@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x180019408 (-_Getcat@-$numpunct@G@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 * Callees:
 *     ??0runtime_error@std@@QEAA@PEBD@Z @ 0x18000A500 (--0runtime_error@std@@QEAA@PEBD@Z.c)
 *     ?_Locinfo_ctor@_Locinfo@std@@SAXPEAV12@PEBD@Z @ 0x180023244 (-_Locinfo_ctor@_Locinfo@std@@SAXPEAV12@PEBD@Z.c)
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x180023508 (--0_Lockit@std@@QEAA@H@Z.c)
 *     _CxxThrowException_0 @ 0x180028090 (_CxxThrowException_0.c)
 */

// Hidden C++ exception states: #wind=7
std::_Locinfo *__fastcall std::_Locinfo::_Locinfo(std::_Locinfo *this, const char *a2)
{
  _BYTE pExceptionObject[32]; // [rsp+28h] [rbp-20h] BYREF

  std::_Lockit::_Lockit(this, 0);
  *((_QWORD *)this + 1) = 0LL;
  *((_BYTE *)this + 16) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_BYTE *)this + 32) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_WORD *)this + 24) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_WORD *)this + 32) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_BYTE *)this + 80) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_BYTE *)this + 96) = 0;
  if ( !a2 )
  {
    std::runtime_error::runtime_error((std::runtime_error *)pExceptionObject, "bad locale name");
    throw (std::runtime_error *)pExceptionObject;
  }
  std::_Locinfo::_Locinfo_ctor(this, a2);
  return this;
}
