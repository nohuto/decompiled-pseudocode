/*
 * XREFs of PopExecutePowerAction @ 0x140530CA8
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140147464 (PopCheckAndHandleThermalConditions.c)
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     PopPolicySystemIdle @ 0x1403F4738 (PopPolicySystemIdle.c)
 *     NtInitiatePowerAction @ 0x140531044 (NtInitiatePowerAction.c)
 *     PopBatteryApplyCompositeState @ 0x1405443F0 (PopBatteryApplyCompositeState.c)
 *     NtInitializeRegistry @ 0x1405476A4 (NtInitializeRegistry.c)
 *     PopCriticalShutdown @ 0x14066EAB8 (PopCriticalShutdown.c)
 *     PdcPoSetPowerAction @ 0x14066FE00 (PdcPoSetPowerAction.c)
 *     PopIdleAoAcDozeToS4 @ 0x140674FA4 (PopIdleAoAcDozeToS4.c)
 * Callees:
 *     PopSetNotificationWork @ 0x1400085B4 (PopSetNotificationWork.c)
 *     PopGetPolicyWorker @ 0x140008680 (PopGetPolicyWorker.c)
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     PopSetPowerActionState @ 0x140114AF0 (PopSetPowerActionState.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PopDiagTraceShutdownAction @ 0x1402091BC (PopDiagTraceShutdownAction.c)
 *     PopCompleteAction @ 0x140530C60 (PopCompleteAction.c)
 *     PopPromoteActionFlag @ 0x140530FCC (PopPromoteActionFlag.c)
 *     PopCompareActions @ 0x140531018 (PopCompareActions.c)
 *     PopVerifyPowerActionPolicy @ 0x140540EF4 (PopVerifyPowerActionPolicy.c)
 *     PopVerifySystemPowerState @ 0x140543198 (PopVerifySystemPowerState.c)
 *     PopResetActionDefaults @ 0x140548C14 (PopResetActionDefaults.c)
 */

