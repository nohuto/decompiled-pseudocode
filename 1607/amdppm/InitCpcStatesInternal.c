/*
 * XREFs of InitCpcStatesInternal @ 0x1C001914C
 * Callers:
 *     RegisterKernelCpc @ 0x1C0019140 (RegisterKernelCpc.c)
 *     RegisterHvCpcCounters @ 0x1C001DD80 (RegisterHvCpcCounters.c)
 * Callees:
 *     ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C0002148 (ProcLibTraceHiddenProcessorDegradedOperation.c)
 *     CpcRegisterIsSupported @ 0x1C00032CC (CpcRegisterIsSupported.c)
 *     ReadGenAddrMaybeHidden @ 0x1C0005FB8 (ReadGenAddrMaybeHidden.c)
 *     WriteGenAddrMaybeHidden @ 0x1C0005FD0 (WriteGenAddrMaybeHidden.c)
 *     ReadGenAddrHidden @ 0x1C0005FEC (ReadGenAddrHidden.c)
 *     ResetEnumerationContext @ 0x1C00061FC (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C0006210 (EnumerateNextDevice.c)
 *     __security_check_cookie @ 0x1C0006330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00067E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006B40 (memset.c)
 *     ProcLibCapChange @ 0x1C0012990 (ProcLibCapChange.c)
 *     GetPerfDomain @ 0x1C0016434 (GetPerfDomain.c)
 *     CpcConnectNativeInterrupt @ 0x1C0016708 (CpcConnectNativeInterrupt.c)
 *     CalculateRegisterPreserveMask @ 0x1C001A790 (CalculateRegisterPreserveMask.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001E168 (GetRegistryDwordValueNoDefault.c)
 */

