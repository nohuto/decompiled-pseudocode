/*
 * XREFs of InitCpcStatesInternal @ 0x1C00178CC
 * Callers:
 *     RegisterKernelCpc @ 0x1C00178C0 (RegisterKernelCpc.c)
 *     RegisterHvCpcCounters @ 0x1C001B0E0 (RegisterHvCpcCounters.c)
 * Callees:
 *     CpcRegisterIsSupported @ 0x1C0002A50 (CpcRegisterIsSupported.c)
 *     ReadGenAddr @ 0x1C00046A0 (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C00046F4 (WriteGenAddr.c)
 *     ResetEnumerationContext @ 0x1C00047E8 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C00047FC (EnumerateNextDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C0005DE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006140 (memset.c)
 *     ProcLibCapChange @ 0x1C00126B0 (ProcLibCapChange.c)
 *     CpcConnectNativeInterrupt @ 0x1C0015784 (CpcConnectNativeInterrupt.c)
 *     GetPerfDomain @ 0x1C00190EC (GetPerfDomain.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001BE2C (GetRegistryDwordValueNoDefault.c)
 */

__int64 __fastcall InitCpcStatesInternal(
        __int64 a1,
        __int64 (__fastcall *a2)(_QWORD *, _QWORD),
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // r12d
  int v5; // r15d
  __int64 v6; // r13
  _QWORD *v7; // rdi
  int RegistryDwordValueNoDefault; // eax
  int v9; // r8d
  int v10; // ebx
  SIZE_T v11; // rbx
  char *PoolWithTag; // rax
  char *v13; // rsi
  unsigned int v14; // r10d
  int v15; // edi
  char *v16; // r14
  unsigned int v17; // r13d
  _BYTE *v18; // rbx
  __int64 v19; // r8
  unsigned __int8 v20; // al
  unsigned int v21; // r8d
  __int64 v22; // rdx
  int v23; // r8d
  __int64 v24; // rdx
  __int64 v25; // r9
  char v26; // r10
  char v27; // r11
  __int64 v28; // r9
  char v29; // r10
  char v30; // r10
  int v31; // eax
  __int64 v32; // rdx
  unsigned int *v33; // rcx
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  char *v39; // rbx
  char v40; // r11
  char *v41; // r14
  char *v42; // r15
  __int64 v43; // rbx
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // r8
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rcx
  char *v50; // rbx
  int v51; // r15d
  unsigned int v52; // r14d
  unsigned int v53; // r12d
  _QWORD *v54; // rax
  char v55; // cl
  char *v56; // r8
  void *v57; // rax
  unsigned int v58; // ecx
  int v59; // eax
  int v60; // ecx
  __int64 v61; // rax
  unsigned __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // r15
  _QWORD *v66; // r12
  char v67; // r10
  char v68; // di
  unsigned __int64 v69; // r14
  _DWORD *v70; // r13
  unsigned __int64 GenAddr; // rax
  unsigned __int64 v72; // r8
  unsigned __int8 v73; // cl
  unsigned __int8 v74; // cl
  char v76; // [rsp+20h] [rbp-69h]
  char v77; // [rsp+21h] [rbp-68h]
  bool v78; // [rsp+22h] [rbp-67h]
  char v79; // [rsp+23h] [rbp-66h]
  char IsSupported; // [rsp+24h] [rbp-65h]
  bool v81; // [rsp+25h] [rbp-64h]
  char v82; // [rsp+26h] [rbp-63h]
  char v83; // [rsp+27h] [rbp-62h]
  char v84; // [rsp+28h] [rbp-61h]
  char v85; // [rsp+29h] [rbp-60h]
  PVOID DeferredContext; // [rsp+30h] [rbp-59h] BYREF
  unsigned int Size; // [rsp+38h] [rbp-51h]
  int Size_4; // [rsp+3Ch] [rbp-4Dh] BYREF
  int v89; // [rsp+40h] [rbp-49h]
  _QWORD v90[2]; // [rsp+48h] [rbp-41h] BYREF
  int PerfDomain; // [rsp+58h] [rbp-31h]
  int v92; // [rsp+5Ch] [rbp-2Dh]
  __int64 v93[4]; // [rsp+60h] [rbp-29h] BYREF
  _QWORD *v94; // [rsp+80h] [rbp-9h]
  __int16 v95; // [rsp+88h] [rbp-1h] BYREF
  char *v96; // [rsp+90h] [rbp+7h]
  char v99; // [rsp+100h] [rbp+77h]
  __int64 v100; // [rsp+100h] [rbp+77h]
  char v101; // [rsp+108h] [rbp+7Fh]

  v6 = a1;
  Size_4 = 0;
  v7 = 0LL;
  RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                  L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                                  L"~MHz",
                                  &Size_4,
                                  a4);
  v9 = Size_4;
  if ( RegistryDwordValueNoDefault < 0 )
    v9 = 0;
  Size_4 = v9;
  if ( !v9 )
  {
    *(_QWORD *)(v6 + 248) &= ~0x8000000uLL;
    return (unsigned int)-1073741823;
  }
  LOBYTE(v89) = *(_QWORD *)(v6 + 280) != 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00093A8,
    0LL);
  PerfDomain = GetPerfDomain(v6, v93, &v95);
  v11 = (unsigned int)(312 * PerfDomain);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x72637250u);
  v96 = PoolWithTag;
  v13 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_6:
    v10 = -1073741670;
    goto LABEL_159;
  }
  memset(PoolWithTag, 0, v11);
  v84 = 0;
  LOBYTE(v5) = 0;
  v82 = 1;
  LOBYTE(v4) = 0;
  v92 = v5;
  Size = v4;
  v76 = 0;
  v99 = 0;
  v83 = 0;
  IsSupported = 0;
  v79 = 0;
  v85 = 0;
  v101 = 0;
  v77 = 1;
  v81 = 0;
  v78 = 0;
  ResetEnumerationContext(v93);
  if ( (unsigned int)EnumerateNextDevice((__int64)v93, &DeferredContext) )
    goto LABEL_66;
  LOBYTE(v15) = v89;
  v16 = v13 + 80;
  LOBYTE(v17) = 0;
  do
  {
    v18 = (_BYTE *)*((_QWORD *)DeferredContext + 65);
    if ( v18[140] == 10 || v18[152] == 10 )
      v76 = v14;
    if ( v18[176] == 10 || v18[80] == 10 || v18[92] == 10 || v18[68] == 10 || v18[104] == 10 )
      v99 = v14;
    v17 = (unsigned __int8)v17;
    if ( v18[56] == 10 )
      v17 = v14;
    if ( v18[212] == 10 || v18[200] == 10 || v18[188] == 10 || v18[116] == 10 )
      v84 = v14;
    *((_QWORD *)v16 + 2) = v18;
    IsSupported = CpcRegisterIsSupported((__int64)(v18 + 176));
    *v16 = IsSupported;
    v16[1] = CpcRegisterIsSupported((__int64)(v18 + 68));
    v16[2] = CpcRegisterIsSupported((__int64)(v18 + 80));
    v16[3] = CpcRegisterIsSupported((__int64)(v18 + 92));
    v16[4] = CpcRegisterIsSupported((__int64)(v18 + 104));
    v16[5] = CpcRegisterIsSupported((__int64)(v18 + 56));
    v85 = CpcRegisterIsSupported((__int64)(v18 + 116));
    v83 = CpcRegisterIsSupported(v19);
    v79 = CpcRegisterIsSupported((__int64)(v18 + 200));
    v20 = v15;
    if ( v18[140] == 127 )
      v20 = 0;
    v15 = v20;
    if ( v18[152] == 127 )
      v15 = 0;
    if ( !qword_1C0009528 || !(unsigned __int8)qword_1C0009528(v18) )
      v82 = 0;
    v21 = 0;
    memset(v90, 0, 12);
    while ( 1 )
    {
      if ( v21 )
      {
        if ( v21 == 1 )
        {
          v22 = (__int64)(v18 + 80);
        }
        else if ( v21 == 2 )
        {
          v22 = (__int64)(v18 + 92);
        }
        else
        {
          v22 = (__int64)(v18 + 104);
        }
      }
      else
      {
        v22 = (__int64)(v18 + 68);
      }
      if ( !(unsigned __int8)CpcRegisterIsSupported(v22) )
        goto LABEL_46;
      v101 = 1;
      if ( (unsigned __int8)CpcRegisterIsSupported((__int64)v90) )
        break;
      v28 = *(_QWORD *)(v24 + 4);
      v29 = *(_BYTE *)(v24 + 3);
      LOBYTE(v90[0]) = *(_BYTE *)v24;
      *(_QWORD *)((char *)v90 + 4) = v28;
      BYTE3(v90[0]) = v29;
LABEL_46:
      v21 = v23 + 1;
      if ( v21 >= 4 )
      {
        v30 = v77;
        goto LABEL_48;
      }
    }
    if ( v27 == *(_BYTE *)v24 && v25 == *(_QWORD *)(v24 + 4) && v26 == *(_BYTE *)(v24 + 3) )
      goto LABEL_46;
    v30 = 0;
    v77 = 0;
LABEL_48:
    if ( v101 && v30 )
    {
      v31 = v90[1];
      *((_QWORD *)v16 + 3) = v90[0];
      *((_DWORD *)v16 + 8) = v31;
    }
    v32 = 19LL;
    v33 = (unsigned int *)&Cpc2RegisterTable;
    do
    {
      v34 = *v33;
      v33 += 6;
      v5 = (unsigned __int8)v5;
      if ( v18[v34] == 10 )
        v5 = 1;
      --v32;
    }
    while ( v32 );
    v92 = v5;
    v16 += 312;
    v35 = EnumerateNextDevice((__int64)v93, &DeferredContext);
    LOBYTE(v38) = 10;
  }
  while ( !v35 );
  v89 = v15;
  Size = v17;
  v7 = 0LL;
  v13 = v96;
  v6 = a1;
  if ( (_BYTE)v5 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(qword_1C0009848 + 88))(
            *(_QWORD *)(qword_1C0009848 + 56),
            v36,
            v37,
            v38);
    if ( v10 < 0 )
      goto LABEL_159;
    ResetEnumerationContext(v93);
    if ( !(unsigned int)EnumerateNextDevice((__int64)v93, &DeferredContext) )
    {
      v39 = v13 + 96;
      do
      {
        if ( *(v39 - 16) )
          WriteGenAddr((_BYTE *)(*(_QWORD *)v39 + 176LL), 1uLL);
        v39 += 312;
      }
      while ( !(unsigned int)EnumerateNextDevice((__int64)v93, &DeferredContext) );
      v7 = 0LL;
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(qword_1C0009848 + 104))(*(_QWORD *)(qword_1C0009848 + 56), 0LL);
    if ( v10 < 0 )
      goto LABEL_159;
  }
  LOBYTE(v4) = Size;
