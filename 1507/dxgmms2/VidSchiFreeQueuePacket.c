/*
 * XREFs of VidSchiFreeQueuePacket @ 0x1C0006730
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0005320 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchiCreateContextInternal @ 0x1C00062E4 (VidSchiCreateContextInternal.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C001B2A8 (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchWaitForSingleSyncObject @ 0x1C001D890 (VidSchWaitForSingleSyncObject.c)
 *     VidSchEnqueueCpuEvent @ 0x1C0077DB0 (VidSchEnqueueCpuEvent.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiFreeQueuePacket(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 *v5; // rbx
  KSPIN_LOCK *v6; // rbp
  __int64 *v7; // rcx
  __int64 **v8; // rax
  _DWORD *v9; // rdi
  __int64 **v10; // rsi
  __int64 ***v11; // rax
  __int64 *v12; // rbx
  _QWORD *v13; // rax
  __int64 *v14; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v16; // [rsp+38h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE v17; // [rsp+50h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  if ( !*(_DWORD *)(a2 + 48) && (*(_QWORD *)(a2 + 592) || *(_QWORD *)(a2 + 248)) )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v4, a2);
    v13[3] = 281LL;
    v13[4] = 2560LL;
    v13[5] = a2;
    v13[6] = *(_QWORD *)(a2 + 592);
    v13[7] = *(_QWORD *)(a2 + 248);
    WdLogEvent5_WdCriticalError(v13);
    JUMPOUT(0x1C000D9B1LL);
  }
  v5 = (__int64 *)(a2 + 8);
  *(_QWORD *)(a2 + 56) = MEMORY[0xFFFFF78000000320];
  v6 = (KSPIN_LOCK *)(v4 + 1880);
  *(_DWORD *)(a2 + 52) = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1880), &LockHandle);
  v7 = (__int64 *)*v5;
  v8 = (__int64 **)v5[1];
  if ( *(__int64 **)(*v5 + 8) != v5 || *v8 != v5 )
    __fastfail(3u);
  *v8 = v7;
  v7[1] = (__int64)v8;
  if ( a1 != -752 )
    --*(_DWORD *)(a1 + 752);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v9 = (_DWORD *)(a1 + 728);
  v10 = (__int64 **)(a1 + 712);
  KeAcquireInStackQueuedSpinLock(v6, &v16);
  v11 = (__int64 ***)v10[1];
  *v5 = (__int64)v10;
  v5[1] = (__int64)v11;
  if ( *v11 != v10 )
    __fastfail(3u);
  *v11 = (__int64 **)v5;
  v10[1] = v5;
  if ( v9 )
    ++*v9;
  KeReleaseInStackQueuedSpinLock(&v16);
  while ( 1 )
  {
    v12 = 0LL;
    KeAcquireInStackQueuedSpinLock(v6, &v17);
    if ( *v10 != (__int64 *)v10 && *v9 > 0x10u )
    {
      v12 = *v10;
      v14 = (__int64 *)**v10;
      if ( (__int64 **)(*v10)[1] != v10 || (__int64 *)v14[1] != v12 )
        __fastfail(3u);
      *v10 = v14;
      v14[1] = (__int64)v10;
      --*v9;
    }
    KeReleaseInStackQueuedSpinLock(&v17);
    if ( !v12 )
      break;
    ExFreePoolWithTag(v12 - 1, 0);
  }
}
