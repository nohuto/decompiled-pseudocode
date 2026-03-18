/*
 * XREFs of FsRtlCompleteLockIrpReal @ 0x140106380
 * Callers:
 *     FsRtlProcessFileLock @ 0x140103F60 (FsRtlProcessFileLock.c)
 *     FsRtlPrivateFastUnlockAll @ 0x140104598 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateLock @ 0x14010499C (FsRtlPrivateLock.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x140106130 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlUninitializeFileLock @ 0x14012EC68 (FsRtlUninitializeFileLock.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1401E2A7C (FsRtlPrivateCancelFileLockIrp.c)
 * Callees:
 *     <none>
 */

NTSTATUS *__fastcall FsRtlCompleteLockIrpReal(
        __int64 (__fastcall *a1)(__int64, IRP *),
        __int64 a2,
        IRP *a3,
        NTSTATUS a4,
        NTSTATUS *a5,
        __int64 a6)
{
  NTSTATUS *result; // rax

  if ( a1 )
  {
    if ( a6 )
      *(_QWORD *)(a6 + 120) = 0LL;
    a3->IoStatus.Status = a4;
    result = (NTSTATUS *)a1(a2, a3);
    *a5 = (int)result;
  }
  else
  {
    a3->IoStatus.Status = a4;
    pIofCompleteRequest(a3, 1);
    result = a5;
    *a5 = a4;
  }
  return result;
}
