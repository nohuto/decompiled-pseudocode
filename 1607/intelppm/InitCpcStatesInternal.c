/*
 * XREFs of InitCpcStatesInternal @ 0x1C001F5A4
 * Callers:
 *     RegisterHvCpcCounters @ 0x1C001D630 (RegisterHvCpcCounters.c)
 *     RegisterKernelCpc @ 0x1C0020B90 (RegisterKernelCpc.c)
 * Callees:
 *     EnumerateNextDevice @ 0x1C0001724 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0001760 (ResetEnumerationContext.c)
 *     __security_check_cookie @ 0x1C0002510 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0002A70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002DC0 (memset.c)
 *     ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C000432C (ProcLibTraceHiddenProcessorDegradedOperation.c)
 *     ReadGenAddrHidden @ 0x1C0004568 (ReadGenAddrHidden.c)
 *     ReadGenAddrMaybeHidden @ 0x1C00045CC (ReadGenAddrMaybeHidden.c)
 *     WriteGenAddrMaybeHidden @ 0x1C0004714 (WriteGenAddrMaybeHidden.c)
 *     CpcRegisterIsSupported @ 0x1C0004900 (CpcRegisterIsSupported.c)
 *     GetRegistryDwordValue @ 0x1C00131E8 (GetRegistryDwordValue.c)
 *     GetPerfDomain @ 0x1C0013CD0 (GetPerfDomain.c)
 *     ProcLibCapChange @ 0x1C00154EC (ProcLibCapChange.c)
 *     CpcConnectNativeInterrupt @ 0x1C001C168 (CpcConnectNativeInterrupt.c)
 *     CalculateRegisterPreserveMask @ 0x1C001F414 (CalculateRegisterPreserveMask.c)
 *     InitCommonPerfStateContext @ 0x1C001F570 (InitCommonPerfStateContext.c)
 */

