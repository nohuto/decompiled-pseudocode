/*
 * XREFs of ??0?$basic_streambuf@GU?$char_traits@G@std@@@std@@IEAA@XZ @ 0x18002893C
 * Callers:
 *     ??0?$basic_istringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x180024E0C (--0-$basic_istringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV-$basic_string@G.c)
 *     ??0?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@H@Z @ 0x1800376BC (--0-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@H@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800538BC (--2@YAPEAX_K@Z.c)
 *     ?_Init@locale@std@@CAPEAV_Locimp@12@_N@Z @ 0x1800545F0 (-_Init@locale@std@@CAPEAV_Locimp@12@_N@Z.c)
 */

_QWORD *__fastcall std::basic_streambuf<unsigned short>::basic_streambuf<unsigned short>(_QWORD *a1)
{
  _QWORD *v2; // rdi

  *a1 = &std::basic_streambuf<unsigned short>::`vftable';
  v2 = operator new(8uLL);
  if ( v2 )
    *v2 = std::locale::_Init(1);
  else
    v2 = 0LL;
  a1[12] = v2;
  a1[3] = a1 + 1;
  a1[4] = a1 + 2;
  a1[7] = a1 + 5;
  a1[8] = a1 + 6;
  a1[10] = a1 + 9;
  a1[11] = (char *)a1 + 76;
  a1[2] = 0LL;
  *(_QWORD *)a1[8] = 0LL;
  *(_DWORD *)a1[11] = 0;
  *(_QWORD *)a1[3] = 0LL;
  *(_QWORD *)a1[7] = 0LL;
  *(_DWORD *)a1[10] = 0;
  return a1;
}
