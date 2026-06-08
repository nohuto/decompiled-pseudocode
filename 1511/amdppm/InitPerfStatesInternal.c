/*
 * XREFs of InitPerfStatesInternal @ 0x1C0016CC0
 * Callers:
 *     RegisterKernelPerfStates @ 0x1C0017410 (RegisterKernelPerfStates.c)
 *     RegisterHvPerfStatesCounters @ 0x1C001B0B0 (RegisterHvPerfStatesCounters.c)
 * Callees:
 *     ResetEnumerationContext @ 0x1C00047E8 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C00047FC (EnumerateNextDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C0005DE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006140 (memset.c)
 *     GetPerfDomain @ 0x1C00190EC (GetPerfDomain.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001BE2C (GetRegistryDwordValueNoDefault.c)
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
  unsigned int v10; // edi
  char *PoolWithTag; // rax
  char *v12; // r12
  PVOID v13; // rax
  _QWORD *v14; // rax
  char *v15; // rax
  __int64 v16; // r9
  PVOID v17; // rax
  unsigned int v18; // edx
  __int64 v19; // rcx
  _DWORD *v20; // r9
  __int64 v21; // r11
  int *v22; // r15
  __int64 v23; // r8
  int v24; // r9d
  int RegistryDwordValueNoDefault; // eax
  unsigned int v26; // r10d
  __int64 v27; // r8
  int v28; // r12d
  __int64 v29; // rcx
  unsigned int v30; // edx
  char v31; // al
  __int64 v32; // rdx
  int v33; // eax
  unsigned int v34; // ecx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  void *v39; // rcx
  __int64 v40; // r15
  _QWORD *v41; // r13
  unsigned int v42; // r11d
  char *v43; // r14
  int v44; // ecx
  __int64 v45; // r8
  __int64 v46; // rdx
  unsigned int v47; // edx
  int v49; // [rsp+20h] [rbp-48h]
  unsigned int v50; // [rsp+24h] [rbp-44h]
  __int16 v51; // [rsp+28h] [rbp-40h] BYREF
  PVOID P; // [rsp+30h] [rbp-38h]
  char *v53; // [rsp+38h] [rbp-30h]
  __int64 v54[5]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v55; // [rsp+B0h] [rbp+48h] BYREF
  int (__fastcall *v56)(char *, _QWORD); // [rsp+B8h] [rbp+50h]
  __int64 v57; // [rsp+C0h] [rbp+58h]
  size_t Size; // [rsp+C8h] [rbp+60h]

  v56 = a2;
  v3 = 0;
  P = 0LL;
  v4 = 0LL;
  LODWORD(v57) = 0;
  v5 = 0LL;
  v6 = 0LL;
  v7 = *(_QWORD *)(a1 + 248);
  v8 = 0;
  if ( (v7 & 0x70000000) != 0 )
  {
    if ( (v7 & 0x40000000) != 0 )
      v5 = *(unsigned int **)(a1 + 392);
    else
      v5 = *(unsigned int **)(a1 + 384);
    v8 = *v5;
  }
  if ( (v7 & 0x3300000) != 0 )
  {
    v3 = **(_DWORD **)(a1 + 440);
    LODWORD(v57) = v3;
  }
  v9 = v3 + v8;
  if ( !(v3 + v8) )
    return (unsigned int)-1073741823;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00093A8,
    0LL);
  LODWORD(v55) = GetPerfDomain(a1, v54, &v51);
  Size = (unsigned int)(88 * v55);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)Size, 0x72637250u);
  v53 = PoolWithTag;
  v12 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_11;
  memset(PoolWithTag, 0, Size);
  Size = 32 * v9;
  v13 = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x72637250u);
  P = v13;
  if ( !v13 )
    goto LABEL_11;
  memset(v13, 0, Size);
  v14 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x72637250u);
  v6 = v14;
  if ( !v14 )
    goto LABEL_11;
  memset(v14, 0, 0x38uLL);
  v49 = (32 * v55 + 415) & 0xFFFFFFF8;
  v50 = (v49 + 31) & 0xFFFFFFF8;
  LODWORD(Size) = v50 + 8 * v55;
  v15 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)Size, 0x72637250u);
  v4 = v15;
  if ( v15 )
  {
    memset(v15, 0, (unsigned int)Size);
    if ( *(_BYTE *)(a1 + 1065) )
      *((_QWORD *)v4 + 45) = PepParkPreference;
    if ( (*(_QWORD *)(a1 + 248) & 0x10000000000LL) != 0 )
    {
      *((_QWORD *)v4 + 46) = PepParkMask;
      *((_QWORD *)v4 + 47) = PepPerfCheckComplete;
      *((_QWORD *)v4 + 8) = *(_QWORD *)(a1 + 1048);
    }
    *((_DWORD *)v4 + 3) = v55;
    *((_QWORD *)v4 + 49) = v4 + 408;
    *(_DWORD *)v4 = 42;
    *((_QWORD *)v4 + 48) = &v4[v49];
    *((_DWORD *)v4 + 8) = 1;
    *((_QWORD *)v4 + 50) = &v4[v50];
    *((_WORD *)v4 + 2) = v51;
    *((_QWORD *)v4 + 41) = PerfControlPTStates;
    *((_QWORD *)v4 + 40) = PerfSelectionPTStates;
    v17 = P;
    *((_WORD *)v4 + 3) = 257;
    v4[40] = 0;
    *((_DWORD *)v4 + 5) = 100;
    v6[4] = v17;
    *((_QWORD *)v4 + 6) = 0LL;
    *((_QWORD *)v4 + 7) = 100LL;
    if ( v8 && v5 )
    {
      *((_QWORD *)v4 + 32) = *(_QWORD *)(a1 + 296);
      *((_QWORD *)v4 + 33) = *(_QWORD *)(a1 + 304);
      *((_DWORD *)v4 + 4) = v5[2];
      v18 = v5[12 * v8 - 9];
      *v6 = *(_QWORD *)(a1 + 264);
      v6[2] = a1 + 360;
      *((_QWORD *)v4 + 7) = v5[2];
      *((_QWORD *)v4 + 6) = v5[12 * v8 - 10];
      LODWORD(v55) = v18;
      v19 = 0LL;
      v20 = v5 + 3;
      v21 = v8;
      v22 = (int *)(v4 + 16);
      do
      {
        v23 = v6[4];
        *(_DWORD *)(v19 + v23 + 16) = *(v20 - 1);
        *(_BYTE *)(v19 + v23 + 24) = 100 * *(v20 - 1) / (unsigned int)*v22;
        *(_QWORD *)(v19 + v23) = *(_QWORD *)(v20 + 3);
        *(_DWORD *)(v19 + v23 + 20) = *v20;
        *(_QWORD *)(v19 + v23 + 8) = *(_QWORD *)(v20 + 5);
        *(_BYTE *)(v19 + v23 + 25) = 1;
        *(_WORD *)(v19 + v23 + 26) = *((_WORD *)v20 + 2);
        if ( (*(_DWORD *)(a1 + 248) & 0x40000000) != 0 )
        {
          *(_QWORD *)(v19 + v23 + 8) = 0LL;
          *(_QWORD *)(v19 + v23) = v20 - 1;
        }
        v20 += 12;
        v19 += 32LL;
        --v21;
      }
      while ( v21 );
      v24 = *(_DWORD *)(32LL * (v8 - 1) + v6[4] + 16);
      goto LABEL_31;
    }
    v22 = (int *)(v4 + 16);
    *((_DWORD *)v4 + 4) = 0;
    RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                    L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                                    L"~MHz",
                                    v4 + 16,
                                    v16);
    LODWORD(v21) = 0;
    if ( RegistryDwordValueNoDefault < 0 )
      *v22 = 0;
    v24 = *v22;
    if ( *v22 )
    {
      LODWORD(v55) = 1000 * v24;
LABEL_31:
      v26 = v57;
      if ( (_DWORD)v57 )
      {
        v27 = 0LL;
        v28 = v55;
        v6[1] = *(_QWORD *)(a1 + 272);
        v6[3] = a1 + 416;
        do
        {
          v29 = v6[4] + 32LL * ((unsigned int)v21 + v8);
          v57 = *(_QWORD *)(a1 + 440);
          v55 = v29;
          v30 = v24 * *(_DWORD *)(v27 + v57 + 4) / 0x64u;
          *(_DWORD *)(v29 + 16) = v30;
          v31 = 100 * v30 / *v22;
          v32 = v57;
          *(_BYTE *)(v29 + 24) = v31;
          *(_QWORD *)v29 = *(unsigned int *)(v27 + v32 + 16);
          *(_QWORD *)(v29 + 8) = *(unsigned int *)(v27 + v32 + 20);
          *(_BYTE *)(v29 + 25) = 2;
          *(_WORD *)(v29 + 26) = *(_WORD *)(v27 + v32 + 12);
          v33 = *(_DWORD *)(v27 + v32 + 8);
          if ( v33 )
            *(_DWORD *)(v29 + 20) = v33;
          else
            *(_DWORD *)(v55 + 20) = v28 * *(_DWORD *)(v27 + v32 + 4) / 0x64u;
          LODWORD(v21) = v21 + 1;
          v27 += 20LL;
        }
        while ( (unsigned int)v21 < v26 );
        v12 = v53;
      }
      v34 = 1;
      if ( v9 > 1 )
      {
        while ( *(_BYTE *)(32LL * v34 + v6[4] + 24) )
        {
          if ( ++v34 >= v9 )
            goto LABEL_43;
        }
        v9 = v34;
      }
LABEL_43:
      *((_DWORD *)v6 + 10) = v9;
      if ( v9 <= v8 )
      {
        *((_DWORD *)v6 + 11) = v9;
        v35 = v9 - 1;
        *((_DWORD *)v6 + 12) = 0;
      }
      else
      {
        *((_DWORD *)v6 + 11) = v8;
        v35 = v8;
        *((_DWORD *)v6 + 12) = v9 - v8;
      }
      *((_DWORD *)v4 + 6) = *(unsigned __int8 *)(32 * v35 + v6[4] + 24);
      *((_DWORD *)v4 + 7) = *(unsigned __int8 *)(32LL * (v9 - 1) + v6[4] + 24);
      v36 = *(_QWORD *)(a1 + 288);
      if ( v36 )
        *((_QWORD *)v4 + 30) = v36;
      v37 = *((_QWORD *)v4 + 48);
      *(_QWORD *)(v37 + 8) = 100LL;
      if ( *(_QWORD *)(a1 + 280) )
      {
        v38 = *(_QWORD *)(a1 + 248);
        *(_WORD *)(v37 + 16) = 257;
        v39 = PerfReadActualMasterCount;
        if ( (v38 & 0x8000000000LL) != 0 )
          v39 = PerfReadWrappingCounter;
        *(_QWORD *)v37 = v39;
      }
      else
      {
        *(_WORD *)(v37 + 16) = 0;
        *(_QWORD *)v37 = PerfStatesInstantaneousFrequency;
      }
      v40 = *((_QWORD *)v4 + 49);
      v41 = (_QWORD *)*((_QWORD *)v4 + 50);
      ResetEnumerationContext(v54);
      if ( !(unsigned int)EnumerateNextDevice((__int64)v54, &v55) )
      {
        v43 = v12 + 4;
        do
        {
          v44 = *((_DWORD *)v6 + 11);
          v45 = v55;
          v46 = v42;
          if ( !v44 || (v46 = *(unsigned int *)(v55 + 400), (_DWORD)v46 == v44 - 1) )
          {
            if ( *((_DWORD *)v6 + 12) > v42 )
              v46 = (unsigned int)(v44 + *(_DWORD *)(v55 + 448));
          }
          v47 = *(unsigned __int8 *)(32 * v46 + v6[4] + 24);
          *(_DWORD *)(v40 + 16) = v47;
          if ( v47 < 0x64 )
            *(_DWORD *)(v40 + 24) = 2;
          *(_DWORD *)(v40 + 20) = *(_DWORD *)(v45 + 664);
          KeGetProcessorNumberFromIndex(*(_DWORD *)(v45 + 56), (PPROCESSOR_NUMBER)v40);
          *(_QWORD *)(v40 + 8) = v43 - 4;
          *(_QWORD *)(v43 + 12) = v6;
          *(_DWORD *)v43 = 100;
          if ( *(_QWORD *)(a1 + 280) )
          {
            *v41 = v43 + 20;
            *(_QWORD *)(v43 + 68) = *(_QWORD *)(a1 + 280);
          }
          else
          {
            *v41 = v43 - 4;
          }
          ++v41;
          v43 += 88;
          v40 += 32LL;
        }
        while ( !(unsigned int)EnumerateNextDevice((__int64)v54, &v55) );
      }
      if ( v56(v4, (unsigned int)Size) >= 0 )
      {
        ResetEnumerationContext(v54);
        while ( !(unsigned int)EnumerateNextDevice((__int64)v54, &v55) )
        {
          *(_QWORD *)(v55 + 200) = v12;
          v12 += 88;
        }
        v6 = 0LL;
        P = 0LL;
        v12 = 0LL;
      }
      v10 = 0;
      goto LABEL_71;
    }
    *(_QWORD *)(a1 + 248) &= 0xFFFFFFFFFCFFFFFFuLL;
    v10 = -1073741823;
  }
  else
  {
LABEL_11:
    v10 = -1073741670;
  }
LABEL_71:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00093A8);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x72637250u);
  if ( P )
    ExFreePoolWithTag(P, 0x72637250u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x72637250u);
  if ( v12 )
    ExFreePoolWithTag(v12, 0x72637250u);
  return v10;
}
