/*
 * XREFs of ProcLibTraceBiosPStatesRundown @ 0x1C0019578
 * Callers:
 *     DecodeMWaitCState @ 0x1C0016660 (DecodeMWaitCState.c)
 * Callees:
 *     ProcLibGetProcessorNumber @ 0x1C00018D4 (ProcLibGetProcessorNumber.c)
 *     __security_check_cookie @ 0x1C0002450 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029B0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall ProcLibTraceBiosPStatesRundown(_QWORD *a1)
{
  void *v2; // rdi
  int ProcessorNumber; // eax
  __int64 v4; // rax
  ULONG v5; // r9d
  unsigned int *v6; // rsi
  unsigned int v7; // eax
  int v8; // r14d
  PVOID PoolWithTag; // rax
  unsigned int v10; // r8d
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned int v14; // [rsp+38h] [rbp-89h] BYREF
  struct _PROCESSOR_NUMBER v15[3]; // [rsp+3Ch] [rbp-85h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-79h] BYREF
  unsigned __int8 *p_Number; // [rsp+58h] [rbp-69h]
  __int64 v18; // [rsp+60h] [rbp-61h]
  char *v19; // [rsp+68h] [rbp-59h]
  __int64 v20; // [rsp+70h] [rbp-51h]
  char *v21; // [rsp+78h] [rbp-49h]
  __int64 v22; // [rsp+80h] [rbp-41h]
  char *v23; // [rsp+88h] [rbp-39h]
  __int64 v24; // [rsp+90h] [rbp-31h]
  _QWORD *v25; // [rsp+98h] [rbp-29h]
  __int64 v26; // [rsp+A0h] [rbp-21h]
  _QWORD *v27; // [rsp+A8h] [rbp-19h]
  __int64 v28; // [rsp+B0h] [rbp-11h]
  _QWORD *v29; // [rsp+B8h] [rbp-9h]
  __int64 v30; // [rsp+C0h] [rbp-1h]
  char *v31; // [rsp+C8h] [rbp+7h]
  __int64 v32; // [rsp+D0h] [rbp+Fh]
  unsigned int *v33; // [rsp+D8h] [rbp+17h]
  __int64 v34; // [rsp+E0h] [rbp+1Fh]
  PVOID v35; // [rsp+E8h] [rbp+27h]
  int v36; // [rsp+F0h] [rbp+2Fh]
  int i; // [rsp+F4h] [rbp+33h]

  v2 = 0LL;
  LOBYTE(ProcessorNumber) = EtwEventEnabled(ProcLibEtwHandle, &PPM_ETW_BIOS_P_STATES_RUNDOWN);
  if ( (_BYTE)ProcessorNumber )
  {
    ProcessorNumber = ProcLibGetProcessorNumber((__int64)a1, v15);
    if ( ProcessorNumber >= 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        a1[24],
        0LL);
      v4 = a1[31];
      v5 = 10;
      v6 = (unsigned int *)a1[48];
      v14 = 0;
      if ( (v4 & 0x70000000) != 0 )
      {
        if ( (v4 & 0x40000000) != 0 )
          v6 = (unsigned int *)a1[49];
        v7 = *v6;
        v14 = v7;
        if ( v7 )
        {
          v8 = 48 * v7;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 48 * v7, 0x72637250u);
          v2 = PoolWithTag;
          if ( !PoolWithTag )
          {
LABEL_12:
            LOBYTE(ProcessorNumber) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
                                        WdfDriverGlobals,
                                        a1[24]);
            return ProcessorNumber;
          }
          v5 = 11;
          v35 = PoolWithTag;
          v10 = 0;
          v36 = v8;
          for ( i = 0; v10 < v14; *((_QWORD *)PoolWithTag + v12 + 5) = *(_QWORD *)&v6[12 * v11 + 12] )
          {
            v11 = v10++;
            v12 = 6 * v11;
            *((_DWORD *)PoolWithTag + 2 * v12) = v6[12 * v11 + 2];
            *((_DWORD *)PoolWithTag + 2 * v12 + 1) = v6[12 * v11 + 3];
            *((_DWORD *)PoolWithTag + 2 * v12 + 2) = v6[12 * v11 + 4];
            *((_DWORD *)PoolWithTag + 2 * v12 + 3) = v6[12 * v11 + 5];
            *((_QWORD *)PoolWithTag + v12 + 2) = *(_QWORD *)&v6[12 * v11 + 6];
            *((_QWORD *)PoolWithTag + v12 + 3) = *(_QWORD *)&v6[12 * v11 + 8];
            *((_QWORD *)PoolWithTag + v12 + 4) = *(_QWORD *)&v6[12 * v11 + 10];
          }
        }
      }
      UserData.Ptr = (unsigned __int64)v15;
      *(_QWORD *)&UserData.Size = 2LL;
      p_Number = &v15[0].Number;
      v18 = 1LL;
      v19 = (char *)a1 + 172;
      v21 = (char *)a1 + 169;
      v23 = (char *)a1 + 52;
      v25 = a1 + 6;
      v27 = a1 + 50;
      v29 = a1 + 45;
      v31 = (char *)a1 + 372;
      v33 = &v14;
      v20 = 4LL;
      v22 = 1LL;
      v24 = 4LL;
      v26 = 4LL;
      v28 = 4LL;
      v30 = 12LL;
      v32 = 12LL;
      v34 = 4LL;
      EtwWrite(ProcLibEtwHandle, &PPM_ETW_BIOS_P_STATES_RUNDOWN, 0LL, v5, &UserData);
      if ( v2 )
        ExFreePoolWithTag(v2, 0x72637250u);
      goto LABEL_12;
    }
  }
  return ProcessorNumber;
}
