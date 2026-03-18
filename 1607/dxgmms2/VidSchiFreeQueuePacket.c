/*
 * XREFs of VidSchiFreeQueuePacket @ 0x1C000E270
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0007120 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000CF4C (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiCreateContextInternal @ 0x1C000E6D8 (VidSchiCreateContextInternal.c)
 *     VidSchEnqueueCpuEvent @ 0x1C0040000 (VidSchEnqueueCpuEvent.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C0007050 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x1C000E3F8 (VidSchiInterlockedRemoveEntryList.c)
 */

void __fastcall VidSchiFreeQueuePacket(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r15
  _QWORD *v7; // rsi
  KSPIN_LOCK *v8; // r15
  _QWORD *v9; // rax
  __int64 **v10; // rsi
  __int64 *v11; // rbx
  __int64 v12; // rax
  _QWORD *v13; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v15; // [rsp+38h] [rbp-30h] BYREF

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  if ( !*(_DWORD *)(a2 + 48) && (*(_QWORD *)(a2 + 600) || *(_QWORD *)(a2 + 256)) )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2, a3, a4);
    v13[3] = 281LL;
    v13[4] = 2560LL;
    v13[5] = a2;
    v13[6] = *(_QWORD *)(a2 + 600);
    v13[7] = *(_QWORD *)(a2 + 256);
    WdLogEvent5_WdCriticalError(v13);
    JUMPOUT(0x1C001B3C3LL);
  }
  v7 = (_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 56) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a2 + 52) = 0;
  v8 = (KSPIN_LOCK *)(v6 + 1864);
  VidSchiInterlockedRemoveEntryList(v8, a2 + 8, a1 + 776);
  if ( (*(_DWORD *)(a2 + 64) & 0x40) != 0 )
  {
    VidSchiInterlockedInsertTailList(v8, a1 + 736, v7, (_DWORD *)(a1 + 752));
  }
  else
  {
    KeAcquireInStackQueuedSpinLock(v8, &LockHandle);
    v9 = *(_QWORD **)(a1 + 720);
    if ( *v9 != a1 + 712 )
      __fastfail(3u);
    *v7 = a1 + 712;
    v7[1] = v9;
    *v9 = v7;
    *(_QWORD *)(a1 + 720) = v7;
    if ( a1 != -728 )
      ++*(_DWORD *)(a1 + 728);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  if ( (*(_DWORD *)(a2 + 64) & 0x40) == 0 )
  {
    v10 = (__int64 **)(a1 + 712);
    while ( 1 )
    {
      v11 = 0LL;
      KeAcquireInStackQueuedSpinLock(v8, &v15);
      if ( *v10 != (__int64 *)v10 && *(_DWORD *)(a1 + 728) > 0x10u )
      {
        v11 = *v10;
        v12 = **v10;
        if ( (__int64 **)(*v10)[1] != v10 || *(__int64 **)(v12 + 8) != v11 )
          __fastfail(3u);
        *v10 = (__int64 *)v12;
        *(_QWORD *)(v12 + 8) = v10;
        --*(_DWORD *)(a1 + 728);
      }
      KeReleaseInStackQueuedSpinLock(&v15);
      if ( !v11 )
        break;
      ExFreePoolWithTag(v11 - 1, 0);
    }
  }
}
