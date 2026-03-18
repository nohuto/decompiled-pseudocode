/*
 * XREFs of ?GetFirstElementIndex@?$CList@VCOPMProtectedOutput@@@@QEAAEPEAK@Z @ 0x1C0067C6C
 * Callers:
 *     ?DestroyProtectedOutputsOwnedByProcess@COPM@@QEAAXPEAX@Z @ 0x1C0067AB4 (-DestroyProtectedOutputsOwnedByProcess@COPM@@QEAAXPEAX@Z.c)
 *     ?DestroyAllHandlesFromAdapter@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAXPEAU_LUID@@@Z @ 0x1C0067C38 (-DestroyAllHandlesFromAdapter@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAXPEAU_LUID@@.c)
 * Callees:
 *     ?GetNextElementIndex@?$CList@VCOPMProtectedOutput@@@@QEAAEKPEAK@Z @ 0x1C0083554 (-GetNextElementIndex@-$CList@VCOPMProtectedOutput@@@@QEAAEKPEAK@Z.c)
 */

char __fastcall CList<COPMProtectedOutput>::GetFirstElementIndex(__int64 a1, _DWORD *a2)
{
  if ( !*(_DWORD *)(a1 + 8) )
    return 0;
  if ( !**(_QWORD **)a1 )
    return CList<COPMProtectedOutput>::GetNextElementIndex(a1, 0LL, a2);
  *a2 = 0;
  return 1;
}
