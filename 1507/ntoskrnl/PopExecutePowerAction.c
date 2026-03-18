/*
 * XREFs of PopExecutePowerAction @ 0x1405654E8
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140170C90 (PopCheckAndHandleThermalConditions.c)
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 *     PopPolicySystemIdle @ 0x1404E3E64 (PopPolicySystemIdle.c)
 *     NtInitiatePowerAction @ 0x140565308 (NtInitiatePowerAction.c)
 *     PopBatteryApplyCompositeState @ 0x14056B6B4 (PopBatteryApplyCompositeState.c)
 *     PopCriticalShutdown @ 0x1406B5F3C (PopCriticalShutdown.c)
 *     PdcPoSetPowerAction @ 0x1406B77CC (PdcPoSetPowerAction.c)
 *     PopIdleAoAcDozeToS4 @ 0x1406BCE08 (PopIdleAoAcDozeToS4.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     PopGetPolicyWorker @ 0x1400D042C (PopGetPolicyWorker.c)
 *     PopSetNotificationWork @ 0x1400D0780 (PopSetNotificationWork.c)
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PopDiagTraceShutdownAction @ 0x14023E9A0 (PopDiagTraceShutdownAction.c)
 *     PopSystemStateString @ 0x1404032B4 (PopSystemStateString.c)
 *     PopCompareActions @ 0x14055D1B0 (PopCompareActions.c)
 *     PopPromoteActionFlag @ 0x1405658F8 (PopPromoteActionFlag.c)
 *     PopCompleteAction @ 0x140566224 (PopCompleteAction.c)
 *     PopVerifyPowerActionPolicy @ 0x140580284 (PopVerifyPowerActionPolicy.c)
 *     PopVerifySystemPowerState @ 0x140580970 (PopVerifySystemPowerState.c)
 *     PopResetActionDefaults @ 0x140584484 (PopResetActionDefaults.c)
 *     PopPowerActionString @ 0x1406B07B0 (PopPowerActionString.c)
 */

