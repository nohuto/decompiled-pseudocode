/*
 * XREFs of CmpIsMasterHive @ 0x1403DF1A0
 * Callers:
 *     CmpDoCreate @ 0x1403DEBC8 (CmpDoCreate.c)
 *     CmQueryKey @ 0x1403FF980 (CmQueryKey.c)
 *     CmKeyBodyRemapToVirtual @ 0x1405E1850 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1405E19C4 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsMasterHive(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 32);
  return v1 == CmpMasterHive
      || (*(_DWORD *)(a1 + 4) & 0x20000) == 0
      && (*(_DWORD *)(v1 + 5360) & 0x10) == 0
      && (*(_WORD *)(a1 + 186) & 0x200) == 0;
}
