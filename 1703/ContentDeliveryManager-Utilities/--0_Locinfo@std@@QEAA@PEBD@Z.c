/*
 * XREFs of ??0_Locinfo@std@@QEAA@PEBD@Z @ 0x180022EBC
 * Callers:
 *     ?_Getcat@?$ctype@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x18002318C (-_Getcat@-$ctype@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 *     ?_Getcat@?$numpunct@G@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x180032DA0 (-_Getcat@-$numpunct@G@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 *     ?_Getcat@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x180032E74 (-_Getcat@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@SA_KPEAPEBVfacet@l.c)
 *     ?_Getcat@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x180063EC8 (-_Getcat@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@SA_KPEAPEBVface.c)
 *     ?_Getcat@?$numpunct@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x18006439C (-_Getcat@-$numpunct@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 * Callees:
 *     ??0runtime_error@std@@QEAA@PEBD@Z @ 0x180022E48 (--0runtime_error@std@@QEAA@PEBD@Z.c)
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x18006AFB4 (--0_Lockit@std@@QEAA@H@Z.c)
 *     ?_Locinfo_ctor@_Locinfo@std@@SAXPEAV12@PEBD@Z @ 0x18006B2BC (-_Locinfo_ctor@_Locinfo@std@@SAXPEAV12@PEBD@Z.c)
 *     _CxxThrowException_0 @ 0x18006F90E (_CxxThrowException_0.c)
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
