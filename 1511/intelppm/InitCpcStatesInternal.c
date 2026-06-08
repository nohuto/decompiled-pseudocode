/*
 * XREFs of InitCpcStatesInternal @ 0x1C001E6AC
 * Callers:
 *     RegisterHvCpcCounters @ 0x1C001C260 (RegisterHvCpcCounters.c)
 *     RegisterKernelCpc @ 0x1C001F840 (RegisterKernelCpc.c)
 * Callees:
 *     ReadGenAddr @ 0x1C0001388 (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C00013DC (WriteGenAddr.c)
 *     EnumerateNextDevice @ 0x1C0001AAC (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0001AE8 (ResetEnumerationContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D00 (memset.c)
 *     CpcRegisterIsSupported @ 0x1C0004320 (CpcRegisterIsSupported.c)
 *     ProcLibCapChange @ 0x1C0012DA4 (ProcLibCapChange.c)
 *     GetPerfDomain @ 0x1C001596C (GetPerfDomain.c)
 *     GetRegistryDwordValue @ 0x1C00162F0 (GetRegistryDwordValue.c)
 *     CpcConnectNativeInterrupt @ 0x1C001B228 (CpcConnectNativeInterrupt.c)
 */

__int64 __fastcall InitCpcStatesInternal(__int64 a1, __int64 (__fastcall *a2)(_QWORD *, _QWORD))
{
  unsigned int v2; // r12d
  int v3; // r15d
  __int64 v4; // r13
  _QWORD *v5; // rdi
  int v6; // ebx
  SIZE_T v7; // rbx
  char *PoolWithTag; // rax
  char *v9; // rsi
  unsigned int v10; // r10d
  int v11; // edi
  char *v12; // r14
  unsigned int v13; // r13d
  _BYTE *v14; // rbx
  __int64 v15; // r8
  unsigned __int8 v16; // al
  unsigned int v17; // r8d
  __int64 v18; // rdx
  int v19; // r8d
  __int64 v20; // rdx
  __int64 v21; // r9
  char v22; // r10
  char v23; // r11
  __int64 v24; // r9
  char v25; // r10
  char v26; // r10
  int v27; // eax
  __int64 v28; // rdx
  unsigned int *v29; // rcx
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  char *v35; // rbx
  char v36; // r11
  char *v37; // r14
  char *v38; // r15
  __int64 v39; // rbx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // r8
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rcx
  char *v46; // rbx
  int v47; // r15d
  unsigned int v48; // r14d
  unsigned int v49; // r12d
  _QWORD *v50; // rax
  char v51; // cl
  char *v52; // r8
  void *v53; // rax
  unsigned int v54; // ecx
  int v55; // eax
  int v56; // ecx
  __int64 v57; // rax
  unsigned __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // r15
  _QWORD *v62; // r12
  char v63; // r10
  char v64; // di
  unsigned __int64 v65; // r14
  _DWORD *v66; // r13
  unsigned __int64 GenAddr; // rax
  unsigned __int64 v68; // r8
  unsigned __int8 v69; // cl
  unsigned __int8 v70; // cl
  char v72; // [rsp+20h] [rbp-69h]
  char v73; // [rsp+21h] [rbp-68h]
  bool v74; // [rsp+22h] [rbp-67h]
  char v75; // [rsp+23h] [rbp-66h]
  char IsSupported; // [rsp+24h] [rbp-65h]
  bool v77; // [rsp+25h] [rbp-64h]
  char v78; // [rsp+26h] [rbp-63h]
  char v79; // [rsp+27h] [rbp-62h]
  char v80; // [rsp+28h] [rbp-61h]
  char v81; // [rsp+29h] [rbp-60h]
  PVOID DeferredContext; // [rsp+30h] [rbp-59h] BYREF
  unsigned int Size; // [rsp+38h] [rbp-51h]
  int Size_4; // [rsp+3Ch] [rbp-4Dh]
  int v85; // [rsp+40h] [rbp-49h] BYREF
  _QWORD v86[2]; // [rsp+48h] [rbp-41h] BYREF
  int PerfDomain; // [rsp+58h] [rbp-31h]
  int v88; // [rsp+5Ch] [rbp-2Dh]
  __int64 v89[4]; // [rsp+60h] [rbp-29h] BYREF
  _QWORD *v90; // [rsp+80h] [rbp-9h]
  int v91; // [rsp+88h] [rbp-1h] BYREF
  char *v92; // [rsp+90h] [rbp+7h]
  char v95; // [rsp+100h] [rbp+77h]
  __int64 v96; // [rsp+100h] [rbp+77h]
  char v97; // [rsp+108h] [rbp+7Fh]

  v4 = a1;
  v85 = 0;
  v5 = 0LL;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
    (__int64)L"~MHz",
    &v85);
  if ( !v85 )
  {
    *(_QWORD *)(v4 + 248) &= ~0x8000000uLL;
    return (unsigned int)-1073741823;
  }
  LOBYTE(Size_4) = *(_QWORD *)(v4 + 280) != 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C000DD08,
    0LL);
  PerfDomain = GetPerfDomain((_QWORD *)v4, (__int64)v89, &v91);
  v7 = (unsigned int)(312 * PerfDomain);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x72637250u);
  v92 = PoolWithTag;
  v9 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_4:
    v6 = -1073741670;
    goto LABEL_157;
  }
  memset(PoolWithTag, 0, v7);
  v80 = 0;
  LOBYTE(v3) = 0;
  v78 = 1;
  LOBYTE(v2) = 0;
  v88 = v3;
  Size = v2;
  v72 = 0;
  v95 = 0;
  v79 = 0;
  IsSupported = 0;
  v75 = 0;
  v81 = 0;
  v97 = 0;
  v73 = 1;
  v77 = 0;
  v74 = 0;
  ResetEnumerationContext(v89);
  if ( (unsigned int)EnumerateNextDevice((__int64)v89, &DeferredContext) )
    goto LABEL_64;
  LOBYTE(v11) = Size_4;
  v12 = v9 + 80;
  LOBYTE(v13) = 0;
  do
  {
    v14 = (_BYTE *)*((_QWORD *)DeferredContext + 65);
    if ( v14[140] == 10 || v14[152] == 10 )
      v72 = v10;
    if ( v14[176] == 10 || v14[80] == 10 || v14[92] == 10 || v14[68] == 10 || v14[104] == 10 )
      v95 = v10;
    v13 = (unsigned __int8)v13;
    if ( v14[56] == 10 )
      v13 = v10;
    if ( v14[212] == 10 || v14[200] == 10 || v14[188] == 10 || v14[116] == 10 )
      v80 = v10;
    *((_QWORD *)v12 + 2) = v14;
    IsSupported = CpcRegisterIsSupported((__int64)(v14 + 176));
    *v12 = IsSupported;
    v12[1] = CpcRegisterIsSupported((__int64)(v14 + 68));
    v12[2] = CpcRegisterIsSupported((__int64)(v14 + 80));
    v12[3] = CpcRegisterIsSupported((__int64)(v14 + 92));
    v12[4] = CpcRegisterIsSupported((__int64)(v14 + 104));
    v12[5] = CpcRegisterIsSupported((__int64)(v14 + 56));
    v81 = CpcRegisterIsSupported((__int64)(v14 + 116));
    v79 = CpcRegisterIsSupported(v15);
    v75 = CpcRegisterIsSupported((__int64)(v14 + 200));
    v16 = v11;
    if ( v14[140] == 127 )
      v16 = 0;
    v11 = v16;
    if ( v14[152] == 127 )
      v11 = 0;
    if ( !qword_1C000DE88 || !(unsigned __int8)qword_1C000DE88(v14) )
      v78 = 0;
    v17 = 0;
    memset(v86, 0, 12);
    while ( 1 )
    {
      if ( v17 )
      {
        if ( v17 == 1 )
        {
          v18 = (__int64)(v14 + 80);
        }
        else if ( v17 == 2 )
        {
          v18 = (__int64)(v14 + 92);
        }
        else
        {
          v18 = (__int64)(v14 + 104);
        }
      }
      else
      {
        v18 = (__int64)(v14 + 68);
      }
      if ( !(unsigned __int8)CpcRegisterIsSupported(v18) )
        goto LABEL_44;
      v97 = 1;
      if ( (unsigned __int8)CpcRegisterIsSupported((__int64)v86) )
        break;
      v24 = *(_QWORD *)(v20 + 4);
      v25 = *(_BYTE *)(v20 + 3);
      LOBYTE(v86[0]) = *(_BYTE *)v20;
      *(_QWORD *)((char *)v86 + 4) = v24;
      BYTE3(v86[0]) = v25;
LABEL_44:
      v17 = v19 + 1;
      if ( v17 >= 4 )
      {
        v26 = v73;
        goto LABEL_46;
      }
    }
    if ( v23 == *(_BYTE *)v20 && v21 == *(_QWORD *)(v20 + 4) && v22 == *(_BYTE *)(v20 + 3) )
      goto LABEL_44;
    v26 = 0;
    v73 = 0;
LABEL_46:
    if ( v97 && v26 )
    {
      v27 = v86[1];
      *((_QWORD *)v12 + 3) = v86[0];
      *((_DWORD *)v12 + 8) = v27;
    }
    v28 = 19LL;
    v29 = (unsigned int *)&Cpc2RegisterTable;
    do
    {
      v30 = *v29;
      v29 += 6;
      v3 = (unsigned __int8)v3;
      if ( v14[v30] == 10 )
        v3 = 1;
      --v28;
    }
    while ( v28 );
    v88 = v3;
    v12 += 312;
    v31 = EnumerateNextDevice((__int64)v89, &DeferredContext);
    LOBYTE(v34) = 10;
  }
  while ( !v31 );
  Size_4 = v11;
  Size = v13;
  v5 = 0LL;
  v9 = v92;
  v4 = a1;
  if ( (_BYTE)v3 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(qword_1C000E1A8 + 88))(
           *(_QWORD *)(qword_1C000E1A8 + 56),
           v32,
           v33,
           v34);
    if ( v6 < 0 )
      goto LABEL_157;
    ResetEnumerationContext(v89);
    if ( !(unsigned int)EnumerateNextDevice((__int64)v89, &DeferredContext) )
    {
      v35 = v9 + 96;
      do
      {
        if ( *(v35 - 16) )
          WriteGenAddr((_BYTE *)(*(_QWORD *)v35 + 176LL), 1LL);
        v35 += 312;
      }
      while ( !(unsigned int)EnumerateNextDevice((__int64)v89, &DeferredContext) );
      v5 = 0LL;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(qword_1C000E1A8 + 104))(*(_QWORD *)(qword_1C000E1A8 + 56), 0LL);
    if ( v6 < 0 )
      goto LABEL_157;
  }
  LOBYTE(v2) = Size;
