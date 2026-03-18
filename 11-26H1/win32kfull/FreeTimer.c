/*
 * XREFs of FreeTimer @ 0x140020580
 * Callers:
 *     FindTimer @ 0x14001FEF4 (FindTimer.c)
 *     NtUserKillTimer @ 0x140020EF0 (NtUserKillTimer.c)
 *     DestroyThreadsTimers @ 0x14009A500 (DestroyThreadsTimers.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x140137F4C (-InitiateWin32kCleanup@@YAHXZ.c)
 *     DestroyWindowsTimers @ 0x1401C81D4 (DestroyWindowsTimers.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAU_HEAD@@@Z @ 0x1400296A0 (--0IdentifyPrimaryDestroyTarget@@QEAA@PEAU_HEAD@@@Z.c)
 *     Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline @ 0x140099030 (Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DecTimerCountAndClearReadyFlag@@YAXPEAUtagTIMER@@@Z @ 0x14009906C (-DecTimerCountAndClearReadyFlag@@YAXPEAUtagTIMER@@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?DecTimerCount@@YAXPEAUtagTIMER@@@Z @ 0x1401A65C8 (-DecTimerCount@@YAXPEAUtagTIMER@@@Z.c)
 *     ??1IdentifyPrimaryDestroyTarget@@QEAA@XZ @ 0x1401BA348 (--1IdentifyPrimaryDestroyTarget@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct tagTIMER *__fastcall FreeTimer(struct tagTIMER *a1)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  char *v6; // rdi
  struct tagTIMER *v7; // r14
  char **v8; // rsi
  __int64 v9; // rcx
  char *v10; // rax
  char *v11; // rdi
  char **v12; // rsi
  __int64 v13; // rcx
  char *v14; // rax
  __int64 v15; // rdx
  struct tagTIMER **v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  struct tagTIMER **v20; // rcx
  __int64 v21; // rdx
  struct tagTIMER **v22; // rcx
  char *v23; // rcx
  __int64 v24; // rdx
  char **v25; // rax
  _BYTE v26[8]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v27; // [rsp+28h] [rbp-8h]
  char v28; // [rsp+68h] [rbp+38h] BYREF
  int v29; // [rsp+70h] [rbp+40h]

  if ( !(unsigned int)Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline() )
  {
    IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v28, a1);
    if ( (unsigned int)HMMarkObjectDestroy(a1) )
    {
      AtomicExecutionCheck::AtomicExecutionCheck(v26);
      if ( (*((_DWORD *)a1 + 12) & 1) != 0 )
        DecTimerCount(a1);
      v19 = *((_QWORD *)a1 + 9);
      if ( *(struct tagTIMER **)(v19 + 8) != (struct tagTIMER *)((char *)a1 + 72) )
        goto LABEL_38;
      v20 = (struct tagTIMER **)*((_QWORD *)a1 + 10);
      if ( *v20 != (struct tagTIMER *)((char *)a1 + 72) )
        goto LABEL_38;
      *v20 = (struct tagTIMER *)v19;
      *(_QWORD *)(v19 + 8) = v20;
      v21 = *((_QWORD *)a1 + 15);
      if ( *(struct tagTIMER **)(v21 + 8) != (struct tagTIMER *)((char *)a1 + 120) )
        goto LABEL_38;
      v22 = (struct tagTIMER **)*((_QWORD *)a1 + 16);
      if ( *v22 != (struct tagTIMER *)((char *)a1 + 120) )
        goto LABEL_38;
      *v22 = (struct tagTIMER *)v21;
      *(_QWORD *)(v21 + 8) = v22;
      v23 = (char *)a1 + 88;
      v24 = *((_QWORD *)a1 + 11);
      if ( *(struct tagTIMER **)(v24 + 8) != (struct tagTIMER *)((char *)a1 + 88) )
        goto LABEL_38;
      v25 = (char **)*((_QWORD *)a1 + 12);
      if ( *v25 != v23 )
        goto LABEL_38;
      *v25 = (char *)v24;
      *(_QWORD *)(v24 + 8) = v25;
      if ( !*((_QWORD *)a1 + 13) )
        _bittestandreset((signed __int32 *)(W32GetUserSessionState(v23, v24) + 57580), *((_DWORD *)a1 + 28) - 256);
      EtwTraceKillTimer(a1);
      HMAssignmentUnlock((char *)a1 + 104);
      HMFreeObject(a1);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v26);
    }
    IdentifyPrimaryDestroyTarget::~IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v28);
    return 0LL;
  }
  IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v28, a1);
  *((_DWORD *)a1 + 12) |= 0x1000u;
  if ( (*((_DWORD *)a1 + 12) & 1) != 0 )
    DecTimerCountAndClearReadyFlag(a1);
  if ( !(unsigned int)HMMarkObjectDestroy(a1) )
  {
    v2 = *((_QWORD *)a1 + 9);
    IdentifyPrimaryDestroyTarget::~IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v28);
    return (struct tagTIMER *)v2;
  }
  AtomicExecutionCheck::AtomicExecutionCheck(v26);
  if ( !*((_QWORD *)a1 + 13) )
    _bittestandreset((signed __int32 *)(W32GetUserSessionState(v5, v4) + 57580), *((_DWORD *)a1 + 28) - 256);
  EtwTraceKillTimer(a1);
  HMAssignmentUnlock((char *)a1 + 104);
  v6 = (char *)a1 + 72;
  v7 = (struct tagTIMER *)*((_QWORD *)a1 + 9);
  v8 = (char **)((char *)a1 + 80);
  if ( v7 == (struct tagTIMER *)((char *)a1 + 72) || *v8 == v6 )
  {
    v29 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 4559LL);
  }
  v9 = *(_QWORD *)v6;
  if ( *(char **)(*(_QWORD *)v6 + 8LL) != v6 )
    goto LABEL_38;
  v10 = *v8;
  if ( *(char **)*v8 != v6 )
    goto LABEL_38;
  *(_QWORD *)v10 = v9;
  *(_QWORD *)(v9 + 8) = v10;
  *v8 = v6;
  *(_QWORD *)v6 = v6;
  v11 = (char *)a1 + 120;
  v12 = (char **)((char *)a1 + 128);
  if ( *(char **)v11 == v11 || *v12 == v11 )
  {
    v29 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 4559LL);
  }
  v13 = *(_QWORD *)v11;
  if ( *(char **)(*(_QWORD *)v11 + 8LL) != v11
    || (v14 = *v12, *(char **)*v12 != v11)
    || (*(_QWORD *)v14 = v13,
        *(_QWORD *)(v13 + 8) = v14,
        *v12 = v11,
        *(_QWORD *)v11 = v11,
        v15 = *((_QWORD *)a1 + 11),
        *(struct tagTIMER **)(v15 + 8) != (struct tagTIMER *)((char *)a1 + 88))
    || (v16 = (struct tagTIMER **)*((_QWORD *)a1 + 12), *v16 != (struct tagTIMER *)((char *)a1 + 88)) )
  {
LABEL_38:
    __fastfail(3u);
  }
  *v16 = (struct tagTIMER *)v15;
  *(_QWORD *)(v15 + 8) = v16;
  HMFreeObject(a1);
  if ( v26[0] )
  {
    v18 = v27;
    --*(_DWORD *)(v27 + 28);
  }
  if ( v28 )
    *(_QWORD *)(W32GetUserSessionState(v18, v17) + 19800) = 0LL;
  return v7;
}