LABEL_66:
  ResetEnumerationContext(v93);
  if ( (unsigned int)EnumerateNextDevice((__int64)v93, &DeferredContext) )
  {
LABEL_83:
    v48 = *((_QWORD *)v13 + 1);
    if ( *(_QWORD *)v13 < v48 )
      goto LABEL_82;
    v49 = *((_QWORD *)v13 + 2);
    if ( v48 < v49 )
      goto LABEL_82;
    v50 = v13 + 24;
    if ( v49 < *((_QWORD *)v13 + 3) )
      goto LABEL_82;
    v51 = 1;
    if ( (_BYTE)v89 )
      v51 = 2;
    v52 = (32 * PerfDomain + 415) & 0xFFFFFFF8;
    v53 = (v52 + 7 + 24 * v51) & 0xFFFFFFF8;
    Size = v53 + 8 * PerfDomain * v51;
    v54 = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x72637250u);
    v94 = v54;
    v7 = v54;
    if ( v54 )
    {
      memset(v54, 0, Size);
      if ( *(_BYTE *)(v6 + 1065) )
        v7[45] = PepParkPreference;
      if ( (*(_QWORD *)(v6 + 248) & 0x10000000000LL) != 0 )
      {
        v7[46] = PepParkMask;
        v7[47] = PepPerfCheckComplete;
        v7[8] = *(_QWORD *)(v6 + 1048);
      }
      v55 = v101;
      *((_DWORD *)v7 + 3) = PerfDomain;
      v7[49] = v7 + 51;
      v56 = (char *)v7 + v52;
      v7[50] = (char *)v7 + v53;
      *((_WORD *)v7 + 2) = v95;
      *(_DWORD *)v7 = 42;
      *((_DWORD *)v7 + 8) = v51;
      v7[48] = v56;
      if ( v101 )
      {
        v57 = PerfControlCpc;
        if ( v77 )
          v57 = PerfControlCpcSingleRegister;
      }
      else
      {
        v57 = AcpiCStateIdleCancel;
      }
      v7[41] = v57;
      v7[40] = PerfSelectionCpc;
      if ( (_BYTE)v92 )
      {
        if ( v76 )
          v7[42] = CpcReadFeedback;
        if ( v99 )
        {
          v7[43] = CpcAcquirePerformance;
          v7[44] = CpcCommitPerformance;
        }
        if ( v84 )
        {
          v7[37] = AcquirePccSubspace;
          v7[38] = ExecutePccWrite;
        }
        v58 = *(_DWORD *)(qword_1C0009848 + 68);
        if ( v58 )
          *((_DWORD *)v7 + 9) = 0x989680 / (v58 >> 1);
        v55 = v101;
      }
      if ( IsSupported || (*(_QWORD *)(v6 + 248) & 0x4000000000LL) != 0 )
        v7[39] = CpcReinitializeHandler;
      *((_BYTE *)v7 + 8) = v82;
      *((_BYTE *)v7 + 40) = v78;
      *((_BYTE *)v7 + 7) = v55;
      *((_BYTE *)v7 + 6) = 0;
      *((_DWORD *)v7 + 4) = Size_4;
      *((_DWORD *)v7 + 5) = *((_DWORD *)v13 + 15);
      v59 = *((_DWORD *)v13 + 16);
      *((_DWORD *)v7 + 6) = v59;
      v60 = *((_DWORD *)v13 + 17);
      if ( !v59 )
        v59 = 1;
      *((_DWORD *)v7 + 6) = v59;
      if ( !v60 )
        v60 = 1;
      *((_DWORD *)v7 + 7) = v60;
      v7[6] = *(_QWORD *)v50;
      v7[7] = *((_QWORD *)v13 + 1);
      v61 = *(_QWORD *)(v6 + 288);
      if ( v61 )
        v7[30] = v61;
      v7[32] = *(_QWORD *)(v6 + 296);
      if ( v83 )
        v7[34] = CpcSetEnergyPerfPreference;
      if ( v79 )
        v7[35] = CpcSetAutonomousActivityWindow;
      if ( v81 )
        v7[36] = CpcSetAutonomousMode;
      if ( v85 )
        v7[31] = CpcSetTimeWindow;
      v62 = *((_QWORD *)v13 + 1);
      v63 = *((_QWORD *)v13 + 4);
      if ( v62 == v63 )
        *((_DWORD *)v56 + 2) = 100;
      else
        *((_DWORD *)v56 + 2) = 100 * v63 / v62;
      *((_DWORD *)v56 + 3) = 1;
      v56[17] = 1;
      *(_QWORD *)v56 = PerfReadWrappingCounter;
      v56[16] = v76 == 0;
      if ( (_BYTE)v89 )
      {
        v64 = v7[48];
        *(_QWORD *)(v64 + 32) = 100LL;
        *(_QWORD *)(v64 + 24) = PerfReadWrappingCounter;
        *(_WORD *)(v64 + 40) = 257;
      }
      v65 = v7[49];
      v66 = (_QWORD *)v7[50];
      ResetEnumerationContext(v93);
      if ( !(unsigned int)EnumerateNextDevice((__int64)v93, &DeferredContext) )
      {
        v68 = v89;
        do
        {
          LODWORD(v69) = 100;
          v70 = DeferredContext;
          v100 = *((_QWORD *)v50 + 9);
          if ( v50[61] != v67 )
          {
            GenAddr = ReadGenAddr(*((_QWORD *)v50 + 9) + 56LL);
            v72 = *((_QWORD *)v50 - 2);
            if ( GenAddr > v72 )
              GenAddr = *((_QWORD *)v50 - 2);
            if ( GenAddr < *(_QWORD *)v50 )
              GenAddr = *(_QWORD *)v50;
            *((_QWORD *)v50 + 3) = GenAddr;
            v69 = 100 * GenAddr / v72;
            if ( (unsigned int)v69 <= *((_DWORD *)v50 + 11) )
              LODWORD(v69) = *((_DWORD *)v50 + 11);
            *((_DWORD *)v50 + 12) = v69;
            if ( (_DWORD)v69 != v70[167] )
              ProcLibCapChange(a1, v70[100], v70[112], v69);
          }
          *(_DWORD *)(v65 + 16) = v69;
          if ( (unsigned int)v69 < 0x64 )
            *(_DWORD *)(v65 + 24) = 2;
          *(_DWORD *)(v65 + 20) = v70[166];
          *(_QWORD *)(v65 + 8) = v50 - 24;
          KeGetProcessorNumberFromIndex(v70[14], (PPROCESSOR_NUMBER)v65);
          *v66 = v50 + 96;
          *((_QWORD *)v50 + 19) = v100;
          *((_QWORD *)v50 + 18) = GetCpcDifferentialFeedback;
          v73 = *(_BYTE *)(v100 + 153);
          if ( v73 < 0x40u )
            *((_QWORD *)v50 + 16) = (1LL << v73) - 1;
          v74 = *(_BYTE *)(v100 + 141);
          if ( v74 < 0x40u )
            *((_QWORD *)v50 + 17) = (1LL << v74) - 1;
          ++v66;
          if ( v68 )
          {
            *v66++ = v50 + 160;
            *((_QWORD *)v50 + 26) = *((_QWORD *)v70 + 35);
          }
          v65 += 32LL;
          v50 += 312;
        }
        while ( !(unsigned int)EnumerateNextDevice((__int64)v93, &DeferredContext) );
        v7 = v94;
        v13 = v96;
        v6 = a1;
      }
      v10 = a2(v7, Size);
      if ( v10 >= 0 )
      {
        ResetEnumerationContext(v93);
        while ( !(unsigned int)EnumerateNextDevice((__int64)v93, &DeferredContext) )
        {
          *((_QWORD *)DeferredContext + 28) = v13;
          v13 += 312;
        }
        if ( (*(_QWORD *)(v6 + 248) & 0x4000000000LL) != 0 )
        {
          ResetEnumerationContext(v93);
          while ( !(unsigned int)EnumerateNextDevice((__int64)v93, &DeferredContext) )
            CpcConnectNativeInterrupt(DeferredContext);
        }
        v13 = 0LL;
        v10 = 0;
      }
      goto LABEL_159;
    }
    goto LABEL_6;
  }
  v41 = v13 + 86;
  while ( 1 )
  {
    v42 = v41 - 86;
    v43 = *(_QWORD *)(v41 + 10);
    *v41 = v76;
    v41[1] = v4;
    v41[2] = v40;
    *(_DWORD *)(v41 - 30) = Size_4;
    *(_QWORD *)(v41 - 86) = ReadGenAddr(v43 + 8);
    *(_QWORD *)(v41 - 78) = ReadGenAddr(v43 + 20);
    *(_QWORD *)(v41 - 70) = ReadGenAddr(v43 + 32);
    *(_QWORD *)(v41 - 62) = ReadGenAddr(v43 + 44);
    v44 = ReadGenAddr(v43 + 224);
    v45 = *(_QWORD *)(v41 - 78);
    *(_QWORD *)(v41 - 54) = v44;
    *(_DWORD *)(v41 - 26) = 100LL * *(_QWORD *)(v41 - 86) / v45;
    v46 = 100LL * *(_QWORD *)(v41 - 70) / v45;
    v47 = 100LL * *(_QWORD *)(v41 - 62) / v45;
    if ( !(_DWORD)v47 )
      LODWORD(v47) = 1;
    *(_DWORD *)(v41 - 18) = v47;
    if ( !(_DWORD)v46 )
      LODWORD(v46) = 1;
    *(_DWORD *)(v41 - 22) = v46;
    if ( (unsigned __int8)CpcRegisterIsSupported(v43 + 188) )
    {
      v78 = ReadGenAddr(v43 + 188) != 0;
      v81 = *(_BYTE *)(v43 + 188) != 126;
    }
    if ( v42 != v13
      && (*(_QWORD *)v42 != *(_QWORD *)v13
       || *(_QWORD *)(v41 - 78) != *((_QWORD *)v13 + 1)
       || *(_QWORD *)(v41 - 70) != *((_QWORD *)v13 + 2)
       || *(_QWORD *)(v41 - 62) != *((_QWORD *)v13 + 3)) )
    {
      break;
    }
    v41 += 312;
    if ( (unsigned int)EnumerateNextDevice((__int64)v93, &DeferredContext) )
      goto LABEL_83;
    v40 = v99;
  }
LABEL_82:
  v10 = -1073741811;
LABEL_159:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00093A8);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x72637250u);
  if ( v13 )
    ExFreePoolWithTag(v13, 0x72637250u);
  return (unsigned int)v10;
}