LABEL_64:
  ResetEnumerationContext(v89);
  if ( (unsigned int)EnumerateNextDevice((__int64)v89, &DeferredContext) )
  {
LABEL_81:
    v44 = *((_QWORD *)v9 + 1);
    if ( *(_QWORD *)v9 < v44 )
      goto LABEL_80;
    v45 = *((_QWORD *)v9 + 2);
    if ( v44 < v45 )
      goto LABEL_80;
    v46 = v9 + 24;
    if ( v45 < *((_QWORD *)v9 + 3) )
      goto LABEL_80;
    v47 = 1;
    if ( (_BYTE)Size_4 )
      v47 = 2;
    v48 = (32 * PerfDomain + 415) & 0xFFFFFFF8;
    v49 = (v48 + 7 + 24 * v47) & 0xFFFFFFF8;
    Size = v49 + 8 * PerfDomain * v47;
    v50 = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x72637250u);
    v90 = v50;
    v5 = v50;
    if ( v50 )
    {
      memset(v50, 0, Size);
      if ( *(_BYTE *)(v4 + 1065) )
        v5[45] = PepParkPreference;
      if ( (*(_QWORD *)(v4 + 248) & 0x10000000000LL) != 0 )
      {
        v5[46] = PepParkMask;
        v5[47] = PepPerfCheckComplete;
        v5[8] = *(_QWORD *)(v4 + 1048);
      }
      v51 = v97;
      *((_DWORD *)v5 + 3) = PerfDomain;
      v5[49] = v5 + 51;
      v52 = (char *)v5 + v48;
      v5[50] = (char *)v5 + v49;
      *((_WORD *)v5 + 2) = v91;
      *(_DWORD *)v5 = 42;
      *((_DWORD *)v5 + 8) = v47;
      v5[48] = v52;
      if ( v97 )
      {
        v53 = PerfControlCpc;
        if ( v73 )
          v53 = PerfControlCpcSingleRegister;
      }
      else
      {
        v53 = AcpiCStateIdleCancel;
      }
      v5[41] = v53;
      v5[40] = PerfSelectionCpc;
      if ( (_BYTE)v88 )
      {
        if ( v72 )
          v5[42] = CpcReadFeedback;
        if ( v95 )
        {
          v5[43] = CpcAcquirePerformance;
          v5[44] = CpcCommitPerformance;
        }
        if ( v80 )
        {
          v5[37] = AcquirePccSubspace;
          v5[38] = ExecutePccWrite;
        }
        v54 = *(_DWORD *)(qword_1C000E1A8 + 68);
        if ( v54 )
          *((_DWORD *)v5 + 9) = 0x989680 / (v54 >> 1);
        v51 = v97;
      }
      if ( IsSupported || (*(_QWORD *)(v4 + 248) & 0x4000000000LL) != 0 )
        v5[39] = CpcReinitializeHandler;
      *((_BYTE *)v5 + 8) = v78;
      *((_BYTE *)v5 + 40) = v74;
      *((_BYTE *)v5 + 7) = v51;
      *((_BYTE *)v5 + 6) = 0;
      *((_DWORD *)v5 + 4) = v85;
      *((_DWORD *)v5 + 5) = *((_DWORD *)v9 + 15);
      v55 = *((_DWORD *)v9 + 16);
      *((_DWORD *)v5 + 6) = v55;
      v56 = *((_DWORD *)v9 + 17);
      if ( !v55 )
        v55 = 1;
      *((_DWORD *)v5 + 6) = v55;
      if ( !v56 )
        v56 = 1;
      *((_DWORD *)v5 + 7) = v56;
      v5[6] = *(_QWORD *)v46;
      v5[7] = *((_QWORD *)v9 + 1);
      v57 = *(_QWORD *)(v4 + 288);
      if ( v57 )
        v5[30] = v57;
      v5[32] = *(_QWORD *)(v4 + 296);
      if ( v79 )
        v5[34] = CpcSetEnergyPerfPreference;
      if ( v75 )
        v5[35] = CpcSetAutonomousActivityWindow;
      if ( v77 )
        v5[36] = CpcSetAutonomousMode;
      if ( v81 )
        v5[31] = CpcSetTimeWindow;
      v58 = *((_QWORD *)v9 + 1);
      v59 = *((_QWORD *)v9 + 4);
      if ( v58 == v59 )
        *((_DWORD *)v52 + 2) = 100;
      else
        *((_DWORD *)v52 + 2) = 100 * v59 / v58;
      *((_DWORD *)v52 + 3) = 1;
      v52[17] = 1;
      *(_QWORD *)v52 = PerfReadWrappingCounter;
      v52[16] = v72 == 0;
      if ( (_BYTE)Size_4 )
      {
        v60 = v5[48];
        *(_QWORD *)(v60 + 32) = 100LL;
        *(_QWORD *)(v60 + 24) = PerfReadWrappingCounter;
        *(_WORD *)(v60 + 40) = 257;
      }
      v61 = v5[49];
      v62 = (_QWORD *)v5[50];
      ResetEnumerationContext(v89);
      if ( !(unsigned int)EnumerateNextDevice((__int64)v89, &DeferredContext) )
      {
        v64 = Size_4;
        do
        {
          LODWORD(v65) = 100;
          v66 = DeferredContext;
          v96 = *((_QWORD *)v46 + 9);
          if ( v46[61] != v63 )
          {
            GenAddr = ReadGenAddr(*((_QWORD *)v46 + 9) + 56LL);
            v68 = *((_QWORD *)v46 - 2);
            if ( GenAddr > v68 )
              GenAddr = *((_QWORD *)v46 - 2);
            if ( GenAddr < *(_QWORD *)v46 )
              GenAddr = *(_QWORD *)v46;
            *((_QWORD *)v46 + 3) = GenAddr;
            v65 = 100 * GenAddr / v68;
            if ( (unsigned int)v65 <= *((_DWORD *)v46 + 11) )
              LODWORD(v65) = *((_DWORD *)v46 + 11);
            *((_DWORD *)v46 + 12) = v65;
            if ( (_DWORD)v65 != v66[167] )
              ProcLibCapChange(a1, v66[100], v66[112], v65);
          }
          *(_DWORD *)(v61 + 16) = v65;
          if ( (unsigned int)v65 < 0x64 )
            *(_DWORD *)(v61 + 24) = 2;
          *(_DWORD *)(v61 + 20) = v66[166];
          *(_QWORD *)(v61 + 8) = v46 - 24;
          KeGetProcessorNumberFromIndex(v66[14], (PPROCESSOR_NUMBER)v61);
          *v62 = v46 + 96;
          *((_QWORD *)v46 + 19) = v96;
          *((_QWORD *)v46 + 18) = GetCpcDifferentialFeedback;
          v69 = *(_BYTE *)(v96 + 153);
          if ( v69 < 0x40u )
            *((_QWORD *)v46 + 16) = (1LL << v69) - 1;
          v70 = *(_BYTE *)(v96 + 141);
          if ( v70 < 0x40u )
            *((_QWORD *)v46 + 17) = (1LL << v70) - 1;
          ++v62;
          if ( v64 )
          {
            *v62++ = v46 + 160;
            *((_QWORD *)v46 + 26) = *((_QWORD *)v66 + 35);
          }
          v61 += 32LL;
          v46 += 312;
        }
        while ( !(unsigned int)EnumerateNextDevice((__int64)v89, &DeferredContext) );
        v5 = v90;
        v9 = v92;
        v4 = a1;
      }
      v6 = a2(v5, Size);
      if ( v6 >= 0 )
      {
        ResetEnumerationContext(v89);
        while ( !(unsigned int)EnumerateNextDevice((__int64)v89, &DeferredContext) )
        {
          *((_QWORD *)DeferredContext + 28) = v9;
          v9 += 312;
        }
        if ( (*(_QWORD *)(v4 + 248) & 0x4000000000LL) != 0 )
        {
          ResetEnumerationContext(v89);
          while ( !(unsigned int)EnumerateNextDevice((__int64)v89, &DeferredContext) )
            CpcConnectNativeInterrupt(DeferredContext);
        }
        v9 = 0LL;
        v6 = 0;
      }
      goto LABEL_157;
    }
    goto LABEL_4;
  }
  v37 = v9 + 86;
  while ( 1 )
  {
    v38 = v37 - 86;
    v39 = *(_QWORD *)(v37 + 10);
    *v37 = v72;
    v37[1] = v2;
    v37[2] = v36;
    *(_DWORD *)(v37 - 30) = v85;
    *(_QWORD *)(v37 - 86) = ReadGenAddr(v39 + 8);
    *(_QWORD *)(v37 - 78) = ReadGenAddr(v39 + 20);
    *(_QWORD *)(v37 - 70) = ReadGenAddr(v39 + 32);
    *(_QWORD *)(v37 - 62) = ReadGenAddr(v39 + 44);
    v40 = ReadGenAddr(v39 + 224);
    v41 = *(_QWORD *)(v37 - 78);
    *(_QWORD *)(v37 - 54) = v40;
    *(_DWORD *)(v37 - 26) = 100LL * *(_QWORD *)(v37 - 86) / v41;
    v42 = 100LL * *(_QWORD *)(v37 - 70) / v41;
    v43 = 100LL * *(_QWORD *)(v37 - 62) / v41;
    if ( !(_DWORD)v43 )
      LODWORD(v43) = 1;
    *(_DWORD *)(v37 - 18) = v43;
    if ( !(_DWORD)v42 )
      LODWORD(v42) = 1;
    *(_DWORD *)(v37 - 22) = v42;
    if ( (unsigned __int8)CpcRegisterIsSupported(v39 + 188) )
    {
      v74 = ReadGenAddr(v39 + 188) != 0;
      v77 = *(_BYTE *)(v39 + 188) != 126;
    }
    if ( v38 != v9
      && (*(_QWORD *)v38 != *(_QWORD *)v9
       || *(_QWORD *)(v37 - 78) != *((_QWORD *)v9 + 1)
       || *(_QWORD *)(v37 - 70) != *((_QWORD *)v9 + 2)
       || *(_QWORD *)(v37 - 62) != *((_QWORD *)v9 + 3)) )
    {
      break;
    }
    v37 += 312;
    if ( (unsigned int)EnumerateNextDevice((__int64)v89, &DeferredContext) )
      goto LABEL_81;
    v36 = v95;
  }
LABEL_80:
  v6 = -1073741811;
LABEL_157:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C000DD08);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x72637250u);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x72637250u);
  return (unsigned int)v6;
}
