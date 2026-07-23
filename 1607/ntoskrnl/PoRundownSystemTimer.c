/*
 * XREFs of PoRundownSystemTimer @ 0x14052C6D0
 * Callers:
 *     ExTraceTimerResolution @ 0x14052C678 (ExTraceTimerResolution.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

BOOLEAN PoRundownSystemTimer()
{
  BOOLEAN result; // al
  REGHANDLE v1; // rbx
  int v2; // [rsp+30h] [rbp-41h] BYREF
  int v3; // [rsp+38h] [rbp-39h] BYREF
  ULONG v4; // [rsp+40h] [rbp-31h] BYREF
  int v5; // [rsp+48h] [rbp-29h] BYREF
  int v6; // [rsp+50h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-11h] BYREF
  int *v8; // [rsp+70h] [rbp-1h]
  int v9; // [rsp+78h] [rbp+7h]
  int v10; // [rsp+7Ch] [rbp+Bh]
  ULONG *v11; // [rsp+80h] [rbp+Fh]
  int v12; // [rsp+88h] [rbp+17h]
  int v13; // [rsp+8Ch] [rbp+1Bh]
  int *v14; // [rsp+90h] [rbp+1Fh]
  int v15; // [rsp+98h] [rbp+27h]
  int v16; // [rsp+9Ch] [rbp+2Bh]
  int *v17; // [rsp+A0h] [rbp+2Fh]
  int v18; // [rsp+A8h] [rbp+37h]
  int v19; // [rsp+ACh] [rbp+3Bh]

  v6 = ExpKernelRequestedTimerResolution;
  v5 = ExpKernelResolutionCount;
  v4 = KeMaximumIncrement;
  v3 = KeMinimumIncrement;
  result = KeTimeIncrement;
  v2 = KeTimeIncrement;
  if ( PopDiagHandleRegistered )
  {
    v1 = PopDiagHandle;
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_TIME_RESOLUTION_RUNDOWN);
    if ( result )
    {
      UserData.Reserved = 0;
      v10 = 0;
      v13 = 0;
      v16 = 0;
      v19 = 0;
      UserData.Ptr = (ULONGLONG)&v2;
      v8 = &v3;
      UserData.Size = 4;
      v11 = &v4;
      v14 = &v5;
      v17 = &v6;
      v9 = 4;
      v12 = 4;
      v15 = 4;
      v18 = 4;
      return EtwWrite(v1, &POP_ETW_EVENT_TIME_RESOLUTION_RUNDOWN, 0LL, 5u, &UserData);
    }
  }
  return result;
}
