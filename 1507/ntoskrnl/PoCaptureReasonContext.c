/*
 * XREFs of PoCaptureReasonContext @ 0x1400D1330
 * Callers:
 *     NtSetTimerEx @ 0x140065D60 (NtSetTimerEx.c)
 *     NtSetTimer @ 0x1401362E8 (NtSetTimer.c)
 *     PoRegisterSystemState @ 0x14023AC68 (PoRegisterSystemState.c)
 *     PoCreatePowerRequest @ 0x1404E5804 (PoCreatePowerRequest.c)
 *     PopPowerRequestCreateInfo @ 0x1404EA904 (PopPowerRequestCreateInfo.c)
 *     NtSetThreadExecutionState @ 0x14056371C (NtSetThreadExecutionState.c)
 *     PopSetupHighPerfPowerRequest @ 0x140599E20 (PopSetupHighPerfPowerRequest.c)
 *     PoCreateThermalRequest @ 0x1405C364C (PoCreateThermalRequest.c)
 * Callees:
 *     PoGetRequester @ 0x1400D1464 (PoGetRequester.c)
 *     PopCaptureReasonContext @ 0x1400D156C (PopCaptureReasonContext.c)
 *     EvaluateCurrentState @ 0x140233034 (EvaluateCurrentState.c)
 *     PoGetRequesterOld @ 0x140233688 (PoGetRequesterOld.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PoCaptureReasonContext(char *a1, char *a2, __int64 a3, char a4, __int64 a5, PVOID *a6)
{
  char v7; // si
  int Requester; // ebx
  int v9; // eax
  PVOID v10; // r8
  __int64 v11; // rcx
  _OWORD v13[2]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v14; // [rsp+48h] [rbp-10h]

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
      v13[0] = *(_OWORD *)a1;
      v13[1] = *((_OWORD *)a1 + 1);
      v14 = *((_QWORD *)a1 + 4);
      a1 = (char *)v13;
    }
    LOBYTE(a2) = v7;
    Requester = PopCaptureReasonContext(a1, a2, a5, a6);
  }
  else
  {
    Requester = PopCaptureReasonContext(a1, a2, a5, a6);
  }
  if ( Requester >= 0 )
  {
    v9 = EvaluateCurrentState(&g_Feature_4274317627_57077665_FeatureDescriptorDetails);
    v10 = *a6;
    LOBYTE(v11) = v7;
    if ( v9 )
    {
      Requester = PoGetRequester(v11, a3, v10);
      if ( Requester < 0 && *a6 )
      {
        ExFreePoolWithTag(*a6, 0x78435250u);
        *a6 = 0LL;
      }
    }
    else
    {
      PoGetRequesterOld(v11, a3, v10);
    }
  }
  return (unsigned int)Requester;
}
