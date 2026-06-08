/*
 * XREFs of InitCpcStatesInternal @ 0x1C001E5AC
 * Callers:
 *     RegisterHvCpcCounters @ 0x1C001C150 (RegisterHvCpcCounters.c)
 *     RegisterKernelCpc @ 0x1C001F750 (RegisterKernelCpc.c)
 * Callees:
 *     EnumerateNextDevice @ 0x1C00016FC (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0001738 (ResetEnumerationContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C0002260 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00025C0 (memset.c)
 *     ReadGenAddr @ 0x1C000346C (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C00035CC (WriteGenAddr.c)
 *     CpcRegisterIsSupported @ 0x1C0003C80 (CpcRegisterIsSupported.c)
 *     ProcLibCapChange @ 0x1C0012DA4 (ProcLibCapChange.c)
 *     GetPerfDomain @ 0x1C001596C (GetPerfDomain.c)
 *     GetRegistryDwordValue @ 0x1C0016238 (GetRegistryDwordValue.c)
 *     CpcConnectNativeInterrupt @ 0x1C001AEA8 (CpcConnectNativeInterrupt.c)
 */

__int64 __fastcall InitCpcStatesInternal(__int64 a1, __int64 (__fastcall *a2)(_QWORD *, _QWORD))
{
  int v2; // r15d
  __int64 v3; // r13
  char v4; // r12
  _QWORD *v5; // rdi
  SIZE_T v6; // rbx
  char *PoolWithTag; // rax
  char *v8; // rsi
  int v9; // ebx
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
  __int64 v61; // r14
  _QWORD *v62; // r15
  char v63; // di
  unsigned __int64 v64; // r12
  _DWORD *v65; // r13
  unsigned __int64 GenAddr; // rax
  unsigned __int64 v67; // r8
  unsigned __int64 v68; // rax
  unsigned __int64 v69; // rtt
  unsigned __int8 v70; // cl
  unsigned __int8 v71; // cl
  char v73; // [rsp+20h] [rbp-69h]
  char v74; // [rsp+21h] [rbp-68h]
  bool v75; // [rsp+22h] [rbp-67h]
  char v76; // [rsp+23h] [rbp-66h]
  char IsSupported; // [rsp+24h] [rbp-65h]
  bool v78; // [rsp+25h] [rbp-64h]
  char v79; // [rsp+26h] [rbp-63h]
  char v80; // [rsp+27h] [rbp-62h]
  char v81; // [rsp+28h] [rbp-61h]
  char v82; // [rsp+29h] [rbp-60h]
  PVOID DeferredContext; // [rsp+30h] [rbp-59h] BYREF
  unsigned int Size; // [rsp+38h] [rbp-51h]
  int Size_4; // [rsp+3Ch] [rbp-4Dh]
  int v86; // [rsp+40h] [rbp-49h] BYREF
  _QWORD v87[2]; // [rsp+48h] [rbp-41h] BYREF
  int PerfDomain; // [rsp+58h] [rbp-31h]
  int v89; // [rsp+5Ch] [rbp-2Dh]
  __int64 v90[4]; // [rsp+60h] [rbp-29h] BYREF
  _QWORD *v91; // [rsp+80h] [rbp-9h]
  int v92; // [rsp+88h] [rbp-1h] BYREF
  char *v93; // [rsp+90h] [rbp+7h]
  char v96; // [rsp+100h] [rbp+77h]
  __int64 v97; // [rsp+100h] [rbp+77h]
  char v98; // [rsp+108h] [rbp+7Fh]

  v3 = a1;
  v4 = 0;
  v86 = 0;
  v5 = 0LL;
  if ( (int)GetRegistryDwordValue(
              (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
              (__int64)L"~MHz",
              (__int64)&v86) < 0
    || !v86 )
  {
    *(_QWORD *)(v3 + 248) &= ~0x8000000uLL;
    return (unsigned int)-1073741823;
  }
  LOBYTE(Size_4) = *(_QWORD *)(v3 + 280) != 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C000D9C8,
    0LL);
  PerfDomain = GetPerfDomain((_QWORD *)v3, (__int64)v90, &v92);
  v6 = (unsigned int)(312 * PerfDomain);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x72637250u);
  v93 = PoolWithTag;
  v8 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_4:
    v9 = -1073741670;
    goto LABEL_155;
  }
  memset(PoolWithTag, 0, v6);
  Size = 0;
  LOBYTE(v2) = 0;
  v81 = 0;
  v89 = v2;
  v73 = 0;
  v96 = 0;
  v79 = 1;
  v80 = 0;
  IsSupported = 0;
  v76 = 0;
  v82 = 0;
  v98 = 0;
  v74 = 1;
  v78 = 0;
  v75 = 0;
  ResetEnumerationContext(v90);
  if ( (unsigned int)EnumerateNextDevice((__int64)v90, &DeferredContext) )
    goto LABEL_64;
  LOBYTE(v11) = Size_4;
  v12 = v8 + 80;
  LOBYTE(v13) = 0;
  do
  {
    v14 = (_BYTE *)*((_QWORD *)DeferredContext + 66);
    if ( v14[140] == 10 || v14[152] == 10 )
      v73 = v10;
    if ( v14[176] == 10 || v14[80] == 10 || v14[92] == 10 || v14[68] == 10 || v14[104] == 10 )
      v96 = v10;
    v13 = (unsigned __int8)v13;
    if ( v14[56] == 10 )
      v13 = v10;
    if ( v14[212] == 10 || v14[200] == 10 || v14[188] == 10 || v14[116] == 10 )
      v81 = v10;
    *((_QWORD *)v12 + 2) = v14;
    IsSupported = CpcRegisterIsSupported((__int64)(v14 + 176));
    *v12 = IsSupported;
    v12[1] = CpcRegisterIsSupported((__int64)(v14 + 68));
    v12[2] = CpcRegisterIsSupported((__int64)(v14 + 80));
    v12[3] = CpcRegisterIsSupported((__int64)(v14 + 92));
    v12[4] = CpcRegisterIsSupported((__int64)(v14 + 104));
    v12[5] = CpcRegisterIsSupported((__int64)(v14 + 56));
    v82 = CpcRegisterIsSupported((__int64)(v14 + 116));
    v80 = CpcRegisterIsSupported(v15);
    v76 = CpcRegisterIsSupported((__int64)(v14 + 200));
    v16 = v11;
    if ( v14[140] == 127 )
      v16 = 0;
    v11 = v16;
    if ( v14[152] == 127 )
      v11 = 0;
    if ( !qword_1C000DB48 || !(unsigned __int8)qword_1C000DB48(v14) )
      v79 = 0;
    v17 = 0;
    memset(v87, 0, 12);
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
      v98 = 1;
      if ( (unsigned __int8)CpcRegisterIsSupported((__int64)v87) )
        break;
      v24 = *(_QWORD *)(v20 + 4);
      v25 = *(_BYTE *)(v20 + 3);
      LOBYTE(v87[0]) = *(_BYTE *)v20;
      *(_QWORD *)((char *)v87 + 4) = v24;
      BYTE3(v87[0]) = v25;
LABEL_44:
      v17 = v19 + 1;
      if ( v17 >= 4 )
      {
        v26 = v74;
        goto LABEL_46;
      }
    }
    if ( v23 == *(_BYTE *)v20 && v21 == *(_QWORD *)(v20 + 4) && v22 == *(_BYTE *)(v20 + 3) )
      goto LABEL_44;
    v26 = 0;
    v74 = 0;
