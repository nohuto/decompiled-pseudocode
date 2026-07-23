/*
 * XREFs of NtSetTimerEx @ 0x140090CA0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer @ 0x140090DFC (ExpSetTimer.c)
 *     PoCaptureReasonContext @ 0x1400979A8 (PoCaptureReasonContext.c)
 *     PoDestroyReasonContext @ 0x140098D20 (PoDestroyReasonContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl NtSetTimerEx(
        HANDLE TimerHandle,
        TIMER_SET_INFORMATION_CLASS TimerSetInformationClass,
        PVOID TimerSetInformation,
        ULONG TimerSetInformationLength)
{
  _OWORD *v4; // rbx
  char PreviousMode; // di
  char *v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  NTSTATUS v10; // ebx
  NTSTATUS result; // eax
  _BYTE v12[8]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v13; // [rsp+58h] [rbp-40h] BYREF
  _OWORD v14[3]; // [rsp+60h] [rbp-38h] BYREF

  v4 = TimerSetInformation;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && TimerSetInformationLength )
  {
    if ( ((unsigned __int8)TimerSetInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = (char *)TimerSetInformation + TimerSetInformationLength;
    if ( (unsigned __int64)v7 > MmUserProbeAddress || v7 < TimerSetInformation )
      *(_BYTE *)MmUserProbeAddress = 0;
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
    v4 = v14;
  }
  if ( *((_DWORD *)v4 + 8) > 0x7FFFFFFFu )
    return -1073741583;
  v8 = *((_QWORD *)v4 + 3);
  if ( v8 )
  {
    LOBYTE(TimerSetInformationClass) = PreviousMode;
    result = PoCaptureReasonContext(v8, TimerSetInformationClass, 0, 0, (__int64)v12, (__int64)&v13);
    if ( result < 0 )
      return result;
  }
  else
  {
    v13 = 0LL;
    v12[0] = 0;
  }
  LOBYTE(TimerSetInformationClass) = PreviousMode;
  v9 = ExpSetTimer(
         TimerHandle,
         *(_QWORD *)&TimerSetInformationClass,
         v4,
         *((_QWORD *)v4 + 1),
         *((_QWORD *)v4 + 2),
         v13,
         v12[0],
         *((_DWORD *)v4 + 8),
         *((_DWORD *)v4 + 9),
         *((_QWORD *)v4 + 5));
  v10 = v9;
  if ( v9 < 0 || v9 == 1073741861 )
  {
    if ( v13 )
      PoDestroyReasonContext(v13);
  }
  return v10;
}
