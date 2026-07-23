/*
 * XREFs of SepInitializeWorkList @ 0x1407A3924
 * Callers:
 *     SepInitializationPhase0 @ 0x1407A24C4 (SepInitializationPhase0.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14000E840 (ExInitializeResourceLite.c)
 */

__int64 SepInitializeWorkList()
{
  __int64 result; // rax

  ExInitializeResourceLite(&stru_140329870);
  qword_1403298D8 = 0LL;
  qword_140329858 = (__int64)&SepLsaAuditQueueInfo;
  SepLsaAuditQueueInfo = (__int64)&SepLsaAuditQueueInfo;
  qword_140329928 = (__int64)ExFreePool;
  qword_140329868 = (__int64)&qword_140329860;
  qword_140329860 = (__int64)&qword_140329860;
  qword_140329920 = (__int64)SepAdtDetermineInsertQueue;
  word_140329930 = 3;
  ExInitializeResourceLite(&stru_140329760);
  qword_140329818 = (__int64)ExFreePool;
  qword_140329748 = (__int64)&SepLsaDeletedLogonQueueInfo;
  SepLsaDeletedLogonQueueInfo = (__int64)&SepLsaDeletedLogonQueueInfo;
  result = 1LL;
  word_140329820 = 1;
  return result;
}
