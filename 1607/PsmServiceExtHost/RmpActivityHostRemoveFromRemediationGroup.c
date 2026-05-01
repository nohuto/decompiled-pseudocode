/*
 * XREFs of RmpActivityHostRemoveFromRemediationGroup @ 0x18002F518
 * Callers:
 *     RmpActivityHostDelete @ 0x180004E58 (RmpActivityHostDelete.c)
 *     RmpEnforcementWorkCallback @ 0x180016C10 (RmpEnforcementWorkCallback.c)
 *     RmpActivityHostZeroProcessNotification @ 0x180019964 (RmpActivityHostZeroProcessNotification.c)
 *     RmpActivityHostCleanupRemediationGroup @ 0x18002ED34 (RmpActivityHostCleanupRemediationGroup.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpActivityHostRemoveFromRemediationGroup(volatile signed __int32 *P, char a2)
{
  __int64 v3; // rcx
  _QWORD **v4; // r9
  PVOID *v5; // r8

  v3 = *((_QWORD *)P + 131);
  v4 = (_QWORD **)*((_QWORD *)P + 132);
  v5 = (PVOID *)*((_QWORD *)P + 133);
  if ( v4[1] != (_QWORD *)(P + 264) || *v5 != P + 264 )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = v5;
  *((_QWORD *)P + 131) = 0LL;
  if ( *(_QWORD *)v3 == v3 && a2 )
    SetEvent(*(HANDLE *)(v3 + 16));
  RmpObjectRelease(P);
}
