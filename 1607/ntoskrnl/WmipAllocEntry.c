/*
 * XREFs of WmipAllocEntry @ 0x1405383A8
 * Callers:
 *     WmipAllocDataSource @ 0x14053747C (WmipAllocDataSource.c)
 *     WmipAddDataSource @ 0x1405375B4 (WmipAddDataSource.c)
 *     WmipAllocGuidEntry @ 0x140538314 (WmipAllocGuidEntry.c)
 *     WmipAddMofResource @ 0x140551180 (WmipAddMofResource.c)
 *     WmipUpdateAddGuid @ 0x14069F3D0 (WmipUpdateAddGuid.c)
 *     WmipUpdateModifyGuid @ 0x14069F7F8 (WmipUpdateModifyGuid.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14006FA30 (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x140171AC0 (memset.c)
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
