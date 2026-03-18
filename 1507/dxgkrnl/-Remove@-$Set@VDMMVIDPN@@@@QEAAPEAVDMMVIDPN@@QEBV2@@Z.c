/*
 * XREFs of ?Remove@?$Set@VDMMVIDPN@@@@QEAAPEAVDMMVIDPN@@QEBV2@@Z @ 0x1C00095B4
 * Callers:
 *     ??1DMMVIDPN@@UEAA@XZ @ 0x1C0088C8C (--1DMMVIDPN@@UEAA@XZ.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C00CD224 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     ?FindByValue@?$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z @ 0x1C000957C (-FindByValue@-$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPN@@@@QEAAEQEBVDMMVIDPN@@@Z @ 0x1C0009640 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPN@@@@QEAAEQEBVDMMVIDPN@@@Z.c)
 */

__int64 __fastcall Set<DMMVIDPN>::Remove(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r9
  char v4; // al
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // r10
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // r8
  _QWORD *v11; // rdx

  v2 = Set<DMMVIDPN>::FindByValue(a1, a2);
  v4 = DoublyLinkedList<DMMVIDPN>::ContainsByReference(v3 + 8, v2);
  v8 = 0LL;
  if ( v4 )
  {
    v9 = (_QWORD *)(v5 + 8);
    v10 = *(_QWORD *)(v5 + 8);
    v11 = *(_QWORD **)(v5 + 16);
    if ( *(_QWORD **)(v10 + 8) != v9 || (_QWORD *)*v11 != v9 )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    *v9 = 0LL;
    *(_QWORD *)(v7 + 16) = 0LL;
    v8 = v7;
    --*(_QWORD *)(v6 + 40);
  }
  return v8;
}
