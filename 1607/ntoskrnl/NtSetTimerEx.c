/*
 * XREFs of NtSetTimerEx @ 0x1400EDCEC
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer @ 0x1400ED6DC (ExpSetTimer.c)
 *     PoDestroyReasonContext @ 0x1400F9654 (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x1400F9E3C (PoCaptureReasonContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtSetTimerEx(
        HANDLE TimerHandle,
        TIMER_SET_INFORMATION_CLASS TimerSetInformationClass,
        PVOID TimerSetInformation,
        ULONG TimerSetInformationLength)
{
  LARGE_INTEGER *v4; // rbx
  KPROCESSOR_MODE PreviousMode; // di
  char *v7; // rcx
  LARGE_INTEGER v8; // rcx
  NTSTATUS v9; // eax
  NTSTATUS v10; // ebx
  NTSTATUS result; // eax
  char v12[8]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v13; // [rsp+58h] [rbp-40h] BYREF
  _OWORD v14[3]; // [rsp+60h] [rbp-38h] BYREF

  v4 = (LARGE_INTEGER *)TimerSetInformation;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && TimerSetInformationLength )
  {
    if ( ((unsigned __int8)TimerSetInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = (char *)TimerSetInformation + TimerSetInformationLength;
    if ( (unsigned __int64)v7 > 0x7FFFFFFF0000LL || v7 < TimerSetInformation )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( TimerSetInformationClass )
    return -1073741821;
  if ( TimerSetInformationLength != 48 )
    return -1073741820;
  if ( PreviousMode )
  {
    v14[0] = *(_OWORD *)TimerSetInformation;
    v14[1] = *((_OWORD *)TimerSetInformation + 1);
    v14[2] = *((_OWORD *)TimerSetInformation + 2);
    v4 = (LARGE_INTEGER *)v14;
  }
  if ( v4[4].LowPart > 0x7FFFFFFF )
    return -1073741583;
  v8 = v4[3];
  if ( v8.QuadPart )
  {
    LOBYTE(TimerSetInformationClass) = PreviousMode;
    result = PoCaptureReasonContext(v8.LowPart, TimerSetInformationClass, 0, 0, (__int64)v12, (__int64)&v13);
    if ( result < 0 )
      return result;
  }
  else
  {
    v13 = 0LL;
    v12[0] = 0;
  }
  v9 = ExpSetTimer(
         TimerHandle,
         PreviousMode,
         v4,
         v4[1].QuadPart,
         v4[2].QuadPart,
         v13,
         v12[0],
         v4[4].LowPart,
         v4[4].HighPart,
         (_BYTE *)v4[5].QuadPart);
  v10 = v9;
  if ( v9 < 0 || v9 == 1073741861 )
  {
    if ( v13 )
      PoDestroyReasonContext(v13);
  }
  return v10;
}
