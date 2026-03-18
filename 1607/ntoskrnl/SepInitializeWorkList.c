/*
 * XREFs of SepInitializeWorkList @ 0x1407A3924
 * Callers:
 *     SepInitializationPhase0 @ 0x1407A24C4 (SepInitializationPhase0.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14000ECC0 (ExInitializeResourceLite.c)
 */

__int64 SepInitializeWorkList()
{
  __int64 result; // rax

  ExInitializeResourceLite(&stru_140329840);
  qword_1403298A8 = 0LL;
  qword_140329828 = (__int64)&SepLsaAuditQueueInfo;
  SepLsaAuditQueueInfo = (__int64)&SepLsaAuditQueueInfo;
  qword_1403298F8 = (__int64)ExFreePool;
  qword_140329838 = (__int64)&qword_140329830;
  qword_140329830 = (__int64)&qword_140329830;
  qword_1403298F0 = (__int64)SepAdtDetermineInsertQueue;
  word_140329900 = 3;
  ExInitializeResourceLite(&stru_140329710);
  qword_1403297C8 = (__int64)ExFreePool;
  qword_1403296F8 = (__int64)&SepLsaDeletedLogonQueueInfo;
  SepLsaDeletedLogonQueueInfo = (__int64)&SepLsaDeletedLogonQueueInfo;
  result = 1LL;
  word_1403297D0 = 1;
  return result;
}
