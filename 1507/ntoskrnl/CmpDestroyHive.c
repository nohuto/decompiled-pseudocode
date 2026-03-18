/*
 * XREFs of CmpDestroyHive @ 0x1404EE8E0
 * Callers:
 *     CmpLinkHiveToMaster @ 0x1404E9E8C (CmpLinkHiveToMaster.c)
 *     CmUnloadKey @ 0x1404EE348 (CmUnloadKey.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     CmpFreeKeyByCell @ 0x140449FBC (CmpFreeKeyByCell.c)
 *     CmpParseCacheRemoveHive @ 0x1404EE97C (CmpParseCacheRemoveHive.c)
 *     CmpLogHiveDestroyEvent @ 0x140653040 (CmpLogHiveDestroyEvent.c)
 */

__int64 __fastcall CmpDestroyHive(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v5; // r9
  int v6; // ebx
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = -1;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8))(a1, a2, &v8);
  if ( !v3 )
    return 3221225626LL;
  v4 = *(_DWORD *)(v3 + 16);
  (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v8);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(CmpMasterHive + 2848), 1u);
  v6 = CmpFreeKeyByCell(CmpMasterHive, v4, 1, v5);
  ExReleaseResourceLite(*(PERESOURCE *)(CmpMasterHive + 2848));
  if ( v6 >= 0 )
    v6 = CmpParseCacheRemoveHive(a1);
  if ( (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
    CmpLogHiveDestroyEvent(a1);
  return (unsigned int)v6;
}
