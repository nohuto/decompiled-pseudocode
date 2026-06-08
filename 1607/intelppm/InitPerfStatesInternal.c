/*
 * XREFs of InitPerfStatesInternal @ 0x1C001347C
 * Callers:
 *     RegisterKernelPerfStates @ 0x1C0013280 (RegisterKernelPerfStates.c)
 *     RegisterHvPerfStatesCounters @ 0x1C001E270 (RegisterHvPerfStatesCounters.c)
 * Callees:
 *     EnumerateNextDevice @ 0x1C0001724 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0001760 (ResetEnumerationContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C0002A70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002DC0 (memset.c)
 *     GetRegistryDwordValue @ 0x1C00131E8 (GetRegistryDwordValue.c)
 *     CalculatePercentageCap @ 0x1C0013BAC (CalculatePercentageCap.c)
 *     GetPerfDomain @ 0x1C0013CD0 (GetPerfDomain.c)
 *     InitCommonPerfStateContext @ 0x1C001F570 (InitCommonPerfStateContext.c)
 */

__int64 __fastcall InitPerfStatesInternal(__int64 a1, int (__fastcall *a2)(char *, _QWORD))
{
  int v3; // ecx
  char *v4; // rdi
  unsigned int *v5; // r15
  _QWORD *v6; // rsi
  __int64 v7; // rax
  unsigned int v8; // r13d
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  char *PoolWithTag; // rax
  char *v12; // r12
  PVOID v13; // rax
  _QWORD *v14; // rax
  char *v15; // rax
  int v16; // eax
  bool v17; // zf
  void *v18; // rax
  unsigned int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // r11
  _DWORD *v22; // r15
  __int64 v23; // r8
  __int64 v24; // r8
  _DWORD *v25; // r15
  int v26; // r9d
  unsigned int v27; // r11d
  int v28; // ebx
  unsigned int v29; // r12d
  __int64 v30; // r10
  __int64 v31; // rcx
  unsigned int v32; // edx
  int v33; // eax
  unsigned int v34; // ecx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  void *v38; // rax
  _QWORD *v39; // r13
  char *v40; // r15
  int v41; // r12d
  int v42; // ebx
  unsigned int v43; // eax
  __int64 v44; // r10
  int v46; // [rsp+30h] [rbp-48h]
  unsigned int v47; // [rsp+34h] [rbp-44h]
  int v48; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v49; // [rsp+3Ch] [rbp-3Ch]
  PVOID P; // [rsp+40h] [rbp-38h]
  char *v51; // [rsp+48h] [rbp-30h]
  __int64 v52[5]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v53; // [rsp+C0h] [rbp+48h] BYREF
  int (__fastcall *v54)(char *, _QWORD); // [rsp+C8h] [rbp+50h]
  __int64 v55; // [rsp+D0h] [rbp+58h]
  size_t Size; // [rsp+D8h] [rbp+60h]

  v54 = a2;
  v3 = 0;
  P = 0LL;
  v4 = 0LL;
  LODWORD(v53) = 0;
  v5 = 0LL;
  v6 = 0LL;
  v7 = *(_QWORD *)(a1 + 248);
  v8 = 0;
  if ( (v7 & 0x70000000) != 0 )
  {
    if ( (v7 & 0x40000000) != 0 )
      v5 = *(unsigned int **)(a1 + 408);
    else
      v5 = *(unsigned int **)(a1 + 400);
    v8 = *v5;
  }
  if ( (v7 & 0x3300000) != 0 )
  {
    v3 = **(_DWORD **)(a1 + 456);
    LODWORD(v53) = v3;
  }
  v9 = v3 + v8;
  v49 = v3 + v8;
  if ( !(v3 + v8) )
    return (unsigned int)-1073741823;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C000ECF8,
    0LL);
  LODWORD(v55) = GetPerfDomain(a1, v52, &v48);
  Size = (unsigned int)(96 * v55);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x72637250u);
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
  v14 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x72637250u);
  v6 = v14;
  if ( !v14 )
    goto LABEL_11;
  memset(v14, 0, 0x48uLL);
  v46 = (32 * v55 + 423) & 0xFFFFFFF8;
  v47 = (v46 + 31) & 0xFFFFFFF8;
  LODWORD(Size) = v47 + 8 * v55;
  v15 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)Size, 0x72637250u);
  v4 = v15;
  if ( v15 )
  {
    memset(v15, 0, (unsigned int)Size);
    if ( *(_BYTE *)(a1 + 1081) )
      *((_QWORD *)v4 + 46) = PepParkPreference;
    if ( (*(_QWORD *)(a1 + 248) & 0x10000000000LL) != 0 )
    {
      *((_QWORD *)v4 + 47) = PepParkMask;
      *((_QWORD *)v4 + 48) = PepPerfCheckComplete;
      *((_QWORD *)v4 + 8) = *(_QWORD *)(a1 + 1064);
    }
    *((_DWORD *)v4 + 3) = v55;
    *(_DWORD *)v4 = 44;
    *((_QWORD *)v4 + 50) = v4 + 416;
    *((_DWORD *)v4 + 8) = 1;
    *((_QWORD *)v4 + 49) = &v4[v46];
    *((_WORD *)v4 + 3) = 257;
    *((_QWORD *)v4 + 51) = &v4[v47];
    v16 = v48;
    *((_WORD *)v4 + 2) = v48;
    v4[40] = 0;
    *((_DWORD *)v4 + 5) = 100;
    *((_QWORD *)v4 + 41) = PerfControlPTStates;
    if ( v16 == 252 || (v17 = v16 == 1, v18 = PerfControlPTStatesHidden, v17) )
      v18 = PerfControlPTStatesHiddenSwAll;
    *((_QWORD *)v4 + 42) = v18;
    *((_QWORD *)v4 + 40) = PerfSelectionPTStates;
    v6[6] = P;
    *((_QWORD *)v4 + 6) = 0LL;
    *((_QWORD *)v4 + 7) = 100LL;
    if ( v8 && v5 )
    {
      *((_QWORD *)v4 + 32) = *(_QWORD *)(a1 + 312);
      *((_QWORD *)v4 + 33) = *(_QWORD *)(a1 + 320);
      *((_DWORD *)v4 + 4) = v5[2];
      v19 = v5[12 * v8 - 9];
      *v6 = *(_QWORD *)(a1 + 264);
      v6[3] = *(_QWORD *)(a1 + 280);
      v6[4] = a1 + 376;
      *((_QWORD *)v4 + 7) = v5[2];
      *((_QWORD *)v4 + 6) = v5[12 * v8 - 10];
      LODWORD(v55) = v19;
      v20 = 0LL;
      v21 = v8;
      v22 = v5 + 3;
      do
      {
        v23 = v6[6];
        *(_DWORD *)(v20 + v23 + 16) = *(v22 - 1);
        *(_BYTE *)(v20 + v23 + 24) = (unsigned int)(100 * *(v22 - 1)) / *((_DWORD *)v4 + 4);
        *(_QWORD *)(v20 + v23) = *(_QWORD *)(v22 + 3);
        *(_DWORD *)(v20 + v23 + 20) = *v22;
        *(_QWORD *)(v20 + v23 + 8) = *(_QWORD *)(v22 + 5);
        *(_BYTE *)(v20 + v23 + 25) = 1;
        *(_WORD *)(v20 + v23 + 26) = *((_WORD *)v22 + 2);
        if ( (*(_DWORD *)(a1 + 248) & 0x40000000) != 0 )
        {
          *(_QWORD *)(v20 + v23 + 8) = 0LL;
          *(_QWORD *)(v20 + v23) = v22 - 1;
        }
        v22 += 12;
        v20 += 32LL;
        --v21;
      }
      while ( v21 );
      v24 = 0LL;
      v25 = v4 + 16;
      v26 = *(_DWORD *)(32LL * (v8 - 1) + v6[6] + 16);
      goto LABEL_32;
    }
    v25 = v4 + 16;
    *((_DWORD *)v4 + 4) = 0;
    GetRegistryDwordValue(
      (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
      (__int64)L"~MHz",
      (_DWORD *)v4 + 4);
    v26 = *((_DWORD *)v4 + 4);
    v24 = 0LL;
    if ( v26 )
    {
      LODWORD(v55) = 1000 * v26;
LABEL_32:
      if ( (_DWORD)v53 )
      {
        v27 = 0;
        v28 = v55;
        v29 = v53;
        v6[1] = *(_QWORD *)(a1 + 272);
        v6[2] = *(_QWORD *)(a1 + 288);
        v6[5] = a1 + 432;
        do
        {
          v53 = *(_QWORD *)(a1 + 456);
          v30 = v6[6] + 32LL * (v27 + v8);
          v31 = v53;
          v32 = v26 * *(_DWORD *)(v24 + v53 + 4) / 0x64u;
          *(_DWORD *)(v30 + 16) = v32;
          *(_BYTE *)(v30 + 24) = 100 * v32 / *v25;
          *(_QWORD *)v30 = *(unsigned int *)(v24 + v31 + 16);
          *(_QWORD *)(v30 + 8) = *(unsigned int *)(v24 + v31 + 20);
          *(_BYTE *)(v30 + 25) = 2;
          *(_WORD *)(v30 + 26) = *(_WORD *)(v24 + v31 + 12);
          v33 = *(_DWORD *)(v24 + v31 + 8);
          if ( v33 )
            *(_DWORD *)(v30 + 20) = v33;
          else
            *(_DWORD *)(v30 + 20) = v28 * *(_DWORD *)(v24 + v31 + 4) / 0x64u;
          ++v27;
          v24 += 20LL;
        }
        while ( v27 < v29 );
        v9 = v49;
        v12 = v51;
      }
      v34 = 1;
      if ( v9 > 1 )
      {
        while ( *(_BYTE *)(32LL * v34 + v6[6] + 24) )
        {
          if ( ++v34 >= v9 )
            goto LABEL_44;
        }
        v9 = v34;
      }
LABEL_44:
      *((_DWORD *)v6 + 14) = v9;
      if ( v9 <= v8 )
      {
        *((_DWORD *)v6 + 15) = v9;
        v35 = v9 - 1;
        *((_DWORD *)v6 + 16) = 0;
      }
      else
      {
        *((_DWORD *)v6 + 15) = v8;
        v35 = v8;
        *((_DWORD *)v6 + 16) = v9 - v8;
      }
      *((_DWORD *)v4 + 6) = *(unsigned __int8 *)(32 * v35 + v6[6] + 24);
      *((_DWORD *)v4 + 7) = *(unsigned __int8 *)(32LL * (v9 - 1) + v6[6] + 24);
      v36 = *(_QWORD *)(a1 + 304);
      if ( v36 )
        *((_QWORD *)v4 + 30) = v36;
      v37 = *((_QWORD *)v4 + 49);
      *(_QWORD *)(v37 + 8) = 100LL;
      if ( *(_QWORD *)(a1 + 296) )
      {
        v38 = PerfReadActualMasterCount;
        v17 = (*(_QWORD *)(a1 + 248) & 0x8000000000LL) == 0;
        *(_WORD *)(v37 + 16) = 257;
        if ( !v17 )
          v38 = PerfReadWrappingCounter;
      }
      else
      {
        *(_WORD *)(v37 + 16) = 0;
        v38 = PerfStatesInstantaneousFrequency;
      }
      *(_QWORD *)v37 = v38;
      v39 = (_QWORD *)*((_QWORD *)v4 + 51);
      v55 = *((_QWORD *)v4 + 50);
      ResetEnumerationContext(v52);
      if ( !(unsigned int)EnumerateNextDevice((__int64)v52, &v53) )
      {
        v40 = v12 + 12;
        v41 = v55;
        do
        {
          v42 = v53;
          v43 = CalculatePercentageCap(v6, *(unsigned int *)(v53 + 416), *(unsigned int *)(v53 + 464));
          InitCommonPerfStateContext(v42, (_DWORD)v40 - 12, v41, v43, v43 < 0x64 ? 2 : 0);
          *(_QWORD *)(v40 + 12) = v6;
          *(_DWORD *)v40 = 100;
          if ( *(_QWORD *)(a1 + 296) )
          {
            *v39 = v40 + 20;
            *(_QWORD *)(v40 + 68) = *(_QWORD *)(a1 + 296);
          }
          else
          {
            *v39 = v44;
          }
          ++v39;
          v40 += 96;
          v41 += 32;
        }
        while ( !(unsigned int)EnumerateNextDevice((__int64)v52, &v53) );
        v12 = v51;
      }
      if ( v54(v4, (unsigned int)Size) >= 0 )
      {
        ResetEnumerationContext(v52);
        while ( !(unsigned int)EnumerateNextDevice((__int64)v52, &v53) )
        {
          *(_QWORD *)(v53 + 200) = v12;
          v12 += 96;
        }
        v6 = 0LL;
        P = 0LL;
        v12 = 0LL;
      }
      v10 = 0;
      goto LABEL_67;
    }
    *(_QWORD *)(a1 + 248) &= 0xFFFFFFFFFCFFFFFFuLL;
    v10 = -1073741823;
  }
  else
  {
LABEL_11:
    v10 = -1073741670;
  }
LABEL_67:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C000ECF8);
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