LABEL_46:
    if ( v98 && v26 )
    {
      v27 = v87[1];
      *((_QWORD *)v12 + 3) = v87[0];
      *((_DWORD *)v12 + 8) = v27;
    }
    v28 = 19LL;
    v29 = (unsigned int *)&Cpc2RegisterTable;
    do
    {
      v30 = *v29;
      v29 += 6;
      v2 = (unsigned __int8)v2;
      if ( v14[v30] == 10 )
        v2 = 1;
      --v28;
    }
    while ( v28 );
    v89 = v2;
    v12 += 312;
    v31 = EnumerateNextDevice((__int64)v90, &DeferredContext);
    LOBYTE(v34) = 10;
  }
  while ( !v31 );
  Size_4 = v11;
  v5 = 0LL;
  v8 = v93;
  Size = v13;
  v3 = a1;
  if ( (_BYTE)v2 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(qword_1C000DE68 + 88))(
           *(_QWORD *)(qword_1C000DE68 + 56),
           v32,
           v33,
           v34);
    if ( v9 < 0 )
      goto LABEL_155;
    ResetEnumerationContext(v90);
    if ( !(unsigned int)EnumerateNextDevice((__int64)v90, &DeferredContext) )
    {
      v35 = v8 + 96;
      do
      {
        if ( *(v35 - 16) )
          WriteGenAddr((_BYTE *)(*(_QWORD *)v35 + 176LL), 1LL);
        v35 += 312;
      }
      while ( !(unsigned int)EnumerateNextDevice((__int64)v90, &DeferredContext) );
      v5 = 0LL;
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(qword_1C000DE68 + 104))(*(_QWORD *)(qword_1C000DE68 + 56), 0LL);
    if ( v9 < 0 )
      goto LABEL_155;
  }
  v4 = Size;
