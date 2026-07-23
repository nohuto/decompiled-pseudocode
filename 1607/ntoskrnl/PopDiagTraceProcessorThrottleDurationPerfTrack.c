/*
 * XREFs of PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x140208EA4
 * Callers:
 *     PpmRegisterPerfCap @ 0x140204E54 (PpmRegisterPerfCap.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     RtlStringCchPrintfExW @ 0x1400C1890 (RtlStringCchPrintfExW.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceProcessorThrottleDurationPerfTrack(int a1, int a2)
{
  NTSTATUS v3; // eax
  int v5; // [rsp+30h] [rbp-39h]
  __int16 v6; // [rsp+40h] [rbp-29h] BYREF
  size_t pcchRemaining; // [rsp+48h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-19h] BYREF
  __int16 *v9; // [rsp+60h] [rbp-9h]
  int v10; // [rsp+68h] [rbp-1h]
  int v11; // [rsp+6Ch] [rbp+3h]
  wchar_t *v12; // [rsp+70h] [rbp+7h]
  int v13; // [rsp+78h] [rbp+Fh]
  int v14; // [rsp+7Ch] [rbp+13h]
  wchar_t pszDest[24]; // [rsp+80h] [rbp+17h] BYREF
  int v16; // [rsp+D0h] [rbp+67h] BYREF

  v16 = a1;
  LOBYTE(v3) = aProcessor99999[20];
  wcscpy(pszDest, L"Processor 9999999999");
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_THERMAL_DURATION_PERFTRACK);
    if ( (_BYTE)v3 )
    {
      v5 = a2;
      v3 = RtlStringCchPrintfExW(pszDest, 0x15uLL, 0LL, &pcchRemaining, 0, L"Processor %u", v5);
      if ( v3 >= 0 )
      {
        UserData.Reserved = 0;
        v11 = 0;
        v14 = 0;
        UserData.Ptr = (ULONGLONG)&v16;
        v9 = &v6;
        v12 = pszDest;
        v6 = 21 - pcchRemaining;
        v13 = 2 * (unsigned __int16)(21 - pcchRemaining);
        UserData.Size = 4;
        v10 = 2;
        LOBYTE(v3) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_THERMAL_DURATION_PERFTRACK, 0LL, 3u, &UserData);
      }
    }
  }
  return v3;
}
