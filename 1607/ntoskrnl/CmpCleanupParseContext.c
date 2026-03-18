/*
 * XREFs of CmpCleanupParseContext @ 0x14046466C
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1404009C4 (NtNotifyChangeMultipleKeys.c)
 *     CmpParseKey @ 0x14043BF00 (CmpParseKey.c)
 *     CmCreateKey @ 0x140464100 (CmCreateKey.c)
 *     NtUnloadKeyEx @ 0x14049A1D4 (NtUnloadKeyEx.c)
 *     CmLoadDifferencingKey @ 0x14049B648 (CmLoadDifferencingKey.c)
 *     CmpLinkHiveToMaster @ 0x1404A10B4 (CmpLinkHiveToMaster.c)
 *     NtUnloadKey2 @ 0x140549F84 (NtUnloadKey2.c)
 *     CmpCreatePredefined @ 0x14055D88C (CmpCreatePredefined.c)
 *     NtQueryOpenSubKeys @ 0x1405F9934 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1405F9B0C (NtQueryOpenSubKeysEx.c)
 *     CmpResolveHiveLoadConflict @ 0x1405FF120 (CmpResolveHiveLoadConflict.c)
 *     CmKeyBodyRemapToVirtual @ 0x1405FFE48 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140600020 (CmKeyBodyReplicateToVirtual.c)
 *     CmpDoBuildVirtualStack @ 0x140600BE8 (CmpDoBuildVirtualStack.c)
 *     CmpDoReOpenTransKey @ 0x140611C1C (CmpDoReOpenTransKey.c)
 *     CmInitSystem1 @ 0x1407ADA6C (CmInitSystem1.c)
 * Callees:
 *     CmpUnlockRegistry @ 0x14040476C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404047A0 (CmpLockRegistry.c)
 *     CmpDereferenceKeyControlBlock @ 0x140437DB0 (CmpDereferenceKeyControlBlock.c)
 */

__int64 __fastcall CmpCleanupParseContext(__int64 a1, char a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 96) )
  {
    if ( !a2 )
      CmpLockRegistry();
    result = CmpDereferenceKeyControlBlock(*(_QWORD *)(a1 + 96));
    if ( !a2 )
      return CmpUnlockRegistry();
  }
  return result;
}