LABEL_64:
  ResetEnumerationContext(v90);
  if ( (unsigned int)EnumerateNextDevice((__int64)v90, &DeferredContext) )
  {
LABEL_81:
    v44 = *((_QWORD *)v8 + 1);
    if ( *(_QWORD *)v8 < v44 )
      goto LABEL_80;
    v45 = *((_QWORD *)v8 + 2);
    if ( v44 < v45 )
      goto LABEL_80;
    v46 = v8 + 24;
    if ( v45 < *((_QWORD *)v8 + 3) )
      goto LABEL_80;
    v47 = 1;
    if ( (_BYTE)Size_4 )
      v47 = 2;
    v48 = (32 * PerfDomain + 415) & 0xFFFFFFF8;
    v49 = (v48 + 7 + 24 * v47) & 0xFFFFFFF8;
    Size = v49 + 8 * PerfDomain * v47;
    v50 = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x72637250u);
    v91 = v50;
    v5 = v50;
    if ( v50 )
    {
      memset(v50, 0, Size);
      if ( *(_BYTE *)(v3 + 1073) )
        v5[45] = PepParkPreference;
      if ( (*(_QWORD *)(v3 + 248) & 0x10000000000LL) != 0 )
      {
        v5[46] = PepParkMask;
        v5[47] = PepPerfCheckComplete;
        v5[8] = *(_QWORD *)(v3 + 1056);
      }
      v51 = v98;
      *((_DWORD *)v5 + 3) = PerfDomain;
      v5[49] = v5 + 51;
      v52 = (char *)v5 + v48;
      v5[50] = (char *)v5 + v49;
      *((_WORD *)v5 + 2) = v92;
      *(_DWORD *)v5 = 42;
      *((_DWORD *)v5 + 8) = v47;
      v5[48] = v52;
      if ( v98 )
      {
        v53 = PerfControlCpc;
        if ( v74 )
          v53 = PerfControlCpcSingleRegister;
      }
      else
      {
        v53 = AcpiCStateIdleCancel;
      }
      v5[41] = v53;
      v5[40] = PerfSelectionCpc;
      if ( (_BYTE)v89 )
      {
        if ( v73 )
          v5[42] = CpcReadFeedback;
        if ( v96 )
        {
          v5[43] = CpcAcquirePerformance;
          v5[44] = CpcCommitPerformance;
        }
        if ( v81 )
        {
          v5[37] = AcquirePccSubspace;
          v5[38] = ExecutePccWrite;
        }
        v54 = *(_DWORD *)(qword_1C000DE68 + 68);
        if ( v54 )
          *((_DWORD *)v5 + 9) = 0x989680 / (v54 >> 1);
        v51 = v98;
      }
      if ( IsSupported || (*(_QWORD *)(v3 + 248) & 0x4000000000LL) != 0 )
        v5[39] = CpcReinitializeHandler;
      *((_BYTE *)v5 + 8) = v79;
      *((_BYTE *)v5 + 40) = v75;
      *((_BYTE *)v5 + 7) = v51;
      *((_BYTE *)v5 + 6) = 0;
      *((_DWORD *)v5 + 4) = v86;
      *((_DWORD *)v5 + 5) = *((_DWORD *)v8 + 15);
      v55 = *((_DWORD *)v8 + 16);
      *((_DWORD *)v5 + 6) = v55;
      v56 = *((_DWORD *)v8 + 17);
      if ( !v55 )
        v55 = 1;
      *((_DWORD *)v5 + 6) = v55;
      if ( !v56 )
        v56 = 1;
      *((_DWORD *)v5 + 7) = v56;
      v5[6] = *(_QWORD *)v46;
      v5[7] = *((_QWORD *)v8 + 1);
      v57 = *(_QWORD *)(v3 + 288);
      if ( v57 )
        v5[30] = v57;
      v5[32] = *(_QWORD *)(v3 + 296);
      if ( v80 )
        v5[34] = CpcSetEnergyPerfPreference;
      if ( v76 )
        v5[35] = CpcSetAutonomousActivityWindow;
      if ( v78 )
        v5[36] = CpcSetAutonomousMode;
      if ( v82 )
        v5[31] = CpcSetTimeWindow;
      v58 = *((_QWORD *)v8 + 1);
      v59 = *((_QWORD *)v8 + 4);
      if ( v58 == v59 )
        *((_DWORD *)v52 + 2) = 100;
      else
        *((_DWORD *)v52 + 2) = 100 * v59 / v58;
      *((_DWORD *)v52 + 3) = 1;
      v52[17] = 1;
      *(_QWORD *)v52 = PerfReadWrappingCounter;
      v52[16] = v73 == 0;
      if ( (_BYTE)Size_4 )
      {
        v60 = v5[48];
        *(_QWORD *)(v60 + 32) = 100LL;
        *(_QWORD *)(v60 + 24) = PerfReadWrappingCounter;
        *(_WORD *)(v60 + 40) = 257;
      }
      v61 = v5[49];
      v62 = (_QWORD *)v5[50];
      ResetEnumerationContext(v90);
      if ( !(unsigned int)EnumerateNextDevice((__int64)v90, &DeferredContext) )
      {
        v63 = Size_4;
        do
        {
          LODWORD(v64) = 100;
          v65 = DeferredContext;
          v97 = *((_QWORD *)v46 + 9);
          if ( v46[61] )
          {
            GenAddr = ReadGenAddr(*((_QWORD *)v46 + 9) + 56LL);
            v67 = *((_QWORD *)v46 - 2);
            if ( GenAddr > v67 )
              GenAddr = *((_QWORD *)v46 - 2);
            if ( GenAddr < *(_QWORD *)v46 )
              GenAddr = *(_QWORD *)v46;
            *((_QWORD *)v46 + 3) = GenAddr;
            v69 = 100 * GenAddr;
            v68 = 100 * GenAddr / v67;
            *((_DWORD *)v46 + 12) = v68;
            v64 = v69 / v67;
            if ( (_DWORD)v68 != v65[169] )
              ProcLibCapChange(a1, v65[102], v65[114], v68);
          }
          *(_DWORD *)(v61 + 16) = v64;
          if ( (unsigned int)v64 < 0x64 )
            *(_DWORD *)(v61 + 24) = 2;
          *(_DWORD *)(v61 + 20) = v65[168];
          *(_QWORD *)(v61 + 8) = v46 - 24;
          KeGetProcessorNumberFromIndex(v65[14], (PPROCESSOR_NUMBER)v61);
          *v62 = v46 + 96;
          *((_QWORD *)v46 + 19) = v97;
          *((_QWORD *)v46 + 18) = GetCpcDifferentialFeedback;
          v70 = *(_BYTE *)(v97 + 153);
          if ( v70 < 0x40u )
            *((_QWORD *)v46 + 16) = (1LL << v70) - 1;
          v71 = *(_BYTE *)(v97 + 141);
          if ( v71 < 0x40u )
            *((_QWORD *)v46 + 17) = (1LL << v71) - 1;
          ++v62;
          if ( v63 )
          {
            *v62++ = v46 + 160;
            *((_QWORD *)v46 + 26) = *((_QWORD *)v65 + 35);
          }
          v61 += 32LL;
          v46 += 312;
        }
        while ( !(unsigned int)EnumerateNextDevice((__int64)v90, &DeferredContext) );
        v5 = v91;
        v8 = v93;
        v3 = a1;
      }
      v9 = a2(v5, Size);
      if ( v9 >= 0 )
      {
        ResetEnumerationContext(v90);
        while ( !(unsigned int)EnumerateNextDevice((__int64)v90, &DeferredContext) )
        {
          *((_QWORD *)DeferredContext + 28) = v8;
          v8 += 312;
        }
        if ( (*(_QWORD *)(v3 + 248) & 0x4000000000LL) != 0 )
        {
          ResetEnumerationContext(v90);
          while ( !(unsigned int)EnumerateNextDevice((__int64)v90, &DeferredContext) )
            CpcConnectNativeInterrupt(DeferredContext);
        }
        v8 = 0LL;
        v9 = 0;
      }
      goto LABEL_155;
    }
    goto LABEL_4;
  }
  v37 = v8 + 86;
  while ( 1 )
  {
    v38 = v37 - 86;
    v39 = *(_QWORD *)(v37 + 10);
    *v37 = v73;
    v37[1] = v4;
    v37[2] = v36;
    *(_DWORD *)(v37 - 30) = v86;
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
      v75 = ReadGenAddr(v39 + 188) != 0;
      v78 = *(_BYTE *)(v39 + 188) != 126;
    }
    if ( v38 != v8
      && (*(_QWORD *)v38 != *(_QWORD *)v8
       || *(_QWORD *)(v37 - 78) != *((_QWORD *)v8 + 1)
       || *(_QWORD *)(v37 - 70) != *((_QWORD *)v8 + 2)
       || *(_QWORD *)(v37 - 62) != *((_QWORD *)v8 + 3)) )
    {
      break;
    }
    v37 += 312;
    if ( (unsigned int)EnumerateNextDevice((__int64)v90, &DeferredContext) )
      goto LABEL_81;
    v36 = v96;
  }
LABEL_80:
  v9 = -1073741811;
LABEL_155:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C000D9C8);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x72637250u);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x72637250u);
  return (unsigned int)v9;
}
