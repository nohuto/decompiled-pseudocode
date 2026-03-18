/*
 * XREFs of PoCaptureReasonContext @ 0x1400979A8
 * Callers:
 *     NtSetTimerEx @ 0x140090CA0 (NtSetTimerEx.c)
 *     NtSetTimer @ 0x14010564C (NtSetTimer.c)
 *     PoRegisterSystemState @ 0x1401EC9AC (PoRegisterSystemState.c)
 *     PopPowerRequestCreateInfo @ 0x140452B24 (PopPowerRequestCreateInfo.c)
 *     PoCreatePowerRequest @ 0x140454C18 (PoCreatePowerRequest.c)
 *     NtSetThreadExecutionState @ 0x1404E9D00 (NtSetThreadExecutionState.c)
 *     PoCreateThermalRequest @ 0x14054C2E8 (PoCreateThermalRequest.c)
 *     PopInitializeHighPerfPowerRequest @ 0x1407663AC (PopInitializeHighPerfPowerRequest.c)
 * Callees:
 *     PoGetRequester @ 0x140097AA8 (PoGetRequester.c)
 *     PopCaptureReasonContext @ 0x140097B84 (PopCaptureReasonContext.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PoCaptureReasonContext(char *a1, char *a2, __int64 a3, char a4, __int64 a5, _QWORD *a6)
{
  char v7; // di
  __int64 v8; // rcx
  int v9; // ebx
  _OWORD v11[2]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v12; // [rsp+48h] [rbp-10h]

  v7 = (char)a2;
  *a6 = 0LL;
  if ( a1 && (_BYTE)a2 )
  {
    if ( !a4 )
    {
      if ( ((unsigned __int8)a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      a2 = a1 + 40;
      if ( (unsigned __int64)(a1 + 40) > MmUserProbeAddress || a2 < a1 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v11[0] = *(_OWORD *)a1;
      v11[1] = *((_OWORD *)a1 + 1);
      v12 = *((_QWORD *)a1 + 4);
      a1 = (char *)v11;
    }
    LOBYTE(a2) = v7;
    v9 = PopCaptureReasonContext(a1, a2, a5, a6);
  }
  else
  {
    v9 = PopCaptureReasonContext(a1, a2, a5, a6);
  }
  if ( v9 >= 0 )
  {
    LOBYTE(v8) = v7;
    PoGetRequester(v8, a3, *a6);
  }
  return (unsigned int)v9;
}
