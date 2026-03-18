/*
 * XREFs of ?FindByValue@?$Set@VDMMVIDPNPRESENTPATH@@@@QEBAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z @ 0x1C0008260
 * Callers:
 *     ?FindByValue@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z @ 0x1C0004330 (-FindByValue@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z.c)
 *     ?Add@?$Set@VDMMVIDPNPRESENTPATH@@@@QEAAEQEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00082CC (-Add@-$Set@VDMMVIDPNPRESENTPATH@@@@QEAAEQEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?Remove@?$Set@VDMMVIDPNPRESENTPATH@@@@QEAAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z @ 0x1C0008334 (-Remove@-$Set@VDMMVIDPNPRESENTPATH@@@@QEAAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Set<DMMVIDPNPRESENTPATH>::FindByValue(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r8
  _QWORD *i; // r8
  __int64 v5; // r8

  v2 = (_QWORD *)(a1 + 24);
  if ( (_QWORD *)*v2 == v2 )
    return 0LL;
  for ( i = (_QWORD *)(*v2 - 8LL); i; i = v5 == a1 + 24 ? 0LL : (_QWORD *)(v5 - 8) )
  {
    if ( *(_DWORD *)(i[11] + 24LL) == *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL)
      && *(_DWORD *)(i[12] + 24LL) == *(_DWORD *)(*(_QWORD *)(a2 + 96) + 24LL) )
    {
      break;
    }
    v5 = i[1];
  }
  return i;
}