__int64 __fastcall PopExecutePowerAction(__int64 a1, unsigned int a2, __int64 *a3, int a4, unsigned int a5)
{
  __int64 v5; // xmm0_8
  int v6; // r14d
  int v8; // eax
  const char *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  const char *v13; // rax
  const char *v14; // r9
  __int64 v15; // rdx
  int v16; // edi
  unsigned int v17; // esi
  int v18; // eax
  char v19; // r12
  int v20; // r11d
  int v21; // r9d
  int v22; // edx
  int v23; // r8d
  int v24; // r8d
  char v25; // dl
  int v26; // r11d
  char v27; // dl
  int v28; // r9d
  int v29; // r8d
  int v30; // r9d
  int v31; // r8d
  int v32; // r9d
  int v33; // edx
  int v34; // r8d
  int v35; // r11d
  int v36; // r11d
  char v37; // r8
  char v38; // r8
  int v39; // eax
  bool v40; // zf
  int v41; // ecx
  int v42; // eax
  __int64 result; // rax
  __int64 **v44; // rdx
  char v45; // [rsp+30h] [rbp-50h] BYREF
  int v46; // [rsp+38h] [rbp-48h] BYREF
  __int64 v47; // [rsp+40h] [rbp-40h] BYREF
  int v48; // [rsp+48h] [rbp-38h]
  __int64 v49; // [rsp+50h] [rbp-30h] BYREF
  int v50; // [rsp+58h] [rbp-28h]
  int v51; // [rsp+5Ch] [rbp-24h]
  __int64 *v52; // [rsp+60h] [rbp-20h] BYREF
  int v53; // [rsp+68h] [rbp-18h]
  int v54; // [rsp+6Ch] [rbp-14h]

  v5 = *a3;
  v6 = 0;
  v8 = *((_DWORD *)a3 + 2);
  v46 = a4;
  v47 = v5;
  v48 = v8;
  if ( (xmmword_1403D1290 & 0x8000) != 0 )
  {
    v54 = 0;
    v50 = v47;
    v51 = a4;
    v49 = a1;
    v52 = &v49;
    v53 = 16;
    EtwTraceKernelEvent((int)&v52, 1, 0x80008000, 0x1222u, 4200450);
  }
  if ( (*(_DWORD *)(a1 + 4) & 0x80u) == 0 )
    goto LABEL_60;
  if ( (PoDebug & 8) != 0 )
  {
    v10 = PopSystemStateString(v46);
    v13 = (const char *)PopPowerActionString((unsigned int)v47, v11, v12, v10);
    DbgPrint("PopExecutePowerAction: %s, Flags %x, Min=%s\n", v13, HIDWORD(v47), v14);
  }
  PopVerifySystemPowerState(&v46, a5);
  if ( (unsigned __int8)PopVerifyPowerActionPolicy(&v47) )
  {
    v15 = 3221225659LL;
    return PopCompleteAction(a1, v15);
  }
  v16 = v47;
  v17 = HIDWORD(v47);
  if ( (unsigned int)(v47 - 2) <= 1 )
  {
    v17 = HIDWORD(v47) | 0x80000000;
    HIDWORD(v47) |= 0x80000000;
  }
  v18 = *(_DWORD *)(a1 + 4);
  v19 = 0;
  if ( (v18 & 2) == 0 )
  {
    *(_DWORD *)(a1 + 4) = v18 | 2;
    if ( v16 == 6 && PsWin32CalloutsEstablished )
    {
      if ( *(_DWORD *)a1 == 2 )
      {
        v16 = 0;
        v6 = 32;
        LODWORD(v47) = 0;
      }
      else if ( !*(_DWORD *)a1 )
      {
        v16 = 0;
        LODWORD(v47) = 0;
        v6 = byte_14032E884 != 0 ? 32 : 16;
        PopShutdownButtonPressTime = KeQueryPerformanceCounter(0LL).QuadPart;
      }
      PopDiagTraceShutdownAction(6, v6, *(_DWORD *)a1);
    }
    if ( (unsigned int)(v16 - 4) <= 2 )
      PopDiagTraceShutdownAction(v16, v6, *(_DWORD *)a1);
    if ( !byte_14032E641 )
      PopResetActionDefaults();
    if ( v16 )
    {
      v45 = 0;
      if ( v16 == 7 )
        v17 |= 0x10000000u;
      v20 = v46;
      if ( v16 == 3 )
        v20 = 5;
      v46 = v20;
      if ( (int)PopCompareActions(v16, qword_14032E644) >= 0 )
      {
        PopPromoteActionFlag((unsigned int)&v45, 1, v17, 0, 1);
        PopPromoteActionFlag((unsigned int)&v45, v22, v23, 0, 2);
        PopPromoteActionFlag((unsigned int)&v45, 4, v24, 0, 0x10000000);
        if ( v16 == 2 )
        {
          if ( v26 < *((_DWORD *)PopPolicy + 17) )
            v26 = *((_DWORD *)PopPolicy + 17);
          v46 = v26;
        }
        if ( v26 > SHIDWORD(qword_14032E644) )
        {
          v45 |= v25;
          HIDWORD(qword_14032E644) = v26;
        }
      }
      LOBYTE(v21) = 1;
      PopPromoteActionFlag((unsigned int)&v45, 1, v17, v21, 4);
      LOBYTE(v28) = v27;
      PopPromoteActionFlag((unsigned int)&v45, 5, v29, v28, 0x80000000);
      LOBYTE(v30) = 1;
      PopPromoteActionFlag((unsigned int)&v45, 0, v31, v30, 0x40000000);
      LOBYTE(v32) = 1;
      PopPromoteActionFlag((unsigned int)&v45, v33, v34, v32, 8);
      if ( (int)PopCompareActions(v16, qword_14032E644) <= 0 )
      {
        v38 = v45;
      }
      else
      {
        PopCompareActions(v16, 3);
        if ( !(unsigned int)PopCompareActions(v36, 8) )
          v37 |= 2u;
        LODWORD(qword_14032E644) = v16;
        v38 = v37 | 5;
        v39 = *(_DWORD *)a1;
        v35 = v16;
        dword_14032E658 = 0;
        dword_14032E654 = v39;
        v40 = *(_DWORD *)a1 == 0;
        v45 = v38;
        if ( v40 )
          dword_14032E658 = *(_DWORD *)(a1 + 16);
      }
      if ( v35 == 3 )
        LODWORD(qword_14032E644) = 2;
      if ( v38 )
      {
        v19 = 1;
        if ( (unsigned __int8)byte_14032E641 < 2u )
        {
          dword_14032E650 = 0;
          v41 = 2;
          byte_14032E641 = 1;
        }
        else
        {
          PopAction |= v38;
          v41 = 1;
        }
        PopGetPolicyWorker(v41);
      }
    }
  }
  v42 = *(_DWORD *)(a1 + 4);
  if ( (v42 & 1) == 0 )
  {
    *(_DWORD *)(a1 + 4) = v42 | 1;
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
  result = *(unsigned int *)(a1 + 4);
  if ( (result & 0x20) != 0 )
  {
    if ( v19 )
    {
      v44 = (__int64 **)qword_14032E408;
      result = *(_QWORD *)(a1 + 8) + 32LL;
      *(_QWORD *)result = &PopActionWaiters;
      *(_QWORD *)(result + 8) = v44;
      if ( *v44 != &PopActionWaiters )
        __fastfail(3u);
      *v44 = (__int64 *)result;
      qword_14032E408 = result;
      return result;
    }
LABEL_60:
    v15 = 0LL;
    return PopCompleteAction(a1, v15);
  }
  return result;
}
