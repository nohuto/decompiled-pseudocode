/*
 * XREFs of VidSchSetNodePowerState @ 0x1C0013610
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x1C000ABF0 (VidSchiUpdateContextStatus.c)
 */

void __fastcall VidSchSetNodePowerState(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
  __int64 v5; // rdi
  char v6; // si
  char v7; // bp
  __int64 *v8; // rdi
  __int64 v9; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v5 = *(_QWORD *)(a1 + 8LL * (a3 + (unsigned int)*(unsigned __int8 *)(a2 + a1 + 64)) + 408);
  if ( (_BYTE)a4 )
  {
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 136) )
    {
      v6 = 1;
    }
    else
    {
      v6 = 0;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1856), &LockHandle);
    }
    v7 = 0;
    *(_BYTE *)(v5 + 2792) = 1;
    v8 = (__int64 *)(v5 + 2496);
    while ( (__int64 *)*v8 != v8 )
    {
      v9 = *v8;
      *(_DWORD *)(*v8 + 168) &= ~0x80u;
      v7 = 1;
      VidSchiUpdateContextStatus(v9 - 8, (_QWORD *)5, 10110LL, a4);
    }
    if ( !v6 )
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v7 )
    {
      *(_QWORD *)(a1 + 1368) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)(a1 + 1336), 0, 0);
    }
  }
  else
  {
    *(_BYTE *)(v5 + 2792) = 0;
  }
}
