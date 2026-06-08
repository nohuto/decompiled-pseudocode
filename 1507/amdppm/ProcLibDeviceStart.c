/*
 * XREFs of ProcLibDeviceStart @ 0x1C0011CB4
 * Callers:
 *     EvtDevicePrepareHardware @ 0x1C000F3D0 (EvtDevicePrepareHardware.c)
 * Callees:
 *     AcpiEval_OSC @ 0x1C000161C (AcpiEval_OSC.c)
 *     AcquireBiosPpmControl @ 0x1C0001878 (AcquireBiosPpmControl.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C0001980 (ProcLibTraceProcessorSpecificEvent.c)
 *     __security_check_cookie @ 0x1C0005E20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0005F40 (_guard_dispatch_icall_nop.c)
 *     AcpiEval_PDC @ 0x1C000F674 (AcpiEval_PDC.c)
 *     AcpiEval_PPC @ 0x1C0010364 (AcpiEval_PPC.c)
 *     AcpiEval_TPC @ 0x1C0010674 (AcpiEval_TPC.c)
 *     AcquireAcpiInterfaces @ 0x1C0011270 (AcquireAcpiInterfaces.c)
 *     EnumerateControlMethods @ 0x1C00118F0 (EnumerateControlMethods.c)
 *     ProcLibCapChange @ 0x1C00126B0 (ProcLibCapChange.c)
 *     ProcLibTraceSummary2 @ 0x1C0012B54 (ProcLibTraceSummary2.c)
 *     InitAcpiCStates @ 0x1C0014FB8 (InitAcpiCStates.c)
 *     InitAcpiCpc @ 0x1C001552C (InitAcpiCpc.c)
 *     InitAcpiProcessorDomains @ 0x1C0018D54 (InitAcpiProcessorDomains.c)
 *     RegisterXsdDomain @ 0x1C0018F5C (RegisterXsdDomain.c)
 *     InitPepIdleStates @ 0x1C001914C (InitPepIdleStates.c)
 *     InitAcpiPerfStates @ 0x1C001B4C0 (InitAcpiPerfStates.c)
 *     InitAcpiThrottleStates @ 0x1C001B76C (InitAcpiThrottleStates.c)
 *     InitPepPerfStates @ 0x1C001BF6C (InitPepPerfStates.c)
 *     InitPep @ 0x1C001C3EC (InitPep.c)
 *     ValidatePerfDomainSymmetry @ 0x1C001CA54 (ValidatePerfDomainSymmetry.c)
 *     InitializeEnergyEstimation @ 0x1C001D270 (InitializeEnergyEstimation.c)
 *     InitAcpiLegacyPcc @ 0x1C001D640 (InitAcpiLegacyPcc.c)
 */

