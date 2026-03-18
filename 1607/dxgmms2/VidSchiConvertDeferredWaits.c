/*
 * XREFs of VidSchiConvertDeferredWaits @ 0x1C0010C34
 * Callers:
 *     VidSchSubmitCommand @ 0x1C0042B20 (VidSchSubmitCommand.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiConvertDeferredWaits(__int64 a1)
{
  __int64 **v2; // rdx
  __int64 *v3; // rcx
  __int64 v4; // rax
  __int64 *v5; // r8
  __int64 **v6; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 1856LL), &LockHandle);
  v2 = (__int64 **)(a1 + 696);
  while ( *v2 != (__int64 *)v2 )
  {
    v3 = *v2;
    v4 = **v2;
    if ( (__int64 **)(*v2)[1] != v2 || *(__int64 **)(v4 + 8) != v3 )
      __fastfail(3u);
    *v2 = (__int64 *)v4;
    v5 = v3;
    *(_QWORD *)(v4 + 8) = v2;
    *((_DWORD *)v3 + 8) &= ~0x10u;
    *v3 = 0LL;
    v3[1] = 0LL;
    --*(_DWORD *)(a1 + 804);
    v3[3] = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)v3 + 5) = 3;
    v6 = *(__int64 ***)(a1 + 688);
    if ( *v6 != (__int64 *)(a1 + 680) )
      __fastfail(3u);
    *v5 = a1 + 680;
    v5[1] = (__int64)v6;
    *v6 = v5;
    *(_QWORD *)(a1 + 688) = v5;
    ++*(_DWORD *)(a1 + 424);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
