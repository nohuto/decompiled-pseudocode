/*
 * XREFs of KiCheckWaitNext @ 0x1400D0B40
 * Callers:
 *     MiWaitForInPageComplete @ 0x1400251B0 (MiWaitForInPageComplete.c)
 *     KiWaitForAllObjects @ 0x140097D9C (KiWaitForAllObjects.c)
 *     KeWaitForAlertByThreadId @ 0x1400D0448 (KeWaitForAlertByThreadId.c)
 *     KeDelayExecutionThread @ 0x1400D0580 (KeDelayExecutionThread.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1400D71A0 (RtlGetInterruptTimePrecise.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1400F02D4 (KiQueryUnbiasedInterruptTime.c)
 */

__int64 __fastcall KiCheckWaitNext(__int64 a1, __int64 a2, char a3, __int64 *a4, _DWORD *a5)
{
  unsigned __int8 v7; // si
  unsigned __int8 CurrentIrql; // cl
  __int64 UnbiasedInterruptTime; // rax
  char v12; // [rsp+40h] [rbp+8h] BYREF

  v7 = _bittestandreset((signed __int32 *)(a1 + 116), 2u);
  if ( !v7 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    *(_BYTE *)(a1 + 390) = CurrentIrql;
  }
  if ( a2 )
  {
    if ( *(int *)(a2 + 4) >= 0 )
    {
      *a4 = *(_QWORD *)a2;
      *a5 = 1;
    }
    else
    {
      if ( a3 )
        UnbiasedInterruptTime = RtlGetInterruptTimePrecise(&v12) - MEMORY[0xFFFFF780000003B0];
      else
        UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(0LL);
      *a4 = UnbiasedInterruptTime;
      *a4 -= *(_QWORD *)a2 + *(_QWORD *)(a1 + 248);
      *a5 = 2;
    }
  }
  else
  {
    *a5 = 0;
  }
  return v7;
}
