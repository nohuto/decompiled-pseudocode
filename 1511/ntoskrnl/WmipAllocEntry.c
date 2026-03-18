/*
 * XREFs of WmipAllocEntry @ 0x140502690
 * Callers:
 *     WmipAddDataSource @ 0x140501BD8 (WmipAddDataSource.c)
 *     WmipAllocDataSource @ 0x140502648 (WmipAllocDataSource.c)
 *     WmipAddMofResource @ 0x1405234A4 (WmipAddMofResource.c)
 *     WmipAllocGuidEntry @ 0x14053EEA8 (WmipAllocGuidEntry.c)
 *     WmipUpdateAddGuid @ 0x14065F59C (WmipUpdateAddGuid.c)
 *     WmipUpdateModifyGuid @ 0x14065F9C4 (WmipUpdateModifyGuid.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1400BB7D4 (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

_QWORD *__fastcall WmipAllocEntry(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx

  v2 = ExAllocateFromNPagedLookasideList(*(PNPAGED_LOOKASIDE_LIST *)a1);
  v3 = v2;
  if ( v2 )
  {
    memset(v2, 0, *(unsigned int *)(a1 + 8));
    v3[3] = 1LL;
    *((_DWORD *)v3 + 4) = *(_DWORD *)(a1 + 24);
    *((_DWORD *)v3 + 8) = *(_DWORD *)(a1 + 28);
  }
  return v3;
}
