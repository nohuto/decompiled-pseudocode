/*
 * XREFs of KiCalibrateTimeAdjustment @ 0x1403CB9E8
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     RtlWriteReleaseTickLock @ 0x14008419C (RtlWriteReleaseTickLock.c)
 *     RtlWriteAcquireTickLock @ 0x1400841A8 (RtlWriteAcquireTickLock.c)
 *     KeRemoveQueueDpc @ 0x140087610 (KeRemoveQueueDpc.c)
 *     KiPollFreezeExecution @ 0x1400B345C (KiPollFreezeExecution.c)
 *     KeInsertQueueDpc @ 0x1400D6140 (KeInsertQueueDpc.c)
 *     KeRebaselineInterruptTime @ 0x1401138DC (KeRebaselineInterruptTime.c)
 *     RtlEnlargedUnsignedDivide @ 0x140113900 (RtlEnlargedUnsignedDivide.c)
 *     KiSelectActiveTimerTable @ 0x14012AB58 (KiSelectActiveTimerTable.c)
 *     KiUpdateSystemTime @ 0x140132D8C (KiUpdateSystemTime.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

ULONG_PTR __fastcall KiCalibrateTimeAdjustment(ULONG_PTR Argument)
{
  struct _KPRCB *CurrentPrcb; // r15
  bool v3; // r14
  ULONG_PTR result; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned int v10; // r11d
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // rcx
  unsigned __int64 v16; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  ULARGE_INTEGER Dividend; // [rsp+30h] [rbp-68h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-60h] BYREF
  __int64 v20; // [rsp+40h] [rbp-58h]
  __int64 v21; // [rsp+48h] [rbp-50h]
  unsigned __int64 v22; // [rsp+50h] [rbp-48h]
  LARGE_INTEGER v23; // [rsp+58h] [rbp-40h] BYREF
  LARGE_INTEGER *v24; // [rsp+60h] [rbp-38h] BYREF
  int v25; // [rsp+68h] [rbp-30h]
  int v26; // [rsp+6Ch] [rbp-2Ch]
  int v27; // [rsp+90h] [rbp-8h]

  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->Number == *(_DWORD *)(Argument + 4) )
  {
    _disable();
    v6 = *(_QWORD *)(Argument + 8);
    v3 = (v27 & 0x200) != 0;
    v20 = v6;
    v7 = v6 + MEMORY[0xFFFFF78000000008];
    v21 = v6 + MEMORY[0xFFFFF78000000008];
    KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( *(_BYTE *)Argument )
    {
      v8 = (unsigned int)v6 * (unsigned __int64)(unsigned int)PerformanceFrequency.HighPart;
      v9 = ((unsigned int)v6 * (unsigned __int64)PerformanceFrequency.LowPart) >> 32;
      Dividend.LowPart = v9 + v8 + PerformanceFrequency.LowPart * HIDWORD(v20);
      Dividend.HighPart = ((v9 + v8 + PerformanceFrequency.LowPart * (unsigned __int64)HIDWORD(v20)) >> 32)
                        + PerformanceFrequency.HighPart * HIDWORD(v20);
      *(_DWORD *)(Argument + 20) = RtlEnlargedUnsignedDivide(Dividend, v8, &Dividend.HighPart);
      Dividend.LowPart = v10;
      *(_DWORD *)(Argument + 16) = Dividend.QuadPart / 0x989680;
      *(_QWORD *)(Argument + 16) += v11;
    }
    v22 = v7 / KeMaximumIncrement;
    v12 = *(_QWORD *)(Argument + 8);
    KiTickOffset = KeMaximumIncrement - v7 % KeMaximumIncrement;
    MEMORY[0xFFFFF780000003B0] += v12;
    LODWORD(v20) = v7 % KeMaximumIncrement;
    if ( MEMORY[0xFFFFF780000003B0] < 0 )
      __fastfail(5u);
    RtlWriteAcquireTickLock((signed __int64 *)0xFFFFF78000000340LL);
    MEMORY[0xFFFFF78000000010] = HIDWORD(v21);
    MEMORY[0xFFFFF78000000008] = v7;
    MEMORY[0xFFFFF78000000328] = HIDWORD(v22);
    MEMORY[0xFFFFF78000000320] = v13;
    MEMORY[0xFFFFF78000000350] = v14;
    KiInterruptTimeErrorAccumulator = 0LL;
    RtlWriteReleaseTickLock(v15);
    *(_DWORD *)(Argument + 28) = 0;
  }
  else
  {
    _disable();
    v3 = (v27 & 0x200) != 0;
    do
      KiPollFreezeExecution();
    while ( *(_DWORD *)(Argument + 28) );
  }
  if ( KiSelectActiveTimerTable((__int64)CurrentPrcb, 1) )
  {
    v16 = MEMORY[0xFFFFF78000000008];
    KeRemoveQueueDpc(&CurrentPrcb->TimerExpirationDpc);
    KeInsertQueueDpc(&CurrentPrcb->TimerExpirationDpc, (PVOID)((unsigned int)(v16 >> 18) - 256), 0LL);
  }
  result = MEMORY[0xFFFFF78000000320];
  CurrentPrcb->LastTick = MEMORY[0xFFFFF78000000320];
  v5 = *(_QWORD *)(Argument + 8);
  if ( *(_BYTE *)Argument )
  {
    HalCalibratePerformanceCounter(Argument + 24, *(_QWORD *)(Argument + 16));
    result = KeRebaselineInterruptTime().QuadPart;
    if ( (xmmword_1403AA2D0 & 0x8000) != 0 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v26 = 0;
      v23 = PerformanceCounter;
      v25 = 8;
      v24 = &v23;
      result = EtwTraceKernelEvent((int)&v24, 1, 0x80008000, 4658, 4200450);
    }
  }
  if ( CurrentPrcb->ClockOwner )
    result = KiUpdateSystemTime(v5, 0LL, 3);
  if ( v3 )
    _enable();
  return result;
}
