/*
 * XREFs of VidSchHasReadyPackets @ 0x1C0026990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall VidSchHasReadyPackets(__int64 a1)
{
  char v2; // bl
  _QWORD **v3; // rdi
  _QWORD *i; // rcx
  _QWORD *j; // rdx
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1856), &LockHandle);
  v2 = 0;
  if ( *(_QWORD *)(a1 + 384) )
  {
LABEL_11:
    v2 = 1;
  }
  else
  {
    v3 = (_QWORD **)(a1 + 240);
    for ( i = *v3; i != v3; i = (_QWORD *)*i )
    {
      for ( j = (_QWORD *)*(i - 2); j != i - 2; j = (_QWORD *)*j )
      {
        v6 = j + 80;
        if ( (_QWORD *)*v6 != v6 )
        {
          v7 = (_QWORD *)*v6;
          if ( *((_DWORD *)v7 + 4) != 4 || (v7[29] & 1) != 0 )
            goto LABEL_11;
        }
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v2;
}
