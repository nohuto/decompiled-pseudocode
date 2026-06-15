/*
 * XREFs of ?_Chassign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0D@Z @ 0x180051424
 * Callers:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180051664 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 * Callees:
 *     <none>
 */

void *__fastcall std::string::_Chassign(_QWORD *a1, __int64 a2, size_t a3)
{
  void *result; // rax

  if ( a3 == 1 )
  {
    if ( a1[3] >= 0x10uLL )
      a1 = (_QWORD *)*a1;
    *((_BYTE *)a1 + a2) = 0;
  }
  else
  {
    if ( a1[3] >= 0x10uLL )
      a1 = (_QWORD *)*a1;
    return memset((char *)a1 + a2, 0, a3);
  }
  return result;
}