__int64 __fastcall InitCpcStatesInternal(_QWORD *a1, __int64 (__fastcall *a2)(_QWORD *, _QWORD))
{
  int v2; // r13d
  __int64 v3; // r15
  _QWORD *v5; // rbx
  int v6; // edi
  SIZE_T v7; // rdi
  char *PoolWithTag; // rax
  char *v9; // rsi
  char v10; // r10
  int v11; // eax
  char v12; // r11
  int v13; // ebx
  char *v14; // r14
  char v15; // r15
  _BYTE *v16; // rdi
  __int64 v17; // r8
  int v18; // eax
  unsigned int v19; // r8d
  __int64 v20; // rdx
  int v21; // r8d
  __int64 v22; // rdx
  __int64 v23; // r9
  char v24; // r10
  char v25; // r11
  __int64 v26; // r9
  char v27; // r10
  __int64 v28; // r11
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // r11
  __int64 v32; // rax
  __int64 v33; // r11
  __int64 v34; // rax
  __int64 v35; // r11
  int v36; // r10d
  unsigned int *v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rax
  char v40; // r10
  char *v41; // rdi
  __int64 v42; // r12
  PVOID v43; // r14
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  char v45; // r11
  __int64 *v46; // r12
  __int64 v47; // rdi
  char *v48; // rdi
  char *v49; // r14
  PVOID v50; // r15
  struct _GROUP_AFFINITY *v51; // rdx
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // r8
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rcx
  char *v59; // rdi
  int v60; // r15d
  unsigned int v61; // r14d
  unsigned int v62; // r12d
  unsigned int v63; // r13d
  _QWORD *v64; // rax
  _QWORD *v65; // r13
  char v66; // cl
  char *v67; // r8
  void *v68; // rax
  unsigned int v69; // ecx
  int v70; // eax
  int v71; // ecx
  __int64 v72; // rax
  unsigned __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rax
  _QWORD *v76; // r12
  __int64 v77; // r10
  char v78; // bl
  __int64 v79; // rsi
  char *v80; // r13
  unsigned __int64 v81; // r14
  _DWORD *v82; // r15
  struct _GROUP_AFFINITY *v83; // rdx
  unsigned __int64 GenAddrMaybeHidden; // rax
  unsigned __int64 v85; // r8
  unsigned int v86; // eax
  __int64 v87; // r10
  char v88; // r11
  char v89; // cl
  char v90; // cl
  char v92; // [rsp+30h] [rbp-99h]
  char v93; // [rsp+31h] [rbp-98h]
  char v94; // [rsp+32h] [rbp-97h]
  char v95; // [rsp+33h] [rbp-96h]
  char v96; // [rsp+34h] [rbp-95h]
  char v97; // [rsp+35h] [rbp-94h]
  char IsSupported; // [rsp+36h] [rbp-93h]
  char v99; // [rsp+37h] [rbp-92h]
  bool v100; // [rsp+38h] [rbp-91h]
  char v101; // [rsp+39h] [rbp-90h]
  char v102; // [rsp+3Ah] [rbp-8Fh]
  bool v103; // [rsp+3Bh] [rbp-8Eh]
  char v104; // [rsp+3Ch] [rbp-8Dh]
  PVOID DeferredContext; // [rsp+40h] [rbp-89h] BYREF
  int v106; // [rsp+48h] [rbp-81h]
  unsigned int v107; // [rsp+4Ch] [rbp-7Dh]
  int v108; // [rsp+50h] [rbp-79h]
  int v109; // [rsp+54h] [rbp-75h] BYREF
  int v110; // [rsp+58h] [rbp-71h]
  _QWORD v111[2]; // [rsp+60h] [rbp-69h] BYREF
  int PerfDomain; // [rsp+70h] [rbp-59h]
  __int64 v113; // [rsp+78h] [rbp-51h] BYREF
  _QWORD *v114; // [rsp+80h] [rbp-49h]
  __int64 v115[4]; // [rsp+88h] [rbp-41h] BYREF
  _QWORD *v116; // [rsp+A8h] [rbp-21h]
  __int64 v117; // [rsp+B0h] [rbp-19h]
  char *v118; // [rsp+B8h] [rbp-11h]
  __int64 (__fastcall *v119)(_QWORD *, _QWORD); // [rsp+C0h] [rbp-9h]
  struct _GROUP_AFFINITY Affinity; // [rsp+C8h] [rbp-1h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+D8h] [rbp+Fh] BYREF

  v3 = 0LL;
  v119 = a2;
  v116 = a1;
  v5 = 0LL;
  v92 = 0;
  v114 = 0LL;
  v109 = 0;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
    (__int64)L"~MHz",
    &v109);
  if ( !v109 )
  {
    a1[31] &= ~0x8000000uLL;
    return (unsigned int)-1073741823;
  }
  LOBYTE(v106) = a1[37] != 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C000ECF8,
    0LL);
  PerfDomain = GetPerfDomain(a1, (__int64)v115, &v113);
  v7 = (unsigned int)(328 * PerfDomain);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x72637250u);
  v118 = PoolWithTag;
  v9 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_4:
    v6 = -1073741670;
    goto LABEL_216;
  }
  memset(PoolWithTag, 0, v7);
  LOBYTE(v110) = 0;
  LOBYTE(v2) = 0;
  v95 = 1;
  v108 = v2;
  v99 = 1;
  LOBYTE(v107) = 0;
  v97 = 0;
  v94 = 0;
  v96 = 0;
  v101 = 0;
  IsSupported = 0;
  v102 = 0;
  v104 = 0;
  v93 = 0;
  v103 = 0;
  v100 = 0;
  v117 = 0LL;
  ResetEnumerationContext(v115);
  while ( !(unsigned int)EnumerateNextDevice((__int64)v115, &DeferredContext) )
  {
    if ( *((_BYTE *)DeferredContext + 66) == v10 )
    {
      v3 = *((_QWORD *)DeferredContext + 67);
      v117 = v3;
      break;
    }
  }
  ResetEnumerationContext(v115);
  v11 = EnumerateNextDevice((__int64)v115, &DeferredContext);
  v12 = 10;
  if ( v11 )
    goto LABEL_84;
  LOBYTE(v13) = v107;
  v14 = v9 + 92;
  LOBYTE(v9) = v108;
  v15 = 1;
  do
  {
    v16 = (_BYTE *)*((_QWORD *)DeferredContext + 67);
    if ( v16[140] == v12 || v16[152] == v12 )
      v94 = 1;
    if ( v16[176] == v12 || v16[80] == v12 || v16[92] == v12 || v16[68] == v12 || v16[104] == v12 )
      v96 = 1;
    LODWORD(v9) = (unsigned __int8)v9;
    if ( v16[56] == v12 )
      LODWORD(v9) = 1;
    v13 = (unsigned __int8)v13;
    if ( v16[8] == v12 )
      v13 = 1;
    if ( v16[212] == v12 || v16[200] == v12 || v16[188] == v12 || v16[116] == v12 )
      v97 = 1;
    *(_QWORD *)(v14 + 12) = v16;
    IsSupported = CpcRegisterIsSupported((__int64)(v16 + 176));
    *v14 = IsSupported;
    v14[1] = CpcRegisterIsSupported((__int64)(v16 + 68));
    v14[2] = CpcRegisterIsSupported((__int64)(v16 + 80));
    v14[3] = CpcRegisterIsSupported((__int64)(v16 + 92));
    v14[4] = CpcRegisterIsSupported((__int64)(v16 + 104));
    v14[5] = CpcRegisterIsSupported((__int64)(v16 + 56));
    v104 = CpcRegisterIsSupported((__int64)(v16 + 116));
    v101 = CpcRegisterIsSupported(v17);
    v102 = CpcRegisterIsSupported((__int64)(v16 + 200));
    LOBYTE(v18) = v106;
    if ( v16[140] == 127 )
      LOBYTE(v18) = 0;
    v18 = (unsigned __int8)v18;
    if ( v16[152] == 127 )
      v18 = 0;
    v106 = v18;
    if ( !qword_1C000EE90 || !(unsigned __int8)qword_1C000EE90(v16) )
      v99 = 0;
    v19 = 0;
    memset(v111, 0, 12);
    while ( 1 )
    {
      if ( v19 )
      {
        if ( v19 == 1 )
        {
          v20 = (__int64)(v16 + 80);
        }
        else if ( v19 == 2 )
        {
          v20 = (__int64)(v16 + 92);
        }
        else
        {
          v20 = (__int64)(v16 + 104);
        }
      }
      else
      {
        v20 = (__int64)(v16 + 68);
      }
      if ( !(unsigned __int8)CpcRegisterIsSupported(v20) )
        goto LABEL_50;
      v93 = 1;
      if ( (unsigned __int8)CpcRegisterIsSupported((__int64)v111) )
        break;
      v26 = *(_QWORD *)(v22 + 4);
      v27 = *(_BYTE *)(v22 + 3);
      LOBYTE(v111[0]) = *(_BYTE *)v22;
      *(_QWORD *)((char *)v111 + 4) = v26;
      BYTE3(v111[0]) = v27;
LABEL_50:
      v19 = v21 + 1;
      if ( v19 >= 4 )
        goto LABEL_53;
    }
    if ( v25 == *(_BYTE *)v22 && v23 == *(_QWORD *)(v22 + 4) && v24 == *(_BYTE *)(v22 + 3) )
      goto LABEL_50;
    v15 = 0;
LABEL_53:
    if ( v93 && v15 )
    {
      v28 = -1LL;
      v29 = v111[1];
      *(_QWORD *)(v14 + 20) = v111[0];
      *((_DWORD *)v14 + 7) = v29;
      if ( v14[1] )
        v28 = CalculateRegisterPreserveMask(v16 + 68);
      if ( v14[2] )
      {
        v30 = CalculateRegisterPreserveMask(v16 + 80);
        v28 = v30 & v31;
      }
      if ( v14[3] )
      {
        v32 = CalculateRegisterPreserveMask(v16 + 92);
        v28 = v32 & v33;
      }
      if ( v14[4] )
      {
        v34 = CalculateRegisterPreserveMask(v16 + 104);
        v28 = v34 & v35;
      }
      *(_QWORD *)(v14 + 36) = v28;
    }
    LOBYTE(v36) = v110;
    v37 = (unsigned int *)&Cpc2RegisterTable;
    v38 = 19LL;
    do
    {
      v39 = *v37;
      v37 += 6;
      v36 = (unsigned __int8)v36;
      if ( v16[v39] == 10 )
        v36 = 1;
      --v38;
    }
    while ( v38 );
    v110 = v36;
    v14 += 328;
  }
  while ( !(unsigned int)EnumerateNextDevice((__int64)v115, &DeferredContext) );
  v95 = v15;
  v3 = v117;
  v107 = v13;
  v5 = v114;
  v108 = (int)v9;
  v9 = v118;
  if ( v40 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(qword_1C000F1F0 + 88))(*(_QWORD *)(qword_1C000F1F0 + 56));
    if ( v6 < 0 )
      goto LABEL_216;
    ResetEnumerationContext(v115);
    if ( !(unsigned int)EnumerateNextDevice((__int64)v115, &DeferredContext) )
    {
      v41 = v9 + 104;
      do
      {
        if ( *(v41 - 12) )
        {
          v42 = *(_QWORD *)v41;
          v43 = DeferredContext;
          if ( *(_BYTE *)(*(_QWORD *)v41 + 176LL) == 127 && !*((_BYTE *)DeferredContext + 66) )
          {
            KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
            p_PreviousAffinity = &PreviousAffinity;
            if ( (_BYTE)v5 )
              p_PreviousAffinity = 0LL;
            KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
            LOBYTE(v5) = 1;
          }
          WriteGenAddrMaybeHidden((__int64)v43, (_BYTE *)(v42 + 176), 1LL);
        }
        v41 += 328;
      }
      while ( !(unsigned int)EnumerateNextDevice((__int64)v115, &DeferredContext) );
      v92 = (char)v5;
      v5 = v114;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(qword_1C000F1F0 + 104))(*(_QWORD *)(qword_1C000F1F0 + 56), 0LL);
    if ( v6 < 0 )
      goto LABEL_216;
  }
  LOBYTE(v2) = v108;
