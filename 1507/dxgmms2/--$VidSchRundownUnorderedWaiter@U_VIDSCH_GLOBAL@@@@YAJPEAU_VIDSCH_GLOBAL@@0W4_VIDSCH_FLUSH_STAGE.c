/*
 * XREFs of ??$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE@@_NP6AX0@Z@Z @ 0x1C001B6DC
 * Callers:
 *     VidSchFlushAdapter @ 0x1C00780D0 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiRundownUnorderedWaiterDevice @ 0x1C0007FE8 (VidSchiRundownUnorderedWaiterDevice.c)
 */

__int64 __fastcall VidSchRundownUnorderedWaiter<_VIDSCH_GLOBAL>(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // edi
  __int64 v5; // rdx
  _QWORD **v6; // rsi
  _QWORD *i; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  if ( a3 != 3 && *(_DWORD *)(a1 + 932) )
  {
    if ( a3 < 4 )
    {
      return (unsigned int)-2147483631;
    }
    else if ( *(_DWORD *)(a1 + 932) )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 1872), &LockHandle);
      v6 = (_QWORD **)(a1 + 200);
      for ( i = *v6; i != v6; i = (_QWORD *)*i )
        VidSchiRundownUnorderedWaiterDevice((__int64)(i - 11), v5);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
  }
  return v3;
}
