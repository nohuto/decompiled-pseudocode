/*
 * XREFs of WmipFindISInDSByGuid @ 0x14069F120
 * Callers:
 *     WmipUpdateDataSource @ 0x14069F4A4 (WmipUpdateDataSource.c)
 *     WmipUpdateModifyGuid @ 0x14069F7F8 (WmipUpdateModifyGuid.c)
 * Callees:
 *     WmipReferenceEntry @ 0x140473870 (WmipReferenceEntry.c)
 */

_QWORD *__fastcall WmipFindISInDSByGuid(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *i; // rcx
  _QWORD *v5; // rbx
  __int64 v6; // r9
  __int64 v7; // rdx

  v2 = (_QWORD *)(a1 + 40);
  for ( i = *(_QWORD **)(a1 + 40); ; i = (_QWORD *)*i )
  {
    if ( i == v2 )
      return 0LL;
    v5 = i - 5;
    v6 = i[2];
    if ( v6 )
    {
      v7 = *a2 - *(_QWORD *)(v6 + 72);
      if ( *a2 == *(_QWORD *)(v6 + 72) )
        v7 = a2[1] - *(_QWORD *)(v6 + 80);
      if ( !v7 )
        break;
    }
  }
  WmipReferenceEntry((ULONG_PTR)(i - 5));
  return v5;
}
