/*
 * XREFs of InitPerfStatesInternal @ 0x1C00184B8
 * Callers:
 *     RegisterKernelPerfStates @ 0x1C0018C60 (RegisterKernelPerfStates.c)
 *     RegisterHvPerfStatesCounters @ 0x1C001DD50 (RegisterHvPerfStatesCounters.c)
 * Callees:
 *     ResetEnumerationContext @ 0x1C00061FC (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C0006210 (EnumerateNextDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C00067E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006B40 (memset.c)
 *     GetPerfDomain @ 0x1C0016434 (GetPerfDomain.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001E168 (GetRegistryDwordValueNoDefault.c)
 */

__int64 __fastcall InitPerfStatesInternal(__int64 a1, int (__fastcall *a2)(char *, _QWORD))
{
  unsigned int v3; // ecx
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
  int v15; // r12d
  char *v16; // rax
  __int64 v17; // r9
  int v18; // eax
  bool v19; // zf
  void *v20; // rax
  int *v21; // r12
  unsigned int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // r10
  _DWORD *v25; // r15
  __int64 v26; // r8
  int v27; // r10d
  unsigned int v28; // r15d
  unsigned int v29; // r11d
  int v30; // r14d
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  unsigned int v34; // edx
  int v35; // eax
  unsigned int v36; // ecx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  void *v40; // rax
  _QWORD *v41; // r14
  int v42; // eax
  __int64 v43; // r10
  char *v44; // r11
  int v45; // ecx
  unsigned int v46; // r8d
  __int64 v47; // rdx
  unsigned int v48; // r8d
  int v49; // eax
  unsigned int v51; // [rsp+20h] [rbp-48h]
  int v52; // [rsp+24h] [rbp-44h] BYREF
  unsigned int v53; // [rsp+28h] [rbp-40h]
  char *v54; // [rsp+30h] [rbp-38h]
  PVOID P; // [rsp+38h] [rbp-30h]
  __int64 v56[5]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v57; // [rsp+B0h] [rbp+48h] BYREF
  int (__fastcall *v58)(char *, _QWORD); // [rsp+B8h] [rbp+50h]
  unsigned int v59; // [rsp+C0h] [rbp+58h]
  size_t Size; // [rsp+C8h] [rbp+60h]

  v58 = a2;
  v3 = 0;
  P = 0LL;
  v4 = 0LL;
  v59 = 0;
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
    v59 = v3;
  }
  v9 = v3 + v8;
  v53 = v3 + v8;
  if ( !(v3 + v8) )
    return (unsigned int)-1073741823;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00093A8,
    0LL);
  LODWORD(v57) = GetPerfDomain((_QWORD *)a1, (__int64)v56, &v52);
  Size = (unsigned int)(96 * v57);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x72637250u);
  v54 = PoolWithTag;
  v12 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, Size);
    Size = 32 * v9;
    v13 = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x72637250u);
    P = v13;
    if ( v13 )
    {
      memset(v13, 0, Size);
      v14 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x72637250u);
      v6 = v14;
      if ( v14 )
      {
        memset(v14, 0, 0x48uLL);
        v15 = (32 * v57 + 423) & 0xFFFFFFF8;
        v51 = (v15 + 31) & 0xFFFFFFF8;
        LODWORD(Size) = v51 + 8 * v57;
        v16 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)Size, 0x72637250u);
        v4 = v16;
        if ( !v16 )
        {
          v10 = -1073741670;
LABEL_16:
          v12 = v54;
          goto LABEL_77;
        }
        memset(v16, 0, (unsigned int)Size);
        if ( *(_BYTE *)(a1 + 1081) )
          *((_QWORD *)v4 + 46) = PepParkPreference;
        if ( (*(_QWORD *)(a1 + 248) & 0x10000000000LL) != 0 )
        {
          *((_QWORD *)v4 + 47) = PepParkMask;
          *((_QWORD *)v4 + 48) = PepPerfCheckComplete;
          *((_QWORD *)v4 + 8) = *(_QWORD *)(a1 + 1064);
        }
        *((_DWORD *)v4 + 3) = v57;
        *(_DWORD *)v4 = 44;
        *((_QWORD *)v4 + 50) = v4 + 416;
        *((_DWORD *)v4 + 8) = 1;
        *((_QWORD *)v4 + 49) = &v4[v15];
        *((_WORD *)v4 + 3) = 257;
        *((_QWORD *)v4 + 51) = &v4[v51];
        v18 = v52;
        *((_WORD *)v4 + 2) = v52;
        v4[40] = 0;
        *((_DWORD *)v4 + 5) = 100;
        *((_QWORD *)v4 + 41) = PerfControlPTStates;
        if ( v18 == 252 || (v19 = v18 == 1, v20 = PerfControlPTStatesHidden, v19) )
          v20 = PerfControlPTStatesHiddenSwAll;
        *((_QWORD *)v4 + 42) = v20;
        *((_QWORD *)v4 + 40) = PerfSelectionPTStates;
        v6[6] = P;
        *((_QWORD *)v4 + 6) = 0LL;
        *((_QWORD *)v4 + 7) = 100LL;
        if ( v8 && v5 )
        {
          v21 = (int *)(v4 + 16);
          *((_QWORD *)v4 + 32) = *(_QWORD *)(a1 + 312);
          *((_QWORD *)v4 + 33) = *(_QWORD *)(a1 + 320);
          *((_DWORD *)v4 + 4) = v5[2];
          v22 = v5[12 * v8 - 9];
          *v6 = *(_QWORD *)(a1 + 264);
          v6[3] = *(_QWORD *)(a1 + 280);
          v6[4] = a1 + 376;
          *((_QWORD *)v4 + 7) = v5[2];
          *((_QWORD *)v4 + 6) = v5[12 * v8 - 10];
          LODWORD(v57) = v22;
          v23 = 0LL;
          v24 = v8;
          v25 = v5 + 3;
          do
          {
            v26 = v6[6];
            *(_DWORD *)(v23 + v26 + 16) = *(v25 - 1);
            *(_BYTE *)(v23 + v26 + 24) = 100 * *(v25 - 1) / (unsigned int)*v21;
            *(_QWORD *)(v23 + v26) = *(_QWORD *)(v25 + 3);
            *(_DWORD *)(v23 + v26 + 20) = *v25;
            *(_QWORD *)(v23 + v26 + 8) = *(_QWORD *)(v25 + 5);
            *(_BYTE *)(v23 + v26 + 25) = 1;
            *(_WORD *)(v23 + v26 + 26) = *((_WORD *)v25 + 2);
            if ( (*(_DWORD *)(a1 + 248) & 0x40000000) != 0 )
            {
              *(_QWORD *)(v23 + v26 + 8) = 0LL;
              *(_QWORD *)(v23 + v26) = v25 - 1;
            }
            v25 += 12;
            v23 += 32LL;
            --v24;
          }
          while ( v24 );
          v27 = *(_DWORD *)(32LL * (v8 - 1) + v6[6] + 16);
        }
        else
        {
          v21 = (int *)(v4 + 16);
          *((_DWORD *)v4 + 4) = 0;
          if ( (int)GetRegistryDwordValueNoDefault(
                      L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                      L"~MHz",
                      v4 + 16,
                      v17) < 0 )
            *v21 = 0;
          v27 = *v21;
          if ( !*v21 )
          {
            *(_QWORD *)(a1 + 248) &= 0xFFFFFFFFFCFFFFFFuLL;
            v10 = -1073741823;
            goto LABEL_16;
          }
          LODWORD(v57) = 1000 * v27;
        }
        v28 = v59;
        if ( v59 )
        {
          v29 = 0;
          v6[1] = *(_QWORD *)(a1 + 272);
          v6[2] = *(_QWORD *)(a1 + 288);
          v6[5] = a1 + 432;
          v30 = v57;
          v31 = 0LL;
          do
          {
            v57 = *(_QWORD *)(a1 + 456);
            v32 = v6[6] + 32LL * (v29 + v8);
            v33 = v57;
            v34 = v27 * *(_DWORD *)(v31 + v57 + 4) / 0x64u;
            *(_DWORD *)(v32 + 16) = v34;
            *(_BYTE *)(v32 + 24) = 100 * v34 / *v21;
            *(_QWORD *)v32 = *(unsigned int *)(v31 + v33 + 16);
            *(_QWORD *)(v32 + 8) = *(unsigned int *)(v31 + v33 + 20);
            *(_BYTE *)(v32 + 25) = 2;
            *(_WORD *)(v32 + 26) = *(_WORD *)(v31 + v33 + 12);
            v35 = *(_DWORD *)(v31 + v33 + 8);
            if ( v35 )
              *(_DWORD *)(v32 + 20) = v35;
            else
              *(_DWORD *)(v32 + 20) = v30 * *(_DWORD *)(v31 + v33 + 4) / 0x64u;
            ++v29;
            v31 += 20LL;
          }
          while ( v29 < v28 );
          v9 = v53;
        }
        v36 = 1;
        if ( v9 > 1 )
        {
          while ( *(_BYTE *)(32LL * v36 + v6[6] + 24) )
          {
            if ( ++v36 >= v9 )
              goto LABEL_48;
          }
          v9 = v36;
        }
