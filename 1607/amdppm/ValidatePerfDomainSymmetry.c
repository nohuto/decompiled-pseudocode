/*
 * XREFs of ValidatePerfDomainSymmetry @ 0x1C001BBD4
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0011F34 (ProcLibDeviceStart.c)
 * Callees:
 *     ResetEnumerationContext @ 0x1C00061FC (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C0006210 (EnumerateNextDevice.c)
 *     __security_check_cookie @ 0x1C0006330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00067E0 (_guard_dispatch_icall_nop.c)
 *     GetPerfDomain @ 0x1C0016434 (GetPerfDomain.c)
 *     ValidatePctPtcSymmetry @ 0x1C001C04C (ValidatePctPtcSymmetry.c)
 */

__int64 __fastcall ValidatePerfDomainSymmetry(_QWORD *a1)
{
  _QWORD *v1; // r14
  unsigned int v2; // edi
  __int64 v3; // rsi
  int Device; // eax
  _DWORD *v5; // r8
  __int64 v6; // r10
  _QWORD *v7; // r13
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  _DWORD *v10; // rax
  unsigned int v11; // r9d
  unsigned int v12; // r10d
  _DWORD *v13; // rax
  unsigned int v14; // r9d
  unsigned int v15; // r10d
  char *v16; // rcx
  _DWORD *v17; // rax
  unsigned int v18; // r8d
  unsigned int v19; // r9d
  _DWORD *v20; // rdx
  signed __int64 v21; // rcx
  unsigned int *v22; // r12
  __int64 v23; // rcx
  int v24; // r15d
  __int64 v25; // r14
  __int64 v26; // rdi
  __int64 v27; // r13
  __int64 v28; // rax
  const void *v29; // rcx
  bool v30; // zf
  const void *v31; // rdx
  unsigned int v32; // eax
  __int64 v33; // r10
  __int64 v34; // r11
  int *v35; // r8
  int v36; // edx
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 v39; // r10
  __int64 v40; // rsi
  __int64 v42; // [rsp+38h] [rbp-99h] BYREF
  _QWORD v43[3]; // [rsp+40h] [rbp-91h] BYREF
  _QWORD *v44; // [rsp+58h] [rbp-79h]
  __int64 v45[5]; // [rsp+60h] [rbp-71h] BYREF
  int v46; // [rsp+88h] [rbp-49h] BYREF
  const char *v47; // [rsp+90h] [rbp-41h]
  int v48; // [rsp+98h] [rbp-39h]
  const char *v49; // [rsp+A0h] [rbp-31h]
  int v50; // [rsp+A8h] [rbp-29h]
  const char *v51; // [rsp+B0h] [rbp-21h]
  int v52; // [rsp+B8h] [rbp-19h]
  const char *v53; // [rsp+C0h] [rbp-11h]
  int v54; // [rsp+C8h] [rbp-9h]
  const char *v55; // [rsp+D0h] [rbp-1h]
  int v56; // [rsp+D8h] [rbp+7h]
  const char *v57; // [rsp+E0h] [rbp+Fh]
  int v58; // [rsp+E8h] [rbp+17h]
  const char *v59; // [rsp+F0h] [rbp+1Fh]

  v1 = a1;
  v44 = a1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00093A8,
    0LL);
  v2 = 0;
  if ( (unsigned int)GetPerfDomain(v1, (__int64)v45, &v42) == 1 )
    goto LABEL_63;
  v42 = 0LL;
  v3 = 0LL;
  ResetEnumerationContext(v45);
  Device = EnumerateNextDevice((__int64)v45, v43);
  v6 = 0x10FF300000LL;
  while ( !Device )
  {
    v7 = (_QWORD *)v43[0];
    if ( (_QWORD *)v43[0] == v1 )
      goto LABEL_57;
    v8 = *(_QWORD *)(v43[0] + 248LL);
    v9 = v1[31];
    if ( ((v9 ^ v8) & v6) != 0 )
    {
      v8 = v6 & (v9 ^ v8);
      v3 |= v8;
      v42 = v3;
    }
    if ( (v9 & 0x70000000) == 0 )
      goto LABEL_29;
    if ( (int)ValidatePctPtcSymmetry(v8, v1 + 47, v5, v1 + 47) < 0 )
    {
      v3 |= 0x70000000uLL;
      v42 = v3;
    }
    v9 = v1[31];
    if ( (v9 & 0x40000000) == 0 )
      goto LABEL_19;
    v8 = v1[51];
    v10 = (_DWORD *)v7[51];
    if ( !v8 )
      goto LABEL_18;
    if ( !v10 )
      goto LABEL_18;
    v11 = *(_DWORD *)v8;
    if ( *(_DWORD *)v8 != *v10 )
      goto LABEL_18;
    v12 = 0;
    if ( v11 )
    {
      v5 = v10 + 2;
      v8 -= (unsigned __int64)v10;
      while ( *(_DWORD *)((char *)v5 + v8) == *v5 )
      {
        ++v12;
        v5 += 12;
        if ( v12 >= v11 )
          goto LABEL_19;
      }
LABEL_18:
      v3 |= 0x40000000uLL;
      v42 = v3;
    }
LABEL_19:
    if ( (v9 & 0x30000000) != 0 )
    {
      v8 = v1[50];
      v13 = (_DWORD *)v7[50];
      if ( !v8 )
        goto LABEL_28;
      if ( !v13 )
        goto LABEL_28;
      v14 = *(_DWORD *)v8;
      if ( *(_DWORD *)v8 != *v13 )
        goto LABEL_28;
      v15 = 0;
      if ( v14 )
      {
        v5 = v13 + 2;
        v8 -= (unsigned __int64)v13;
        while ( *(_DWORD *)((char *)v5 + v8) == *v5 )
        {
          ++v15;
          v5 += 12;
          if ( v15 >= v14 )
            goto LABEL_29;
        }
LABEL_28:
        v3 |= 0x30000000uLL;
        v42 = v3;
      }
    }
LABEL_29:
    if ( (v9 & 0x3300000) != 0 )
    {
      if ( (int)ValidatePctPtcSymmetry(v8, v1 + 54, v5, v1 + 54) < 0 )
      {
        v3 |= 0x3300000uLL;
        v42 = v3;
      }
      v16 = (char *)v1[57];
      v17 = (_DWORD *)v7[57];
      if ( !v16 )
        goto LABEL_40;
      if ( !v17 )
        goto LABEL_40;
      v18 = *(_DWORD *)v16;
      if ( *(_DWORD *)v16 != *v17 )
        goto LABEL_40;
      v19 = 0;
      if ( v18 )
      {
        v20 = v17 + 1;
        v21 = v16 - (char *)v17;
        while ( *(_DWORD *)((char *)v20 + v21) == *v20 )
        {
          ++v19;
          v20 += 5;
          if ( v19 >= v18 )
            goto LABEL_41;
        }
LABEL_40:
        v3 |= 0x3300000uLL;
        v42 = v3;
      }
    }
LABEL_41:
    if ( (v1[31] & 0x8000000) != 0 )
    {
      v22 = (unsigned int *)&CpcRegisterTable;
      v23 = v1[67];
      v24 = 0;
      v25 = v7[67];
      v26 = v23;
      v27 = 15LL;
      do
      {
        v28 = *v22;
        v29 = (const void *)(v28 + v26);
        v30 = *(_BYTE *)(v28 + v26) == 10;
        v31 = (const void *)(v28 + v25);
        v32 = 12;
        if ( v30 )
          v32 = 4;
        v22 += 6;
        if ( RtlCompareMemory(v29, v31, v32) != v32 )
          v24 = -1073741823;
        --v27;
      }
      while ( v27 );
      v3 = v42;
      v1 = v44;
      v7 = (_QWORD *)v43[0];
      if ( v24 < 0 )
      {
        v3 = v42 | 0x8000000;
        v42 |= 0x8000000uLL;
      }
    }
    if ( (v1[31] & 0x1000000000LL) != 0 )
    {
      v33 = v7[142];
      v34 = v1[142];
      v35 = &v46;
      v47 = "HighestPerformance";
      v36 = 0;
      v46 = 8;
      v49 = "NominalPerformance";
      v37 = 7LL;
      v48 = 12;
      v51 = "LowestNonlinearPerformance";
      v53 = "LowestPerformance";
      v55 = "NominalFrequency";
      v57 = "FrequencyCounterIndex";
      v59 = "PerformanceCounterIndex";
      v50 = 16;
      v52 = 20;
      v54 = 24;
      v56 = 40;
      v58 = 44;
      do
      {
        v38 = (unsigned int)*v35;
        v35 += 4;
        if ( *(_DWORD *)(v34 + v38) != *(_DWORD *)(v38 + v33) )
          v36 = -1073741823;
        --v37;
      }
      while ( v37 );
      if ( v36 < 0 )
      {
        v3 |= 0x1000000000uLL;
        v42 = v3;
      }
    }
LABEL_57:
    Device = EnumerateNextDevice((__int64)v45, v43);
  }
  ResetEnumerationContext(v45);
  if ( !(unsigned int)EnumerateNextDevice((__int64)v45, v43) )
  {
    v40 = ~v3;
    do
      *(_QWORD *)(v43[0] + 248LL) &= v40;
    while ( !(unsigned int)EnumerateNextDevice((__int64)v45, v43) );
  }
  v2 = (v39 & v1[31]) == 0 ? 0xC0000001 : 0;
LABEL_63:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00093A8);
  return v2;
}
