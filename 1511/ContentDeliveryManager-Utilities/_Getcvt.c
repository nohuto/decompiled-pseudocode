/*
 * XREFs of _Getcvt @ 0x180022D00
 * Callers:
 *     ?_Getcat@?$ctype@G@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x18000A8A4 (-_Getcat@-$ctype@G@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 *     ?_Init@?$numpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x1800196A0 (-_Init@-$numpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     _Mbrtowc @ 0x180023A5C (_Mbrtowc.c)
 * Callees:
 *     _GetLocaleName @ 0x180024590 (_GetLocaleName.c)
 *     memset_0 @ 0x1800280CC (memset_0.c)
 */

_Cvtvec *__cdecl Getcvt(_Cvtvec *__return_ptr retstr)
{
  void *LocaleName; // rax
  signed int v3; // ebx
  __int64 v4; // rsi

  retstr->_Page = 0;
  memset_0(&retstr->_Mbcurmax, 0, sizeof(_Cvtvec));
  retstr->_Page = *(_DWORD *)(___lc_handle_func() + 8);
  retstr->_Mbcurmax = ___lc_codepage_func();
  retstr->_Isclocale = ___mb_cur_max_func();
  LocaleName = (void *)GetLocaleName(2LL);
  *(_DWORD *)retstr->_Isleadbyte = LocaleName == 0LL;
  free(LocaleName);
  if ( !*(_DWORD *)retstr->_Isleadbyte )
  {
    v3 = 0;
    v4 = 0LL;
    do
    {
      if ( _ismbblead(v3) )
        retstr->_Isleadbyte[(v4 >> 3) + 4] |= 1 << (v3 & 7);
      ++v3;
      ++v4;
    }
    while ( v3 < 256 );
  }
  return retstr;
}
