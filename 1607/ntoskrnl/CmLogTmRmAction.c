/*
 * XREFs of CmLogTmRmAction @ 0x1404DA104
 * Callers:
 *     CmKtmNotification @ 0x1404D9B64 (CmKtmNotification.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     CmpTransWriteLog @ 0x1404A1ACC (CmpTransWriteLog.c)
 *     HvBufferCheckSum @ 0x1404A1D5C (HvBufferCheckSum.c)
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
  v10[0] = HvBufferCheckSum((__int64)v10, 0x30u);
  result = CmpTransWriteLog(a1, (__int64)v10, 0x30u, 2u, &plsnFlush);
  if ( result >= 0 )
    return ClfsFlushToLsn(*(PVOID *)(a1 + 96), &plsnFlush, &plsnLastFlushed);
  return result;
}