LABEL_48:
        *((_DWORD *)v6 + 14) = v9;
        if ( v9 <= v8 )
        {
          *((_DWORD *)v6 + 16) = 0;
          v37 = v9 - 1;
          *((_DWORD *)v6 + 15) = v9;
        }
        else
        {
          *((_DWORD *)v6 + 15) = v8;
          v37 = v8;
          *((_DWORD *)v6 + 16) = v9 - v8;
        }
        *((_DWORD *)v4 + 6) = *(unsigned __int8 *)(32 * v37 + v6[6] + 24);
        *((_DWORD *)v4 + 7) = *(unsigned __int8 *)(32LL * (v9 - 1) + v6[6] + 24);
        v38 = *(_QWORD *)(a1 + 304);
        if ( v38 )
          *((_QWORD *)v4 + 30) = v38;
        v39 = *((_QWORD *)v4 + 49);
        *(_DWORD *)(v39 + 12) = 0;
        *(_DWORD *)(v39 + 8) = 100;
        if ( *(_QWORD *)(a1 + 296) )
        {
          v40 = PerfReadActualMasterCount;
          v19 = (*(_QWORD *)(a1 + 248) & 0x8000000000LL) == 0;
          *(_WORD *)(v39 + 16) = 257;
          if ( !v19 )
            v40 = PerfReadWrappingCounter;
        }
        else
        {
          *(_WORD *)(v39 + 16) = 0;
          v40 = PerfStatesInstantaneousFrequency;
        }
        *(_QWORD *)v39 = v40;
        v41 = (_QWORD *)*((_QWORD *)v4 + 51);
        ResetEnumerationContext(v56);
        v42 = EnumerateNextDevice((__int64)v56, &v57);
        v12 = v54;
        if ( !v42 )
        {
          v44 = v54 + 12;
          do
          {
            v45 = *((_DWORD *)v6 + 15);
            v46 = 0;
            v47 = v57;
            if ( !v45 || (v46 = *(_DWORD *)(v57 + 416), v46 == v45 - 1) )
            {
              if ( *((_DWORD *)v6 + 16) )
                v46 = v45 + *(_DWORD *)(v57 + 464);
            }
            v48 = *(unsigned __int8 *)(32LL * v46 + v6[6] + 24);
            *(_QWORD *)(v44 - 12) = v57;
            *(_QWORD *)(v43 + 8) = v44 - 12;
            if ( *(_BYTE *)(v47 + 66) )
            {
              v49 = *(_DWORD *)(v47 + 68);
              *(_BYTE *)(v43 + 28) = 1;
            }
            else
            {
              v49 = *(_DWORD *)(v47 + 56);
            }
            *(_DWORD *)v43 = v49;
            *(_DWORD *)(v43 + 20) = *(_DWORD *)(v47 + 680);
            *(_DWORD *)(v43 + 16) = v48;
            *(_DWORD *)(v43 + 24) = v48 < 0x64 ? 2 : 0;
            *(_QWORD *)(v44 + 12) = v6;
            *(_DWORD *)v44 = 100;
            if ( *(_QWORD *)(a1 + 296) )
            {
              *v41 = v44 + 20;
              *(_QWORD *)(v44 + 68) = *(_QWORD *)(a1 + 296);
            }
            else
            {
              *v41 = v44 - 12;
            }
            ++v41;
          }
          while ( !(unsigned int)EnumerateNextDevice((__int64)v56, &v57) );
        }
        if ( v58(v4, (unsigned int)Size) >= 0 )
        {
          ResetEnumerationContext(v56);
          while ( !(unsigned int)EnumerateNextDevice((__int64)v56, &v57) )
          {
            *(_QWORD *)(v57 + 200) = v12;
            v12 += 96;
          }
          v6 = 0LL;
          P = 0LL;
          v12 = 0LL;
        }
        v10 = 0;
        goto LABEL_77;
      }
    }
  }
  v10 = -1073741670;
LABEL_77:
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
