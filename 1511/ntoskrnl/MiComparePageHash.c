/*
 * XREFs of MiComparePageHash @ 0x1401E5814
 * Callers:
 *     MiValidatePagefilePageHash @ 0x140108248 (MiValidatePagefilePageHash.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401CE7C4 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiComparePageHash(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rbx
  unsigned int v6; // esi
  unsigned __int64 v7; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v3 = a2;
  v6 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 232), &LockHandle);
  v7 = *(_QWORD *)(a1 + 216) + 4 * v3;
  v10 = MI_READ_PTE_LOCK_FREE((__int64 *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL));
  if ( (v10 & 1) != 0 )
  {
    if ( *(_DWORD *)v7 != a3 )
    {
      if ( (*(_BYTE *)(MI_GET_PFN_FROM_PTE((__int64)&v10) + 34) & 0x10) != 0 )
      {
        if ( !byte_1402FEE00 )
          v6 = -1073741761;
      }
      else
      {
        *(_DWORD *)v7 = a3;
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return v6;
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 0LL;
  }
}
