/*
 * XREFs of FsRtlCompleteLockIrpReal @ 0x1401332E0
 * Callers:
 *     FsRtlPrivateFastUnlockAll @ 0x1400A9728 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x1400A9A4C (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlUninitializeFileLock @ 0x1400B1FCC (FsRtlUninitializeFileLock.c)
 *     FsRtlPrivateLock @ 0x1400C2A48 (FsRtlPrivateLock.c)
 *     FsRtlProcessFileLock @ 0x1401331B8 (FsRtlProcessFileLock.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1401B8CDC (FsRtlPrivateCancelFileLockIrp.c)
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
