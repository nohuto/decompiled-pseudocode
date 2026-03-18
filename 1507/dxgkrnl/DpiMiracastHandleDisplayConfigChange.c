/*
 * XREFs of DpiMiracastHandleDisplayConfigChange @ 0x1C0024458
 * Callers:
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C00CD224 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiMiracastHandleDisplayConfigChange(__int64 a1, int a2, int a3, int a4, int a5)
{
  __int64 v5; // rbx
  __int64 v9; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 )
  {
    v5 = *(_QWORD *)(a1 + 64);
    if ( v5 )
    {
      if ( *(_DWORD *)(v5 + 16) == 1953656900 && *(_DWORD *)(v5 + 20) == 2 )
      {
        KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
        v9 = *(_QWORD *)(v5 + 1856);
        if ( v9 )
        {
          if ( !*(_DWORD *)(v9 + 560) )
            *(_DWORD *)(v9 + 560) = a2;
          *(_DWORD *)(*(_QWORD *)(v5 + 1856) + 564LL) = a2;
          *(_DWORD *)(*(_QWORD *)(v5 + 1856) + 568LL) = a3;
          *(_DWORD *)(*(_QWORD *)(v5 + 1856) + 572LL) = a4;
          *(_DWORD *)(*(_QWORD *)(v5 + 1856) + 576LL) = a5;
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
    }
  }
}
