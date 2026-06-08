/*
 * XREFs of ProcLibTraceBiosTStatesRundown @ 0x1C0013CB4
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C00130E0 (ProcLibTraceControlCallback.c)
 * Callees:
 *     ProcLibGetProcessorNumber @ 0x1C00018D4 (ProcLibGetProcessorNumber.c)
 *     __security_check_cookie @ 0x1C0005940 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0005DE0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall ProcLibTraceBiosTStatesRundown(__int64 a1)
{
  void *v2; // rbx
  int ProcessorNumber; // eax
  int v4; // eax
  ULONG v5; // r9d
  unsigned int *v6; // r14
  unsigned int v7; // eax
  int v8; // esi
  PVOID PoolWithTag; // rax
  unsigned int v10; // r8d
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned int v15; // [rsp+38h] [rbp-79h] BYREF
  struct _PROCESSOR_NUMBER v16; // [rsp+3Ch] [rbp-75h] BYREF
  int v17; // [rsp+40h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-69h] BYREF
  unsigned __int8 *p_Number; // [rsp+58h] [rbp-59h]
  __int64 v20; // [rsp+60h] [rbp-51h]
  char *v21; // [rsp+68h] [rbp-49h]
  __int64 v22; // [rsp+70h] [rbp-41h]
  char *v23; // [rsp+78h] [rbp-39h]
  __int64 v24; // [rsp+80h] [rbp-31h]
  __int64 v25; // [rsp+88h] [rbp-29h]
  __int64 v26; // [rsp+90h] [rbp-21h]
  int *v27; // [rsp+98h] [rbp-19h]
  __int64 v28; // [rsp+A0h] [rbp-11h]
  __int64 v29; // [rsp+A8h] [rbp-9h]
  __int64 v30; // [rsp+B0h] [rbp-1h]
  __int64 v31; // [rsp+B8h] [rbp+7h]
  __int64 v32; // [rsp+C0h] [rbp+Fh]
  unsigned int *v33; // [rsp+C8h] [rbp+17h]
  __int64 v34; // [rsp+D0h] [rbp+1Fh]
  PVOID v35; // [rsp+D8h] [rbp+27h]
  int v36; // [rsp+E0h] [rbp+2Fh]
  int i; // [rsp+E4h] [rbp+33h]

  v2 = 0LL;
  LOBYTE(ProcessorNumber) = EtwEventEnabled(ProcLibEtwHandle, &PPM_ETW_BIOS_T_STATES_RUNDOWN);
  if ( (_BYTE)ProcessorNumber )
  {
    ProcessorNumber = ProcLibGetProcessorNumber(a1, &v16);
    if ( ProcessorNumber >= 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        *(_QWORD *)(a1 + 192),
        0LL);
      v4 = *(_DWORD *)(a1 + 248);
      v5 = 9;
      v6 = *(unsigned int **)(a1 + 440);
      v15 = 0;
      if ( (v4 & 0x3300000) != 0 )
      {
        v7 = *v6;
        v15 = v7;
        if ( v7 )
        {
          v8 = 20 * v7;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 20 * v7, 0x72637250u);
          v2 = PoolWithTag;
          if ( !PoolWithTag )
          {
LABEL_13:
            LOBYTE(ProcessorNumber) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
                                        WdfDriverGlobals,
                                        *(_QWORD *)(a1 + 192));
            return ProcessorNumber;
          }
          v5 = 10;
          v35 = PoolWithTag;
          v10 = 0;
          v36 = v8;
          for ( i = 0; v10 < v15; *((_DWORD *)PoolWithTag + v12 + 4) = v6[5 * v11 + 5] )
          {
            v11 = v10++;
            v12 = 5 * v11;
            *((_DWORD *)PoolWithTag + v12) = v6[5 * v11 + 1];
            *((_DWORD *)PoolWithTag + v12 + 1) = v6[5 * v11 + 2];
            *((_DWORD *)PoolWithTag + v12 + 2) = v6[5 * v11 + 3];
            *((_DWORD *)PoolWithTag + v12 + 3) = v6[5 * v11 + 4];
          }
        }
      }
      v13 = *(_QWORD *)(a1 + 248);
      if ( (v13 & 0x3000000) != 0 )
        v17 = 3;
      else
        v17 = (v13 & 0x300000) != 0;
      UserData.Ptr = (unsigned __int64)&v16;
      *(_QWORD *)&UserData.Size = 2LL;
      p_Number = &v16.Number;
      v20 = 1LL;
      v21 = &byte_1C0009AC6;
      v23 = &byte_1C0009AC7;
      v25 = a1 + 448;
      v27 = &v17;
      v29 = a1 + 416;
      v31 = a1 + 428;
      v33 = &v15;
      v22 = 1LL;
      v24 = 1LL;
      v26 = 4LL;
      v28 = 4LL;
      v30 = 12LL;
      v32 = 12LL;
      v34 = 4LL;
      EtwWrite(ProcLibEtwHandle, &PPM_ETW_BIOS_T_STATES_RUNDOWN, 0LL, v5, &UserData);
      if ( v2 )
        ExFreePoolWithTag(v2, 0x72637250u);
      goto LABEL_13;
    }
  }
  return ProcessorNumber;
}
