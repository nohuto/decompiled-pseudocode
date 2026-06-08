/*
 * XREFs of ProcLibTraceSummary2 @ 0x1C0015104
 * Callers:
 *     ProcLibDeviceStart @ 0x1C001403C (ProcLibDeviceStart.c)
 *     ProcLibTraceControlCallback @ 0x1C0017DF0 (ProcLibTraceControlCallback.c)
 * Callees:
 *     ProcLibGetProcessorNumber @ 0x1C0001FC0 (ProcLibGetProcessorNumber.c)
 *     __security_check_cookie @ 0x1C0002510 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0002A70 (_guard_dispatch_icall_nop.c)
 *     GetRegistryDwordValue @ 0x1C00131E8 (GetRegistryDwordValue.c)
 */

char __fastcall ProcLibTraceSummary2(__int64 a1, char a2)
{
  const EVENT_DESCRIPTOR *v3; // rdi
  int ProcessorNumber; // eax
  __int64 v5; // r9
  unsigned int v6; // r10d
  int *v7; // rcx
  _DWORD *v8; // rdx
  _DWORD *v9; // r11
  unsigned int v10; // r8d
  int v11; // eax
  _DWORD *v12; // rcx
  _DWORD *v13; // rcx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned int v18; // [rsp+38h] [rbp-79h] BYREF
  unsigned int v19; // [rsp+3Ch] [rbp-75h] BYREF
  unsigned int v20; // [rsp+40h] [rbp-71h] BYREF
  int v21; // [rsp+44h] [rbp-6Dh] BYREF
  int v22; // [rsp+48h] [rbp-69h] BYREF
  int v23; // [rsp+4Ch] [rbp-65h] BYREF
  int v24; // [rsp+50h] [rbp-61h] BYREF
  struct _PROCESSOR_NUMBER v25; // [rsp+54h] [rbp-5Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-59h] BYREF
  unsigned __int8 *p_Number; // [rsp+68h] [rbp-49h]
  __int64 v28; // [rsp+70h] [rbp-41h]
  int *v29; // [rsp+78h] [rbp-39h]
  __int64 v30; // [rsp+80h] [rbp-31h]
  int *v31; // [rsp+88h] [rbp-29h]
  __int64 v32; // [rsp+90h] [rbp-21h]
  unsigned int *v33; // [rsp+98h] [rbp-19h]
  __int64 v34; // [rsp+A0h] [rbp-11h]
  int *v35; // [rsp+A8h] [rbp-9h]
  __int64 v36; // [rsp+B0h] [rbp-1h]
  unsigned int *v37; // [rsp+B8h] [rbp+7h]
  __int64 v38; // [rsp+C0h] [rbp+Fh]
  unsigned int *v39; // [rsp+C8h] [rbp+17h]
  __int64 v40; // [rsp+D0h] [rbp+1Fh]
  int *v41; // [rsp+D8h] [rbp+27h]
  __int64 v42; // [rsp+E0h] [rbp+2Fh]

  v3 = (const EVENT_DESCRIPTOR *)&PPM_ETW_SUMMARY2_RUNDOWN;
  if ( !a2 )
    v3 = EventDescriptor;
  LOBYTE(ProcessorNumber) = EtwEventEnabled(ProcLibEtwHandle, v3);
  if ( (_BYTE)ProcessorNumber )
  {
    ProcessorNumber = ProcLibGetProcessorNumber(a1, &v25);
    if ( ProcessorNumber >= 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        *(_QWORD *)(a1 + 192),
        0LL);
      v5 = *(_QWORD *)(a1 + 248);
      v6 = 100;
      v7 = *(int **)(a1 + 480);
      v8 = *(_DWORD **)(a1 + 400);
      v9 = *(_DWORD **)(a1 + 456);
      v10 = 0;
      v22 = 0;
      v24 = 0;
      v21 = 0;
      v23 = 100;
      v19 = 100;
      v20 = 100;
      v18 = 0;
      if ( (v5 & 0x300000300LL) != 0 )
      {
        v22 = *(_DWORD *)(a1 + 1076);
        v24 = ((v5 & 0x200000200LL) != 0) + 2;
      }
      else if ( (v5 & 0x7F077) != 0 )
      {
        v11 = *v7;
        v22 = v11;
        v24 = 1;
        if ( !v11 || *((_BYTE *)v7 + 16) != 1 )
          v22 = v11 + 1;
      }
      if ( (v5 & 0x1000000000LL) != 0 )
      {
        v12 = *(_DWORD **)(a1 + 1136);
        if ( !v12 )
          goto LABEL_36;
        v21 = 4;
        v23 = v12[7];
        v19 = v12[8];
        v20 = v12[9];
        v10 = v12[6];
      }
      else
      {
        if ( (v5 & 0x8000000) == 0 )
        {
          if ( (v5 & 0x80000000) != 0 )
          {
            v21 = 2;
            v10 = *(_DWORD *)(qword_1C000F1B8 + 28);
            v18 = v10;
            v19 = 100 * *(_DWORD *)(qword_1C000F1B8 + 36) / v10;
            v20 = 100 * *(_DWORD *)(qword_1C000F1B8 + 32) / v10;
          }
          else
          {
            if ( (v5 & 0x73300000) == 0 )
              goto LABEL_36;
            v21 = 1;
            if ( (v5 & 0x40000000) != 0 )
              v8 = *(_DWORD **)(a1 + 408);
            if ( (v5 & 0x70000000) != 0 )
            {
              v10 = v8[2];
              v18 = v10;
              v6 = 100 * v8[12 * (*v8 - 1) + 2] / v10;
              v19 = v6;
            }
            if ( (v5 & 0x3300000) != 0 )
              v20 = v6 * v9[5 * (*v9 - 1) + 1] / 0x64;
            else
              v20 = v6;
          }
LABEL_19:
          if ( v10 )
          {
LABEL_20:
            UserData.Ptr = (unsigned __int64)&v25;
            *(_QWORD *)&UserData.Size = 2LL;
            p_Number = &v25.Number;
            v28 = 1LL;
            v29 = &v22;
            v30 = 4LL;
            v31 = &v24;
            v33 = &v18;
            v35 = &v23;
            v37 = &v19;
            v39 = &v20;
            v41 = &v21;
            v32 = 4LL;
            v34 = 4LL;
            v36 = 4LL;
            v38 = 4LL;
            v40 = 4LL;
            v42 = 4LL;
            EtwWrite(ProcLibEtwHandle, v3, 0LL, 9u, &UserData);
            LOBYTE(ProcessorNumber) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
                                        WdfDriverGlobals,
                                        *(_QWORD *)(a1 + 192));
            return ProcessorNumber;
          }
LABEL_36:
          GetRegistryDwordValue(
            (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
            (__int64)L"~MHz",
            &v18);
          goto LABEL_20;
        }
        v13 = *(_DWORD **)(a1 + 224);
        if ( !v13 )
        {
          if ( !*(_QWORD *)(a1 + 352) )
            goto LABEL_36;
          v21 = 3;
          GetRegistryDwordValue(
            (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
            (__int64)L"~MHz",
            &v18);
          v14 = *(_QWORD *)(a1 + 352);
          v23 = 100LL * *(_QWORD *)(a1 + 344) / v14;
          v15 = 100LL * *(_QWORD *)(a1 + 360) / v14;
          v19 = v15;
          v16 = 100LL * *(_QWORD *)(a1 + 368) / v14;
          v10 = v18;
          if ( !(_DWORD)v16 )
            LODWORD(v16) = 1;
          v20 = v16;
          if ( !(_DWORD)v15 )
            v19 = 1;
          goto LABEL_19;
        }
        v21 = 3;
        v23 = v13[17];
        v19 = v13[19];
        v20 = v13[20];
        v10 = v13[16];
      }
      v18 = v10;
      goto LABEL_19;
    }
  }
  return ProcessorNumber;
}