__int64 __fastcall InitCpcStatesInternal(
        _QWORD *a1,
        __int64 (__fastcall *a2)(_QWORD *, _QWORD),
        __int64 a3,
        __int64 a4)
{
  int v4; // r13d
  _QWORD *v6; // rbx
  int RegistryDwordValueNoDefault; // eax
  int v8; // ecx
  int v9; // edi
  SIZE_T v10; // rdi
  char *PoolWithTag; // rax
  char *v12; // rsi
  _BYTE *v13; // r15
  unsigned int v14; // r11d
  unsigned int v15; // ebx
  char *v16; // r14
  char v17; // r15
  _BYTE *v18; // rdi
  __int64 v19; // r8
  int v20; // eax
  unsigned int v21; // r8d
  __int64 v22; // rdx
  int v23; // r8d
  __int64 v24; // rdx
  __int64 v25; // r9
  char v26; // r10
  char v27; // r11
  __int64 v28; // r9
  char v29; // r10
  __int64 v30; // r11
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // r11
  __int64 v34; // rax
  __int64 v35; // r11
  __int64 v36; // rax
  __int64 v37; // r11
  int v38; // r10d
  unsigned int *v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rax
  char v42; // r10
  char *v43; // rdi
  __int64 v44; // r12
  PVOID v45; // r14
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  char v47; // r10
  __int64 *v48; // r12
  __int64 v49; // rdi
  char *v50; // rdi
  _BYTE *v51; // r14
  PVOID v52; // r15
  struct _GROUP_AFFINITY *v53; // rdx
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // r8
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rcx
  char *v61; // rdi
  int v62; // r15d
  unsigned int v63; // r14d
  unsigned int v64; // r12d
  unsigned int v65; // r13d
  _QWORD *v66; // rax
  _QWORD *v67; // rdx
  char v68; // cl
  char *v69; // r8
  void *v70; // rax
  unsigned int v71; // ecx
  int v72; // eax
  int v73; // ecx
  __int64 v74; // rax
  unsigned __int64 v75; // rcx
  __int64 v76; // rax
  char v77; // r10
  __int64 v78; // rax
  __int64 v79; // r15
  _QWORD *v80; // r13
  char v81; // r10
  char v82; // r11
  __int64 v83; // rsi
  char v84; // bl
  unsigned __int64 v85; // r12
  _BYTE *v86; // rdx
  _DWORD *v87; // r14
  __int64 v88; // r12
  struct _GROUP_AFFINITY *v89; // rdx
  unsigned __int64 GenAddrMaybeHidden; // rax
  unsigned __int64 v91; // r8
  unsigned int v92; // ecx
  int v93; // eax
  unsigned __int8 v94; // cl
  unsigned __int8 v95; // cl
  char *v96; // r10
  char v98; // [rsp+20h] [rbp-99h]
  char v99; // [rsp+21h] [rbp-98h]
  char v100; // [rsp+22h] [rbp-97h]
  char v101; // [rsp+23h] [rbp-96h]
  char v102; // [rsp+24h] [rbp-95h]
  char v103; // [rsp+25h] [rbp-94h]
  char IsSupported; // [rsp+26h] [rbp-93h]
  char v105; // [rsp+27h] [rbp-92h]
  bool v106; // [rsp+28h] [rbp-91h]
  char v107; // [rsp+29h] [rbp-90h]
  char v108; // [rsp+2Ah] [rbp-8Fh]
  bool v109; // [rsp+2Bh] [rbp-8Eh]
  char v110; // [rsp+2Ch] [rbp-8Dh]
  PVOID DeferredContext; // [rsp+30h] [rbp-89h] BYREF
  int v112; // [rsp+38h] [rbp-81h]
  int v113; // [rsp+3Ch] [rbp-7Dh]
  int v114; // [rsp+40h] [rbp-79h] BYREF
  unsigned int v115; // [rsp+44h] [rbp-75h]
  int v116; // [rsp+48h] [rbp-71h]
  _QWORD v117[2]; // [rsp+50h] [rbp-69h] BYREF
  int PerfDomain; // [rsp+60h] [rbp-59h]
  _QWORD *v119; // [rsp+68h] [rbp-51h]
  _BYTE *v120; // [rsp+70h] [rbp-49h]
  __int64 v121[4]; // [rsp+78h] [rbp-41h] BYREF
  _QWORD *v122; // [rsp+98h] [rbp-21h]
  int v123; // [rsp+A0h] [rbp-19h] BYREF
  char *v124; // [rsp+A8h] [rbp-11h]
  __int64 (__fastcall *v125)(_QWORD *, _QWORD); // [rsp+B0h] [rbp-9h]
  struct _GROUP_AFFINITY Affinity; // [rsp+B8h] [rbp-1h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+C8h] [rbp+Fh] BYREF

  v125 = a2;
  v122 = a1;
  v6 = 0LL;
  v98 = 0;
  v119 = 0LL;
  v114 = 0;
  RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                  L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                                  L"~MHz",
                                  &v114,
                                  a4);
  v8 = v114;
  if ( RegistryDwordValueNoDefault < 0 )
    v8 = 0;
  v114 = v8;
  if ( !v8 )
  {
    a1[31] &= ~0x8000000uLL;
    return (unsigned int)-1073741823;
  }
  LOBYTE(v112) = a1[37] != 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00093A8,
    0LL);
  PerfDomain = GetPerfDomain(a1, (__int64)v121, &v123);
  v10 = (unsigned int)(328 * PerfDomain);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x72637250u);
  v124 = PoolWithTag;
  v12 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_6:
    v9 = -1073741670;
    goto LABEL_220;
  }
  memset(PoolWithTag, 0, v10);
  LOBYTE(v116) = 0;
  LOBYTE(v4) = 0;
  v101 = 1;
  v105 = 1;
  v113 = v4;
  v13 = 0LL;
  LOBYTE(v115) = 0;
  v103 = 0;
  v100 = 0;
  v102 = 0;
  v107 = 0;
  IsSupported = 0;
  v108 = 0;
  v110 = 0;
  v99 = 0;
  v109 = 0;
  v106 = 0;
  v120 = 0LL;
  ResetEnumerationContext(v121);
  while ( !(unsigned int)EnumerateNextDevice((__int64)v121, &DeferredContext) )
  {
    if ( !*((_BYTE *)DeferredContext + 66) )
    {
      v13 = (_BYTE *)*((_QWORD *)DeferredContext + 67);
      v120 = v13;
      break;
    }
  }
  ResetEnumerationContext(v121);
  if ( (unsigned int)EnumerateNextDevice((__int64)v121, &DeferredContext) )
    goto LABEL_86;
  LOBYTE(v15) = v115;
  v16 = v12 + 92;
  LOBYTE(v12) = v113;
  v17 = v14;
  do
  {
    v18 = (_BYTE *)*((_QWORD *)DeferredContext + 67);
    if ( v18[140] == 10 || v18[152] == 10 )
      v100 = v14;
    if ( v18[176] == 10 || v18[80] == 10 || v18[92] == 10 || v18[68] == 10 || v18[104] == 10 )
      v102 = v14;
    LODWORD(v12) = (unsigned __int8)v12;
    if ( v18[56] == 10 )
      LODWORD(v12) = v14;
    v15 = (unsigned __int8)v15;
    if ( v18[8] == 10 )
      v15 = v14;
    if ( v18[212] == 10 || v18[200] == 10 || v18[188] == 10 || v18[116] == 10 )
      v103 = v14;
    *(_QWORD *)(v16 + 12) = v18;
    IsSupported = CpcRegisterIsSupported((__int64)(v18 + 176));
    *v16 = IsSupported;
    v16[1] = CpcRegisterIsSupported((__int64)(v18 + 68));
    v16[2] = CpcRegisterIsSupported((__int64)(v18 + 80));
    v16[3] = CpcRegisterIsSupported((__int64)(v18 + 92));
    v16[4] = CpcRegisterIsSupported((__int64)(v18 + 104));
    v16[5] = CpcRegisterIsSupported((__int64)(v18 + 56));
    v110 = CpcRegisterIsSupported((__int64)(v18 + 116));
    v107 = CpcRegisterIsSupported(v19);
    v108 = CpcRegisterIsSupported((__int64)(v18 + 200));
    LOBYTE(v20) = v112;
    if ( v18[140] == 127 )
      LOBYTE(v20) = 0;
    v20 = (unsigned __int8)v20;
    if ( v18[152] == 127 )
      v20 = 0;
    v112 = v20;
    if ( !qword_1C0009540 || !(unsigned __int8)qword_1C0009540(v18) )
      v105 = 0;
    v21 = 0;
    memset(v117, 0, 12);
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
        goto LABEL_52;
      v99 = 1;
      if ( (unsigned __int8)CpcRegisterIsSupported((__int64)v117) )
        break;
      v28 = *(_QWORD *)(v24 + 4);
      v29 = *(_BYTE *)(v24 + 3);
      LOBYTE(v117[0]) = *(_BYTE *)v24;
      *(_QWORD *)((char *)v117 + 4) = v28;
      BYTE3(v117[0]) = v29;
LABEL_52:
      v21 = v23 + 1;
      if ( v21 >= 4 )
        goto LABEL_55;
    }
    if ( v27 == *(_BYTE *)v24 && v25 == *(_QWORD *)(v24 + 4) && v26 == *(_BYTE *)(v24 + 3) )
      goto LABEL_52;
    v17 = 0;