__int64 __fastcall ProcLibDeviceStart(__int64 a1)
{
  __int64 v1; // rdx
  int v3; // r14d
  int v4; // edi
  __int16 v5; // r8
  __int64 v6; // rdx
  __int64 (__fastcall *v7)(__int64, unsigned int, __int64); // r8
  __int64 v8; // rax
  bool v9; // sf
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  void (__fastcall *v14)(_QWORD, _QWORD); // rax
  void (__fastcall *v15)(_QWORD); // rax
  int v16; // eax
  unsigned int v17; // esi
  int v18; // eax
  int v19; // eax
  unsigned int v20; // edi
  int v21; // eax
  char v22; // al
  __int64 v23; // rax
  void (__fastcall *v24)(__int64); // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  _DWORD *v28; // [rsp+50h] [rbp-29h] BYREF
  _DWORD v29[2]; // [rsp+58h] [rbp-21h] BYREF
  _BYTE *v30; // [rsp+60h] [rbp-19h]
  int v31; // [rsp+68h] [rbp-11h]
  int v32; // [rsp+6Ch] [rbp-Dh]
  _BYTE v33[12]; // [rsp+70h] [rbp-9h] BYREF
  int v34; // [rsp+7Ch] [rbp+3h]
  struct _GROUP_AFFINITY Affinity; // [rsp+80h] [rbp+7h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+90h] [rbp+17h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)&v33[4] = 0LL;
  v34 = 0;
  *(_QWORD *)(a1 + 232) = Globals;
  v3 = 0;
  *(_QWORD *)(a1 + 248) = Globals;
  v29[1] = 0;
  v32 = 0;
  *(_QWORD *)(a1 + 240) = 0LL;
  v30 = v33;
  *(_DWORD *)v33 = 0;
  v29[0] = 1;
  v31 = 16;
  if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, _DWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 1488))(
         WdfDriverGlobals,
         v1,
         0LL,
         2703744LL,
         0LL,
         v29,
         0LL,
         0LL) >= 0 )
  {
    if ( *(_DWORD *)&v33[4] )
    {
      *(_DWORD *)(a1 + 172) = *(_DWORD *)&v33[4];
      *(_BYTE *)(a1 + 169) = v33[8];
      *(_BYTE *)(a1 + 168) = 1;
      *(_WORD *)(a1 + 170) = 0x2000;
      *(_DWORD *)(a1 + 176) = 0;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 248) &= 0xFFFFFFFFFFCFFFF9uLL;
    v34 = -1;
    memset(v33, 0, sizeof(v33));
  }
  *(_DWORD *)(a1 + 48) = v34;
  *(_DWORD *)(a1 + 52) = *(_DWORD *)v33;
  v4 = ((__int64 (__fastcall *)(__int64))qword_1C0009708)(a1);
  if ( v4 >= 0 )
  {
    if ( *(_DWORD *)(a1 + 56) != -1 )
    {
      IoSetDevicePropertyData(*(PDEVICE_OBJECT *)(a1 + 8), &PROCESSOR_NUMBER_PKEY, 0, 0, 7u, 4u, (PVOID)(a1 + 56));
      KeProcessorGroupAffinity(&Affinity, *(unsigned int *)(a1 + 56));
      KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
      v3 = 1;
    }
    v28 = 0LL;
    if ( qword_1C00094B8 && (int)AcpiEval_OSC(a1, qword_1C00094B8, v5, &v28) >= 0 )
    {
      if ( (*v28 & 0xE) == 0 )
        *(_QWORD *)(a1 + 72) = v28;
    }
    else if ( qword_1C00094B0 )
    {
      AcpiEval_PDC(a1, (const void *)qword_1C00094B0, word_1C00094C0);
    }
    EnumerateControlMethods(a1, (_DWORD *)(a1 + 1040));
    if ( (*(_QWORD *)(a1 + 248) & 0x11300000F00LL) != 0 && (int)InitPep(a1) < 0 )
      *(_QWORD *)(a1 + 248) &= 0xFFFFFEECFFFFF0FFuLL;
    InitAcpiCStates(a1);
    v8 = *(_QWORD *)(a1 + 248);
    if ( (v8 & 0x7F077) == 0 )
      *(_QWORD *)(a1 + 248) = v8 & 0xFFFFFFFFFFFFFCFFuLL;
    if ( (*(_QWORD *)(a1 + 248) & 0x300000300LL) != 0 && (int)InitPepIdleStates(a1) < 0 )
      *(_QWORD *)(a1 + 248) &= 0xFFFFFFFCFFFFFCFFuLL;
    if ( (*(_QWORD *)(a1 + 248) & 0x1000000000LL) != 0 )
    {
      v9 = (int)InitPepPerfStates(a1) < 0;
      v10 = 0xFFFFFFEFFFFFFFFFuLL;
      if ( !v9 )
        v10 = -4214226945LL;
      *(_QWORD *)(a1 + 248) &= v10;
    }
    if ( (*(_DWORD *)(a1 + 248) & 0x8000000) != 0 )
    {
      if ( (int)InitAcpiCpc(a1) >= 0 )
        *(_QWORD *)(a1 + 248) &= 0xFFFFFFFF0CCFFFFFuLL;
      else
        *(_QWORD *)(a1 + 248) &= ~0x8000000uLL;
    }
    if ( (*(_DWORD *)(a1 + 248) & 0x80000000) != 0 )
    {
      if ( (int)InitAcpiLegacyPcc(a1) >= 0 )
        *(_QWORD *)(a1 + 248) &= 0xFFFFFFFF8CCFFFFFuLL;
      else
        *(_QWORD *)(a1 + 248) &= ~0x80000000uLL;
    }
    if ( (*(_DWORD *)(a1 + 248) & 0x70000000) != 0 && (int)InitAcpiPerfStates(a1) < 0 )
      *(_QWORD *)(a1 + 248) &= 0xFFFFFFFF8FFFFFFFuLL;
    if ( (*(_DWORD *)(a1 + 248) & 0x3300000) != 0 && (int)InitAcpiThrottleStates(a1) < 0 )
      *(_QWORD *)(a1 + 248) &= 0xFFFFFFFFFCCFFFFFuLL;
    if ( !qword_1C00094C8 || (v4 = qword_1C00094C8(a1), v4 >= 0) )
    {
      if ( dword_1C000974C != 1 )
      {
        v11 = *(_QWORD *)(a1 + 248);
        v7 = SetPerfStateIO;
        if ( (v11 & 0x60000000) != 0 && *(_BYTE *)(a1 + 368) == 127 )
        {
          if ( (v11 & 0x20000000) != 0 )
            *(_QWORD *)(a1 + 264) = qword_1C00094E8;
          if ( (v11 & 0x40000000) != 0 )
            *(_QWORD *)(a1 + 264) = SetPerfStateFFH;
        }
        else if ( *(_BYTE *)(a1 + 368) == 1 && (v11 & 0x10000000) != 0 )
        {
          *(_QWORD *)(a1 + 264) = SetPerfStateIO;
        }
        else
        {
          *(_QWORD *)(a1 + 248) = v11 & 0xFFFFFFFF8FFFFFFFuLL;
        }
        v12 = *(_QWORD *)(a1 + 248);
        v6 = 0x4000000LL;
        if ( (v12 & 0x4000000) != 0 )
          *(_QWORD *)(a1 + 280) = qword_1C00094F8;
        if ( (v12 & 0xA8000000) != 0 )
        {
          *(_QWORD *)(a1 + 296) = qword_1C0009508;
          *(_QWORD *)(a1 + 304) = qword_1C0009510;
        }
        if ( (v12 & 0x2000000) != 0 && *(_BYTE *)(a1 + 424) == 127 )
        {
          *(_QWORD *)(a1 + 272) = qword_1C00094F0;
        }
        else if ( *(_BYTE *)(a1 + 424) == 1 && (v12 & 0x1100000) != 0 )
        {
          *(_QWORD *)(a1 + 272) = SetPerfStateIO;
        }
        else
        {
          *(_QWORD *)(a1 + 248) = v12 & 0xFFFFFFFFFCCFFFFFuLL;
        }
        if ( qword_1C0009500 )
          *(_QWORD *)(a1 + 288) = qword_1C0009500;
        v13 = *(_QWORD *)(a1 + 248);
        if ( (v13 & 0x10FF300000LL) == 0x4000000 && !qword_1C0009510 )
          *(_QWORD *)(a1 + 248) = v13 & 0xFFFFFFFFFBFFFFFFuLL;
      }
      InitAcpiProcessorDomains(a1, v6, v7, 0x10FF300000LL);
      if ( (*(_DWORD *)(a1 + 248) & 0x7B07F070) != 0 && (v4 = AcquireAcpiInterfaces(a1), v4 < 0) )
      {
        v14 = *(void (__fastcall **)(_QWORD, _QWORD))(a1 + 160);
        if ( v14 )
          v14(*(_QWORD *)(a1 + 8), AcpiNotifyCallback);
        v15 = *(void (__fastcall **)(_QWORD))(a1 + 104);
        if ( v15 )
          v15(*(_QWORD *)(a1 + 88));
      }
      else
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 192),
          0LL);
        ((void (__fastcall *)(__int64))qword_1C00096D0)(a1);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 192));
        v16 = *(_DWORD *)(a1 + 248);
        v17 = 0;
        LODWORD(v28) = 0;
        if ( (v16 & 0x70000000) != 0 )
        {
          v18 = AcpiEval_PPC(a1, (unsigned int *)&v28);
          v17 = (unsigned int)v28;
          if ( v18 < 0 )
            v17 = 0;
        }
        v19 = *(_DWORD *)(a1 + 248);
        v20 = 0;
        LODWORD(v28) = 0;
        if ( (v19 & 0x3000000) != 0 )
        {
          v21 = AcpiEval_TPC(a1, (unsigned int *)&v28);
          v20 = (unsigned int)v28;
          if ( v21 < 0 )
            v20 = 0;
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          qword_1C0009398,
          0LL);
        ProcLibCapChange(a1, v17, v20, 100LL);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          qword_1C0009398);
        if ( (*(_QWORD *)(a1 + 248) & 0x10FF300000LL) != 0 )
        {
          if ( *(_QWORD *)(a1 + 488) )
            v22 = RegisterXsdDomain(a1);
          else
            v22 = !byte_1C0009748 || (unsigned int)((__int64 (__fastcall *)(__int64))qword_1C0009710)(a1) == 0;
          if ( v22 && (int)ValidatePerfDomainSymmetry(a1) >= 0 )
          {
            v23 = *(_QWORD *)(a1 + 248);
            if ( (v23 & 0x1000000000LL) != 0 )
            {
              ((void (__fastcall *)(__int64))qword_1C0009700)(a1);
            }
            else if ( (v23 & 0x8000000) != 0 )
            {
              ((void (__fastcall *)(__int64))qword_1C00096F8)(a1);
            }
            else if ( (v23 & 0x80000000) != 0 )
            {
              ((void (__fastcall *)(__int64))qword_1C00096F0)(a1);
            }
            else
            {
              v24 = (void (__fastcall *)(__int64))qword_1C00096D8;
              if ( (*(_QWORD *)(a1 + 248) & 0x73300000LL) == 0 )
                v24 = (void (__fastcall *)(__int64))qword_1C00096E8;
              v24(a1);
            }
          }
        }
        if ( (*(_QWORD *)(a1 + 248) & 0x2000000000LL) != 0 && ++dword_1C00098B8 == dword_1C0009394 )
          InitializeEnergyEstimation();
        AcquireBiosPpmControl(a1);
        v4 = 0;
      }
    }
    if ( v3 )
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  }
  else
  {
    *(_QWORD *)(a1 + 248) = 0LL;
    if ( dword_1C000974C == 1 )
      v4 = 0;
  }
  if ( (*(_QWORD *)(a1 + 248) & *(_DWORD *)(a1 + 240) & 0x7F077) != (*(_DWORD *)(a1 + 240) & 0x7F077) )
    ProcLibTraceProcessorSpecificEvent(a1, (const EVENT_DESCRIPTOR *)qword_1C0009728, 0, 0LL);
  v25 = *(_QWORD *)(a1 + 248);
  v26 = *(_DWORD *)(a1 + 240) & 0x70000000;
  if ( (v25 & 0x40000000) != 0 )
    v26 = *(_DWORD *)(a1 + 240) & 0x40000000;
  if ( (v25 & v26) != (unsigned int)v26 )
    ProcLibTraceProcessorSpecificEvent(a1, (const EVENT_DESCRIPTOR *)qword_1C0009730, 0, 0LL);
  if ( (*(_QWORD *)(a1 + 248) & *(_DWORD *)(a1 + 240) & 0x3300000) != (*(_DWORD *)(a1 + 240) & 0x3300000) )
    ProcLibTraceProcessorSpecificEvent(a1, (const EVENT_DESCRIPTOR *)qword_1C0009738, 0, 0LL);
  if ( (*(_QWORD *)(a1 + 248) & *(_DWORD *)(a1 + 240) & 0x80000000) != (*(_DWORD *)(a1 + 240) & 0x80000000) )
    ProcLibTraceProcessorSpecificEvent(a1, &PPM_ETW_PCC_ERROR, 0, 0LL);
  if ( (*(_QWORD *)(a1 + 248) & *(_DWORD *)(a1 + 240) & 0x8000000) != (*(_DWORD *)(a1 + 240) & 0x8000000) )
    ProcLibTraceProcessorSpecificEvent(a1, &PPM_ETW_CPC_ERROR, 0, 0LL);
  ProcLibTraceSummary2(a1, 0LL);
  return (unsigned int)v4;
}
