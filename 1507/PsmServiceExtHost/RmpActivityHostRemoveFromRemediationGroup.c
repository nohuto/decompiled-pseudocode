/*
 * XREFs of RmpActivityHostRemoveFromRemediationGroup @ 0x18003BE70
 * Callers:
 *     RmpEnforcementWorkCallback @ 0x180006D40 (RmpEnforcementWorkCallback.c)
 *     RmpActivityHostDelete @ 0x1800083A8 (RmpActivityHostDelete.c)
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEBGPEAT_RM_SID@@KK_K@Z @ 0x180011820 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     RmpActivityHostCleanupRemediationGroup @ 0x18003B88C (RmpActivityHostCleanupRemediationGroup.c)
 *     RmpActivityHostOnHostTerminated @ 0x18003BE44 (RmpActivityHostOnHostTerminated.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpActivityHostRemoveFromRemediationGroup(volatile signed __int32 *P, char a2)
{
  __int64 v3; // rcx
  _QWORD **v4; // r9
  PVOID *v5; // r8

  v3 = *((_QWORD *)P + 108);
  v4 = (_QWORD **)*((_QWORD *)P + 109);
  v5 = (PVOID *)*((_QWORD *)P + 110);
  if ( v4[1] != (_QWORD *)(P + 218) || *v5 != P + 218 )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = v5;
  *((_QWORD *)P + 108) = 0LL;
  if ( *(_QWORD *)v3 == v3 && a2 )
    SetEvent(*(HANDLE *)(v3 + 16));
  return RmpObjectRelease(P);
}
