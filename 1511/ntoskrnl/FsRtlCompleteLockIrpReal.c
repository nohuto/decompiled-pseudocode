/*
 * XREFs of FsRtlCompleteLockIrpReal @ 0x1400CED3C
 * Callers:
 *     FsRtlProcessFileLock @ 0x1400CCCBC (FsRtlProcessFileLock.c)
 *     FsRtlPrivateFastUnlockAll @ 0x1400CD16C (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateLock @ 0x1400CD704 (FsRtlPrivateLock.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x1400CEB78 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlUninitializeFileLock @ 0x1400F2924 (FsRtlUninitializeFileLock.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1401ACB60 (FsRtlPrivateCancelFileLockIrp.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall FsRtlCompleteLockIrpReal(
        __int64 (__fastcall *a1)(__int64, __int64),
        __int64 a2,
        __int64 a3,
        int a4,
        _DWORD *a5,
        __int64 a6)
{
  _DWORD *result; // rax

  if ( a1 )
  {
    if ( a6 )
      *(_QWORD *)(a6 + 120) = 0LL;
    *(_DWORD *)(a3 + 48) = a4;
    result = (_DWORD *)a1(a2, a3);
    *a5 = (_DWORD)result;
  }
  else
  {
    LOBYTE(a2) = 1;
    *(_DWORD *)(a3 + 48) = a4;
    pIofCompleteRequest(a3, a2);
    result = a5;
    *a5 = a4;
  }
  return result;
}
