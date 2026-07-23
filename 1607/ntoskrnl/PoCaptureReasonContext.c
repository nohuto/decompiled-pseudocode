/*
 * XREFs of PoCaptureReasonContext @ 0x1400F9E3C
 * Callers:
 *     NtSetTimerEx @ 0x1400EDCEC (NtSetTimerEx.c)
 *     NtSetTimer @ 0x14010DEAC (NtSetTimer.c)
 *     PoRegisterSystemState @ 0x14020561C (PoRegisterSystemState.c)
 *     PoCreatePowerRequest @ 0x140501300 (PoCreatePowerRequest.c)
 *     PopPowerRequestCreateInfo @ 0x140501704 (PopPowerRequestCreateInfo.c)
 *     NtSetThreadExecutionState @ 0x14052D240 (NtSetThreadExecutionState.c)
 *     PoCreateThermalRequest @ 0x14056CA08 (PoCreateThermalRequest.c)
 *     PopInitializeHighPerfPowerRequest @ 0x1407BBC6C (PopInitializeHighPerfPowerRequest.c)
 * Callees:
 *     PoGetRequester @ 0x1400F9F54 (PoGetRequester.c)
 *     PopCaptureReasonContext @ 0x1400FA054 (PopCaptureReasonContext.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PoCaptureReasonContext(unsigned __int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5, PVOID *a6)
{
  char v7; // di
  __int64 result; // rax
  __int64 v9; // rcx
  int Requester; // edi
  _OWORD v11[2]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v12; // [rsp+48h] [rbp-10h]

  v7 = a2;
  *a6 = 0LL;
  if ( a1 && (_BYTE)a2 )
  {
    if ( !a4 )
    {
      if ( (a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      a2 = 0x7FFFFFFF0000LL;
      if ( a1 + 40 > 0x7FFFFFFF0000LL || a1 + 40 < a1 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v11[0] = *(_OWORD *)a1;
      v11[1] = *(_OWORD *)(a1 + 16);
      v12 = *(_QWORD *)(a1 + 32);
      a1 = (unsigned __int64)v11;
    }
    LOBYTE(a2) = v7;
    result = PopCaptureReasonContext(a1, a2, a5, a6);
  }
  else
  {
    result = PopCaptureReasonContext(a1, a2, a5, a6);
  }
  if ( (int)result >= 0 )
  {
    LOBYTE(v9) = v7;
    Requester = PoGetRequester(v9, a3, *a6);
    if ( Requester < 0 )
    {
      if ( *a6 )
      {
        ExFreePoolWithTag(*a6, 0x78435250u);
        *a6 = 0LL;
      }
    }
    return (unsigned int)Requester;
  }
  return result;
}
