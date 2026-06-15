/*
 * XREFs of ?_Inside@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA_NPEBD@Z @ 0x180067340
 * Callers:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x1800674E0 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::string::_Inside(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rdx
  bool result; // al

  result = 0;
  if ( a2 )
  {
    v3 = a1[3] < 0x10uLL ? a1 : (_QWORD *)*a1;
    if ( a2 >= (unsigned __int64)v3 )
    {
      v4 = a1[3] < 0x10uLL ? a1 : (_QWORD *)*a1;
      if ( (unsigned __int64)v4 + a1[2] > a2 )
        return 1;
    }
  }
  return result;
}
