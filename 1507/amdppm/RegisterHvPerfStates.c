/*
 * XREFs of RegisterHvPerfStates @ 0x1C001A4B0
 * Callers:
 *     <none>
 * Callees:
 *     ResetEnumerationContext @ 0x1C0004BA8 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C0004BBC (EnumerateNextDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C0005F40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00062C0 (memset.c)
 *     GetPerfDomain @ 0x1C00190CC (GetPerfDomain.c)
 *     RegisterHvCap @ 0x1C001A910 (RegisterHvCap.c)
 *     DecodeAcpiPStates @ 0x1C001BAA4 (DecodeAcpiPStates.c)
 *     DecodeAcpiTStates @ 0x1C001BC48 (DecodeAcpiTStates.c)
 */

__int64 __fastcall RegisterHvPerfStates(__int64 a1)
{
  unsigned int *v2; // r12
  unsigned int *v3; // r14
  unsigned int v4; // ebx
  unsigned int *v5; // rdi
  unsigned int v6; // esi
  __int64 v7; // rax
  int v8; // esi
  unsigned int *PoolWithTag; // rax
  unsigned int *v10; // rax
  unsigned int PerfDomain; // eax
  int v12; // r13d
  unsigned int v13; // eax
  __int64 v14; // r9
  _DWORD *v15; // rdx
  __int64 v16; // r10
  signed __int64 v17; // r8
  __int64 v18; // r11
  __int64 v19; // rax
  __int64 v20; // rax
  char v21; // cl
  __int64 v22; // rax
  char v23; // cl
  unsigned int v24; // eax
  __int64 v25; // r8
  __int64 v26; // r10
  _DWORD *v27; // r9
  __int64 v28; // rdx
  char v29; // cl
  unsigned __int64 v30; // rax
  char v31; // cl
  __int64 v32; // rbx
  int v33; // eax
  __int64 v35; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v36[4]; // [rsp+48h] [rbp-31h] BYREF
  __int64 v37[13]; // [rsp+68h] [rbp-11h] BYREF
  __int64 v38; // [rsp+E0h] [rbp+67h] BYREF
  int v39; // [rsp+E8h] [rbp+6Fh] BYREF
  int v40; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v41; // [rsp+F8h] [rbp+7Fh] BYREF

  v2 = 0LL;
  v3 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  memset(v36, 0, sizeof(v36));
  v7 = *(_QWORD *)(a1 + 248);
  LODWORD(v36[0]) = 42;
  if ( (v7 & 0x70000000) != 0 )
  {
    if ( (v7 & 0x40000000) != 0 )
      v2 = *(unsigned int **)(a1 + 400);
    else
      v2 = *(unsigned int **)(a1 + 392);
    v4 = *v2;
  }
  if ( (v7 & 0x3300000) != 0 )
    v6 = **(_DWORD **)(a1 + 448);
  if ( !(v6 + v4) )
    return (unsigned int)-1073741823;
  if ( v4 )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xC28uLL, 0x72637250u);
    v3 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, 0xC28uLL);
  }
  if ( !v6 )
    goto LABEL_18;
  v10 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xCB8uLL, 0x72637250u);
  v5 = v10;
  if ( v10 )
  {
    memset(v10, 0, 0xCB8uLL);
LABEL_18:
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C0009398,
      0LL);
    PerfDomain = GetPerfDomain((_QWORD *)a1, (__int64)v37, &v39);
    LODWORD(v38) = PerfDomain;
    if ( v39 == 253 )
    {
      v12 = 1;
    }
    else
    {
      v12 = 0;
      if ( v39 == 254 )
        v12 = 2;
    }
    if ( v4 )
    {
      v3[771] = PerfDomain;
      v3[772] = v12;
      if ( (int)DecodeAcpiPStates(
                  a1,
                  (int)v3 + 3096,
                  (int)v3 + 3104,
                  (unsigned int)&v41,
                  (__int64)&v35,
                  (__int64)&v39,
                  (__int64)&v40) >= 0 )
      {
        v13 = 64;
        v36[1] = v3;
        *v3 = v4;
        if ( v4 < 0x40 )
          v13 = v4;
        v14 = v35;
        v15 = v2 + 4;
        v16 = v41;
        v17 = (char *)v3 - (char *)v2;
        v18 = v13;
        do
        {
          *(_DWORD *)((char *)v15 + v17 + 24) = *(v15 - 2);
          *(_DWORD *)((char *)v15 + v17 + 28) = *v15;
          *(_DWORD *)((char *)v15 + v17 + 32) = v15[1];
          *(_DWORD *)((char *)v15 + v17 + 36) = *(v15 - 1);
          v19 = v16;
          if ( !v16 )
            v19 = *((_QWORD *)v15 + 3);
          *(_QWORD *)((char *)v15 + v17 + 8) = v19;
          v20 = v14;
          if ( !v14 )
            v20 = *((_QWORD *)v15 + 3);
          v21 = v39;
          *(_QWORD *)((char *)v15 + v17 + 16) = v20;
          v22 = *((_QWORD *)v15 + 1) << v21;
          v23 = v40;
          *(_QWORD *)((char *)v15 + v17 - 8) = v22;
          *(_QWORD *)((char *)v15 + v17) = *((_QWORD *)v15 + 2) << v23;
          v15 += 12;
          --v18;
        }
        while ( v18 );
      }
      PerfDomain = v38;
    }
    if ( v6 )
    {
      v5[803] = PerfDomain;
      v5[804] = v12;
      if ( (int)DecodeAcpiTStates(
                  a1,
                  (int)v5 + 3224,
                  (int)v5 + 3232,
                  (unsigned int)&v41,
                  (__int64)&v35,
                  (__int64)&v39,
                  (__int64)&v40) >= 0 )
      {
        v36[2] = v5;
        *((_QWORD *)v5 + 405) = v41;
        *((_QWORD *)v5 + 406) = v35;
        v24 = 100;
        *v5 = v6;
        if ( v6 < 0x64 )
          v24 = v6;
        v25 = 0LL;
        v26 = v24;
        v27 = v5 + 7;
        do
        {
          v28 = *(_QWORD *)(a1 + 448);
          v25 += 20LL;
          v29 = v39;
          *(v27 - 1) = *(_DWORD *)(v28 + v25 - 16);
          *v27 = *(_DWORD *)(v28 + v25 - 8);
          v27 += 8;
          *(v27 - 7) = *(_DWORD *)(v28 + v25 - 12);
          v30 = (unsigned __int64)*(unsigned int *)(v28 + v25 - 4) << v29;
          v31 = v40;
          *(_QWORD *)(v27 - 13) = v30;
          *(_QWORD *)(v27 - 11) = (unsigned __int64)*(unsigned int *)(v28 + v25) << v31;
          --v26;
        }
        while ( v26 );
      }
    }
    if ( v3 )
      v3[770] = dword_1C0009750;
    if ( v5 )
      v5[802] = dword_1C0009750;
    ++dword_1C0009750;
    v8 = 0;
    ResetEnumerationContext(v37);
    if ( !(unsigned int)EnumerateNextDevice((__int64)v37, &v38) )
    {
      do
      {
        v32 = v38;
        RegisterHvCap(v38);
        HIDWORD(v36[0]) = *(_DWORD *)(v32 + 48);
        if ( qword_1C00095D0 )
          v33 = qword_1C00095D0(v36);
        else
          v33 = -1073741822;
        if ( v33 < 0 )
          v8 = v33;
      }
      while ( !(unsigned int)EnumerateNextDevice((__int64)v37, &v38) );
      if ( v8 < 0 )
      {
        if ( v3 )
          *v3 = 0;
        if ( v5 )
          *v5 = 0;
        ResetEnumerationContext(v37);
        while ( !(unsigned int)EnumerateNextDevice((__int64)v37, &v38) )
        {
          HIDWORD(v36[0]) = *(_DWORD *)(v38 + 48);
          if ( qword_1C00095D0 )
            qword_1C00095D0(v36);
        }
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C0009398);
    goto LABEL_60;
  }
  v8 = -1073741670;
LABEL_60:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72637250u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x72637250u);
  return (unsigned int)v8;
}
