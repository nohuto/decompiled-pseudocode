/*
 * XREFs of PpmEventTracePreVetoAccounting @ 0x1401F2DEC
 * Callers:
 *     PpmEventPlatformVetoRundown @ 0x1401F2340 (PpmEventPlatformVetoRundown.c)
 *     PpmEventProcessorVetoRundown @ 0x1401F25D4 (PpmEventProcessorVetoRundown.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     RtlGetInterruptTimePrecise @ 0x1400351D0 (RtlGetInterruptTimePrecise.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall PpmEventTracePreVetoAccounting(
        PCEVENT_DESCRIPTOR EventDescriptor,
        struct _EVENT_DATA_DESCRIPTOR *a2,
        __int64 a3)
{
  unsigned int v6; // ebx
  _DWORD *PoolWithTag; // rdi
  KIRQL v8; // r12
  LARGE_INTEGER InterruptTimePrecise; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // r8
  int v14; // r10d
  __int64 v15; // r10
  struct _EVENT_DATA_DESCRIPTOR v16; // xmm0
  int v17; // [rsp+30h] [rbp-50h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-40h] BYREF
  int *v20; // [rsp+50h] [rbp-30h]
  int v21; // [rsp+58h] [rbp-28h]
  int v22; // [rsp+5Ch] [rbp-24h]
  _DWORD *v23; // [rsp+60h] [rbp-20h]
  int v24; // [rsp+68h] [rbp-18h]
  int v25; // [rsp+6Ch] [rbp-14h]

  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, EventDescriptor) )
    {
      if ( a3 )
      {
        v6 = *(_DWORD *)(a3 + 28);
        if ( v6 )
        {
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 20 * v6, 0x654D5050u);
          if ( PoolWithTag )
          {
            v8 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
            InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
            v10 = 0LL;
            v17 = 0;
            v11 = 0LL;
            v12 = v6;
            do
            {
              v13 = *(_QWORD *)(a3 + 32);
              v14 = *(_DWORD *)(v11 + v13 + 16);
              if ( v14 )
              {
                PoolWithTag[5 * v10] = v14;
                *(_QWORD *)&PoolWithTag[5 * v17 + 1] = *(_QWORD *)(v11 + v13 + 24);
                *(_QWORD *)&PoolWithTag[5 * v17 + 3] = *(_QWORD *)(v11 + v13 + 40);
                v15 = *(_QWORD *)(v11 + v13 + 32);
                if ( v15 )
                  *(_QWORD *)&PoolWithTag[5 * v17 + 3] += InterruptTimePrecise.QuadPart - v15;
                v10 = (unsigned int)++v17;
              }
              v11 += 64LL;
              --v12;
            }
            while ( v12 );
            KeReleaseSpinLock(&PpmIdleVetoLock, v8);
            v16 = *a2;
            v22 = 0;
            v25 = 0;
            v20 = &v17;
            UserData = v16;
            v21 = 4;
            v23 = PoolWithTag;
            v24 = 20 * v17;
            EtwWrite(PpmEtwHandle, EventDescriptor, 0LL, 3u, &UserData);
            ExFreePoolWithTag(PoolWithTag, 0x654D5050u);
          }
        }
      }
    }
  }
}
