/*
 * XREFs of ?VidSchiWorkerThreadTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C0012F70
 * Callers:
 *     <none>
 * Callees:
 *     Template_p @ 0x1C001CD38 (Template_p.c)
 *     Template_pq @ 0x1C001D234 (Template_pq.c)
 */

void __fastcall VidSchiWorkerThreadTimerCallback(struct _EX_TIMER *a1, char *a2)
{
  LARGE_INTEGER v3; // rbp
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // r8
  char v7; // dl
  __int64 v8; // rsi
  __int64 v9; // r9
  __int64 v10; // rcx
  LARGE_INTEGER v11; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp+10h] BYREF

  v3 = KeQueryPerformanceCounter(&PerformanceFrequency);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)a2 + 228, &LockHandle);
  if ( v3.QuadPart < *((_QWORD *)a2 + 19) )
  {
    v7 = 0;
    v8 = 0LL;
    if ( *((_DWORD *)a2 + 14) )
    {
      do
      {
        v9 = *(_QWORD *)&a2[8 * v8 + 376];
        if ( *(_BYTE *)(v9 + 1896) )
        {
          v10 = *(_QWORD *)(v9 + 1880);
          if ( v10 )
          {
            v11.QuadPart = *(_QWORD *)(v9 + 1888) + v10;
            if ( v3.QuadPart > (unsigned __int64)v11.QuadPart )
            {
              *(_QWORD *)(v9 + 1880) = 0LL;
              *(_BYTE *)(v9 + 1896) = 0;
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))Template_pq)(
                  (LARGE_INTEGER)v11.QuadPart,
                  &EventYieldStopNode,
                  v4,
                  *(_QWORD *)(*(_QWORD *)(v9 + 24) + 16LL),
                  *(unsigned __int16 *)(v9 + 4));
              v7 = 1;
            }
          }
        }
        v8 = (unsigned int)(v8 + 1);
      }
      while ( (unsigned int)v8 < *((_DWORD *)a2 + 14) );
      if ( v7 )
      {
        *((_QWORD *)a2 + 167) = MEMORY[0xFFFFF78000000320];
        KeSetEvent((PRKEVENT)(a2 + 1304), 0, 0);
      }
    }
  }
  else
  {
    ExCancelTimer(*((_QWORD *)a2 + 18), 0LL);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_p(v5, &EventYieldCancelExpirationTimer, v6, *((_QWORD *)a2 + 2));
    *((_QWORD *)a2 + 19) = 0LL;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
