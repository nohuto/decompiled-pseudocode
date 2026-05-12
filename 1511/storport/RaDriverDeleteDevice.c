/*
 * XREFs of RaDriverDeleteDevice @ 0x1C0027FA8
 * Callers:
 *     RaidDeleteAdapter @ 0x1C0025F90 (RaidDeleteAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaDriverDeleteDevice(_QWORD *a1)
{
  _QWORD *v1; // rbx
  KSPIN_LOCK *DriverObjectExtension; // rax
  KSPIN_LOCK *v3; // rdi
  __int64 v5; // rcx
  _QWORD *v6; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1 + 8;
  if ( a1[8] && a1[9] )
  {
    DriverObjectExtension = (KSPIN_LOCK *)IoGetDriverObjectExtension(*(PDRIVER_OBJECT *)(a1[1] + 8LL), DriverEntry);
    v3 = DriverObjectExtension;
    if ( !DriverObjectExtension )
      return 3221225701LL;
    KeAcquireInStackQueuedSpinLock(DriverObjectExtension + 10, &LockHandle);
    v5 = *v1;
    v6 = (_QWORD *)v1[1];
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (_QWORD *)*v6 != v1 )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    --*((_DWORD *)v3 + 18);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  return 0LL;
}
