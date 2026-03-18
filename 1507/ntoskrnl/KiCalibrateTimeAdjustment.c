/*
 * XREFs of KiCalibrateTimeAdjustment @ 0x1403F283C
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     KeInsertQueueDpc @ 0x1400A4880 (KeInsertQueueDpc.c)
 *     KeRemoveQueueDpc @ 0x14010C998 (KeRemoveQueueDpc.c)
 *     KiPollFreezeExecution @ 0x1401318D4 (KiPollFreezeExecution.c)
 *     RtlWriteAcquireTickLock @ 0x140139E40 (RtlWriteAcquireTickLock.c)
 *     RtlWriteReleaseTickLock @ 0x140139F44 (RtlWriteReleaseTickLock.c)
 *     KeRebaselineInterruptTime @ 0x14014D970 (KeRebaselineInterruptTime.c)
 *     RtlEnlargedUnsignedDivide @ 0x14014D994 (RtlEnlargedUnsignedDivide.c)
 *     KiUpdateSystemTime @ 0x140155160 (KiUpdateSystemTime.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

ULONG_PTR __fastcall KiCalibrateTimeAdjustment(ULONG_PTR Argument)
{
  struct _KPRCB *CurrentPrcb; // r14
  bool v3; // r15
  __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  unsigned int v8; // r11d
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rcx
  __int64 p_TimerTable; // rax
  unsigned __int64 v15; // rbx
  ULONG_PTR result; // rax
  __int64 v17; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  ULARGE_INTEGER Dividend; // [rsp+30h] [rbp-68h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-60h] BYREF
  __int64 v21; // [rsp+40h] [rbp-58h]
  __int64 v22; // [rsp+48h] [rbp-50h]
  LARGE_INTEGER v23; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v24; // [rsp+58h] [rbp-40h]
  LARGE_INTEGER *v25; // [rsp+60h] [rbp-38h] BYREF
  int v26; // [rsp+68h] [rbp-30h]
  int v27; // [rsp+6Ch] [rbp-2Ch]
  int v28; // [rsp+90h] [rbp-8h]

  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->Number == *(_DWORD *)(Argument + 4) )
  {
    _disable();
    v4 = *(_QWORD *)(Argument + 8);
    v3 = (v28 & 0x200) != 0;
    v21 = v4;
    v5 = v4 + MEMORY[0xFFFFF78000000008];
    v22 = v4 + MEMORY[0xFFFFF78000000008];
    KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( *(_BYTE *)Argument )
    {
      v6 = (unsigned int)v4 * (unsigned __int64)(unsigned int)PerformanceFrequency.HighPart;
      v7 = PerformanceFrequency.LowPart * (unsigned __int64)HIDWORD(v21);
      Dividend.LowPart = v6 + v7 + (((unsigned int)v4 * (unsigned __int64)PerformanceFrequency.LowPart) >> 32);
      Dividend.HighPart = ((v6 + v7 + (((unsigned int)v4 * (unsigned __int64)PerformanceFrequency.LowPart) >> 32)) >> 32)
                        + PerformanceFrequency.HighPart * HIDWORD(v21);
      *(_DWORD *)(Argument + 20) = RtlEnlargedUnsignedDivide(Dividend, v6, &Dividend.HighPart);
      Dividend.LowPart = v8;
      *(_DWORD *)(Argument + 16) = Dividend.QuadPart / 0x989680;
      *(_QWORD *)(Argument + 16) += v9;
    }
    v24 = v5 / KeMaximumIncrement;
    v10 = *(_QWORD *)(Argument + 8);
    KiTickOffset = KeMaximumIncrement - v5 % KeMaximumIncrement;
    MEMORY[0xFFFFF780000003B0] += v10;
    LODWORD(v21) = v5 % KeMaximumIncrement;
    if ( MEMORY[0xFFFFF780000003B0] < 0 )
      __fastfail(5u);
    RtlWriteAcquireTickLock((signed __int64 *)0xFFFFF78000000340LL);
    MEMORY[0xFFFFF78000000010] = HIDWORD(v22);
    MEMORY[0xFFFFF78000000008] = v5;
    MEMORY[0xFFFFF78000000328] = HIDWORD(v24);
    MEMORY[0xFFFFF78000000320] = v11;
    MEMORY[0xFFFFF78000000350] = v12;
    KiInterruptTimeErrorAccumulator = 0LL;
    RtlWriteReleaseTickLock(v13);
    *(_DWORD *)(Argument + 28) = 0;
  }
  else
  {
    _disable();
    v3 = (v28 & 0x200) != 0;
    do
      KiPollFreezeExecution();
    while ( *(_DWORD *)(Argument + 28) );
  }
  if ( KiSerializeTimerExpiration )
  {
    if ( !CurrentPrcb->ClockOwner )
      goto LABEL_16;
    p_TimerTable = KiProcessorBlock[0] + 13824;
  }
  else
  {
    p_TimerTable = (__int64)&CurrentPrcb->TimerTable;
  }
  if ( p_TimerTable )
  {
    v15 = MEMORY[0xFFFFF78000000008];
    KeRemoveQueueDpc(&CurrentPrcb->TimerExpirationDpc);
    KeInsertQueueDpc(&CurrentPrcb->TimerExpirationDpc, (PVOID)((unsigned int)(v15 >> 18) - 256), 0LL);
  }
LABEL_16:
  result = MEMORY[0xFFFFF78000000320];
  CurrentPrcb->LastTick = MEMORY[0xFFFFF78000000320];
  v17 = *(_QWORD *)(Argument + 8);
  if ( *(_BYTE *)Argument )
  {
    HalCalibratePerformanceCounter(Argument + 24, *(_QWORD *)(Argument + 16));
    result = KeRebaselineInterruptTime().QuadPart;
    if ( (xmmword_1403D1290 & 0x8000) != 0 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v27 = 0;
      v23 = PerformanceCounter;
      v26 = 8;
      v25 = &v23;
      result = (ULONG_PTR)EtwTraceKernelEvent((int)&v25, 1, 0x80008000, 0x1232u, 4200450);
    }
  }
  if ( CurrentPrcb->ClockOwner )
    result = KiUpdateSystemTime(v17, 0LL, 3);
  if ( v3 )
    _enable();
  return result;
}
