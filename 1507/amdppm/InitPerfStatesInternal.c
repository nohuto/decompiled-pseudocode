/*
 * XREFs of InitPerfStatesInternal @ 0x1C0016CA8
 * Callers:
 *     RegisterKernelPerfStates @ 0x1C00173F0 (RegisterKernelPerfStates.c)
 *     RegisterHvPerfStatesCounters @ 0x1C001B0D0 (RegisterHvPerfStatesCounters.c)
 * Callees:
 *     ResetEnumerationContext @ 0x1C0004BA8 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C0004BBC (EnumerateNextDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C0005F40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00062C0 (memset.c)
 *     GetPerfDomain @ 0x1C00190CC (GetPerfDomain.c)
 *     GetRegistryDwordValue @ 0x1C001BE30 (GetRegistryDwordValue.c)
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
  PVOID v16; // rax
  unsigned int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // r11
  _DWORD *v20; // r15
  __int64 v21; // r8
  int *v22; // r15
  int v23; // r9d
  unsigned int v24; // r10d
  unsigned int v25; // r11d
  int v26; // r12d
  __int64 v27; // r8
  __int64 v28; // rcx
  unsigned int v29; // edx
  char v30; // al
  __int64 v31; // rdx
  int v32; // eax
  unsigned int v33; // ecx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  void *v38; // rcx
  __int64 v39; // r15
  _QWORD *v40; // r13
  char *v41; // r14
  int v42; // ecx
  __int64 v43; // rdx
  __int64 v44; // r8
  unsigned int v45; // edx
  int v47; // [rsp+20h] [rbp-48h]
  unsigned int v48; // [rsp+24h] [rbp-44h]
  __int16 v49; // [rsp+28h] [rbp-40h] BYREF
  PVOID P; // [rsp+30h] [rbp-38h]
  char *v51; // [rsp+38h] [rbp-30h]
  __int64 v52[5]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v53; // [rsp+B0h] [rbp+48h] BYREF
  int (__fastcall *v54)(char *, _QWORD); // [rsp+B8h] [rbp+50h]
  __int64 v55; // [rsp+C0h] [rbp+58h]
  size_t Size; // [rsp+C8h] [rbp+60h]

  v54 = a2;
  v3 = 0;
  P = 0LL;
  v4 = 0LL;
  LODWORD(v55) = 0;
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
    LODWORD(v55) = v3;
  }
  v9 = v3 + v8;
  if ( !(v3 + v8) )
    return (unsigned int)-1073741823;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C0009398,
    0LL);
  LODWORD(v53) = GetPerfDomain(a1, v52, &v49);
  Size = (unsigned int)(88 * v53);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)Size, 0x72637250u);
  v51 = PoolWithTag;
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
  v47 = (32 * v53 + 415) & 0xFFFFFFF8;
  v48 = (v47 + 31) & 0xFFFFFFF8;
  LODWORD(Size) = v48 + 8 * v53;
  v15 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)Size, 0x72637250u);
  v4 = v15;
  if ( v15 )
  {
    memset(v15, 0, (unsigned int)Size);
    if ( *(_BYTE *)(a1 + 1073) )
      *((_QWORD *)v4 + 45) = PepParkPreference;
    if ( (*(_QWORD *)(a1 + 248) & 0x10000000000LL) != 0 )
    {
      *((_QWORD *)v4 + 46) = PepParkMask;
      *((_QWORD *)v4 + 47) = PepPerfCheckComplete;
      *((_QWORD *)v4 + 8) = *(_QWORD *)(a1 + 1056);
    }
    *((_DWORD *)v4 + 3) = v53;
    *((_QWORD *)v4 + 49) = v4 + 408;
    *(_DWORD *)v4 = 42;
    *((_QWORD *)v4 + 48) = &v4[v47];
    *((_DWORD *)v4 + 8) = 1;
    *((_QWORD *)v4 + 50) = &v4[v48];
    *((_WORD *)v4 + 2) = v49;
    *((_QWORD *)v4 + 41) = PerfControlPTStates;
    *((_QWORD *)v4 + 40) = PerfSelectionPTStates;
    v16 = P;
    *((_WORD *)v4 + 3) = 257;
    v4[40] = 0;
    *((_DWORD *)v4 + 5) = 100;
    v6[4] = v16;
    *((_QWORD *)v4 + 6) = 0LL;
    *((_QWORD *)v4 + 7) = 100LL;
    if ( v8 && v5 )
    {
      *((_QWORD *)v4 + 32) = *(_QWORD *)(a1 + 296);
      *((_QWORD *)v4 + 33) = *(_QWORD *)(a1 + 304);
      *((_DWORD *)v4 + 4) = v5[2];
      v17 = v5[12 * v8 - 9];
      *v6 = *(_QWORD *)(a1 + 264);
      v6[2] = a1 + 368;
      *((_QWORD *)v4 + 7) = v5[2];
      *((_QWORD *)v4 + 6) = v5[12 * v8 - 10];
      LODWORD(v53) = v17;
      v18 = 0LL;
      v19 = v8;
      v20 = v5 + 3;
      do
      {
        v21 = v6[4];
        *(_DWORD *)(v18 + v21 + 16) = *(v20 - 1);
        *(_BYTE *)(v18 + v21 + 24) = (unsigned int)(100 * *(v20 - 1)) / *((_DWORD *)v4 + 4);
        *(_QWORD *)(v18 + v21) = *(_QWORD *)(v20 + 3);
        *(_DWORD *)(v18 + v21 + 20) = *v20;
        *(_QWORD *)(v18 + v21 + 8) = *(_QWORD *)(v20 + 5);
        *(_BYTE *)(v18 + v21 + 25) = 1;
        *(_WORD *)(v18 + v21 + 26) = *((_WORD *)v20 + 2);
        if ( (*(_DWORD *)(a1 + 248) & 0x40000000) != 0 )
        {
          *(_QWORD *)(v18 + v21 + 8) = 0LL;
          *(_QWORD *)(v18 + v21) = v20 - 1;
        }
        v20 += 12;
        v18 += 32LL;
        --v19;
      }
      while ( v19 );
      v22 = (int *)(v4 + 16);
      v23 = *(_DWORD *)(32LL * (v8 - 1) + v6[4] + 16);
      goto LABEL_29;
    }
    v22 = (int *)(v4 + 16);
    *((_DWORD *)v4 + 4) = 0;
    if ( (int)GetRegistryDwordValue(
                L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                L"~MHz",
                v4 + 16) >= 0 )
    {
      v23 = *v22;
      if ( *v22 )
      {
        LODWORD(v53) = 1000 * v23;
LABEL_29:
        v24 = v55;
        if ( (_DWORD)v55 )
        {
          v25 = 0;
          v6[1] = *(_QWORD *)(a1 + 272);
          v6[3] = a1 + 424;
          v26 = v53;
          v27 = 0LL;
          do
          {
            v28 = v6[4] + 32LL * (v25 + v8);
            v55 = *(_QWORD *)(a1 + 448);
            v53 = v28;
            v29 = v23 * *(_DWORD *)(v27 + v55 + 4) / 0x64u;
            *(_DWORD *)(v28 + 16) = v29;
            v30 = 100 * v29 / *v22;
            v31 = v55;
            *(_BYTE *)(v28 + 24) = v30;
            *(_QWORD *)v28 = *(unsigned int *)(v27 + v31 + 16);
            *(_QWORD *)(v28 + 8) = *(unsigned int *)(v27 + v31 + 20);
            *(_BYTE *)(v28 + 25) = 2;
            *(_WORD *)(v28 + 26) = *(_WORD *)(v27 + v31 + 12);
            v32 = *(_DWORD *)(v27 + v31 + 8);
            if ( v32 )
              *(_DWORD *)(v28 + 20) = v32;
            else
              *(_DWORD *)(v53 + 20) = v26 * *(_DWORD *)(v27 + v31 + 4) / 0x64u;
            ++v25;
            v27 += 20LL;
          }
          while ( v25 < v24 );
          v12 = v51;
        }
        v33 = 1;
        if ( v9 > 1 )
        {
          while ( *(_BYTE *)(32LL * v33 + v6[4] + 24) )
          {
            if ( ++v33 >= v9 )
              goto LABEL_41;
          }
          v9 = v33;
        }
LABEL_41:
        *((_DWORD *)v6 + 10) = v9;
        if ( v9 <= v8 )
        {
          *((_DWORD *)v6 + 12) = 0;
          v34 = v9 - 1;
          *((_DWORD *)v6 + 11) = v9;
        }
        else
        {
          *((_DWORD *)v6 + 11) = v8;
          v34 = v8;
          *((_DWORD *)v6 + 12) = v9 - v8;
        }
        *((_DWORD *)v4 + 6) = *(unsigned __int8 *)(32 * v34 + v6[4] + 24);
        *((_DWORD *)v4 + 7) = *(unsigned __int8 *)(32LL * (v9 - 1) + v6[4] + 24);
        v35 = *(_QWORD *)(a1 + 288);
        if ( v35 )
          *((_QWORD *)v4 + 30) = v35;
        v36 = *((_QWORD *)v4 + 48);
        *(_DWORD *)(v36 + 12) = 0;
        *(_DWORD *)(v36 + 8) = 100;
        if ( *(_QWORD *)(a1 + 280) )
        {
          v37 = *(_QWORD *)(a1 + 248);
          *(_WORD *)(v36 + 16) = 257;
          v38 = PerfReadActualMasterCount;
          if ( (v37 & 0x8000000000LL) != 0 )
            v38 = PerfReadWrappingCounter;
          *(_QWORD *)v36 = v38;
        }
        else
        {
          *(_WORD *)(v36 + 16) = 0;
          *(_QWORD *)v36 = PerfStatesInstantaneousFrequency;
        }
        v39 = *((_QWORD *)v4 + 49);
        v40 = (_QWORD *)*((_QWORD *)v4 + 50);
        ResetEnumerationContext(v52);
        if ( !(unsigned int)EnumerateNextDevice((__int64)v52, &v53) )
        {
          v41 = v12 + 4;
          do
          {
            v42 = *((_DWORD *)v6 + 11);
            v43 = 0LL;
            v44 = v53;
            if ( !v42 || (v43 = *(unsigned int *)(v53 + 408), (_DWORD)v43 == v42 - 1) )
            {
              if ( *((_DWORD *)v6 + 12) )
                v43 = (unsigned int)(v42 + *(_DWORD *)(v53 + 456));
            }
            v45 = *(unsigned __int8 *)(32 * v43 + v6[4] + 24);
            *(_DWORD *)(v39 + 16) = v45;
            if ( v45 < 0x64 )
              *(_DWORD *)(v39 + 24) = 2;
            *(_DWORD *)(v39 + 20) = *(_DWORD *)(v44 + 672);
            KeGetProcessorNumberFromIndex(*(_DWORD *)(v44 + 56), (PPROCESSOR_NUMBER)v39);
            *(_QWORD *)(v39 + 8) = v41 - 4;
            *(_QWORD *)(v41 + 12) = v6;
            *(_DWORD *)v41 = 100;
            if ( *(_QWORD *)(a1 + 280) )
            {
              *v40 = v41 + 20;
              *(_QWORD *)(v41 + 68) = *(_QWORD *)(a1 + 280);
            }
            else
            {
              *v40 = v41 - 4;
            }
            ++v40;
            v41 += 88;
            v39 += 32LL;
          }
          while ( !(unsigned int)EnumerateNextDevice((__int64)v52, &v53) );
        }
        if ( v54(v4, (unsigned int)Size) >= 0 )
        {
          ResetEnumerationContext(v52);
          while ( !(unsigned int)EnumerateNextDevice((__int64)v52, &v53) )
          {
            *(_QWORD *)(v53 + 200) = v12;
            v12 += 88;
          }
          v6 = 0LL;
          P = 0LL;
          v12 = 0LL;
        }
        v10 = 0;
        goto LABEL_70;
      }
    }
    *(_QWORD *)(a1 + 248) &= 0xFFFFFFFFFCFFFFFFuLL;
    v10 = -1073741823;
  }
  else
  {
LABEL_11:
    v10 = -1073741670;
  }
LABEL_70:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C0009398);
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
