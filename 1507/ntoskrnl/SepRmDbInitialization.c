/*
 * XREFs of SepRmDbInitialization @ 0x1407E38EC
 * Callers:
 *     SepInitializationPhase0 @ 0x1407BC43C (SepInitializationPhase0.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1400155B0 (ExInitializeResourceLite.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SepCreateLogonSessionTrack @ 0x14053C348 (SepCreateLogonSessionTrack.c)
 *     SepBuildDefaultCap @ 0x1405BE024 (SepBuildDefaultCap.c)
 */

char SepRmDbInitialization()
{
  struct _ERESOURCE *v0; // rbx
  __int64 v1; // rdi
  PVOID PoolWithTag; // rax

  v0 = &SepRmDbLock;
  v1 = 4LL;
  do
  {
    ExInitializeResourceLite(v0++);
    --v1;
  }
  while ( v1 );
  ExInitializeResourceLite(&SepRmGlobalSaclLock);
  LODWORD(SepRmNotifyMutex) = 1;
  qword_14036A8E0 = 0LL;
  dword_14036A8E8 = 0;
  word_14036A8F0 = 1;
  byte_14036A8F2 = 6;
  dword_14036A8F4 = 0;
  qword_14036A900 = (__int64)&qword_14036A8F8;
  qword_14036A8F8 = (__int64)&qword_14036A8F8;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x80uLL, 0x734C6553u);
  SepLogonSessions = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  memset(PoolWithTag, 0, 0x80uLL);
  if ( (int)SepCreateLogonSessionTrack((__int64)&SeSystemAuthenticationId) < 0 )
    return 0;
  if ( (int)SepCreateLogonSessionTrack((__int64)&SeAnonymousAuthenticationId) < 0 )
    return 0;
  SepRmAuditingEnabled = 0;
  memset(SeAuditingState, 0, 0x74uLL);
  byte_14032BC22 = 1;
  SepRmCapTableLock = 0LL;
  SepRmEnforceCap = 0;
  if ( (int)SepBuildDefaultCap() < 0 )
    return 0;
  dword_14077EF94 = 1;
  return 1;
}
