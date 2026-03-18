/*
 * XREFs of PopExecutePowerAction @ 0x1404F6DC0
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140142CE0 (PopCheckAndHandleThermalConditions.c)
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 *     PopPolicySystemIdle @ 0x140456A94 (PopPolicySystemIdle.c)
 *     NtInitiatePowerAction @ 0x1404F6BCC (NtInitiatePowerAction.c)
 *     PopBatteryApplyCompositeState @ 0x1404F9820 (PopBatteryApplyCompositeState.c)
 *     NtInitializeRegistry @ 0x14050C454 (NtInitializeRegistry.c)
 *     PopCriticalShutdown @ 0x14063662C (PopCriticalShutdown.c)
 *     PdcPoSetPowerAction @ 0x140637A74 (PdcPoSetPowerAction.c)
 *     PopIdleAoAcDozeToS4 @ 0x14063C808 (PopIdleAoAcDozeToS4.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     PopSetNotificationWork @ 0x140097574 (PopSetNotificationWork.c)
 *     PopGetPolicyWorker @ 0x1400975A0 (PopGetPolicyWorker.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PopDiagTraceShutdownAction @ 0x1401F05B4 (PopDiagTraceShutdownAction.c)
 *     PopPromoteActionFlag @ 0x1404F70E4 (PopPromoteActionFlag.c)
 *     PopCompareActions @ 0x1404F7130 (PopCompareActions.c)
 *     PopCompleteAction @ 0x1404F7660 (PopCompleteAction.c)
 *     PopVerifyPowerActionPolicy @ 0x140509A08 (PopVerifyPowerActionPolicy.c)
 *     PopVerifySystemPowerState @ 0x14050A114 (PopVerifySystemPowerState.c)
 *     PopResetActionDefaults @ 0x14050D0B0 (PopResetActionDefaults.c)
 */

