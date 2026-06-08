/*
 * XREFs of ProcLibDeviceStart @ 0x1C0012314
 * Callers:
 *     EvtDevicePrepareHardware @ 0x1C0012000 (EvtDevicePrepareHardware.c)
 * Callees:
 *     AcquireBiosPpmControl @ 0x1C00018FC (AcquireBiosPpmControl.c)
 *     AcpiEval_OSC @ 0x1C0001944 (AcpiEval_OSC.c)
 *     __security_check_cookie @ 0x1C0002450 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029B0 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C000410C (ProcLibTraceProcessorSpecificEvent.c)
 *     ProcLibTraceSummary2 @ 0x1C00129BC (ProcLibTraceSummary2.c)
 *     RegisterXsdDomain @ 0x1C0012C38 (RegisterXsdDomain.c)
 *     ProcLibCapChange @ 0x1C0012DA4 (ProcLibCapChange.c)
 *     InitAcpiProcessorDomains @ 0x1C0012E40 (InitAcpiProcessorDomains.c)
 *     InitAcpiCpc @ 0x1C0012F2C (InitAcpiCpc.c)
 *     InitAcpiPerfStates @ 0x1C00130A4 (InitAcpiPerfStates.c)
 *     InitAcpiThrottleStates @ 0x1C00132DC (InitAcpiThrottleStates.c)
 *     InitAcpiCStates @ 0x1C00134B8 (InitAcpiCStates.c)
 *     AcpiEval_PPC @ 0x1C001457C (AcpiEval_PPC.c)
 *     AcquireAcpiInterfaces @ 0x1C0014924 (AcquireAcpiInterfaces.c)
 *     AcquirePccInterface @ 0x1C00149D8 (AcquirePccInterface.c)
 *     InitPep @ 0x1C0014AD8 (InitPep.c)
 *     EnumerateControlMethods @ 0x1C0014D24 (EnumerateControlMethods.c)
 *     ValidatePerfDomainSymmetry @ 0x1C00150EC (ValidatePerfDomainSymmetry.c)
 *     AcpiEval_PCCP @ 0x1C001D4D4 (AcpiEval_PCCP.c)
 *     AcpiEval_PDC @ 0x1C001D640 (AcpiEval_PDC.c)
 *     AcpiEval_TPC @ 0x1C001D728 (AcpiEval_TPC.c)
 *     ReleaseAcpiInterfaces @ 0x1C001DD10 (ReleaseAcpiInterfaces.c)
 *     InitPepIdleStates @ 0x1C0020A7C (InitPepIdleStates.c)
 *     InitPepPerfStates @ 0x1C0021800 (InitPepPerfStates.c)
 *     InitializeEnergyEstimation @ 0x1C00220C8 (InitializeEnergyEstimation.c)
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
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // esi
  int v15; // eax
  int v16; // eax
  unsigned int v17; // edi
  char v18; // al
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v22; // rax
  void (__fastcall *v23)(__int64); // rax
  bool v24; // sf
  unsigned __int64 v25; // rax
  signed int v26; // edi
  _DWORD *v27; // rcx
  int v28; // eax
  _DWORD *v29; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v30[2]; // [rsp+58h] [rbp-21h] BYREF
  __int64 v31; // [rsp+68h] [rbp-11h]
  __int128 v32; // [rsp+70h] [rbp-9h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+80h] [rbp+7h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+90h] [rbp+17h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)((char *)&v32 + 4) = 0LL;
  HIDWORD(v32) = 0;
  *(_QWORD *)(a1 + 232) = Globals[0];
  v3 = 0;
  *(_QWORD *)(a1 + 248) = Globals[0];
  v30[0] = 0LL;
  v31 = 0LL;
  *(_QWORD *)(a1 + 240) = 0LL;
  v30[1] = &v32;
  v4 = *(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, _QWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 1488);
  LODWORD(v32) = 0;
  LODWORD(v30[0]) = 1;
  LODWORD(v31) = 16;
  if ( v4(WdfDriverGlobals, v1, 0LL, 2703744LL, 0LL, v30, 0LL, 0LL) < 0 )
  {
    *(_QWORD *)(a1 + 248) &= 0xFFFFFFFFFFCFFFF9uLL;
    *((_QWORD *)&v32 + 1) = 0xFFFFFFFF00000000uLL;
    *(_QWORD *)&v32 = 0LL;
  }
  else if ( DWORD1(v32) )
  {
    *(_DWORD *)(a1 + 172) = DWORD1(v32);
    *(_BYTE *)(a1 + 169) = BYTE8(v32);
    *(_BYTE *)(a1 + 168) = 1;
    *(_WORD *)(a1 + 170) = 0x2000;
    *(_DWORD *)(a1 + 176) = 0;
  }
  *(_DWORD *)(a1 + 48) = HIDWORD(v32);
  *(_DWORD *)(a1 + 52) = v32;
  v5 = ((__int64 (__fastcall *)(__int64))qword_1C000E078)(a1);
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
    if ( qword_1C000DE28 && (int)AcpiEval_OSC(a1, qword_1C000DE28, v6, &v29) >= 0 )
    {
      if ( (*v29 & 0xE) == 0 )
        *(_QWORD *)(a1 + 72) = v29;
    }
    else if ( qword_1C000DE20 )
    {
      AcpiEval_PDC(a1, qword_1C000DE20, (unsigned __int16)word_1C000DE30);
    }
    EnumerateControlMethods(a1, a1 + 1032);
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
      v24 = (int)InitPepPerfStates(a1) < 0;
      v25 = 0xFFFFFFEFFFFFFFFFuLL;
      if ( !v24 )
        v25 = -4214226945LL;
      *(_QWORD *)(a1 + 248) &= v25;
    }
    if ( (*(_DWORD *)(a1 + 248) & 0x8000000) != 0 )
    {
      if ( (int)InitAcpiCpc(a1) >= 0 )
        *(_QWORD *)(a1 + 248) &= 0xFFFFFFFF0CCFFFFFuLL;
      else
        *(_QWORD *)(a1 + 248) &= ~0x8000000uLL;
    }
    if ( (*(_DWORD *)(a1 + 248) & 0x80000000) == 0 )
    {
LABEL_24:
      if ( (*(_DWORD *)(a1 + 248) & 0x70000000) != 0 && (int)InitAcpiPerfStates(a1) < 0 )
        *(_QWORD *)(a1 + 248) &= 0xFFFFFFFF8FFFFFFFuLL;
      if ( (*(_DWORD *)(a1 + 248) & 0x3300000) != 0 && (int)InitAcpiThrottleStates(a1) < 0 )
        *(_QWORD *)(a1 + 248) &= 0xFFFFFFFFFCCFFFFFuLL;
      if ( qword_1C000DE38 )
      {
        v5 = qword_1C000DE38(a1);
        if ( v5 < 0 )
          goto LABEL_60;
      }
      if ( dword_1C000E0BC != 1 )
      {
        v10 = *(_QWORD *)(a1 + 248);
        v8 = SetPerfStateIO;
        if ( (v10 & 0x60000000) != 0 && *(_BYTE *)(a1 + 360) == 127 )
        {
          if ( (v10 & 0x20000000) != 0 )
            *(_QWORD *)(a1 + 264) = qword_1C000DE58;
          if ( (v10 & 0x40000000) != 0 )
            *(_QWORD *)(a1 + 264) = SetPerfStateFFH;
        }
        else if ( *(_BYTE *)(a1 + 360) == 1 && (v10 & 0x10000000) != 0 )
        {
          *(_QWORD *)(a1 + 264) = SetPerfStateIO;
        }
        else
        {
          *(_QWORD *)(a1 + 248) = v10 & 0xFFFFFFFF8FFFFFFFuLL;
        }
        v11 = *(_QWORD *)(a1 + 248);
        v7 = 0x4000000LL;
        if ( (v11 & 0x4000000) != 0 )
          *(_QWORD *)(a1 + 280) = qword_1C000DE68;
        if ( (v11 & 0xA8000000) != 0 )
        {
          *(_QWORD *)(a1 + 296) = qword_1C000DE78;
          *(_QWORD *)(a1 + 304) = qword_1C000DE80;
        }
        if ( (v11 & 0x2000000) != 0 && *(_BYTE *)(a1 + 416) == 127 )
        {
          *(_QWORD *)(a1 + 272) = qword_1C000DE60;
        }
        else if ( *(_BYTE *)(a1 + 416) == 1 && (v11 & 0x1100000) != 0 )
        {
          *(_QWORD *)(a1 + 272) = SetPerfStateIO;
        }
        else
        {
          *(_QWORD *)(a1 + 248) = v11 & 0xFFFFFFFFFCCFFFFFuLL;
        }
        if ( qword_1C000DE70 )
          *(_QWORD *)(a1 + 288) = qword_1C000DE70;
        v12 = *(_QWORD *)(a1 + 248);
        if ( (v12 & 0x10FF300000LL) == 0x4000000 && !qword_1C000DE80 )
          *(_QWORD *)(a1 + 248) = v12 & 0xFFFFFFFFFBFFFFFFuLL;
      }
      InitAcpiProcessorDomains(a1, v7, v8, 0x10FF300000LL);
      if ( (*(_DWORD *)(a1 + 248) & 0x7B07F070) != 0 )
      {
        v5 = AcquireAcpiInterfaces(a1);
        if ( v5 < 0 )
        {
          ReleaseAcpiInterfaces(a1);
LABEL_60:
          if ( v3 )
            KeRevertToUserGroupAffinityThread(&PreviousAffinity);
          goto LABEL_62;
        }
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        *(_QWORD *)(a1 + 192),
        0LL);
      ((void (__fastcall *)(__int64))qword_1C000E040)(a1);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
        WdfDriverGlobals,
        *(_QWORD *)(a1 + 192));
      v13 = *(_DWORD *)(a1 + 248);
      v14 = 0;
      LODWORD(v29) = 0;
      if ( (v13 & 0x70000000) != 0 )
      {
        v15 = AcpiEval_PPC(a1, &v29);
        v14 = (unsigned int)v29;
        if ( v15 < 0 )
          v14 = 0;
      }
      v16 = *(_DWORD *)(a1 + 248);
      v17 = 0;
      LODWORD(v29) = 0;
      if ( (v16 & 0x3000000) != 0 )
      {
        v28 = AcpiEval_TPC(a1, &v29);
        v17 = (unsigned int)v29;
        if ( v28 < 0 )
          v17 = 0;
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1C000DD08,
        0LL);
      ProcLibCapChange(a1, v14, v17, 100LL);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
        WdfDriverGlobals,
        qword_1C000DD08);
      if ( (*(_QWORD *)(a1 + 248) & 0x10FF300000LL) != 0 )
      {
        if ( *(_QWORD *)(a1 + 480) )
        {
          v18 = RegisterXsdDomain(a1);
          goto LABEL_57;
        }
        if ( !byte_1C000E0B8 )
        {
          v18 = 1;
LABEL_57:
          if ( !v18 )
            goto LABEL_58;
LABEL_75:
          if ( (int)ValidatePerfDomainSymmetry(a1) >= 0 )
          {
            v22 = *(_QWORD *)(a1 + 248);
            if ( (v22 & 0x1000000000LL) != 0 )
            {
              ((void (__fastcall *)(__int64))qword_1C000E070)(a1);
            }
            else if ( (v22 & 0x8000000) != 0 )
            {
              ((void (__fastcall *)(__int64))qword_1C000E068)(a1);
            }
            else if ( (v22 & 0x80000000) != 0 )
            {
              ((void (__fastcall *)(__int64))qword_1C000E060)(a1);
            }
            else
            {
              v23 = (void (__fastcall *)(__int64))qword_1C000E048;
              if ( (*(_QWORD *)(a1 + 248) & 0x73300000LL) == 0 )
                v23 = (void (__fastcall *)(__int64))qword_1C000E058;
              v23(a1);
            }
          }
          goto LABEL_58;
        }
        if ( !(unsigned int)((__int64 (__fastcall *)(__int64))qword_1C000E080)(a1) )
          goto LABEL_75;
      }
LABEL_58:
      if ( (*(_QWORD *)(a1 + 248) & 0x2000000000LL) != 0 && ++dword_1C000E3C0 == dword_1C000DD04 )
        InitializeEnergyEstimation();
      AcquireBiosPpmControl(a1);
      v5 = 0;
      goto LABEL_60;
    }
    if ( (int)AcquirePccInterface(a1) < 0 )
    {
LABEL_23:
      *(_QWORD *)(a1 + 248) &= ~0x80000000uLL;
      goto LABEL_24;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      *(_QWORD *)(a1 + 192),
      0LL);
    v26 = AcpiEval_PCCP(a1, a1 + 512);
    if ( v26 >= 0 )
    {
      v26 = -1073741811;
      v27 = *(_DWORD **)(a1 + 512);
      if ( qword_1C000E170 && *v27 <= (unsigned int)(dword_1C000E178 - 4) )
        v26 = (unsigned int)(dword_1C000E178 - 4) < v27[1] ? 0xC000000D : 0;
      if ( v26 >= 0 )
      {
        if ( (unsigned int)(dword_1C000E16C - 1) > 0x26 )
          goto LABEL_104;
        v26 = -1073741823;
      }
      *(_QWORD *)(a1 + 248) &= ~0x80000000uLL;
    }
LABEL_104:
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      *(_QWORD *)(a1 + 192));
    if ( v26 >= 0 )
    {
      *(_QWORD *)(a1 + 248) &= 0xFFFFFFFF8CCFFFFFuLL;
      goto LABEL_24;
    }
    goto LABEL_23;
  }
  *(_QWORD *)(a1 + 248) = 0LL;
  if ( dword_1C000E0BC == 1 )
    v5 = 0;
LABEL_62:
  if ( (*(_QWORD *)(a1 + 248) & *(_DWORD *)(a1 + 240) & 0x7F077) != (*(_DWORD *)(a1 + 240) & 0x7F077) )
    ProcLibTraceProcessorSpecificEvent(a1, (const EVENT_DESCRIPTOR *)qword_1C000E098, 0, 0LL);
  v19 = *(_QWORD *)(a1 + 248);
  v20 = *(_DWORD *)(a1 + 240) & 0x70000000;
  if ( (v19 & 0x40000000) != 0 )
    v20 = *(_DWORD *)(a1 + 240) & 0x40000000;
  if ( (v19 & v20) != (unsigned int)v20 )
    ProcLibTraceProcessorSpecificEvent(a1, (const EVENT_DESCRIPTOR *)qword_1C000E0A0, 0, 0LL);
  if ( (*(_QWORD *)(a1 + 248) & *(_DWORD *)(a1 + 240) & 0x3300000) != (*(_DWORD *)(a1 + 240) & 0x3300000) )
    ProcLibTraceProcessorSpecificEvent(a1, (const EVENT_DESCRIPTOR *)qword_1C000E0A8, 0, 0LL);
  if ( (*(_QWORD *)(a1 + 248) & *(_DWORD *)(a1 + 240) & 0x80000000) != (*(_DWORD *)(a1 + 240) & 0x80000000) )
    ProcLibTraceProcessorSpecificEvent(a1, &PPM_ETW_PCC_ERROR, 0, 0LL);
  if ( (*(_QWORD *)(a1 + 248) & *(_DWORD *)(a1 + 240) & 0x8000000) != (*(_DWORD *)(a1 + 240) & 0x8000000) )
    ProcLibTraceProcessorSpecificEvent(a1, &PPM_ETW_CPC_ERROR, 0, 0LL);
  ProcLibTraceSummary2(a1, 0LL);
  return (unsigned int)v5;
}
