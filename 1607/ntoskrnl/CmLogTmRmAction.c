/*
 * XREFs of CmLogTmRmAction @ 0x1404BD708
 * Callers:
 *     CmKtmNotification @ 0x1404BD168 (CmKtmNotification.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpTransWriteLog @ 0x140519ED8 (CmpTransWriteLog.c)
 *     HvBufferCheckSum @ 0x14051A168 (HvBufferCheckSum.c)
 */

NTSTATUS __fastcall CmLogTmRmAction(__int64 a1, __int64 a2, int a3)
{
  __int128 v6; // xmm0
  NTSTATUS result; // eax
  CLFS_LSN plsnFlush; // [rsp+30h] [rbp-68h] BYREF
  CLFS_LSN plsnLastFlushed; // [rsp+38h] [rbp-60h] BYREF
  int v10[12]; // [rsp+40h] [rbp-58h] BYREF

  if ( !*(_QWORD *)(a1 + 96) )
    return 0;
  memset(v10, 0, sizeof(v10));
  v6 = *(_OWORD *)(a2 + 88);
  v10[3] = 0;
  v10[1] = 48;
  *(_OWORD *)&v10[4] = v6;
  v10[2] = a3;
  v10[0] = HvBufferCheckSum(v10, 48LL);
  result = CmpTransWriteLog(a1, (int)v10, 48, 2, &plsnFlush);
  if ( result >= 0 )
    return ClfsFlushToLsn(*(PVOID *)(a1 + 96), &plsnFlush, &plsnLastFlushed);
  return result;
}
