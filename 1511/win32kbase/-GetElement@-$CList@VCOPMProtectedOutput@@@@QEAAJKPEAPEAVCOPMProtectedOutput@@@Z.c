/*
 * XREFs of ?GetElement@?$CList@VCOPMProtectedOutput@@@@QEAAJKPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C0083590
 * Callers:
 *     ?DestroyProtectedOutputsOwnedByProcess@COPM@@QEAAXPEAX@Z @ 0x1C0067AB4 (-DestroyProtectedOutputsOwnedByProcess@COPM@@QEAAXPEAX@Z.c)
 *     ?DestroyAllHandlesFromAdapter@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAXPEAU_LUID@@@Z @ 0x1C0067C38 (-DestroyAllHandlesFromAdapter@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAXPEAU_LUID@@.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C00830B0 (-GetHandleObject@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtected.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CList<COPMProtectedOutput>::GetElement(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v3; // rdx

  if ( a2 >= *(_DWORD *)(a1 + 12) )
    return 3221225473LL;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 8LL * a2);
  if ( !v3 )
    return 3221225473LL;
  *a3 = v3;
  return 0LL;
}
