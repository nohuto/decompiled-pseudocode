/*
 * XREFs of ??0?$basic_istringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x18002C594
 * Callers:
 *     _anonymous_namespace_::GetImpressionEventExpirationTime @ 0x1800276B8 (_anonymous_namespace_--GetImpressionEventExpirationTime.c)
 * Callees:
 *     ??0?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA@PEAV?$basic_streambuf@GU?$char_traits@G@std@@@1@_N@Z @ 0x18002ED80 (--0-$basic_istream@GU-$char_traits@G@std@@@std@@QEAA@PEAV-$basic_streambuf@GU-$char_traits@G@std.c)
 *     ?_Init@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IEAAXPEBG_KH@Z @ 0x18002FEB8 (-_Init@-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@IEAAXPEBG_KH@Z.c)
 *     ??0?$basic_streambuf@GU?$char_traits@G@std@@@std@@IEAA@XZ @ 0x18002FFB0 (--0-$basic_streambuf@GU-$char_traits@G@std@@@std@@IEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall std::basic_istringstream<unsigned short>::basic_istringstream<unsigned short>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // r8

  *a1 = &std::wistringstream::`vbtable';
  a1[18] = &std::wios::`vftable';
  v4 = a1 + 2;
  std::basic_istream<unsigned short>::basic_istream<unsigned short>(a1, a1 + 2);
  *(_QWORD *)((char *)a1 + *(int *)(*a1 + 4LL)) = &std::basic_istringstream<unsigned short>::`vftable';
  *(_DWORD *)((char *)a1 + *(int *)(*a1 + 4LL) - 4) = *(_DWORD *)(*a1 + 4LL) - 144;
  std::basic_streambuf<unsigned short>::basic_streambuf<unsigned short>(v4);
  *v4 = &std::basic_stringbuf<unsigned short>::`vftable';
  v5 = a2[2];
  if ( a2[3] >= 8uLL )
    a2 = (_QWORD *)*a2;
  v4[13] = 0LL;
  *((_DWORD *)v4 + 28) = 2;
  if ( v5 )
    std::basic_stringbuf<unsigned short>::_Init(v4, a2);
  return a1;
}
