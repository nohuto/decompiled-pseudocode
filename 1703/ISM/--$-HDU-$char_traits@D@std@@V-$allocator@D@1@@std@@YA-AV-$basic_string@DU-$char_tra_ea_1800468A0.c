/*
 * XREFs of ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@0@Z @ 0x1800468A0
 * Callers:
 *     ?GetVector3AsString@ISMTracing@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAUVector3@Numerics@Foundation@Windows@@@Z @ 0x180044140 (-GetVector3AsString@ISMTracing@@SA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z @ 0x180021890 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z.c)
 *     ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KAEBV12@@Z @ 0x180046CB0 (-insert@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KAEBV12@@Z.c)
 *     memcpy_0 @ 0x18009EAF8 (memcpy_0.c)
 */

_QWORD *__fastcall std::operator+<char>(_QWORD *a1, _QWORD *Src, _QWORD *a3)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  _QWORD *result; // rax

  if ( a3[2] <= Src[3] - Src[2] || a3[3] - a3[2] < Src[2] )
    v4 = std::string::append(Src, a3, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  else
    v4 = (_QWORD *)std::string::insert(a3);
  a1[2] = 0LL;
  a1[3] = 15LL;
  v5 = v4;
  *(_BYTE *)a1 = 0;
  if ( v4[3] < 0x10uLL )
  {
    memcpy_0(a1, v4, v4[2] + 1LL);
  }
  else
  {
    *a1 = *v4;
    *v4 = 0LL;
  }
  a1[2] = v5[2];
  a1[3] = v5[3];
  result = a1;
  v5[2] = 0LL;
  v5[3] = 15LL;
  *(_BYTE *)v5 = 0;
  return result;
}
