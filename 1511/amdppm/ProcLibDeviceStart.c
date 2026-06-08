/*
 * XREFs of ProcLibDeviceStart @ 0x1C0011CB4
 * Callers:
 *     EvtDevicePrepareHardware @ 0x1C000F3D0 (EvtDevicePrepareHardware.c)
 * Callees:
 *     AcpiEval_OSC @ 0x1C000133C (AcpiEval_OSC.c)
 *     AcquireBiosPpmControl @ 0x1C0001598 (AcquireBiosPpmControl.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C00016A0 (ProcLibTraceProcessorSpecificEvent.c)
 *     __security_check_cookie @ 0x1C0005940 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0005DE0 (_guard_dispatch_icall_nop.c)
 *     AcpiEval_PDC @ 0x1C000F674 (AcpiEval_PDC.c)
 *     AcpiEval_PPC @ 0x1C0010364 (AcpiEval_PPC.c)
 *     AcpiEval_TPC @ 0x1C0010674 (AcpiEval_TPC.c)
 *     AcquireAcpiInterfaces @ 0x1C0011270 (AcquireAcpiInterfaces.c)
 *     EnumerateControlMethods @ 0x1C00118F0 (EnumerateControlMethods.c)
 *     ProcLibCapChange @ 0x1C00126B0 (ProcLibCapChange.c)
 *     ProcLibTraceSummary2 @ 0x1C0012B54 (ProcLibTraceSummary2.c)
 *     InitAcpiCStates @ 0x1C0014FC8 (InitAcpiCStates.c)
 *     InitAcpiCpc @ 0x1C001553C (InitAcpiCpc.c)
 *     InitAcpiProcessorDomains @ 0x1C0018D74 (InitAcpiProcessorDomains.c)
 *     RegisterXsdDomain @ 0x1C0018F7C (RegisterXsdDomain.c)
 *     InitPepIdleStates @ 0x1C001916C (InitPepIdleStates.c)
 *     InitAcpiPerfStates @ 0x1C001B4A0 (InitAcpiPerfStates.c)
 *     InitAcpiThrottleStates @ 0x1C001B74C (InitAcpiThrottleStates.c)
 *     InitPepPerfStates @ 0x1C001BF68 (InitPepPerfStates.c)
 *     InitPep @ 0x1C001C458 (InitPep.c)
 *     ValidatePerfDomainSymmetry @ 0x1C001CAC0 (ValidatePerfDomainSymmetry.c)
 *     InitializeEnergyEstimation @ 0x1C001D2DC (InitializeEnergyEstimation.c)
 *     InitAcpiLegacyPcc @ 0x1C001D9F8 (InitAcpiLegacyPcc.c)
 */