LABEL_55:
    if ( v99 && v17 )
    {
      v30 = -1LL;
      v31 = v117[1];
      *(_QWORD *)(v16 + 20) = v117[0];
      *((_DWORD *)v16 + 7) = v31;
      if ( v16[1] )
        v30 = CalculateRegisterPreserveMask(v18 + 68);
      if ( v16[2] )
      {
        v32 = CalculateRegisterPreserveMask(v18 + 80);
        v30 = v32 & v33;
      }
      if ( v16[3] )
      {
        v34 = CalculateRegisterPreserveMask(v18 + 92);
        v30 = v34 & v35;
      }
      if ( v16[4] )
      {
        v36 = CalculateRegisterPreserveMask(v18 + 104);
        v30 = v36 & v37;
      }
      *(_QWORD *)(v16 + 36) = v30;
    }
    LOBYTE(v38) = v116;
    v39 = (unsigned int *)&Cpc2RegisterTable;
    v40 = 19LL;
    do
    {
      v41 = *v39;
      v39 += 6;
      v38 = (unsigned __int8)v38;
      if ( v18[v41] == 10 )
        v38 = 1;
      --v40;
    }
    while ( v40 );
    v116 = v38;
    v16 += 328;
  }
  while ( !(unsigned int)EnumerateNextDevice((__int64)v121, &DeferredContext) );
  v101 = v17;
  v13 = v120;
  v115 = v15;
  v6 = v119;
  v113 = (int)v12;
  v12 = v124;
  if ( v42 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD))(qword_1C00098A0 + 88))(*(_QWORD *)(qword_1C00098A0 + 56));
    if ( v9 < 0 )
      goto LABEL_220;
    ResetEnumerationContext(v121);
    if ( !(unsigned int)EnumerateNextDevice((__int64)v121, &DeferredContext) )
    {
      v43 = v12 + 104;
      do
      {
        if ( *(v43 - 12) )
        {
          v44 = *(_QWORD *)v43;
          v45 = DeferredContext;
          if ( *(_BYTE *)(*(_QWORD *)v43 + 176LL) == 127 && !*((_BYTE *)DeferredContext + 66) )
          {
            KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
            p_PreviousAffinity = &PreviousAffinity;
            if ( (_BYTE)v6 )
              p_PreviousAffinity = 0LL;
            KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
            LOBYTE(v6) = 1;
          }
          WriteGenAddrMaybeHidden((__int64)v45, (_BYTE *)(v44 + 176), 1uLL);
        }
        v43 += 328;
      }
      while ( !(unsigned int)EnumerateNextDevice((__int64)v121, &DeferredContext) );
      v98 = (char)v6;
      v6 = v119;
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(qword_1C00098A0 + 104))(*(_QWORD *)(qword_1C00098A0 + 56), 0LL);
    if ( v9 < 0 )
      goto LABEL_220;
  }
  LOBYTE(v4) = v113;