LABEL_84:
  ResetEnumerationContext(v115);
  if ( !(unsigned int)EnumerateNextDevice((__int64)v115, &DeferredContext) )
  {
    v46 = (__int64 *)(v9 + 104);
    do
    {
      v47 = *v46;
      if ( *((_BYTE *)DeferredContext + 66)
        && *(_BYTE *)(v47 + 20) == v45
        && !ReadGenAddrHidden(*((unsigned int *)DeferredContext + 17), (char *)(v47 + 20)) )
      {
        if ( !CpcHiddenProcessorMitigationReported )
        {
          ProcLibTraceHiddenProcessorDegradedOperation();
          CpcHiddenProcessorMitigationReported = 1;
        }
        *(_QWORD *)(v47 + 20) = *(_QWORD *)(v3 + 20);
        *(_DWORD *)(v47 + 28) = *(_DWORD *)(v3 + 28);
        if ( *(_BYTE *)(v47 + 8) == 10 )
        {
          *(_QWORD *)(v47 + 8) = *(_QWORD *)(v3 + 8);
          *(_DWORD *)(v47 + 16) = *(_DWORD *)(v3 + 16);
        }
        if ( *(_BYTE *)(v47 + 32) == 10 )
        {
          *(_QWORD *)(v47 + 32) = *(_QWORD *)(v3 + 32);
          *(_DWORD *)(v47 + 40) = *(_DWORD *)(v3 + 40);
        }
        if ( *(_BYTE *)(v47 + 44) == 10 )
        {
          *(_QWORD *)(v47 + 44) = *(_QWORD *)(v3 + 44);
          *(_DWORD *)(v47 + 52) = *(_DWORD *)(v3 + 52);
        }
        if ( *(_BYTE *)(v47 + 224) == 10 )
        {
          *(_QWORD *)(v47 + 224) = *(_QWORD *)(v3 + 224);
          *(_DWORD *)(v47 + 232) = *(_DWORD *)(v3 + 232);
        }
        if ( *(_BYTE *)(v47 + 56) == 10 )
        {
          *(_QWORD *)(v47 + 56) = *(_QWORD *)(v3 + 56);
          *(_DWORD *)(v47 + 64) = *(_DWORD *)(v3 + 64);
        }
      }
      v46 += 41;
    }
    while ( !(unsigned int)EnumerateNextDevice((__int64)v115, &DeferredContext) );
    v5 = 0LL;
  }
  ResetEnumerationContext(v115);
  if ( (unsigned int)EnumerateNextDevice((__int64)v115, &DeferredContext) )
  {
LABEL_128:
    v57 = *((_QWORD *)v9 + 2);
    if ( *((_QWORD *)v9 + 1) < v57 )
      goto LABEL_140;
    v58 = *((_QWORD *)v9 + 3);
    if ( v57 < v58 )
      goto LABEL_140;
    v59 = v9 + 32;
    if ( v58 < *((_QWORD *)v9 + 4) )
      goto LABEL_140;
    v60 = 1;
    if ( (_BYTE)v106 )
      v60 = 2;
    v61 = (32 * PerfDomain + 423) & 0xFFFFFFF8;
    v62 = (v61 + 24 * v60 + 7) & 0xFFFFFFF8;
    v107 = v62 + 8 * PerfDomain * v60;
    v63 = v107;
    v64 = ExAllocatePoolWithTag(NonPagedPoolNx, v107, 0x72637250u);
    v114 = v64;
    v5 = v64;
    if ( v64 )
    {
      memset(v64, 0, v63);
      v65 = v116;
      if ( *((_BYTE *)v116 + 1081) )
        v5[46] = PepParkPreference;
      if ( (v65[31] & 0x10000000000LL) != 0 )
      {
        v5[47] = PepParkMask;
        v5[48] = PepPerfCheckComplete;
        v5[8] = v65[133];
      }
      v66 = v93;
      *((_DWORD *)v5 + 3) = PerfDomain;
      v5[50] = v5 + 52;
      v67 = (char *)v5 + v61;
      *((_DWORD *)v5 + 8) = v60;
      v5[51] = (char *)v5 + v62;
      *((_WORD *)v5 + 2) = v113;
      *(_DWORD *)v5 = 44;
      v5[49] = v67;
      if ( v93 )
      {
        if ( v95 )
        {
          v5[41] = PerfControlCpcSingleRegister;
          v68 = PerfControlCpcSingleRegisterHidden;
        }
        else
        {
          v5[41] = PerfControlCpc;
          v68 = (void *)qword_1C000EE68;
          if ( !qword_1C000EE68 || !CpcHiddenProcessorMitigationReported )
            v68 = PerfControlCpcHidden;
        }
      }
      else
      {
        v68 = AcpiCStateIdleCancel;
        v5[41] = AcpiCStateIdleCancel;
      }
      v5[42] = v68;
      v5[40] = PerfSelectionCpc;
      if ( (_BYTE)v110 )
      {
        if ( v94 )
          v5[43] = CpcReadFeedback;
        if ( v96 )
        {
          v5[44] = CpcAcquirePerformance;
          v5[45] = CpcCommitPerformance;
        }
        if ( v97 )
        {
          v5[37] = AcquirePccSubspace;
          v5[38] = ExecutePccWrite;
        }
        v69 = *(_DWORD *)(qword_1C000F1F0 + 68);
        if ( v69 )
          *((_DWORD *)v5 + 9) = 0x989680 / (v69 >> 1);
        v66 = v93;
      }
      if ( IsSupported || (v65[31] & 0x4000000000LL) != 0 )
        v5[39] = CpcReinitializeHandler;
      *((_BYTE *)v5 + 8) = v99;
      *((_BYTE *)v5 + 40) = v100;
      *((_BYTE *)v5 + 7) = v66;
      *((_BYTE *)v5 + 6) = 0;
      *((_DWORD *)v5 + 4) = v109;
      *((_DWORD *)v5 + 5) = *((_DWORD *)v9 + 17);
      v70 = *((_DWORD *)v9 + 19);
      *((_DWORD *)v5 + 6) = v70;
      v71 = *((_DWORD *)v9 + 20);
      if ( !v70 )
        v70 = 1;
      *((_DWORD *)v5 + 6) = v70;
      if ( !v71 )
        v71 = 1;
      *((_DWORD *)v5 + 7) = v71;
      v5[6] = *(_QWORD *)v59;
      v5[7] = *((_QWORD *)v9 + 2);
      v72 = v65[38];
      if ( v72 )
        v5[30] = v72;
      v5[32] = v65[39];
      if ( v101 )
        v5[34] = CpcSetEnergyPerfPreference;
      if ( v102 )
        v5[35] = CpcSetAutonomousActivityWindow;
      if ( v103 )
        v5[36] = CpcSetAutonomousMode;
      if ( v104 )
        v5[31] = CpcSetTimeWindow;
      v73 = *((_QWORD *)v9 + 2);
      v74 = *((_QWORD *)v9 + 5);
      if ( v73 == v74 )
        *((_DWORD *)v67 + 2) = 100;
      else
        *((_DWORD *)v67 + 2) = 100 * v74 / v73;
      *((_DWORD *)v67 + 3) = 1;
      v67[17] = 1;
      *(_QWORD *)v67 = PerfReadWrappingCounter;
      v67[16] = v94 == 0;
      if ( (_BYTE)v106 )
      {
        v75 = v5[49];
        *(_QWORD *)(v75 + 32) = 100LL;
        *(_QWORD *)(v75 + 24) = PerfReadWrappingCounter;
        *(_WORD *)(v75 + 40) = 257;
      }
      v76 = (_QWORD *)v5[51];
      v113 = v5[50];
      ResetEnumerationContext(v115);
      if ( !(unsigned int)EnumerateNextDevice((__int64)v115, &DeferredContext) )
      {
        v78 = v92;
        v79 = (__int64)v65;
        do
        {
          v80 = (char *)*((_QWORD *)v59 + 9);
          LODWORD(v81) = 100;
          v82 = DeferredContext;
          if ( !v59[65] )
            goto LABEL_195;
          if ( v80[56] == 127 && !*((_BYTE *)DeferredContext + 66) )
          {
            KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
            v83 = &PreviousAffinity;
            if ( v78 )
              v83 = 0LL;
            KeSetSystemGroupAffinityThread(&Affinity, v83);
            v78 = 1;
          }
          GenAddrMaybeHidden = ReadGenAddrMaybeHidden((__int64)v82, v80 + 56);
          v85 = *((_QWORD *)v59 - 2);
          if ( GenAddrMaybeHidden > v85 )
            GenAddrMaybeHidden = *((_QWORD *)v59 - 2);
          if ( GenAddrMaybeHidden < *(_QWORD *)v59 )
            GenAddrMaybeHidden = *(_QWORD *)v59;
          *((_QWORD *)v59 + 3) = GenAddrMaybeHidden;
          v81 = 100 * GenAddrMaybeHidden / v85;
          if ( (unsigned int)v81 <= *((_DWORD *)v59 + 12) )
            LODWORD(v81) = *((_DWORD *)v59 + 12);
          *((_DWORD *)v59 + 13) = v81;
          if ( (_DWORD)v81 != v82[171] )
            ProcLibCapChange(v79, v82[104], v82[116], v81);
          v77 = v113;
          v86 = 2;
          if ( (unsigned int)v81 >= 0x64 )
LABEL_195:
            v86 = 0;
          InitCommonPerfStateContext((__int64)v82, (_QWORD *)v59 - 4, v77, v81, v86);
          *v76 = v59 + 104;
          *((_QWORD *)v59 + 19) = GetCpcDifferentialFeedback;
          *((_QWORD *)v59 + 20) = v80;
          v89 = v80[153];
          if ( (unsigned __int8)v89 < 0x40u )
            *((_QWORD *)v59 + 17) = (1LL << v89) - 1;
          v90 = v80[141];
          if ( (unsigned __int8)v90 < 0x40u )
            *((_QWORD *)v59 + 18) = (1LL << v90) - 1;
          ++v76;
          if ( (_BYTE)v106 != v88 )
          {
            *v76++ = v59 + 168;
            *((_QWORD *)v59 + 27) = *((_QWORD *)v82 + 37);
          }
          v113 = v87 + 32;
          v59 += 328;
        }
        while ( !(unsigned int)EnumerateNextDevice((__int64)v115, &DeferredContext) );
        v9 = v118;
        v65 = v116;
        v92 = v78;
        v5 = v114;
      }
      if ( v92 )
        KeRevertToUserGroupAffinityThread(&PreviousAffinity);
      v6 = v119(v5, v107);
      if ( v6 >= 0 )
      {
        ResetEnumerationContext(v115);
        while ( !(unsigned int)EnumerateNextDevice((__int64)v115, &DeferredContext) )
        {
          *((_QWORD *)DeferredContext + 28) = v9;
          v9 += 328;
        }
        if ( (v65[31] & 0x4000000000LL) != 0 )
        {
          ResetEnumerationContext(v115);
          while ( !(unsigned int)EnumerateNextDevice((__int64)v115, &DeferredContext) )
          {
            if ( !*((_BYTE *)DeferredContext + 66) )
              CpcConnectNativeInterrupt(DeferredContext);
          }
        }
        v9 = 0LL;
        v6 = 0;
      }
      goto LABEL_216;
    }
    goto LABEL_4;
  }
  v48 = v9 + 98;
  while ( 1 )
  {
    v49 = *(char **)(v48 + 6);
    v50 = DeferredContext;
    if ( (v49[8] == 127 || v49[20] == 127 || v49[32] == 127 || v49[44] == 127 || v49[224] == 127 || v49[188] == 127)
      && !*((_BYTE *)DeferredContext + 66) )
    {
      KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
      v51 = &PreviousAffinity;
      if ( v92 )
        v51 = 0LL;
      KeSetSystemGroupAffinityThread(&Affinity, v51);
      v92 = 1;
    }
    *v48 = v94;
    v48[2] = v107;
    v48[3] = v96;
    v48[1] = v2;
    *(_DWORD *)(v48 - 34) = v109;
    *(_QWORD *)(v48 - 90) = ReadGenAddrMaybeHidden((__int64)v50, v49 + 8);
    v52 = ReadGenAddrMaybeHidden((__int64)v50, v49 + 20);
    *(_QWORD *)(v48 - 82) = v52;
    if ( !v52 )
      break;
    *(_QWORD *)(v48 - 74) = ReadGenAddrMaybeHidden((__int64)v50, v49 + 32);
    *(_QWORD *)(v48 - 66) = ReadGenAddrMaybeHidden((__int64)v50, v49 + 44);
    v53 = ReadGenAddrMaybeHidden((__int64)v50, v49 + 224);
    v54 = *(_QWORD *)(v48 - 82);
    *(_QWORD *)(v48 - 58) = v53;
    LODWORD(v53) = 100LL * *(_QWORD *)(v48 - 90) / v54;
    *(_DWORD *)(v48 - 30) = v53;
    *(_DWORD *)(v48 - 26) = v53;
    v55 = 100LL * *(_QWORD *)(v48 - 74) / v54;
    v56 = 100LL * *(_QWORD *)(v48 - 66) / v54;
    if ( !(_DWORD)v56 )
      LODWORD(v56) = 1;
    *(_DWORD *)(v48 - 18) = v56;
    if ( !(_DWORD)v55 )
      LODWORD(v55) = 1;
    *(_DWORD *)(v48 - 22) = v55;
    if ( (unsigned __int8)CpcRegisterIsSupported((__int64)(v49 + 188)) )
    {
      v100 = ReadGenAddrMaybeHidden((__int64)v50, v49 + 188) != 0;
      v103 = v49[188] != 126;
    }
    if ( v48 - 98 != v9
      && (*(_QWORD *)(v48 - 90) != *((_QWORD *)v9 + 1)
       || *(_QWORD *)(v48 - 82) != *((_QWORD *)v9 + 2)
       || *(_QWORD *)(v48 - 74) != *((_QWORD *)v9 + 3)
       || *(_QWORD *)(v48 - 66) != *((_QWORD *)v9 + 4)) )
    {
      break;
    }
    v48 += 328;
    if ( (unsigned int)EnumerateNextDevice((__int64)v115, &DeferredContext) )
      goto LABEL_128;
  }
LABEL_140:
  v6 = -1073741811;
LABEL_216:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C000ECF8);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x72637250u);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x72637250u);
  return (unsigned int)v6;
}
