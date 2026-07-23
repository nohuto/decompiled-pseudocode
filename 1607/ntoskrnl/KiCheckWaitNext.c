/*
 * XREFs of KiCheckWaitNext @ 0x1400CE9E0
 * Callers:
 *     MiWaitForInPageComplete @ 0x140024D30 (MiWaitForInPageComplete.c)
 *     KiWaitForAllObjects @ 0x14009759C (KiWaitForAllObjects.c)
 *     KeWaitForAlertByThreadId @ 0x1400CE2E8 (KeWaitForAlertByThreadId.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1400D5040 (RtlGetInterruptTimePrecise.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1400EE154 (KiQueryUnbiasedInterruptTime.c)
 */

__int64 __fastcall KiCheckWaitNext(__int64 a1, LARGE_INTEGER *a2, char a3, LARGE_INTEGER *a4, _DWORD *a5)
{
  unsigned __int8 v7; // si
  unsigned __int8 CurrentIrql; // cl
  LARGE_INTEGER v10; // rax
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp+8h] BYREF

  v7 = _bittestandreset((signed __int32 *)(a1 + 116), 2u);
  if ( !v7 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    *(_BYTE *)(a1 + 390) = CurrentIrql;
  }
  if ( a2 )
  {
    if ( a2->HighPart >= 0 )
    {
      *a4 = *a2;
      *a5 = 1;
    }
    else
    {
      if ( a3 )
        v10 = (LARGE_INTEGER)(*(_QWORD *)&RtlGetInterruptTimePrecise(&PerformanceCounter) - MEMORY[0xFFFFF780000003B0]);
      else
        v10.QuadPart = KiQueryUnbiasedInterruptTime(0LL);
      *a4 = v10;
      a4->QuadPart -= a2->QuadPart + *(_QWORD *)(a1 + 248);
      *a5 = 2;
    }
  }
  else
  {
    *a5 = 0;
  }
  return v7;
}