__int64 __fastcall PopExecutePowerAction(__int64 a1, unsigned int a2, __int64 *a3, int a4, unsigned int a5)
{
  __int64 v5; // xmm0_8
  int v6; // r14d
  int v8; // eax
  unsigned int v10; // edi
  unsigned int v11; // esi
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
  __int64 result; // rax
  __int64 **v38; // rdx
  __int64 v39; // rdx
  char v40; // [rsp+30h] [rbp-50h] BYREF
  int v41; // [rsp+38h] [rbp-48h] BYREF
  __int64 v42; // [rsp+40h] [rbp-40h] BYREF
  int v43; // [rsp+48h] [rbp-38h]
  __int64 v44; // [rsp+50h] [rbp-30h] BYREF
  int v45; // [rsp+58h] [rbp-28h]
  int v46; // [rsp+5Ch] [rbp-24h]
  __int64 *v47; // [rsp+60h] [rbp-20h] BYREF
  int v48; // [rsp+68h] [rbp-18h]
  int v49; // [rsp+6Ch] [rbp-14h]

  v5 = *a3;
  v6 = 0;
  v8 = *((_DWORD *)a3 + 2);
  v41 = a4;
  v42 = v5;
  v43 = v8;
  if ( (xmmword_140382290 & 0x8000) != 0 )
  {
    v49 = 0;
    v45 = v42;
    v46 = a4;
    v44 = a1;
    v47 = &v44;
    v48 = 16;
    EtwTraceKernelEvent((int)&v47, 1, 0x80008000, 0x1222u, 4200450);
  }
  if ( (*(_DWORD *)(a1 + 4) & 0x80u) == 0 )
  {
LABEL_47:
    v39 = 0LL;
    return PopCompleteAction(a1, v39);
  }
  PopVerifySystemPowerState(&v41, a5);
  if ( (unsigned __int8)PopVerifyPowerActionPolicy(&v42) )
  {
    v39 = 3221225659LL;
    return PopCompleteAction(a1, v39);
  }
  v10 = v42;
  v11 = HIDWORD(v42);
  if ( (unsigned int)(v42 - 2) <= 1 )
  {
    v11 = HIDWORD(v42) | 0x80000000;
    HIDWORD(v42) |= 0x80000000;
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
        v6 = 32;
        LODWORD(v42) = 0;
      }
      else if ( !*(_DWORD *)a1 )
      {
        v10 = 0;
        LODWORD(v42) = 0;
        v6 = byte_1402DE2C4 != 0 ? 32 : 16;
        PopShutdownButtonPressTime = KeQueryPerformanceCounter(0LL).QuadPart;
      }
      PopDiagTraceShutdownAction(6, v6, *(_DWORD *)a1);
    }
    if ( v10 - 4 <= 2 )
      PopDiagTraceShutdownAction(v10, v6, *(_DWORD *)a1);
    if ( !byte_1402DE081 )
      PopResetActionDefaults();
    if ( v10 )
    {
      v40 = 0;
      if ( v10 == 7 )
        v11 |= 0x10000000u;
      v14 = v41;
      if ( v10 == 3 )
        v14 = 5;
      v41 = v14;
      if ( (int)PopCompareActions(v10, (unsigned int)qword_1402DE084) >= 0 )
      {
        PopPromoteActionFlag((unsigned int)&v40, 1, v11, 0, 1);
        PopPromoteActionFlag((unsigned int)&v40, v16, v17, 0, 2);
        PopPromoteActionFlag((unsigned int)&v40, 4, v18, 0, 0x10000000);
        if ( v10 == 2 )
        {
          if ( v20 < *((_DWORD *)PopPolicy + 17) )
            v20 = *((_DWORD *)PopPolicy + 17);
          v41 = v20;
        }
        if ( v20 > SHIDWORD(qword_1402DE084) )
        {
          v40 |= v19;
          HIDWORD(qword_1402DE084) = v20;
        }
      }
      LOBYTE(v15) = 1;
      PopPromoteActionFlag((unsigned int)&v40, 1, v11, v15, 4);
      LOBYTE(v22) = v21;
      PopPromoteActionFlag((unsigned int)&v40, 5, v23, v22, 0x80000000);
      LOBYTE(v24) = 1;
      PopPromoteActionFlag((unsigned int)&v40, 0, v25, v24, 0x40000000);
      LOBYTE(v26) = 1;
      PopPromoteActionFlag((unsigned int)&v40, v27, v28, v26, 8);
      if ( (int)PopCompareActions(v10, (unsigned int)qword_1402DE084) <= 0 )
      {
        v32 = v40;
      }
      else
      {
        PopCompareActions(v10, 3LL);
        if ( !(unsigned int)PopCompareActions(v30, 8LL) )
          v31 |= 2u;
        LODWORD(qword_1402DE084) = v10;
        v32 = v31 | 5;
        v33 = *(_DWORD *)a1;
        v29 = v10;
        dword_1402DE098 = 0;
        dword_1402DE094 = v33;
        v34 = *(_DWORD *)a1 == 0;
        v40 = v32;
        if ( v34 )
          dword_1402DE098 = *(_DWORD *)(a1 + 16);
      }
      if ( v29 == 3 )
        LODWORD(qword_1402DE084) = 2;
      if ( v32 )
      {
        v13 = 1;
        if ( (unsigned __int8)byte_1402DE081 < 2u )
        {
          dword_1402DE090 = 0;
          v35 = 2;
          byte_1402DE081 = 1;
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
    PopSetNotificationWork(a2, 1LL);
  }
  result = *(unsigned int *)(a1 + 4);
  if ( (result & 0x20) != 0 )
  {
    if ( v13 )
    {
      v38 = (__int64 **)qword_1402DDE48;
      result = *(_QWORD *)(a1 + 8) + 32LL;
      *(_QWORD *)result = &PopActionWaiters;
      *(_QWORD *)(result + 8) = v38;
      if ( *v38 != &PopActionWaiters )
        __fastfail(3u);
      *v38 = (__int64 *)result;
      qword_1402DDE48 = result;
      return result;
    }
    goto LABEL_47;
  }
  return result;
}