int __fastcall PopExecutePowerAction(__int64 a1, unsigned int a2, __int64 *a3, int a4, unsigned int a5)
{
  __int64 v5; // xmm0_8
  int v6; // esi
  int v8; // eax
  unsigned int v10; // edi
  unsigned int v11; // r14d
  int v12; // eax
  char v13; // r12
  int v14; // r11d
  int v15; // r9d
  int v16; // edx
  int v17; // r8d
  int v18; // r8d
  char v19; // dl
  int v20; // r11d
  char v21; // dl
  int v22; // r9d
  int v23; // r8d
  int v24; // r9d
  int v25; // r8d
  int v26; // r9d
  int v27; // edx
  int v28; // r8d
  unsigned int v29; // r11d
  unsigned int v30; // r11d
  char v31; // r8
  char v32; // r8
  int v33; // eax
  bool v34; // zf
  int v35; // ecx
  int v36; // eax
  __int64 v37; // rax
  __int64 *v38; // rdx
  LONG v39; // edx
  char v41; // [rsp+30h] [rbp-50h] BYREF
  int v42; // [rsp+38h] [rbp-48h] BYREF
  __int64 v43; // [rsp+40h] [rbp-40h] BYREF
  int v44; // [rsp+48h] [rbp-38h]
  __int64 v45; // [rsp+50h] [rbp-30h] BYREF
  int v46; // [rsp+58h] [rbp-28h]
  int v47; // [rsp+5Ch] [rbp-24h]
  __int64 *v48; // [rsp+60h] [rbp-20h] BYREF
  int v49; // [rsp+68h] [rbp-18h]
  int v50; // [rsp+6Ch] [rbp-14h]

  v5 = *a3;
  v6 = 0;
  v8 = *((_DWORD *)a3 + 2);
  v42 = a4;
  v43 = v5;
  v44 = v8;
  if ( (xmmword_1403AA2D0 & 0x8000) != 0 )
  {
    v50 = 0;
    v46 = v43;
    v47 = a4;
    v45 = a1;
    v48 = &v45;
    v49 = 16;
    EtwTraceKernelEvent((int)&v48, 1, 0x80008000, 4642, 4200450);
  }
  if ( (*(_DWORD *)(a1 + 4) & 0x80u) == 0 )
  {
LABEL_47:
    v39 = 0;
LABEL_49:
    LODWORD(v37) = PopCompleteAction(a1, v39);
    return v37;
  }
  PopVerifySystemPowerState(&v42, a5);
  if ( (unsigned __int8)PopVerifyPowerActionPolicy(&v43) )
  {
    v39 = -1073741637;
    goto LABEL_49;
  }
  v10 = v43;
  v11 = HIDWORD(v43);
  if ( (unsigned int)(v43 - 2) <= 1 )
  {
    v11 = HIDWORD(v43) | 0x80000000;
    HIDWORD(v43) |= 0x80000000;
  }
  v12 = *(_DWORD *)(a1 + 4);
  v13 = 0;
  if ( (v12 & 2) == 0 )
  {
    *(_DWORD *)(a1 + 4) = v12 | 2;
    if ( v10 == 6 && PsWin32CalloutsEstablished )
    {
      if ( *(_DWORD *)a1 == 2 )
      {
        v10 = 0;
        LODWORD(v43) = 0;
        v6 = (v43 & 0x1000000000LL) != 0 ? 16 : 32;
      }
      else if ( !*(_DWORD *)a1 )
      {
        v10 = 0;
        LODWORD(v43) = 0;
        v6 = byte_140303D84 != 0 ? 32 : 16;
        PopShutdownButtonPressTime = KeQueryPerformanceCounter(0LL).QuadPart;
      }
      PopDiagTraceShutdownAction(6, v6, *(_DWORD *)a1);
    }
    if ( v10 - 4 <= 2 )
      PopDiagTraceShutdownAction(v10, v6, *(_DWORD *)a1);
    if ( !byte_1403033A1 )
      PopResetActionDefaults();
    if ( v10 )
    {
      v41 = 0;
      if ( v10 == 7 )
        v11 |= 0x10000000u;
      v14 = v42;
      if ( v10 == 3 )
        v14 = 5;
      v42 = v14;
      if ( (int)PopCompareActions(v10, (unsigned int)qword_1403033A4) >= 0 )
      {
        PopPromoteActionFlag((unsigned int)&v41, 1, v11, 0, 1);
        PopPromoteActionFlag((unsigned int)&v41, v16, v17, 0, 2);
        PopPromoteActionFlag((unsigned int)&v41, 4, v18, 0, 0x10000000);
        if ( v10 == 2 )
        {
          if ( v20 < *((_DWORD *)PopPolicy + 17) )
            v20 = *((_DWORD *)PopPolicy + 17);
          v42 = v20;
        }
        if ( v20 > SHIDWORD(qword_1403033A4) )
        {
          v41 |= v19;
          HIDWORD(qword_1403033A4) = v20;
        }
      }
      LOBYTE(v15) = 1;
      PopPromoteActionFlag((unsigned int)&v41, 1, v11, v15, 4);
      LOBYTE(v22) = v21;
      PopPromoteActionFlag((unsigned int)&v41, 5, v23, v22, 0x80000000);
      LOBYTE(v24) = 1;
      PopPromoteActionFlag((unsigned int)&v41, 0, v25, v24, 0x40000000);
      LOBYTE(v26) = 1;
      PopPromoteActionFlag((unsigned int)&v41, v27, v28, v26, 8);
      if ( (int)PopCompareActions(v10, (unsigned int)qword_1403033A4) <= 0 )
      {
        v32 = v41;
      }
      else
      {
        PopCompareActions(v10, 3LL);
        if ( !(unsigned int)PopCompareActions(v30, 8LL) )
          v31 |= 2u;
        LODWORD(qword_1403033A4) = v10;
        v32 = v31 | 5;
        v33 = *(_DWORD *)a1;
        v29 = v10;
        dword_1403033B8 = 0;
        dword_1403033B4 = v33;
        v34 = *(_DWORD *)a1 == 0;
        v41 = v32;
        if ( v34 )
          dword_1403033B8 = *(_DWORD *)(a1 + 16);
      }
      if ( v29 == 3 )
        LODWORD(qword_1403033A4) = 2;
      if ( v32 )
      {
        v13 = 1;
        if ( (unsigned __int8)byte_1403033A1 < 2u )
        {
          PopSetPowerActionState(1);
          dword_1403033B0 = 0;
          v35 = 2;
        }
        else
        {
          PopAction |= v32;
          v35 = 1;
        }
        PopGetPolicyWorker(v35);
      }
    }
  }
  v36 = *(_DWORD *)(a1 + 4);
  if ( (v36 & 1) == 0 )
  {
    *(_DWORD *)(a1 + 4) = v36 | 1;
    if ( v6 == 32 )
    {
      if ( !_InterlockedExchange(&PopShutdownEventCode, 32) )
        a2 |= 0x10u;
    }
    else if ( v6 == 16 && !_InterlockedCompareExchange(&PopShutdownEventCode, 16, 0) )
    {
      a2 |= 0x10u;
    }
    PopSetNotificationWork(a2);
  }
  LODWORD(v37) = *(_DWORD *)(a1 + 4);
  if ( (v37 & 0x20) != 0 )
  {
    if ( v13 )
    {
      v38 = (__int64 *)qword_140303C48;
      v37 = *(_QWORD *)(a1 + 8) + 32LL;
      if ( *(__int64 **)qword_140303C48 != &PopActionWaiters )
        __fastfail(3u);
      *(_QWORD *)v37 = &PopActionWaiters;
      *(_QWORD *)(v37 + 8) = v38;
      *v38 = v37;
      qword_140303C48 = v37;
      return v37;
    }
    goto LABEL_47;
  }
  return v37;
}
