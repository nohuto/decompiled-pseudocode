/*
 * XREFs of ?VidSchPostSignalCrossAdapter@@YAXPEAUVIDSCH_SYNC_OBJECT_CROSS_ADAPTER@@@Z @ 0x1C001B850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidSchPostSignalCrossAdapter(struct VIDSCH_SYNC_OBJECT_CROSS_ADAPTER *a1)
{
  __int64 *v2; // rdx
  signed __int32 v3; // eax
  signed __int32 v4; // ett
  __int64 *v5; // rax
  __int64 v6; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*((_QWORD *)a1 + 1) + 2624LL), &LockHandle);
  v2 = (__int64 *)((char *)a1 + 136);
  if ( !*((_QWORD *)a1 + 17) )
  {
    _m_prefetchw((char *)a1 + 32);
    v3 = *((_DWORD *)a1 + 8);
    while ( v3 )
    {
      v4 = v3;
      v3 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 8, v3 + 1, v3);
      if ( v4 == v3 )
      {
        v5 = (__int64 *)(*((_QWORD *)a1 + 1) + 2608LL);
        v6 = *v5;
        *v2 = *v5;
        *((_QWORD *)a1 + 18) = v5;
        if ( *(__int64 **)(v6 + 8) != v5 )
          __fastfail(3u);
        *(_QWORD *)(v6 + 8) = v2;
        *v5 = (__int64)v2;
        ++*(_DWORD *)(*((_QWORD *)a1 + 1) + 2632LL);
        *(_QWORD *)(*((_QWORD *)a1 + 1) + 1328LL) = MEMORY[0xFFFFF78000000320];
        KeSetEvent((PRKEVENT)(*((_QWORD *)a1 + 1) + 1296LL), 0, 0);
        break;
      }
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
