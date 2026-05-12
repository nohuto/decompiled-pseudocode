/*
 * XREFs of RaidResumeAndRestartUnitQueue @ 0x1C00321AC
 * Callers:
 *     RaUnitStartResetIo @ 0x1C00315DC (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C0032710 (RaidUnitCompleteResetRequest.c)
 * Callees:
 *     RaidRestartIoQueue @ 0x1C0009DF8 (RaidRestartIoQueue.c)
 *     DbgLogRequest @ 0x1C0011B14 (DbgLogRequest.c)
 *     RaidResumeIoQueue @ 0x1C0011B90 (RaidResumeIoQueue.c)
 */

__int64 __fastcall RaidResumeAndRestartUnitQueue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  unsigned __int8 v7; // dl
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v5 = (unsigned int)RaidResumeIoQueue(a1 + 384, a2, a3, a4);
  v6 = *(_QWORD *)(a1 + 24);
  if ( v6 )
    v7 = *(_BYTE *)(v6 + 56);
  else
    v7 = -1;
  if ( (qword_1C0044010 & 0x200) != 0 )
    DbgLogRequest(
      *(_QWORD *)(a1 + 24),
      5,
      retaddr,
      (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 88)) | (unsigned __int64)(((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 88)) | (((unsigned __int8)*(_DWORD *)(a1 + 88) | (v7 << 8)) << 8)) << 8),
      *(int *)(a1 + 428),
      v5,
      0LL);
  if ( (_DWORD)v5 )
    RaidRestartIoQueue(a1);
  return (unsigned int)v5;
}
