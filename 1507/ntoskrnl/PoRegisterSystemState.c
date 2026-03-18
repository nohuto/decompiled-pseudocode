/*
 * XREFs of PoRegisterSystemState @ 0x14023AC68
 * Callers:
 *     <none>
 * Callees:
 *     PoDestroyReasonContext @ 0x1400D10E8 (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x1400D1330 (PoCaptureReasonContext.c)
 *     PopApplyLegacyPowerRequestFlags @ 0x1401335A8 (PopApplyLegacyPowerRequestFlags.c)
 *     PopGetLegacyPowerRequestFlags @ 0x140138B78 (PopGetLegacyPowerRequestFlags.c)
 *     PoSetSystemState @ 0x14023AD3C (PoSetSystemState.c)
 *     PopDiagTraceRegisterSystemState @ 0x14023E8FC (PopDiagTraceRegisterSystemState.c)
 *     PopCreateKernelPowerRequest @ 0x1404E5880 (PopCreateKernelPowerRequest.c)
 */

PVOID __stdcall PoRegisterSystemState(PVOID StateHandle, EXECUTION_STATE Flags)
{
  _QWORD *v2; // rbx
  _DWORD *v3; // rdi
  int v4; // r14d
  int v7; // eax
  int v8; // eax
  char LegacyPowerRequestFlags; // al
  char v10; // dl
  PVOID v11; // rcx
  _DWORD *v13; // [rsp+60h] [rbp+18h] BYREF
  _QWORD *v14; // [rsp+68h] [rbp+20h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  v4 = 0;
  v14 = 0LL;
  if ( (Flags & 0x7FFFFFF8) == 0 )
  {
    if ( (int)Flags <= 0 )
    {
      PopDiagTraceRegisterSystemState(Flags, StateHandle);
      v13 = StateHandle;
      v3 = StateHandle;
      if ( !StateHandle
        && ((v7 = PoCaptureReasonContext(0LL, 0LL, 0LL, 1, 0LL, (PVOID *)&v14), v2 = v14, v7 < 0)
         || (v8 = PopCreateKernelPowerRequest(&v13, v14), v3 = v13, v4 = v8, v8 < 0))
        || (LegacyPowerRequestFlags = PopGetLegacyPowerRequestFlags(v3, Flags, 0LL),
            PopApplyLegacyPowerRequestFlags(v11, v10, LegacyPowerRequestFlags),
            v4 < 0) )
      {
        if ( v2 )
          PoDestroyReasonContext(v2);
      }
    }
    else
    {
      PoSetSystemState(Flags);
    }
  }
  return v3;
}
