/*
 * XREFs of VidSchiFreeQueuePacket @ 0x1C000F82C
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0008030 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000DD84 (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiCreateContextInternal @ 0x1C000F9D0 (VidSchiCreateContextInternal.c)
 *     VidSchEnqueueCpuEvent @ 0x1C00382C0 (VidSchEnqueueCpuEvent.c)
 * Callees:
 *     VidSchiInterlockedRemoveEntryList @ 0x1C000F96C (VidSchiInterlockedRemoveEntryList.c)
 */

void __fastcall VidSchiFreeQueuePacket(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbp
  __int64 *v7; // rbx
  KSPIN_LOCK *v8; // rbp
  _DWORD *v9; // rsi
  __int64 **v10; // rdi
  __int64 ***v11; // rax
  __int64 *v12; // rbx
  __int64 *v13; // rax
  _QWORD *v14; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v16; // [rsp+38h] [rbp-20h] BYREF

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  if ( !*(_DWORD *)(a2 + 48) && (*(_QWORD *)(a2 + 592) || *(_QWORD *)(a2 + 248)) )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2, a3, a4);
    v14[3] = 281LL;
    v14[4] = 2560LL;
    v14[5] = a2;
    v14[6] = *(_QWORD *)(a2 + 592);
    v14[7] = *(_QWORD *)(a2 + 248);
    WdLogEvent5_WdCriticalError(v14);
    JUMPOUT(0x1C001AA89LL);
  }
  *(_QWORD *)(a2 + 56) = MEMORY[0xFFFFF78000000320];
  v7 = (__int64 *)(a2 + 8);
  *(_DWORD *)(a2 + 52) = 0;
  v8 = (KSPIN_LOCK *)(v6 + 1832);
  VidSchiInterlockedRemoveEntryList(v8, a2 + 8, a1 + 752);
  v9 = (_DWORD *)(a1 + 728);
  v10 = (__int64 **)(a1 + 712);
  KeAcquireInStackQueuedSpinLock(v8, &LockHandle);
  v11 = (__int64 ***)v10[1];
  *v7 = (__int64)v10;
  v7[1] = (__int64)v11;
  if ( *v11 != v10 )
    __fastfail(3u);
  *v11 = (__int64 **)v7;
  v10[1] = v7;
  if ( v9 )
    ++*v9;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  while ( 1 )
  {
    v12 = 0LL;
    KeAcquireInStackQueuedSpinLock(v8, &v16);
    if ( *v10 != (__int64 *)v10 && *v9 > 0x10u )
    {
      v12 = *v10;
      v13 = (__int64 *)**v10;
      if ( (__int64 **)(*v10)[1] != v10 || (__int64 *)v13[1] != v12 )
        __fastfail(3u);
      *v10 = v13;
      v13[1] = (__int64)v10;
      --*v9;
    }
    KeReleaseInStackQueuedSpinLock(&v16);
    if ( !v12 )
      break;
    ExFreePoolWithTag(v12 - 1, 0);
  }
}
