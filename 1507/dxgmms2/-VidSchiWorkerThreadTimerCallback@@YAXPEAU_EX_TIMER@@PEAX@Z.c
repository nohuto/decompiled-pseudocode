/*
 * XREFs of ?VidSchiWorkerThreadTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C001BDC0
 * Callers:
 *     <none>
 * Callees:
 *     Template_p @ 0x1C0006E98 (Template_p.c)
 *     VidSchiCheckYieldExitCondition @ 0x1C0015754 (VidSchiCheckYieldExitCondition.c)
 */

void __fastcall VidSchiWorkerThreadTimerCallback(struct _EX_TIMER *a1, char *a2)
{
  LARGE_INTEGER v3; // rbp
  __int64 v4; // rcx
  __int64 v5; // r8
  char v6; // di
  __int64 v7; // rsi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  char v9; // [rsp+68h] [rbp+10h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp+18h] BYREF

  v3 = KeQueryPerformanceCounter(&PerformanceFrequency);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)a2 + 234, &LockHandle);
  if ( v3.QuadPart < *((_QWORD *)a2 + 19) )
  {
    v6 = 0;
    v7 = 0LL;
    if ( *((_DWORD *)a2 + 14) )
    {
      do
      {
        VidSchiCheckYieldExitCondition(*(_QWORD *)&a2[8 * v7 + 368], v3.QuadPart, &v9);
        if ( v9 )
          v6 = 1;
        v7 = (unsigned int)(v7 + 1);
      }
      while ( (unsigned int)v7 < *((_DWORD *)a2 + 14) );
      if ( v6 )
      {
        *((_QWORD *)a2 + 194) = MEMORY[0xFFFFF78000000320];
        KeSetEvent((PRKEVENT)(a2 + 1520), 0, 0);
      }
    }
  }
  else
  {
    ExCancelTimer(*((_QWORD *)a2 + 18), 0LL);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_p(v4, &EventYieldCancelExpirationTimer, v5, *((_QWORD *)a2 + 2));
    *((_QWORD *)a2 + 19) = 0LL;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
