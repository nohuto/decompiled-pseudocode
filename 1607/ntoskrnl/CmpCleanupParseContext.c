/*
 * XREFs of CmpCleanupParseContext @ 0x14046353C
 * Callers:
 *     NtUnloadKeyEx @ 0x1403E3100 (NtUnloadKeyEx.c)
 *     NtNotifyChangeMultipleKeys @ 0x1403FF884 (NtNotifyChangeMultipleKeys.c)
 *     CmpParseKey @ 0x14043ADD0 (CmpParseKey.c)
 *     CmCreateKey @ 0x140462FD0 (CmCreateKey.c)
 *     CmLoadDifferencingKey @ 0x1404A37E0 (CmLoadDifferencingKey.c)
 *     CmpLinkHiveToMaster @ 0x1405194C0 (CmpLinkHiveToMaster.c)
 *     NtUnloadKey2 @ 0x14054A4C4 (NtUnloadKey2.c)
 *     CmpCreatePredefined @ 0x14055DDCC (CmpCreatePredefined.c)
 *     NtQueryOpenSubKeys @ 0x1405F99E8 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1405F9BC0 (NtQueryOpenSubKeysEx.c)
 *     CmpResolveHiveLoadConflict @ 0x1405FF1D4 (CmpResolveHiveLoadConflict.c)
 *     CmKeyBodyRemapToVirtual @ 0x1405FFEFC (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406000D4 (CmKeyBodyReplicateToVirtual.c)
 *     CmpDoBuildVirtualStack @ 0x140600C9C (CmpDoBuildVirtualStack.c)
 *     CmpDoReOpenTransKey @ 0x140611CD0 (CmpDoReOpenTransKey.c)
 *     CmInitSystem1 @ 0x1407ADA6C (CmInitSystem1.c)
 * Callees:
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 *     CmpDereferenceKeyControlBlock @ 0x140436C80 (CmpDereferenceKeyControlBlock.c)
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
