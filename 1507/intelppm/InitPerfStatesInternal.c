/*
 * XREFs of InitPerfStatesInternal @ 0x1C00152DC
 * Callers:
 *     RegisterKernelPerfStates @ 0x1C00150E0 (RegisterKernelPerfStates.c)
 *     RegisterHvPerfStatesCounters @ 0x1C001CD80 (RegisterHvPerfStatesCounters.c)
 * Callees:
 *     EnumerateNextDevice @ 0x1C00016FC (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0001738 (ResetEnumerationContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C0002260 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00025C0 (memset.c)
 *     CalculatePercentageCap @ 0x1C0015860 (CalculatePercentageCap.c)
 *     GetPerfDomain @ 0x1C001596C (GetPerfDomain.c)
 *     GetRegistryDwordValue @ 0x1C0016238 (GetRegistryDwordValue.c)
 */

__int64 __fastcall InitPerfStatesInternal(__int64 a1, int (__fastcall *a2)(char *, _QWORD))
{
  int v3; // ecx
  char *v4; // rbx
  unsigned int *v5; // r15
  _QWORD *v6; // rsi
  __int64 v7; // rax
  unsigned int v8; // r13d
  unsigned int v9; // r14d
  char *PoolWithTag; // rax
  char *v11; // r12
  PVOID v12; // rax
  _QWORD *v13; // rax
  char *v14; // rax
  PVOID v15; // rax
  unsigned int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // r11
  _DWORD *v19; // r15
  __int64 v20; // r8
  __int64 v21; // r8
  int *v22; // r15
  int v23; // r9d
  unsigned int v24; // r10d
  unsigned int v25; // ecx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  void *v30; // rcx
  __int64 v31; // r15
  _QWORD *v32; // r13
  char *v33; // r14
  unsigned int v34; // eax
  __int64 v35; // rcx
  unsigned int v36; // edi
  int RegistryDwordValue; // eax
  unsigned int v39; // r11d
  int v40; // r12d
  __int64 v41; // rcx
  unsigned int v42; // edx
  char v43; // al
  __int64 v44; // rdx
  int v45; // eax
  int v46; // [rsp+20h] [rbp-48h]
  unsigned int v47; // [rsp+24h] [rbp-44h]
  __int16 v48; // [rsp+28h] [rbp-40h] BYREF
  PVOID P; // [rsp+30h] [rbp-38h]
  char *v50; // [rsp+38h] [rbp-30h]
  __int64 v51[5]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v52; // [rsp+B0h] [rbp+48h] BYREF
  int (__fastcall *v53)(char *, _QWORD); // [rsp+B8h] [rbp+50h]
  __int64 v54; // [rsp+C0h] [rbp+58h]
  size_t Size; // [rsp+C8h] [rbp+60h]

  v53 = a2;
  v3 = 0;
  P = 0LL;
  v4 = 0LL;
  LODWORD(v54) = 0;
  v5 = 0LL;
  v6 = 0LL;
  v7 = *(_QWORD *)(a1 + 248);
  v8 = 0;
  if ( (v7 & 0x70000000) != 0 )
  {
    if ( (v7 & 0x40000000) != 0 )
      v5 = *(unsigned int **)(a1 + 400);
    else
      v5 = *(unsigned int **)(a1 + 392);
    v8 = *v5;
  }
  if ( (v7 & 0x3300000) != 0 )
  {
    v3 = **(_DWORD **)(a1 + 448);
    LODWORD(v54) = v3;
  }
  v9 = v3 + v8;
  if ( !(v3 + v8) )
    return (unsigned int)-1073741823;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C000D9C8,
    0LL);
  LODWORD(v52) = GetPerfDomain(a1, v51, &v48);
  Size = (unsigned int)(88 * v52);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)Size, 0x72637250u);
  v50 = PoolWithTag;
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_59;
  memset(PoolWithTag, 0, Size);
  Size = 32 * v9;
  v12 = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x72637250u);
  P = v12;
  if ( !v12 )
    goto LABEL_59;
  memset(v12, 0, Size);
  v13 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x72637250u);
  v6 = v13;
  if ( !v13 )
    goto LABEL_59;
  memset(v13, 0, 0x38uLL);
  v46 = (32 * v52 + 415) & 0xFFFFFFF8;
  v47 = (v46 + 31) & 0xFFFFFFF8;
  LODWORD(Size) = v47 + 8 * v52;
  v14 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)Size, 0x72637250u);
  v4 = v14;
  if ( v14 )
  {
    memset(v14, 0, (unsigned int)Size);
    if ( *(_BYTE *)(a1 + 1073) )
      *((_QWORD *)v4 + 45) = PepParkPreference;
    if ( (*(_QWORD *)(a1 + 248) & 0x10000000000LL) != 0 )
    {
      *((_QWORD *)v4 + 46) = PepParkMask;
      *((_QWORD *)v4 + 47) = PepPerfCheckComplete;
      *((_QWORD *)v4 + 8) = *(_QWORD *)(a1 + 1056);
    }
    *((_DWORD *)v4 + 3) = v52;
    *((_QWORD *)v4 + 49) = v4 + 408;
    *(_DWORD *)v4 = 42;
    *((_QWORD *)v4 + 48) = &v4[v46];
    *((_DWORD *)v4 + 8) = 1;
    *((_QWORD *)v4 + 50) = &v4[v47];
    *((_WORD *)v4 + 2) = v48;
    *((_QWORD *)v4 + 41) = PerfControlPTStates;
    *((_QWORD *)v4 + 40) = PerfSelectionPTStates;
    v15 = P;
    *((_WORD *)v4 + 3) = 257;
    v4[40] = 0;
    *((_DWORD *)v4 + 5) = 100;
    v6[4] = v15;
    *((_QWORD *)v4 + 6) = 0LL;
    *((_QWORD *)v4 + 7) = 100LL;
    if ( v8 && v5 )
    {
      *((_QWORD *)v4 + 32) = *(_QWORD *)(a1 + 296);
      *((_QWORD *)v4 + 33) = *(_QWORD *)(a1 + 304);
      *((_DWORD *)v4 + 4) = v5[2];
      v16 = v5[12 * v8 - 9];
      *v6 = *(_QWORD *)(a1 + 264);
      v6[2] = a1 + 368;
      *((_QWORD *)v4 + 7) = v5[2];
      *((_QWORD *)v4 + 6) = v5[12 * v8 - 10];
      LODWORD(v52) = v16;
      v17 = 0LL;
      v18 = v8;
      v19 = v5 + 3;
      do
      {
        v20 = v6[4];
        *(_DWORD *)(v17 + v20 + 16) = *(v19 - 1);
        *(_BYTE *)(v17 + v20 + 24) = (unsigned int)(100 * *(v19 - 1)) / *((_DWORD *)v4 + 4);
        *(_QWORD *)(v17 + v20) = *(_QWORD *)(v19 + 3);
        *(_DWORD *)(v17 + v20 + 20) = *v19;
        *(_QWORD *)(v17 + v20 + 8) = *(_QWORD *)(v19 + 5);
        *(_BYTE *)(v17 + v20 + 25) = 1;
        *(_WORD *)(v17 + v20 + 26) = *((_WORD *)v19 + 2);
        if ( (*(_DWORD *)(a1 + 248) & 0x40000000) != 0 )
        {
          *(_QWORD *)(v17 + v20 + 8) = 0LL;
          *(_QWORD *)(v17 + v20) = v19 - 1;
        }
        v19 += 12;
        v17 += 32LL;
        --v18;
      }
      while ( v18 );
      v21 = 0LL;
      v22 = (int *)(v4 + 16);
      v23 = *(_DWORD *)(32LL * (v8 - 1) + v6[4] + 16);
      goto LABEL_23;
    }
    v22 = (int *)(v4 + 16);
    *((_DWORD *)v4 + 4) = 0;
    RegistryDwordValue = GetRegistryDwordValue(
                           L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                           L"~MHz",
                           v4 + 16);
    v21 = 0LL;
    if ( RegistryDwordValue >= 0 )
    {
      v23 = *v22;
      if ( *v22 )
      {
        LODWORD(v52) = 1000 * v23;
LABEL_23:
        v24 = v54;
        if ( (_DWORD)v54 )
        {
          v39 = 0;
          v40 = v52;
          v6[1] = *(_QWORD *)(a1 + 272);
          v6[3] = a1 + 424;
          do
          {
            v41 = v6[4] + 32LL * (v39 + v8);
            v54 = *(_QWORD *)(a1 + 448);
            v52 = v41;
            v42 = v23 * *(_DWORD *)(v21 + v54 + 4) / 0x64u;
            *(_DWORD *)(v41 + 16) = v42;
            v43 = 100 * v42 / *v22;
            v44 = v54;
            *(_BYTE *)(v41 + 24) = v43;
            *(_QWORD *)v41 = *(unsigned int *)(v21 + v44 + 16);
            *(_QWORD *)(v41 + 8) = *(unsigned int *)(v21 + v44 + 20);
            *(_BYTE *)(v41 + 25) = 2;
            *(_WORD *)(v41 + 26) = *(_WORD *)(v21 + v44 + 12);
            v45 = *(_DWORD *)(v21 + v44 + 8);
            if ( v45 )
              *(_DWORD *)(v41 + 20) = v45;
            else
              *(_DWORD *)(v52 + 20) = v40 * *(_DWORD *)(v21 + v44 + 4) / 0x64u;
            ++v39;
            v21 += 20LL;
          }
          while ( v39 < v24 );
          v11 = v50;
        }
        v25 = 1;
        if ( v9 > 1 )
        {
          while ( *(_BYTE *)(32LL * v25 + v6[4] + 24) )
          {
            if ( ++v25 >= v9 )
              goto LABEL_27;
          }
          v9 = v25;
        }
LABEL_27:
        *((_DWORD *)v6 + 10) = v9;
        if ( v9 > v8 )
        {
          *((_DWORD *)v6 + 11) = v8;
          v26 = v8;
          *((_DWORD *)v6 + 12) = v9 - v8;
        }
        else
        {
          *((_DWORD *)v6 + 11) = v9;
          v26 = v9 - 1;
          *((_DWORD *)v6 + 12) = 0;
        }
        *((_DWORD *)v4 + 6) = *(unsigned __int8 *)(32 * v26 + v6[4] + 24);
        *((_DWORD *)v4 + 7) = *(unsigned __int8 *)(32LL * (v9 - 1) + v6[4] + 24);
        v27 = *(_QWORD *)(a1 + 288);
        if ( v27 )
          *((_QWORD *)v4 + 30) = v27;
        v28 = *((_QWORD *)v4 + 48);
        *(_QWORD *)(v28 + 8) = 100LL;
        if ( *(_QWORD *)(a1 + 280) )
        {
          v29 = *(_QWORD *)(a1 + 248);
          *(_WORD *)(v28 + 16) = 257;
          v30 = PerfReadActualMasterCount;
          if ( (v29 & 0x8000000000LL) != 0 )
            v30 = PerfReadWrappingCounter;
          *(_QWORD *)v28 = v30;
        }
        else
        {
          *(_WORD *)(v28 + 16) = 0;
          *(_QWORD *)v28 = PerfStatesInstantaneousFrequency;
        }
        v31 = *((_QWORD *)v4 + 49);
        v32 = (_QWORD *)*((_QWORD *)v4 + 50);
        ResetEnumerationContext(v51);
        if ( !(unsigned int)EnumerateNextDevice((__int64)v51, &v52) )
        {
          v33 = v11 + 4;
          do
          {
            v34 = CalculatePercentageCap(v6, *(unsigned int *)(v52 + 408), *(unsigned int *)(v52 + 456));
            *(_DWORD *)(v31 + 16) = v34;
            if ( v34 < 0x64 )
              *(_DWORD *)(v31 + 24) = 2;
            v35 = v52;
            *(_DWORD *)(v31 + 20) = *(_DWORD *)(v52 + 672);
            KeGetProcessorNumberFromIndex(*(_DWORD *)(v35 + 56), (PPROCESSOR_NUMBER)v31);
            *(_QWORD *)(v31 + 8) = v33 - 4;
            *(_QWORD *)(v33 + 12) = v6;
            *(_DWORD *)v33 = 100;
            if ( *(_QWORD *)(a1 + 280) )
            {
              *v32 = v33 + 20;
              *(_QWORD *)(v33 + 68) = *(_QWORD *)(a1 + 280);
            }
            else
            {
              *v32 = v33 - 4;
            }
            ++v32;
            v33 += 88;
            v31 += 32LL;
          }
          while ( !(unsigned int)EnumerateNextDevice((__int64)v51, &v52) );
        }
        if ( v53(v4, (unsigned int)Size) >= 0 )
        {
          ResetEnumerationContext(v51);
          while ( !(unsigned int)EnumerateNextDevice((__int64)v51, &v52) )
          {
            *(_QWORD *)(v52 + 200) = v11;
            v11 += 88;
          }
          v6 = 0LL;
          P = 0LL;
          v11 = 0LL;
        }
        v36 = 0;
        goto LABEL_48;
      }
    }
    *(_QWORD *)(a1 + 248) &= 0xFFFFFFFFFCFFFFFFuLL;
    v36 = -1073741823;
  }
  else
  {
LABEL_59:
    v36 = -1073741670;
  }
LABEL_48:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C000D9C8);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x72637250u);
  if ( P )
    ExFreePoolWithTag(P, 0x72637250u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x72637250u);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x72637250u);
  return v36;
}