LABEL_86:
  ResetEnumerationContext(v121);
  if ( !(unsigned int)EnumerateNextDevice((__int64)v121, &DeferredContext) )
  {
    v48 = (__int64 *)(v12 + 104);
    v6 = 0LL;
    do
    {
      v49 = *v48;
      if ( *((_BYTE *)DeferredContext + 66)
        && *(_BYTE *)(v49 + 20) == v47
        && !ReadGenAddrHidden(*((_DWORD *)DeferredContext + 17), v49 + 20) )
      {
        if ( !CpcHiddenProcessorMitigationReported )
        {
          ProcLibTraceHiddenProcessorDegradedOperation();
          CpcHiddenProcessorMitigationReported = 1;
        }
        *(_QWORD *)(v49 + 20) = *(_QWORD *)(v13 + 20);
        *(_DWORD *)(v49 + 28) = *((_DWORD *)v13 + 7);
        if ( *(_BYTE *)(v49 + 8) == 10 )
        {
          *(_QWORD *)(v49 + 8) = *((_QWORD *)v13 + 1);
          *(_DWORD *)(v49 + 16) = *((_DWORD *)v13 + 4);
        }
        if ( *(_BYTE *)(v49 + 32) == 10 )
        {
          *(_QWORD *)(v49 + 32) = *((_QWORD *)v13 + 4);
          *(_DWORD *)(v49 + 40) = *((_DWORD *)v13 + 10);
        }
        if ( *(_BYTE *)(v49 + 44) == 10 )
        {
          *(_QWORD *)(v49 + 44) = *(_QWORD *)(v13 + 44);
          *(_DWORD *)(v49 + 52) = *((_DWORD *)v13 + 13);
        }
        if ( *(_BYTE *)(v49 + 224) == 10 )
        {
          *(_QWORD *)(v49 + 224) = *((_QWORD *)v13 + 28);
          *(_DWORD *)(v49 + 232) = *((_DWORD *)v13 + 58);
        }
        if ( *(_BYTE *)(v49 + 56) == 10 )
        {
          *(_QWORD *)(v49 + 56) = *((_QWORD *)v13 + 7);
          *(_DWORD *)(v49 + 64) = *((_DWORD *)v13 + 16);
        }
      }
      v48 += 41;
    }
    while ( !(unsigned int)EnumerateNextDevice((__int64)v121, &DeferredContext) );
    LOBYTE(v4) = v113;
  }
  ResetEnumerationContext(v121);
  if ( (unsigned int)EnumerateNextDevice((__int64)v121, &DeferredContext) )
  {
LABEL_130:
    v59 = *((_QWORD *)v12 + 2);
    if ( *((_QWORD *)v12 + 1) < v59 )
      goto LABEL_142;
    v60 = *((_QWORD *)v12 + 3);
    if ( v59 < v60 )
      goto LABEL_142;
    v61 = v12 + 32;
    if ( v60 < *((_QWORD *)v12 + 4) )
      goto LABEL_142;
    v62 = 1;
    if ( (_BYTE)v112 )
      v62 = 2;
    v63 = (32 * PerfDomain + 423) & 0xFFFFFFF8;
    v64 = (v63 + 7 + 24 * v62) & 0xFFFFFFF8;
    v115 = v64 + 8 * PerfDomain * v62;
    v65 = v115;
    v66 = ExAllocatePoolWithTag(NonPagedPoolNx, v115, 0x72637250u);
    v119 = v66;
    v6 = v66;
    if ( v66 )
    {
      memset(v66, 0, v65);
      v67 = v122;
      if ( *((_BYTE *)v122 + 1081) )
        v6[46] = PepParkPreference;
      if ( (v67[31] & 0x10000000000LL) != 0 )
      {
        v6[47] = PepParkMask;
        v6[48] = PepPerfCheckComplete;
        v6[8] = v67[133];
      }
      v68 = v99;
      *((_DWORD *)v6 + 3) = PerfDomain;
      v6[50] = v6 + 52;
      v69 = (char *)v6 + v63;
      v6[51] = (char *)v6 + v64;
      *((_WORD *)v6 + 2) = v123;
      *(_DWORD *)v6 = 44;
      *((_DWORD *)v6 + 8) = v62;
      v6[49] = v69;
      if ( v99 )
      {
        if ( v101 )
        {
          v6[41] = PerfControlCpcSingleRegister;
          v70 = PerfControlCpcSingleRegisterHidden;
        }
        else
        {
          v6[41] = PerfControlCpc;
          v70 = (void *)qword_1C0009518;
          if ( !qword_1C0009518 || !CpcHiddenProcessorMitigationReported )
            v70 = PerfControlCpcHidden;
        }
      }
      else
      {
        v70 = AcpiCStateIdleCancel;
        v6[41] = AcpiCStateIdleCancel;
      }
      v6[42] = v70;
      v6[40] = PerfSelectionCpc;
      if ( (_BYTE)v116 )
      {
        if ( v100 )
          v6[43] = CpcReadFeedback;
        if ( v102 )
        {
          v6[44] = CpcAcquirePerformance;
          v6[45] = CpcCommitPerformance;
        }
        if ( v103 )
        {
          v6[37] = AcquirePccSubspace;
          v6[38] = ExecutePccWrite;
        }
        v71 = *(_DWORD *)(qword_1C00098A0 + 68);
        if ( v71 )
        {
          v67 = v122;
          *((_DWORD *)v6 + 9) = 0x989680 / (v71 >> 1);
        }
        v68 = v99;
      }
      if ( IsSupported || (v67[31] & 0x4000000000LL) != 0 )
        v6[39] = CpcReinitializeHandler;
      *((_BYTE *)v6 + 8) = v105;
      *((_BYTE *)v6 + 40) = v106;
      *((_BYTE *)v6 + 7) = v68;
      *((_BYTE *)v6 + 6) = 0;
      *((_DWORD *)v6 + 4) = v114;
      *((_DWORD *)v6 + 5) = *((_DWORD *)v12 + 17);
      v72 = *((_DWORD *)v12 + 19);
      *((_DWORD *)v6 + 6) = v72;
      v73 = *((_DWORD *)v12 + 20);
      if ( !v72 )
        v72 = 1;
      *((_DWORD *)v6 + 6) = v72;
      if ( !v73 )
        v73 = 1;
      *((_DWORD *)v6 + 7) = v73;
      v6[6] = *(_QWORD *)v61;
      v6[7] = *((_QWORD *)v12 + 2);
      v74 = v67[38];
      if ( v74 )
        v6[30] = v74;
      v6[32] = v67[39];
      if ( v107 )
        v6[34] = CpcSetEnergyPerfPreference;
      if ( v108 )
        v6[35] = CpcSetAutonomousActivityWindow;
      if ( v109 )
        v6[36] = CpcSetAutonomousMode;
      if ( v110 )
        v6[31] = CpcSetTimeWindow;
      v75 = *((_QWORD *)v12 + 2);
      v76 = *((_QWORD *)v12 + 5);
      if ( v75 == v76 )
        *((_DWORD *)v69 + 2) = 100;
      else
        *((_DWORD *)v69 + 2) = 100 * v76 / v75;
      v77 = v112;
      *(_QWORD *)v69 = PerfReadWrappingCounter;
      *((_DWORD *)v69 + 3) = 1;
      v69[17] = 1;
      v69[16] = v100 == 0;
      if ( v77 )
      {
        v78 = v6[49];
        *(_QWORD *)(v78 + 32) = 100LL;
        *(_QWORD *)(v78 + 24) = PerfReadWrappingCounter;
        *(_WORD *)(v78 + 40) = 257;
      }
      v79 = v6[50];
      v80 = (_QWORD *)v6[51];
      ResetEnumerationContext(v121);
      if ( !(unsigned int)EnumerateNextDevice((__int64)v121, &DeferredContext) )
      {
        v83 = (__int64)v122;
        v84 = v98;
        do
        {
          LODWORD(v85) = 100;
          v86 = (_BYTE *)*((_QWORD *)v61 + 9);
          v87 = DeferredContext;
          v120 = v86;
          if ( v61[65] != v82 )
          {
            v88 = (__int64)(v86 + 56);
            if ( v86[56] == 127 && *((_BYTE *)DeferredContext + 66) == v82 )
            {
              KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
              v89 = &PreviousAffinity;
              if ( v84 )
                v89 = 0LL;
              KeSetSystemGroupAffinityThread(&Affinity, v89);
              v84 = 1;
            }
            GenAddrMaybeHidden = ReadGenAddrMaybeHidden((__int64)v87, v88);
            v91 = *((_QWORD *)v61 - 2);
            v92 = *((_DWORD *)v61 + 12);
            if ( GenAddrMaybeHidden > v91 )
              GenAddrMaybeHidden = *((_QWORD *)v61 - 2);
            if ( GenAddrMaybeHidden < *(_QWORD *)v61 )
              GenAddrMaybeHidden = *(_QWORD *)v61;
            *((_QWORD *)v61 + 3) = GenAddrMaybeHidden;
            v85 = 100 * GenAddrMaybeHidden / v91;
            if ( (unsigned int)v85 <= v92 )
              LODWORD(v85) = v92;
            *((_DWORD *)v61 + 13) = v85;
            if ( (_DWORD)v85 != v87[171] )
              ProcLibCapChange(v83, v87[104], v87[116], v85);
            v81 = v112;
            v82 = 0;
            v86 = v120;
          }
          *((_QWORD *)v61 - 4) = v87;
          *(_QWORD *)(v79 + 8) = v61 - 32;
          if ( *((_BYTE *)v87 + 66) == v82 )
          {
            v93 = v87[14];
          }
          else
          {
            v93 = v87[17];
            *(_BYTE *)(v79 + 28) = 1;
          }
          *(_DWORD *)v79 = v93;
          *(_DWORD *)(v79 + 20) = v87[170];
          *(_DWORD *)(v79 + 16) = v85;
          *(_DWORD *)(v79 + 24) = (unsigned int)v85 < 0x64 ? 2 : 0;
          *v80 = v61 + 104;
          *((_QWORD *)v61 + 19) = GetCpcDifferentialFeedback;
          *((_QWORD *)v61 + 20) = v86;
          v94 = v86[153];
          if ( v94 < 0x40u )
            *((_QWORD *)v61 + 17) = (1LL << v94) - 1;
          v95 = v86[141];
          if ( v95 < 0x40u )
            *((_QWORD *)v61 + 18) = (1LL << v95) - 1;
          ++v80;
          if ( v81 )
          {
            *v80++ = v61 + 168;
            *((_QWORD *)v61 + 27) = *((_QWORD *)v87 + 37);
          }
          v79 += 32LL;
          v61 += 328;
        }
        while ( !(unsigned int)EnumerateNextDevice((__int64)v121, &DeferredContext) );
        v12 = v124;
        v98 = v84;
        v6 = v119;
      }
      if ( v98 != v82 )
        KeRevertToUserGroupAffinityThread(&PreviousAffinity);
      v9 = v125(v6, v115);
      if ( v9 >= 0 )
      {
        ResetEnumerationContext(v121);
        while ( !(unsigned int)EnumerateNextDevice((__int64)v121, &DeferredContext) )
        {
          *((_QWORD *)DeferredContext + 28) = v12;
          v12 += 328;
        }
        if ( (v122[31] & 0x4000000000LL) != 0 )
        {
          ResetEnumerationContext(v121);
          while ( !(unsigned int)EnumerateNextDevice((__int64)v121, &DeferredContext) )
          {
            if ( *((_BYTE *)DeferredContext + 66) == (_BYTE)v96 )
              CpcConnectNativeInterrupt(DeferredContext);
          }
        }
        v12 = v96;
        v9 = (int)v96;
      }
      goto LABEL_220;
    }
    goto LABEL_6;
  }
  v50 = v12 + 98;
  while ( 1 )
  {
    v51 = *(_BYTE **)(v50 + 6);
    v52 = DeferredContext;
    if ( (v51[8] == 127 || v51[20] == 127 || v51[32] == 127 || v51[44] == 127 || v51[224] == 127 || v51[188] == 127)
      && !*((_BYTE *)DeferredContext + 66) )
    {
      KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
      v53 = &PreviousAffinity;
      if ( v98 )
        v53 = 0LL;
      KeSetSystemGroupAffinityThread(&Affinity, v53);
      v98 = 1;
    }
    *v50 = v100;
    v50[2] = v115;
    v50[3] = v102;
    v50[1] = v4;
    *(_DWORD *)(v50 - 34) = v114;
    *(_QWORD *)(v50 - 90) = ReadGenAddrMaybeHidden((__int64)v52, (__int64)(v51 + 8));
    v54 = ReadGenAddrMaybeHidden((__int64)v52, (__int64)(v51 + 20));
    *(_QWORD *)(v50 - 82) = v54;
    if ( !v54 )
      break;
    *(_QWORD *)(v50 - 74) = ReadGenAddrMaybeHidden((__int64)v52, (__int64)(v51 + 32));
    *(_QWORD *)(v50 - 66) = ReadGenAddrMaybeHidden((__int64)v52, (__int64)(v51 + 44));
    v55 = ReadGenAddrMaybeHidden((__int64)v52, (__int64)(v51 + 224));
    v56 = *(_QWORD *)(v50 - 82);
    *(_QWORD *)(v50 - 58) = v55;
    LODWORD(v55) = 100LL * *(_QWORD *)(v50 - 90) / v56;
    *(_DWORD *)(v50 - 30) = v55;
    *(_DWORD *)(v50 - 26) = v55;
    v57 = 100LL * *(_QWORD *)(v50 - 74) / v56;
    v58 = 100LL * *(_QWORD *)(v50 - 66) / v56;
    if ( !(_DWORD)v58 )
      LODWORD(v58) = 1;
    *(_DWORD *)(v50 - 18) = v58;
    if ( !(_DWORD)v57 )
      LODWORD(v57) = 1;
    *(_DWORD *)(v50 - 22) = v57;
    if ( (unsigned __int8)CpcRegisterIsSupported((__int64)(v51 + 188)) )
    {
      v106 = ReadGenAddrMaybeHidden((__int64)v52, (__int64)(v51 + 188)) != 0;
      v109 = v51[188] != 126;
    }
    if ( v50 - 98 != v12
      && (*(_QWORD *)(v50 - 90) != *((_QWORD *)v12 + 1)
       || *(_QWORD *)(v50 - 82) != *((_QWORD *)v12 + 2)
       || *(_QWORD *)(v50 - 74) != *((_QWORD *)v12 + 3)
       || *(_QWORD *)(v50 - 66) != *((_QWORD *)v12 + 4)) )
    {
      break;
    }
    v50 += 328;
    if ( (unsigned int)EnumerateNextDevice((__int64)v121, &DeferredContext) )
      goto LABEL_130;
  }
LABEL_142:
  v9 = -1073741811;
LABEL_220:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00093A8);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x72637250u);
  if ( v12 )
    ExFreePoolWithTag(v12, 0x72637250u);
  return (unsigned int)v9;
}
