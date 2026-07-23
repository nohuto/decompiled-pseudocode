/*
 * XREFs of MiObtainPagefileHashes @ 0x1401157EC
 * Callers:
 *     MiValidatePagefilePageHash @ 0x140115370 (MiValidatePagefilePageHash.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall MiObtainPagefileHashes(__int64 a1, unsigned int a2, unsigned int a3, _DWORD *a4)
{
  __int64 v4; // rbx
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = a2;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 232), &LockHandle);
  v8 = *(_QWORD *)(a1 + 216) + 4 * v4;
  if ( a3 )
  {
    v9 = a3;
    do
    {
      if ( (*(_BYTE *)(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 1) != 0 )
        *a4 = *(_DWORD *)v8;
      else
        *a4 = 0;
      v8 += 4LL;
      ++a4;
      --v9;
    }
    while ( v9 );
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
