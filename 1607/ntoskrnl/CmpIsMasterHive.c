/*
 * XREFs of CmpIsMasterHive @ 0x1404BCA00
 * Callers:
 *     CmQueryLayeredKey @ 0x1401B3CC8 (CmQueryLayeredKey.c)
 *     CmQueryKey @ 0x1404396E0 (CmQueryKey.c)
 *     CmpVEExecuteCreateLogic @ 0x1404BC7F8 (CmpVEExecuteCreateLogic.c)
 *     CmKeyBodyRemapToVirtual @ 0x1405FFEFC (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406000D4 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     CmpIsKeyDeleted @ 0x140403EF0 (CmpIsKeyDeleted.c)
 */

bool __fastcall CmpIsMasterHive(__int64 a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(a1 + 24);
  return v1 == CmpMasterHive
      || !(unsigned __int8)CmpIsKeyDeleted(a1, 0LL)
      && (*(_DWORD *)(v1 + 5360) & 0x10) == 0
      && (*(_WORD *)(a1 + 178) & 0x200) == 0;
}
