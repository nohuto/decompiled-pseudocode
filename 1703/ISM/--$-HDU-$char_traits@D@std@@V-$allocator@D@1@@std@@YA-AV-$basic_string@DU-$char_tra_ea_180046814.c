/*
 * XREFs of ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@QEBD@Z @ 0x180046814
 * Callers:
 *     ?GetVector3AsString@ISMTracing@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAUVector3@Numerics@Foundation@Windows@@@Z @ 0x180044140 (-GetVector3AsString@ISMTracing@@SA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD@Z @ 0x18002178C (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD@Z.c)
 *     memcpy_0 @ 0x18009EAF8 (memcpy_0.c)
 */

_QWORD *__fastcall std::operator+<char>(_QWORD *a1, _QWORD *Src)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  _QWORD *result; // rax

  v3 = std::string::append(Src, ", ");
  a1[2] = 0LL;
  v4 = v3;
  a1[3] = 15LL;
  *(_BYTE *)a1 = 0;
  if ( v3[3] < 0x10uLL )
  {
    memcpy_0(a1, v3, v3[2] + 1LL);
  }
  else
  {
    *a1 = *v3;
    *v3 = 0LL;
  }
  a1[2] = v4[2];
  a1[3] = v4[3];
  result = a1;
  v4[2] = 0LL;
  v4[3] = 15LL;
  *(_BYTE *)v4 = 0;
  return result;
}
