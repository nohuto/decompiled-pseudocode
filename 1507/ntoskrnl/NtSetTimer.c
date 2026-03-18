/*
 * XREFs of NtSetTimer @ 0x1401362E8
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer @ 0x140065EC0 (ExpSetTimer.c)
 *     PoDestroyReasonContext @ 0x1400D10E8 (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x1400D1330 (PoCaptureReasonContext.c)
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
  LARGE_INTEGER *v9; // rbx
  bool v11; // si
  KPROCESSOR_MODE PreviousMode; // r14
  BOOLEAN v13; // cl
  __int64 v14; // rdx
  NTSTATUS result; // eax
  NTSTATUS v16; // eax
  NTSTATUS v17; // ebx
  char v18[8]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v19; // [rsp+58h] [rbp-30h] BYREF
  _QWORD v20[2]; // [rsp+60h] [rbp-28h] BYREF

  v9 = DueTime;
  v11 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)DueTime >= MmUserProbeAddress )
      v9 = (LARGE_INTEGER *)MmUserProbeAddress;
    v20[0] = v9->QuadPart;
    v9 = (LARGE_INTEGER *)v20;
    v20[1] = v20;
    v13 = WakeTimer;
  }
  else
  {
    v13 = WakeTimer;
    if ( WakeTimer )
    {
      v14 = 1LL;
      v11 = PoPowerDownActionInProgress != 0;
      goto LABEL_8;
    }
  }
  v14 = 1LL;
LABEL_8:
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
    result = PoCaptureReasonContext(0LL, (char *)v14, 0LL, 1, (__int64)v18, (PVOID *)&v19);
    if ( result < 0 )
      return result;
  }
  v16 = ExpSetTimer(
          TimerHandle,
          PreviousMode,
          v9,
          (__int64)TimerApcRoutine,
          (__int64)TimerContext,
          v19,
          v18[0],
          Period,
          0,
          PreviousState);
  v17 = v16;
  if ( (v16 < 0 || v16 == 1073741861) && v19 )
    PoDestroyReasonContext((_QWORD *)v19);
  if ( v17 >= 0 && v11 )
    return 1073741861;
  return v17;
}
