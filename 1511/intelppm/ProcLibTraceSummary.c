/*
 * XREFs of ProcLibTraceSummary @ 0x1C001AEFC
 * Callers:
 *     DecodeMWaitCState @ 0x1C0016660 (DecodeMWaitCState.c)
 * Callees:
 *     ProcLibGetProcessorNumber @ 0x1C00018D4 (ProcLibGetProcessorNumber.c)
 *     __security_check_cookie @ 0x1C0002450 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029B0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall ProcLibTraceSummary(_QWORD *a1)
{
  _BYTE *v2; // rbx
  PVOID v3; // rdi
  int ProcessorNumber; // eax
  __int64 v5; // rax
  ULONG v6; // esi
  unsigned int *v7; // r13
  unsigned int *v8; // r12
  int *v9; // r9
  unsigned int v10; // ecx
  __int64 v11; // rdx
  unsigned __int8 v12; // r15
  _BYTE *PoolWithTag; // rax
  unsigned int v14; // edx
  unsigned int v15; // r8d
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // r9
  unsigned int i; // r10d
  __int64 v21; // rcx
  unsigned int v23; // [rsp+38h] [rbp-59h] BYREF
  unsigned int v24; // [rsp+3Ch] [rbp-55h] BYREF
  struct _PROCESSOR_NUMBER v25; // [rsp+40h] [rbp-51h] BYREF
  int v26; // [rsp+44h] [rbp-4Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-49h] BYREF
  unsigned __int8 *p_Number; // [rsp+58h] [rbp-39h]
  __int64 v29; // [rsp+60h] [rbp-31h]
  int *v30; // [rsp+68h] [rbp-29h]
  __int64 v31; // [rsp+70h] [rbp-21h]
  unsigned int *v32; // [rsp+78h] [rbp-19h]
  __int64 v33; // [rsp+80h] [rbp-11h]
  int *v34; // [rsp+88h] [rbp-9h]
  __int64 v35; // [rsp+90h] [rbp-1h]
  _BYTE *v36; // [rsp+98h] [rbp+7h]
  unsigned int v37; // [rsp+A0h] [rbp+Fh]
  int v38; // [rsp+A4h] [rbp+13h]

  v2 = 0LL;
  v3 = 0LL;
  LOBYTE(ProcessorNumber) = EtwEventEnabled(ProcLibEtwHandle, &PPM_ETW_SUMMARY_RUNDOWN);
  if ( (_BYTE)ProcessorNumber )
  {
    ProcessorNumber = ProcLibGetProcessorNumber((__int64)a1, &v25);
    if ( ProcessorNumber >= 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        a1[24],
        0LL);
      v5 = a1[31];
      v6 = 5;
      v7 = (unsigned int *)a1[58];
      v8 = (unsigned int *)a1[48];
      v9 = (int *)a1[55];
      v10 = 0;
      v11 = 0LL;
      v12 = 0;
      v23 = 0;
      v24 = 0;
      v26 = 0;
      if ( (v5 & 0x7F077) != 0 )
      {
        v10 = *v7;
        v23 = v10;
        if ( !v10 || *((_BYTE *)v7 + 16) != 1 )
        {
          ++v10;
          v12 = 1;
          v23 = v10;
        }
      }
      if ( (v5 & 0x70000000) != 0 )
      {
        if ( (v5 & 0x40000000) != 0 )
          v8 = (unsigned int *)a1[49];
        v11 = *v8;
        v24 = *v8;
      }
      if ( (v5 & 0x3300000) != 0 )
        v26 = *v9;
      *(_QWORD *)&UserData.Size = 2LL;
      UserData.Ptr = (unsigned __int64)&v25;
      p_Number = &v25.Number;
      v30 = (int *)&v23;
      v32 = &v24;
      v34 = &v26;
      v29 = 1LL;
      v31 = 4LL;
      v33 = 4LL;
      v35 = 4LL;
      if ( (v5 & 0x7F077) != 0 )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v10, 0x72637250u);
        v2 = PoolWithTag;
        if ( !PoolWithTag )
        {
LABEL_30:
          LOBYTE(ProcessorNumber) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
                                      WdfDriverGlobals,
                                      a1[24]);
          return ProcessorNumber;
        }
        if ( v12 )
          *PoolWithTag = 1;
        v14 = v23;
        v15 = 0;
        if ( v23 != v12 )
        {
          do
          {
            v16 = v15;
            v17 = v12 + v15++;
            v2[v17] = v7[5 * v16 + 4];
            v14 = v23;
          }
          while ( v15 < v23 - v12 );
        }
        v37 = v14;
        v6 = 6;
        v11 = v24;
        v36 = v2;
        v38 = 0;
      }
      if ( (_DWORD)v11 )
      {
        v3 = ExAllocatePoolWithTag(PagedPool, 8 * v11, 0x72637250u);
        if ( !v3 )
        {
LABEL_26:
          if ( v2 )
            ExFreePoolWithTag(v2, 0x72637250u);
          if ( v3 )
            ExFreePoolWithTag(v3, 0x72637250u);
          goto LABEL_30;
        }
        v18 = v24;
        v19 = 0LL;
        for ( i = v8[2]; (unsigned int)v19 < v24; v18 = v24 )
        {
          *((_DWORD *)v3 + 2 * v19) = v8[12 * v19 + 2];
          *((_DWORD *)v3 + 2 * v19 + 1) = 100 * v8[12 * v19 + 2] / i;
          v19 = (unsigned int)(v19 + 1);
        }
        v21 = 2LL * v6;
        *(&UserData.Reserved + 2 * v21) = 0;
        ++v6;
        *(&UserData.Ptr + v21) = (unsigned __int64)v3;
        *(&UserData.Size + 2 * v21) = 8 * v18;
      }
      EtwWrite(ProcLibEtwHandle, &PPM_ETW_SUMMARY_RUNDOWN, 0LL, v6, &UserData);
      goto LABEL_26;
    }
  }
  return ProcessorNumber;
}
