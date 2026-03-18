/*
 * XREFs of CmpIsMasterHive @ 0x1404D93FC
 * Callers:
 *     CmQueryLayeredKey @ 0x1401B3DE4 (CmQueryLayeredKey.c)
 *     CmQueryKey @ 0x14043A810 (CmQueryKey.c)
 *     CmpVEExecuteCreateLogic @ 0x1404D91F4 (CmpVEExecuteCreateLogic.c)
 *     CmKeyBodyRemapToVirtual @ 0x1405FFE48 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140600020 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     CmpIsKeyDeleted @ 0x140405030 (CmpIsKeyDeleted.c)
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
