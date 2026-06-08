/*
 * XREFs of ProcLibTraceQueryCapabilities @ 0x1C001AA34
 * Callers:
 *     InitPep @ 0x1C0014AD8 (InitPep.c)
 *     DecodeMWaitCState @ 0x1C0016660 (DecodeMWaitCState.c)
 * Callees:
 *     ProcLibGetProcessorNumber @ 0x1C0001524 (ProcLibGetProcessorNumber.c)
 *     __security_check_cookie @ 0x1C0002100 (__security_check_cookie.c)
 */

char __fastcall ProcLibTraceQueryCapabilities(__int64 a1, char a2)
{
  const EVENT_DESCRIPTOR *v3; // rdi
  int ProcessorNumber; // eax
  int v5; // eax
  struct _PROCESSOR_NUMBER v7; // [rsp+30h] [rbp-39h] BYREF
  int v8; // [rsp+34h] [rbp-35h] BYREF
  int v9; // [rsp+38h] [rbp-31h] BYREF
  int v10; // [rsp+3Ch] [rbp-2Dh] BYREF
  int v11; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-19h] BYREF
  unsigned __int8 *p_Number; // [rsp+60h] [rbp-9h]
  int v14; // [rsp+68h] [rbp-1h]
  int v15; // [rsp+6Ch] [rbp+3h]
  int *v16; // [rsp+70h] [rbp+7h]
  int v17; // [rsp+78h] [rbp+Fh]
  int v18; // [rsp+7Ch] [rbp+13h]
  int *v19; // [rsp+80h] [rbp+17h]
  int v20; // [rsp+88h] [rbp+1Fh]
  int v21; // [rsp+8Ch] [rbp+23h]
  int *v22; // [rsp+90h] [rbp+27h]
  int v23; // [rsp+98h] [rbp+2Fh]
  int v24; // [rsp+9Ch] [rbp+33h]
  int *v25; // [rsp+A0h] [rbp+37h]
  int v26; // [rsp+A8h] [rbp+3Fh]
  int v27; // [rsp+ACh] [rbp+43h]

  v3 = (const EVENT_DESCRIPTOR *)&PPM_ETW_QUERY_CAPABILITIES;
  if ( a2 )
    v3 = &PPM_ETW_QUERY_CAPABILITIES_RUNDOWN;
  LOBYTE(ProcessorNumber) = EtwEventEnabled(ProcLibEtwHandle, v3);
  if ( (_BYTE)ProcessorNumber )
  {
    if ( *(_QWORD *)(a1 + 1056) )
    {
      ProcessorNumber = ProcLibGetProcessorNumber(a1, &v7);
      if ( ProcessorNumber >= 0 )
      {
        v5 = *(_DWORD *)(a1 + 1068);
        UserData.Reserved = 0;
        v15 = 0;
        v18 = 0;
        v21 = 0;
        v24 = 0;
        v27 = 0;
        v8 = v5;
        v11 = *(_DWORD *)(a1 + 1064);
        v9 = *(unsigned __int8 *)(a1 + 1072);
        v10 = *(unsigned __int8 *)(a1 + 1073);
        UserData.Ptr = (unsigned __int64)&v7;
        p_Number = &v7.Number;
        v16 = &v11;
        v19 = &v8;
        v22 = &v9;
        v25 = &v10;
        v17 = 4;
        v20 = 4;
        v23 = 4;
        v26 = 4;
        UserData.Size = 2;
        v14 = 1;
        LOBYTE(ProcessorNumber) = EtwWrite(ProcLibEtwHandle, v3, 0LL, 6u, &UserData);
      }
    }
  }
  return ProcessorNumber;
}
