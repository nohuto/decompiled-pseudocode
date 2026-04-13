/*
 * XREFs of _Getcvt @ 0x180054FA8
 * Callers:
 *     ?_Getcat@?$ctype@G@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x18001BBA8 (-_Getcat@-$ctype@G@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 *     ?_Init@?$numpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x18002AB4C (-_Init@-$numpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     _Mbrtowc @ 0x180053CC4 (_Mbrtowc.c)
 * Callees:
 *     _GetLocaleName @ 0x1800573A4 (_GetLocaleName.c)
 *     memset_0 @ 0x180058F42 (memset_0.c)
 */

_Cvtvec *__cdecl Getcvt(_Cvtvec *__return_ptr retstr)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  void *LocaleName; // rax
  signed int v5; // ebx
  __int64 v6; // rsi

  retstr->_Page = 0;
  memset_0(&retstr->_Mbcurmax, 0, sizeof(_Cvtvec));
  retstr->_Page = *(_DWORD *)(___lc_handle_func() + 8);
  retstr->_Mbcurmax = ___lc_codepage_func();
  retstr->_Isclocale = ___mb_cur_max_func();
  LocaleName = (void *)GetLocaleName(2LL, v2, v3);
  *(_DWORD *)retstr->_Isleadbyte = LocaleName == 0LL;
  free(LocaleName);
  if ( !*(_DWORD *)retstr->_Isleadbyte )
  {
    v5 = 0;
    v6 = 0LL;
    do
    {
      if ( _ismbblead(v5) )
        retstr->_Isleadbyte[(v6 >> 3) + 4] |= 1 << (v5 & 7);
      ++v5;
      ++v6;
    }
    while ( v5 < 256 );
  }
  return retstr;
}
