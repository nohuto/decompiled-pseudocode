/*
 * XREFs of ?FindByValue@?$Set@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C001D594
 * Callers:
 *     ?SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJV?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@@Z @ 0x1C00029B4 (-SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJV-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@@Z.c)
 * Callees:
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z @ 0x1C0004308 (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z.c)
 */

__int64 __fastcall Set<DMMVIDPNSOURCEMODE>::FindByValue(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 i; // rbx
  __int64 v6; // rbx

  v2 = (_QWORD *)(a1 + 24);
  if ( (_QWORD *)*v2 == v2 )
    return 0LL;
  for ( i = *v2 - 8LL; i; i = v6 == a1 + 24 ? 0LL : v6 - 8 )
  {
    if ( DMMVIDPNSOURCEMODE::operator==(i, a2) )
      break;
    v6 = *(_QWORD *)(i + 8);
  }
  return i;
}
