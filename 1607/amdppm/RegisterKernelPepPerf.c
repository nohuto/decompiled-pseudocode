/*
 * XREFs of RegisterKernelPepPerf @ 0x1C001A060
 * Callers:
 *     <none>
 * Callees:
 *     PepNotifyPerfConstraints @ 0x1C0004D84 (PepNotifyPerfConstraints.c)
 *     ResetEnumerationContext @ 0x1C00061FC (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C0006210 (EnumerateNextDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C00067E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006B40 (memset.c)
 *     GetPerfDomain @ 0x1C0016434 (GetPerfDomain.c)
 */

__int64 __fastcall RegisterKernelPepPerf(__int64 a1)
{
  unsigned int *v2; // r14
  char *v3; // rbx
  char *v4; // rsi
  int v5; // edi
  int v6; // r12d
  char *PoolWithTag; // rax
  unsigned int *v8; // r15
  __int64 v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // edi
  char *v13; // rax
  _DWORD *v14; // r15
  char *v15; // rdi
  int v16; // eax
  int v17; // ecx
  _DWORD *v18; // r10
  signed __int64 v19; // r11
  int v20; // edx
  __int64 v21; // rcx
  _DWORD *v22; // r8
  int v23; // r9d
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdx
  unsigned int v27; // eax
  void *v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdx
  unsigned int v31; // eax
  void *v32; // rcx
  __int64 v33; // r10
  unsigned int v35; // [rsp+20h] [rbp-38h]
  __int64 v36; // [rsp+28h] [rbp-30h] BYREF
  __int64 v37[5]; // [rsp+30h] [rbp-28h] BYREF
  bool v38; // [rsp+A0h] [rbp+48h]
  int PerfDomain; // [rsp+A8h] [rbp+50h]
  unsigned int v40; // [rsp+B0h] [rbp+58h]
  int v41; // [rsp+B8h] [rbp+60h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00093A8,
    0LL);
  v2 = *(unsigned int **)(a1 + 1136);
  v3 = 0LL;
  v4 = 0LL;
  v35 = v2[6];
  if ( !v35 )
  {
    v5 = -1073741823;
    goto LABEL_48;
  }
  v38 = v2[11] != -1;
  v6 = 1;
  if ( v2[11] != -1 )
    v6 = 2;
  PerfDomain = GetPerfDomain((_QWORD *)a1, (__int64)v37, &v41);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(32 * PerfDomain), 0x72637250u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_6;
  memset(PoolWithTag, 0, (unsigned int)(32 * PerfDomain));
  ResetEnumerationContext(v37);
  if ( (unsigned int)EnumerateNextDevice((__int64)v37, &v36) )
  {
LABEL_13:
    v12 = (32 * PerfDomain + 423) & 0xFFFFFFF8;
    v40 = (v12 + 7 + 24 * v6) & 0xFFFFFFF8;
    v13 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v40 + 8 * v6 * PerfDomain, 0x72637250u);
    v3 = v13;
    if ( !v13 )
    {
LABEL_6:
      v5 = -1073741670;
      goto LABEL_48;
    }
    memset(v13, 0, v40 + 8 * v6 * PerfDomain);
    if ( *(_BYTE *)(a1 + 1081) )
      *((_QWORD *)v3 + 46) = PepParkPreference;
    if ( (*(_QWORD *)(a1 + 248) & 0x10000000000LL) != 0 )
    {
      *((_QWORD *)v3 + 47) = PepParkMask;
      *((_QWORD *)v3 + 48) = PepPerfCheckComplete;
      *((_QWORD *)v3 + 8) = *(_QWORD *)(a1 + 1064);
    }
    *((_WORD *)v3 + 3) = 0;
    v14 = v3 + 416;
    *((_DWORD *)v3 + 3) = PerfDomain;
    *(_DWORD *)v3 = 44;
    *((_DWORD *)v3 + 8) = v6;
    *((_QWORD *)v3 + 50) = v3 + 416;
    v3[40] = 0;
    *((_QWORD *)v3 + 49) = &v3[v12];
    v15 = &v3[v40];
    *((_WORD *)v3 + 2) = v41;
    *((_QWORD *)v3 + 41) = PepPerfControlHandler;
    *((_QWORD *)v3 + 40) = PepPerfSelectionHandler;
    *((_QWORD *)v3 + 31) = PepSetTimeWindow;
    *((_DWORD *)v3 + 4) = v35;
    *((_QWORD *)v3 + 51) = v15;
    *((_DWORD *)v3 + 5) = v2[7];
    v16 = v2[8];
    *((_DWORD *)v3 + 6) = v16;
    v17 = v2[9];
    if ( !v16 )
      v16 = 1;
    *((_DWORD *)v3 + 6) = v16;
    if ( !v17 )
      v17 = 1;
    *((_DWORD *)v3 + 7) = v17;
    *((_QWORD *)v3 + 6) = v2[5];
    *((_QWORD *)v3 + 7) = v2[3];
    ResetEnumerationContext(v37);
    if ( !(unsigned int)EnumerateNextDevice((__int64)v37, &v36) )
    {
      v18 = v4 + 24;
      v19 = v3 - v4;
      do
      {
        switch ( *(v18 - 2) )
        {
          case 1:
            v20 = 4;
            break;
          case 2:
            v20 = 8;
            break;
          case 4:
            v20 = 16;
            break;
          default:
            v20 = 2;
            break;
        }
        v21 = v36;
        v22 = v18 - 6;
        v23 = *v18;
        *((_QWORD *)v18 - 3) = v36;
        *(_QWORD *)((char *)v18 + v19 + 400) = v18 - 6;
        if ( *(_BYTE *)(v21 + 66) )
        {
          v24 = *(_DWORD *)(v21 + 68);
          *((_BYTE *)v18 + v19 + 420) = 1;
        }
        else
        {
          v24 = *(_DWORD *)(v21 + 56);
        }
        *v14 = v24;
        *(_DWORD *)((char *)v18 + v19 + 412) = *(_DWORD *)(v21 + 680);
        *(_DWORD *)((char *)v18 + v19 + 408) = v23;
        *(_DWORD *)((char *)v18 + v19 + 416) = v20;
        *(_QWORD *)v15 = v22;
        v15 += 8;
        if ( v38 )
        {
          *(_QWORD *)v15 = v22;
          v15 += 8;
        }
        v14 += 8;
      }
      while ( !(unsigned int)EnumerateNextDevice((__int64)v37, &v36) );
    }
    v25 = v2[10];
    v26 = *((_QWORD *)v3 + 49);
    *(_QWORD *)(v26 + 8) = 100LL;
    *(_BYTE *)(v26 + 16) = v2[2 * v25 + 12] & 1;
    v27 = v2[2 * v25 + 12];
    v28 = PepDifferentialFrequencyRead;
    LOBYTE(v27) = (v27 & 6) == 2;
    *(_BYTE *)(v26 + 17) = v27;
    if ( !(_BYTE)v27 )
      v28 = PepInstantaneousFrequencyRead;
    *(_QWORD *)v26 = v28;
    *((_DWORD *)v3 + 8) = 1;
    if ( v38 )
    {
      v29 = v2[11];
      v30 = *((_QWORD *)v3 + 49);
      *(_DWORD *)(v30 + 32) = 100;
      *(_DWORD *)(v30 + 36) = 1;
      *(_BYTE *)(v30 + 40) = v2[2 * v29 + 12] & 1;
      v31 = v2[2 * v29 + 12];
      v32 = PepDifferentialPerfRead;
      LOBYTE(v31) = (v31 & 6) == 2;
      *(_BYTE *)(v30 + 41) = v31;
      if ( !(_BYTE)v31 )
        v32 = PepInstantaneousPerfRead;
      *(_QWORD *)(v30 + 24) = v32;
      ++*((_DWORD *)v3 + 8);
    }
    v5 = ((__int64 (__fastcall *)(char *))qword_1C00095A0)(v3);
    if ( v5 >= 0 )
    {
      ResetEnumerationContext(v37);
      if ( !(unsigned int)EnumerateNextDevice((__int64)v37, &v36) )
      {
        v4 = 0LL;
        do
          *(_QWORD *)(v36 + 1144) = v33;
        while ( !(unsigned int)EnumerateNextDevice((__int64)v37, &v36) );
      }
    }
  }
  else
  {
    v8 = (unsigned int *)(v4 + 20);
    while ( 1 )
    {
      v9 = v36;
      *(_QWORD *)(v8 - 3) = *(_QWORD *)(v36 + 1064);
      *(_QWORD *)(v8 - 5) = *(_QWORD *)(v9 + 1136);
      v5 = PepNotifyPerfConstraints(a1, v8, v8 - 1);
      if ( v5 < 0 )
        break;
      v10 = *v8;
      v11 = v2[3];
      if ( *v8 > v11 || v10 < v2[5] )
      {
        v5 = -1073741811;
        break;
      }
      v8[1] = 100 * v10 / v11;
      v8 += 8;
      if ( (unsigned int)EnumerateNextDevice((__int64)v37, &v36) )
        goto LABEL_13;
    }
  }
LABEL_48:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00093A8);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72637250u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x72637250u);
  return (unsigned int)v5;
}
