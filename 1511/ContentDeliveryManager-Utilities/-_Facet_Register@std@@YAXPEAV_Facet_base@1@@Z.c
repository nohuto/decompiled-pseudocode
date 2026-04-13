/*
 * XREFs of ?_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z @ 0x180023080
 * Callers:
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x1800188B4 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@@std@@YAAEBV?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@0@AEBVlocale@0@@Z @ 0x180018C90 (--$use_facet@V-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@@std@@YAAEBV-.c)
 *     ??$use_facet@V?$numpunct@G@std@@@std@@YAAEBV?$numpunct@G@0@AEBVlocale@0@@Z @ 0x180018DD8 (--$use_facet@V-$numpunct@G@std@@@std@@YAAEBV-$numpunct@G@0@AEBVlocale@0@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180022CC8 (--2@YAPEAX_K@Z.c)
 */

void __fastcall std::_Facet_Register(struct std::_Facet_base *a1)
{
  std::_Fac_node *v2; // rax

  v2 = (std::_Fac_node *)operator new(0x10uLL);
  if ( v2 )
  {
    *(_QWORD *)v2 = qword_18003D3D8;
    *((_QWORD *)v2 + 1) = a1;
  }
  qword_18003D3D8 = v2;
}
