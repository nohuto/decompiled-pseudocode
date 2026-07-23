/*
 * XREFs of MiComparePageHash @ 0x1401FB43C
 * Callers:
 *     MiValidatePagefilePageHash @ 0x140115370 (MiValidatePagefilePageHash.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiComparePageHash(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rbx
  unsigned int v6; // esi
  _DWORD *v7; // r9
  _DWORD *v9; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v3 = a2;
  v6 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 232), &LockHandle);
  v11 = MI_READ_PTE_LOCK_FREE((((unsigned __int64)(*(_QWORD *)(a1 + 216) + 4 * v3) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( (v11 & 1) != 0 )
  {
    if ( *v7 != a3 )
    {
      if ( (*(_BYTE *)(48 * MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v11) - 0x57FFFFFFFDELL) & 0x10) != 0 )
      {
        if ( !byte_140327240 )
          v6 = -1073741761;
      }
      else
      {
        *v9 = a3;
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
