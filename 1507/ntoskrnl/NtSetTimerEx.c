/*
 * XREFs of NtSetTimerEx @ 0x140065D60
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer @ 0x140065EC0 (ExpSetTimer.c)
 *     PoDestroyReasonContext @ 0x1400D10E8 (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x1400D1330 (PoCaptureReasonContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtSetTimerEx(
        HANDLE TimerHandle,
        TIMER_SET_INFORMATION_CLASS TimerSetInformationClass,
        PVOID TimerSetInformation,
        ULONG TimerSetInformationLength)
{
  _OWORD *v4; // rbx
  int v5; // r14d
  unsigned __int8 v6; // di
  char *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rsi
  int v10; // eax
  NTSTATUS v11; // ebx
  NTSTATUS result; // eax
  _BYTE v13[8]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v14; // [rsp+58h] [rbp-40h] BYREF
  _OWORD v15[3]; // [rsp+60h] [rbp-38h] BYREF

  v4 = TimerSetInformation;
  v5 = (int)TimerHandle;
  v6 = KeGetCurrentThread()->gap0[10];
  if ( v6 && TimerSetInformationLength )
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
  if ( v6 )
  {
    v15[0] = *(_OWORD *)TimerSetInformation;
    v15[1] = *((_OWORD *)TimerSetInformation + 1);
    v15[2] = *((_OWORD *)TimerSetInformation + 2);
    v4 = v15;
  }
  if ( *((_DWORD *)v4 + 8) > 0x7FFFFFFFu )
    return -1073741583;
  v8 = *((_QWORD *)v4 + 3);
  if ( v8 )
  {
    result = PoCaptureReasonContext(v8, v6, 0, 0, (__int64)v13, (__int64)&v14);
    if ( result < 0 )
      return result;
    v9 = v14;
    LOBYTE(v8) = v13[0];
  }
  else
  {
    v9 = 0LL;
  }
  v10 = ExpSetTimer(
          v5,
          v6,
          (int)v4,
          *((_QWORD *)v4 + 1),
          *((_QWORD *)v4 + 2),
          v9,
          v8,
          *((_DWORD *)v4 + 8),
          *((_DWORD *)v4 + 9),
          *((_QWORD *)v4 + 5));
  v11 = v10;
  if ( v10 < 0 || v10 == 1073741861 )
  {
    if ( v9 )
      PoDestroyReasonContext(v9);
  }
  return v11;
}
