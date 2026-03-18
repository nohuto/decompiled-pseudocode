/*
 * XREFs of CmpDestroyHive @ 0x140499400
 * Callers:
 *     CmpLinkHiveToMaster @ 0x1403BAC9C (CmpLinkHiveToMaster.c)
 *     CmUnloadKey @ 0x140498EAC (CmUnloadKey.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     CmpFreeKeyByCell @ 0x1403D84C4 (CmpFreeKeyByCell.c)
 *     CmpParseCacheRemoveHive @ 0x14049949C (CmpParseCacheRemoveHive.c)
 *     CmpLogHiveDestroyEvent @ 0x1405DDB14 (CmpLogHiveDestroyEvent.c)
 */

__int64 __fastcall CmpDestroyHive(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  int v5; // ebx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = -1;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8))(a1, a2, &v7);
  if ( !v3 )
    return 3221225626LL;
  v4 = *(_DWORD *)(v3 + 16);
  (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v7);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(CmpMasterHive + 2848), 1u);
  v5 = CmpFreeKeyByCell(CmpMasterHive, v4, 1);
  ExReleaseResourceLite(*(PERESOURCE *)(CmpMasterHive + 2848));
  if ( v5 >= 0 )
    v5 = CmpParseCacheRemoveHive(a1);
  if ( (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
    CmpLogHiveDestroyEvent(a1);
  return (unsigned int)v5;
}
