/*
 * XREFs of ViScatterGatherCallback @ 0x14070A388
 * Callers:
 *     <none>
 * Callees:
 *     ExInterlockedInsertHeadList @ 0x1400A60E8 (ExInterlockedInsertHeadList.c)
 *     ADD_MAP_REGISTERS @ 0x140705AB8 (ADD_MAP_REGISTERS.c)
 *     VF_MARK_SCATTER_GATHER_LIST @ 0x1407061E0 (VF_MARK_SCATTER_GATHER_LIST.c)
 */

__int64 __fastcall ViScatterGatherCallback(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  __int64 v4; // rbx

  v4 = *(_QWORD *)(a4 + 56);
  ADD_MAP_REGISTERS(v4, *a3, 1);
  *(_QWORD *)(a4 + 64) = a3;
  ExInterlockedInsertHeadList((PLIST_ENTRY)(v4 + 56), (PLIST_ENTRY)(a4 + 72), (PKSPIN_LOCK)(v4 + 72));
  VF_MARK_SCATTER_GATHER_LIST((__int64)a3, *(_QWORD *)(a4 + 96));
  return (*(__int64 (__fastcall **)(__int64, __int64, unsigned int *, _QWORD))(a4 + 8))(a1, a2, a3, *(_QWORD *)a4);
}
