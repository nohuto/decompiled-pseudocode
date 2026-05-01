/*
 * XREFs of RmpActivityHostRemoveFromRemediationGroup @ 0x1800411E4
 * Callers:
 *     RmpActivityHostDelete @ 0x180007508 (RmpActivityHostDelete.c)
 *     RmpEnforcementWorkCallback @ 0x180008C50 (RmpEnforcementWorkCallback.c)
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEBGPEAT_RM_SID@@KK_K@Z @ 0x18000FDA0 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     RmpActivityHostCleanupRemediationGroup @ 0x180040BB4 (RmpActivityHostCleanupRemediationGroup.c)
 *     RmpActivityHostOnHostTerminated @ 0x180041160 (RmpActivityHostOnHostTerminated.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpActivityHostRemoveFromRemediationGroup(volatile signed __int32 *P, char a2)
{
  __int64 v3; // rcx
  _QWORD **v4; // r9
  PVOID *v5; // r8

  v3 = *((_QWORD *)P + 112);
  v4 = (_QWORD **)*((_QWORD *)P + 113);
  v5 = (PVOID *)*((_QWORD *)P + 114);
  if ( v4[1] != (_QWORD *)(P + 226) || *v5 != P + 226 )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = v5;
  *((_QWORD *)P + 112) = 0LL;
  if ( *(_QWORD *)v3 == v3 && a2 )
    SetEvent(*(HANDLE *)(v3 + 16));
  return RmpObjectRelease(P);
}
