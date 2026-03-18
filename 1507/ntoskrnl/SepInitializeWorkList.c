/*
 * XREFs of SepInitializeWorkList @ 0x1407BD79C
 * Callers:
 *     SepInitializationPhase0 @ 0x1407BC43C (SepInitializationPhase0.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1400155B0 (ExInitializeResourceLite.c)
 */

__int64 SepInitializeWorkList()
{
  __int64 result; // rax

  ExInitializeResourceLite(&stru_140356BD0);
  qword_140356C38 = 0LL;
  qword_140356BB8 = (__int64)&SepLsaAuditQueueInfo;
  SepLsaAuditQueueInfo = (__int64)&SepLsaAuditQueueInfo;
  qword_140356C88 = (__int64)ExFreePool;
  qword_140356BC8 = (__int64)&qword_140356BC0;
  qword_140356BC0 = (__int64)&qword_140356BC0;
  qword_140356C80 = (__int64)SepAdtDetermineInsertQueue;
  word_140356C90 = 3;
  ExInitializeResourceLite(&stru_140356AD0);
  qword_140356B88 = (__int64)ExFreePool;
  qword_140356AB8 = (__int64)&SepLsaDeletedLogonQueueInfo;
  SepLsaDeletedLogonQueueInfo = (__int64)&SepLsaDeletedLogonQueueInfo;
  result = 1LL;
  word_140356B90 = 1;
  return result;
}
