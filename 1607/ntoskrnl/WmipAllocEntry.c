/*
 * XREFs of WmipAllocEntry @ 0x140537E68
 * Callers:
 *     WmipAllocDataSource @ 0x140536F3C (WmipAllocDataSource.c)
 *     WmipAddDataSource @ 0x140537074 (WmipAddDataSource.c)
 *     WmipAllocGuidEntry @ 0x140537DD4 (WmipAllocGuidEntry.c)
 *     WmipAddMofResource @ 0x140550C40 (WmipAddMofResource.c)
 *     WmipUpdateAddGuid @ 0x14069F298 (WmipUpdateAddGuid.c)
 *     WmipUpdateModifyGuid @ 0x14069F6C0 (WmipUpdateModifyGuid.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14006FEB0 (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x1401715C0 (memset.c)
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
