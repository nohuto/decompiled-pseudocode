/*
 * XREFs of WmipAllocEntry @ 0x14057C21C
 * Callers:
 *     WmipAddDataSource @ 0x14057B770 (WmipAddDataSource.c)
 *     WmipAllocDataSource @ 0x14057C1D4 (WmipAllocDataSource.c)
 *     WmipAddMofResource @ 0x1405905DC (WmipAddMofResource.c)
 *     WmipAllocGuidEntry @ 0x1405B2AE8 (WmipAllocGuidEntry.c)
 *     WmipUpdateAddGuid @ 0x1406E1E44 (WmipUpdateAddGuid.c)
 *     WmipUpdateModifyGuid @ 0x1406E226C (WmipUpdateModifyGuid.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140030738 (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x140195A80 (memset.c)
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
