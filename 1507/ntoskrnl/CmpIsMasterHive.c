/*
 * XREFs of CmpIsMasterHive @ 0x140448D7C
 * Callers:
 *     CmpDoCreate @ 0x1404485BC (CmpDoCreate.c)
 *     CmQueryKey @ 0x1404C3F30 (CmQueryKey.c)
 *     CmKeyBodyRemapToVirtual @ 0x140657574 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140657718 (CmKeyBodyReplicateToVirtual.c)
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
