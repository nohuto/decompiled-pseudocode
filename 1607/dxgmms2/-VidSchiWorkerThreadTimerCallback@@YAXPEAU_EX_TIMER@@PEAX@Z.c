/*
 * XREFs of ?VidSchiWorkerThreadTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C0010DC0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiCheckYieldExitCondition @ 0x1C0010EBC (VidSchiCheckYieldExitCondition.c)
 *     Template_p @ 0x1C001E0AC (Template_p.c)
 */

void __fastcall VidSchiWorkerThreadTimerCallback(struct _EX_TIMER *a1, char *a2)
{
  LARGE_INTEGER v3; // rbp
  char v4; // di
  __int64 v5; // rsi
  __int64 v6; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  char v8; // [rsp+68h] [rbp+10h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp+18h] BYREF

  v3 = KeQueryPerformanceCounter(&PerformanceFrequency);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)a2 + 232, &LockHandle);
  if ( v3.QuadPart >= *((_QWORD *)a2 + 20) )
  {
    ExCancelTimer(*((_QWORD *)a2 + 19), 0LL);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_p(v6, &EventYieldCancelExpirationTimer);
    *((_QWORD *)a2 + 20) = 0LL;
  }
  else
  {
    v4 = 0;
    v5 = 0LL;
    if ( *((_DWORD *)a2 + 15) )
    {
      do
      {
        VidSchiCheckYieldExitCondition(*(struct _VIDSCH_NODE **)&a2[8 * v5 + 408]);
        if ( v8 )
          v4 = 1;
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (unsigned int)v5 < *((_DWORD *)a2 + 15) );
      if ( v4 )
      {
        *((_QWORD *)a2 + 171) = MEMORY[0xFFFFF78000000320];
        KeSetEvent((PRKEVENT)(a2 + 1336), 0, 0);
      }
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
