/*
 * XREFs of NtSetTimer @ 0x14010DEAC
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer @ 0x1400ED6DC (ExpSetTimer.c)
 *     PoDestroyReasonContext @ 0x1400F9654 (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x1400F9E3C (PoCaptureReasonContext.c)
 */

NTSTATUS __stdcall NtSetTimer(
        HANDLE TimerHandle,
        PLARGE_INTEGER DueTime,
        PTIMER_APC_ROUTINE TimerApcRoutine,
        PVOID TimerContext,
        BOOLEAN WakeTimer,
        LONG Period,
        PBOOLEAN PreviousState)
{
  PLARGE_INTEGER v9; // rbx
  bool v11; // si
  KPROCESSOR_MODE PreviousMode; // r14
  BOOLEAN v13; // cl
  __int64 v14; // rdx
  NTSTATUS v15; // eax
  NTSTATUS v16; // ebx
  NTSTATUS result; // eax
  char v18[8]; // [rsp+50h] [rbp-38h] BYREF
  _QWORD *v19; // [rsp+58h] [rbp-30h] BYREF
  _QWORD v20[2]; // [rsp+60h] [rbp-28h] BYREF

  v9 = DueTime;
  v11 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)DueTime >= 0x7FFFFFFF0000LL )
      v9 = (PLARGE_INTEGER)0x7FFFFFFF0000LL;
    v20[0] = v9->QuadPart;
    v9 = (PLARGE_INTEGER)v20;
    v20[1] = v20;
    v13 = WakeTimer;
    goto LABEL_5;
  }
  v13 = WakeTimer;
  if ( !WakeTimer )
  {
LABEL_5:
    v14 = 1LL;
    goto LABEL_6;
  }
  v14 = 1LL;
  v11 = PoPowerDownActionInProgress != 0;
LABEL_6:
  if ( Period < 0 )
    return -1073741580;
  if ( !v13 || v11 )
  {
    v19 = 0LL;
    v18[0] = 0;
  }
  else
  {
    LOBYTE(v14) = PreviousMode;
    result = PoCaptureReasonContext(0LL, v14, 0LL, 1, (__int64)v18, (PVOID *)&v19);
    if ( result < 0 )
      return result;
  }
  v15 = ExpSetTimer(
          TimerHandle,
          PreviousMode,
          v9,
          (__int64)TimerApcRoutine,
          (__int64)TimerContext,
          (__int64)v19,
          v18[0],
          Period,
          0,
          PreviousState);
  v16 = v15;
  if ( (v15 < 0 || v15 == 1073741861) && v19 )
    PoDestroyReasonContext(v19);
  if ( v16 >= 0 && v11 )
    return 1073741861;
  return v16;
}