__int64 __fastcall ProcLibDeviceStart(__int64 a1)
{
  __int64 v1; // rdx
  int v3; // r14d
  int (__fastcall *v4)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, _QWORD *, _QWORD, _QWORD); // rax
  int v5; // edi
  __int16 v6; // r8
  __int64 v7; // rdx
  __int64 (__fastcall *v8)(__int64, unsigned int, __int64); // r8
  __int64 v9; // rax
  bool v10; // sf
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  void (__fastcall *v15)(_QWORD, _QWORD); // rax
  void (__fastcall *v16)(_QWORD); // rax
  int v17; // eax
  unsigned int v18; // esi
  int v19; // eax
  int v20; // eax
  unsigned int v21; // edi
  int v22; // eax
  char v23; // al
  __int64 v24; // rax
  void (__fastcall *v25)(__int64); // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  _DWORD *v29; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v30[2]; // [rsp+58h] [rbp-21h] BYREF
  __int64 v31; // [rsp+68h] [rbp-11h]
  _BYTE v32[12]; // [rsp+70h] [rbp-9h] BYREF
  int v33; // [rsp+7Ch] [rbp+3h]
  struct _GROUP_AFFINITY Affinity; // [rsp+80h] [rbp+7h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+90h] [rbp+17h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)&v32[4] = 0LL;
  v33 = 0;
  *(_QWORD *)(a1 + 232) = Globals[0];
  v3 = 0;
  *(_QWORD *)(a1 + 248) = Globals[0];
  v30[0] = 0LL;
  v31 = 0LL;
  *(_QWORD *)(a1 + 240) = 0LL;
  v30[1] = v32;
  v4 = *(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, _QWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 1488);
  *(_DWORD *)v32 = 0;
  LODWORD(v30[0]) = 1;
  LODWORD(v31) = 16;
  if ( v4(WdfDriverGlobals, v1, 0LL, 2703744LL, 0LL, v30, 0LL, 0LL) >= 0 )
  {
    if ( *(_DWORD *)&v32[4] )
    {
      *(_DWORD *)(a1 + 172) = *(_DWORD *)&v32[4];
      *(_BYTE *)(a1 + 169) = v32[8];
      *(_BYTE *)(a1 + 168) = 1;
      *(_WORD *)(a1 + 170) = 0x2000;
      *(_DWORD *)(a1 + 176) = 0;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 248) &= 0xFFFFFFFFFFCFFFF9uLL;
    v33 = -1;
    memset(v32, 0, sizeof(v32));
  }
  *(_DWORD *)(a1 + 48) = v33;
  *(_DWORD *)(a1 + 52) = *(_DWORD *)v32;
  v5 = ((__int64 (__fastcall *)(__int64))qword_1C0009718)(a1);
  if ( v5 >= 0 )
  {
    if ( *(_DWORD *)(a1 + 56) != -1 )
    {
      IoSetDevicePropertyData(*(PDEVICE_OBJECT *)(a1 + 8), &PROCESSOR_NUMBER_PKEY, 0, 0, 7u, 4u, (PVOID)(a1 + 56));
      KeProcessorGroupAffinity(&Affinity, *(unsigned int *)(a1 + 56));
      KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
      v3 = 1;
    }
    v29 = 0LL;
    if ( qword_1C00094C8 && (int)AcpiEval_OSC(a1, qword_1C00094C8, v6, &v29) >= 0 )
    {
      if ( (*v29 & 0xE) == 0 )
        *(_QWORD *)(a1 + 72) = v29;
    }
    else if ( qword_1C00094C0 )
    {
      AcpiEval_PDC(a1, (const void *)qword_1C00094C0, word_1C00094D0);
    }
    EnumerateControlMethods(a1, (_DWORD *)(a1 + 1032));
    if ( (*(_QWORD *)(a1 + 248) & 0x11300000F00LL) != 0 && (int)InitPep(a1) < 0 )
      *(_QWORD *)(a1 + 248) &= 0xFFFFFEECFFFFF0FFuLL;
    InitAcpiCStates(a1);
    v9 = *(_QWORD *)(a1 + 248);
    if ( (v9 & 0x7F077) == 0 )
      *(_QWORD *)(a1 + 248) = v9 & 0xFFFFFFFFFFFFFCFFuLL;
    if ( (*(_QWORD *)(a1 + 248) & 0x300000300LL) != 0 && (int)InitPepIdleStates(a1) < 0 )
      *(_QWORD *)(a1 + 248) &= 0xFFFFFFFCFFFFFCFFuLL;
    if ( (*(_QWORD *)(a1 + 248) & 0x1000000000LL) != 0 )
    {
      v10 = (int)InitPepPerfStates(a1) < 0;
      v11 = 0xFFFFFFEFFFFFFFFFuLL;
      if ( !v10 )
        v11 = -4214226945LL;
      *(_QWORD *)(a1 + 248) &= v11;
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
    if ( !qword_1C00094D8 || (v5 = qword_1C00094D8(a1), v5 >= 0) )
    {
      if ( dword_1C000975C != 1 )
      {
        v12 = *(_QWORD *)(a1 + 248);
        v8 = SetPerfStateIO;
        if ( (v12 & 0x60000000) != 0 && *(_BYTE *)(a1 + 360) == 127 )
        {
          if ( (v12 & 0x20000000) != 0 )
            *(_QWORD *)(a1 + 264) = qword_1C00094F8;
          if ( (v12 & 0x40000000) != 0 )
            *(_QWORD *)(a1 + 264) = SetPerfStateFFH;
        }
        else if ( *(_BYTE *)(a1 + 360) == 1 && (v12 & 0x10000000) != 0 )
        {
          *(_QWORD *)(a1 + 264) = SetPerfStateIO;
        }
        else
        {
          *(_QWORD *)(a1 + 248) = v12 & 0xFFFFFFFF8FFFFFFFuLL;
        }
        v13 = *(_QWORD *)(a1 + 248);
        v7 = 0x4000000LL;
        if ( (v13 & 0x4000000) != 0 )
          *(_QWORD *)(a1 + 280) = qword_1C0009508;
        if ( (v13 & 0xA8000000) != 0 )
        {
          *(_QWORD *)(a1 + 296) = qword_1C0009518;
          *(_QWORD *)(a1 + 304) = qword_1C0009520;
        }
        if ( (v13 & 0x2000000) != 0 && *(_BYTE *)(a1 + 416) == 127 )
        {
          *(_QWORD *)(a1 + 272) = qword_1C0009500;
        }
        else if ( *(_BYTE *)(a1 + 416) == 1 && (v13 & 0x1100000) != 0 )
        {
          *(_QWORD *)(a1 + 272) = SetPerfStateIO;
        }
        else
        {
          *(_QWORD *)(a1 + 248) = v13 & 0xFFFFFFFFFCCFFFFFuLL;
        }
        if ( qword_1C0009510 )
          *(_QWORD *)(a1 + 288) = qword_1C0009510;
        v14 = *(_QWORD *)(a1 + 248);
        if ( (v14 & 0x10FF300000LL) == 0x4000000 && !qword_1C0009520 )
          *(_QWORD *)(a1 + 248) = v14 & 0xFFFFFFFFFBFFFFFFuLL;
      }
      InitAcpiProcessorDomains(a1, v7, v8, 0x10FF300000LL);
      if ( (*(_DWORD *)(a1 + 248) & 0x7B07F070) != 0 && (v5 = AcquireAcpiInterfaces(a1), v5 < 0) )
      {
        v15 = *(void (__fastcall **)(_QWORD, _QWORD))(a1 + 160);
        if ( v15 )
          v15(*(_QWORD *)(a1 + 8), AcpiNotifyCallback);
        v16 = *(void (__fastcall **)(_QWORD))(a1 + 104);
        if ( v16 )
          v16(*(_QWORD *)(a1 + 88));
      }
      else
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 192),
          0LL);
        ((void (__fastcall *)(__int64))qword_1C00096E0)(a1);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 192));
        v17 = *(_DWORD *)(a1 + 248);
        v18 = 0;
        LODWORD(v29) = 0;
        if ( (v17 & 0x70000000) != 0 )
        {
          v19 = AcpiEval_PPC(a1, (unsigned int *)&v29);
          v18 = (unsigned int)v29;
          if ( v19 < 0 )
            v18 = 0;
        }
        v20 = *(_DWORD *)(a1 + 248);
        v21 = 0;
        LODWORD(v29) = 0;
        if ( (v20 & 0x3000000) != 0 )
        {
          v22 = AcpiEval_TPC(a1, (unsigned int *)&v29);
          v21 = (unsigned int)v29;
          if ( v22 < 0 )
            v21 = 0;
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          qword_1C00093A8,
          0LL);
        ProcLibCapChange(a1, v18, v21, 100LL);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          qword_1C00093A8);
        if ( (*(_QWORD *)(a1 + 248) & 0x10FF300000LL) != 0 )
        {
          if ( *(_QWORD *)(a1 + 480) )
            v23 = RegisterXsdDomain(a1);
          else
            v23 = !byte_1C0009758 || (unsigned int)((__int64 (__fastcall *)(__int64))qword_1C0009720)(a1) == 0;
          if ( v23 && (int)ValidatePerfDomainSymmetry(a1) >= 0 )
          {
            v24 = *(_QWORD *)(a1 + 248);
            if ( (v24 & 0x1000000000LL) != 0 )
            {
              ((void (__fastcall *)(__int64))qword_1C0009710)(a1);
            }
            else if ( (v24 & 0x8000000) != 0 )
            {
              ((void (__fastcall *)(__int64))qword_1C0009708)(a1);
            }
            else if ( (v24 & 0x80000000) != 0 )
            {
              ((void (__fastcall *)(__int64))qword_1C0009700)(a1);
            }
            else
            {
              v25 = (void (__fastcall *)(__int64))qword_1C00096E8;
              if ( (*(_QWORD *)(a1 + 248) & 0x73300000LL) == 0 )
                v25 = (void (__fastcall *)(__int64))qword_1C00096F8;
              v25(a1);
            }
          }
        }
        if ( (*(_QWORD *)(a1 + 248) & 0x2000000000LL) != 0 && ++dword_1C0009A60 == dword_1C00093A4 )
          InitializeEnergyEstimation();
        AcquireBiosPpmControl(a1);
        v5 = 0;
      }
    }
    if ( v3 )
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  }
  else
  {
    *(_QWORD *)(a1 + 248) = 0LL;
    if ( dword_1C000975C == 1 )
      v5 = 0;
  }
  if ( (*(_QWORD *)(a1 + 248) & *(_DWORD *)(a1 + 240) & 0x7F077) != (*(_DWORD *)(a1 + 240) & 0x7F077) )
    ProcLibTraceProcessorSpecificEvent(a1, (const EVENT_DESCRIPTOR *)qword_1C0009738, 0, 0LL);
  v26 = *(_QWORD *)(a1 + 248);
  v27 = *(_DWORD *)(a1 + 240) & 0x70000000;
  if ( (v26 & 0x40000000) != 0 )
    v27 = *(_DWORD *)(a1 + 240) & 0x40000000;
  if ( (v26 & v27) != (unsigned int)v27 )
    ProcLibTraceProcessorSpecificEvent(a1, (const EVENT_DESCRIPTOR *)qword_1C0009740, 0, 0LL);
  if ( (*(_QWORD *)(a1 + 248) & *(_DWORD *)(a1 + 240) & 0x3300000) != (*(_DWORD *)(a1 + 240) & 0x3300000) )
    ProcLibTraceProcessorSpecificEvent(a1, (const EVENT_DESCRIPTOR *)qword_1C0009748, 0, 0LL);
  if ( (*(_QWORD *)(a1 + 248) & *(_DWORD *)(a1 + 240) & 0x80000000) != (*(_DWORD *)(a1 + 240) & 0x80000000) )
    ProcLibTraceProcessorSpecificEvent(a1, &PPM_ETW_PCC_ERROR, 0, 0LL);
  if ( (*(_QWORD *)(a1 + 248) & *(_DWORD *)(a1 + 240) & 0x8000000) != (*(_DWORD *)(a1 + 240) & 0x8000000) )
    ProcLibTraceProcessorSpecificEvent(a1, &PPM_ETW_CPC_ERROR, 0, 0LL);
  ProcLibTraceSummary2(a1, 0LL);
  return (unsigned int)v5;
}
