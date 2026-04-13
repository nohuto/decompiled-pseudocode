/*
 * XREFs of ??1_Locinfo@std@@QEAA@XZ @ 0x18001B944
 * Callers:
 *     ?_Getcat@?$ctype@G@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x18001BBA8 (-_Getcat@-$ctype@G@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 *     ?_Getcat@?$numpunct@G@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x18002A77C (-_Getcat@-$numpunct@G@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 *     ?_Getcat@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x18002A854 (-_Getcat@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@SA_KPEAPEBVfacet@l.c)
 *     _std::numpunct_unsigned_short_::_Getcat_::_1_::dtor$1 @ 0x18005AC9A (_std--numpunct_unsigned_short_--_Getcat_--_1_--dtor$1.c)
 * Callees:
 *     ?_Locinfo_dtor@_Locinfo@std@@SAXPEAV12@@Z @ 0x1800547A8 (-_Locinfo_dtor@_Locinfo@std@@SAXPEAV12@@Z.c)
 */

void __fastcall std::_Locinfo::~_Locinfo(std::_Locinfo *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx

  std::_Locinfo::_Locinfo_dtor(this);
  v2 = (void *)*((_QWORD *)this + 11);
  if ( v2 )
    free(v2);
  *((_QWORD *)this + 11) = 0LL;
  v3 = (void *)*((_QWORD *)this + 9);
  if ( v3 )
    free(v3);
  *((_QWORD *)this + 9) = 0LL;
  v4 = (void *)*((_QWORD *)this + 7);
  if ( v4 )
    free(v4);
  *((_QWORD *)this + 7) = 0LL;
  v5 = (void *)*((_QWORD *)this + 5);
  if ( v5 )
    free(v5);
  *((_QWORD *)this + 5) = 0LL;
  v6 = (void *)*((_QWORD *)this + 3);
  if ( v6 )
    free(v6);
  *((_QWORD *)this + 3) = 0LL;
  v7 = (void *)*((_QWORD *)this + 1);
  if ( v7 )
    free(v7);
  *((_QWORD *)this + 1) = 0LL;
  std::_Lockit::~_Lockit(this);
}
