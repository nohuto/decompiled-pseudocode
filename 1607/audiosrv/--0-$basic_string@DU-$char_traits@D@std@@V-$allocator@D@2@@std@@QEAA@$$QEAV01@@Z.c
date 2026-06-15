/*
 * XREFs of ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@$$QEAV01@@Z @ 0x18004FD58
 * Callers:
 *     ?str@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x180016DD0 (-str@-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA-AV-$basic_string@DU-$c.c)
 *     ?message@_System_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x1800518D0 (-message@_System_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::string::string(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // rbx

  a1[2] = 0LL;
  v2 = a2;
  a1[3] = 15LL;
  *(_BYTE *)a1 = 0;
  if ( a2[3] >= 0x10uLL )
  {
    *a1 = *a2;
    *a2 = 0LL;
  }
  else if ( a2[2] != -1LL )
  {
    memmove(a1, a2, a2[2] + 1LL);
  }
  a1[2] = v2[2];
  a1[3] = v2[3];
  v2[3] = 15LL;
  v2[2] = 0LL;
  if ( v2[3] >= 0x10uLL )
    v2 = (_QWORD *)*v2;
  *(_BYTE *)v2 = 0;
  return a1;
}
