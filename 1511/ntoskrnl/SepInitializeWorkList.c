/*
 * XREFs of SepInitializeWorkList @ 0x14075CD38
 * Callers:
 *     SepInitializationPhase0 @ 0x14075B9D8 (SepInitializationPhase0.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14009E260 (ExInitializeResourceLite.c)
 */

__int64 SepInitializeWorkList()
{
  __int64 result; // rax

  ExInitializeResourceLite(&stru_1403068B0);
  qword_140306918 = 0LL;
  qword_140306898 = (__int64)&SepLsaAuditQueueInfo;
  SepLsaAuditQueueInfo = (__int64)&SepLsaAuditQueueInfo;
  qword_140306968 = (__int64)ExFreePool;
  qword_1403068A8 = (__int64)&qword_1403068A0;
  qword_1403068A0 = (__int64)&qword_1403068A0;
  qword_140306960 = (__int64)SepAdtDetermineInsertQueue;
  word_140306970 = 3;
  ExInitializeResourceLite(&stru_1403067B0);
  qword_140306868 = (__int64)ExFreePool;
  qword_140306798 = (__int64)&SepLsaDeletedLogonQueueInfo;
  SepLsaDeletedLogonQueueInfo = (__int64)&SepLsaDeletedLogonQueueInfo;
  result = 1LL;
  word_140306870 = 1;
  return result;
}
