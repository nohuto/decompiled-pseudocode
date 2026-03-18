/*
 * XREFs of VerifierFsRtlPrivateLock @ 0x1406C0614
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlPrivateLock @ 0x1400CD704 (FsRtlPrivateLock.c)
 */

BOOLEAN __fastcall VerifierFsRtlPrivateLock(
        FILE_LOCK *a1,
        struct _FILE_OBJECT *a2,
        LARGE_INTEGER *a3,
        LARGE_INTEGER *a4,
        struct _KPROCESS *a5,
        ULONG Key,
        BOOLEAN FailImmediately,
        BOOLEAN ExclusiveLock,
        struct _IO_STATUS_BLOCK *a9,
        IRP *a10,
        void *a11,
        BOOLEAN AlreadySynchronized)
{
  return pXdvFsRtlPrivateLock(
           a1,
           a2,
           a3,
           a4,
           a5,
           Key,
           FailImmediately,
           ExclusiveLock,
           a9,
           a10,
           a11,
           AlreadySynchronized);
}
