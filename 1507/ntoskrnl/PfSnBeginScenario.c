/*
 * XREFs of PfSnBeginScenario @ 0x1404FD948
 * Callers:
 *     PfSnBeginAppLaunch @ 0x14044404C (PfSnBeginAppLaunch.c)
 *     PfSnOperationProcess @ 0x1406AFE3C (PfSnOperationProcess.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     PfSnStartTraceTimer @ 0x140129BE4 (PfSnStartTraceTimer.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PfSnPrefetchScenario @ 0x1404F502C (PfSnPrefetchScenario.c)
 *     PfSnGetPrefetchInstructions @ 0x1404F61EC (PfSnGetPrefetchInstructions.c)
 *     PfSnLogScenarioDecision @ 0x1404FD7D4 (PfSnLogScenarioDecision.c)
 *     PfSnCheckActionsNeeded @ 0x1404FDC54 (PfSnCheckActionsNeeded.c)
 *     PfSnBeginTrace @ 0x140543FC8 (PfSnBeginTrace.c)
 */

__int64 __fastcall PfSnBeginScenario(__int64 a1, __int64 a2, unsigned int a3, unsigned __int8 a4)
{
  unsigned __int64 CurrentThread; // r13
  __int64 v6; // rdi
  __int16 v8; // bx
  int v9; // edx
  _KPROCESS *v10; // rax
  char v11; // r14
  __int64 v12; // r9
  _DWORD *v13; // rsi
  unsigned int started; // r15d
  struct _EX_RUNDOWN_REF *v15; // rsi
  int v17; // eax
  unsigned __int64 v18; // rtt
  int v19; // eax
  char v20; // [rsp+40h] [rbp-20h]
  int v21; // [rsp+44h] [rbp-1Ch] BYREF
  int v22; // [rsp+48h] [rbp-18h] BYREF
  int v23; // [rsp+4Ch] [rbp-14h]
  PVOID P; // [rsp+50h] [rbp-10h] BYREF
  struct _EX_RUNDOWN_REF *v25; // [rsp+58h] [rbp-8h] BYREF

  CurrentThread = (unsigned __int64)KeGetCurrentThread();
  v23 = -1;
  v6 = -1LL;
  P = 0LL;
  v8 = 0;
  v20 = *(_BYTE *)(CurrentThread + 562);
  v9 = (*(_DWORD *)(CurrentThread + 1724) >> 9) & 7;
  v10 = *(_KPROCESS **)(CurrentThread + 544);
  *(_BYTE *)(CurrentThread + 562) = 0;
  v25 = 0LL;
  if ( (v10[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    v9 = 0;
  if ( v9 < 2 )
  {
    if ( (struct _KTHREAD *)CurrentThread == KeGetCurrentThread() && *(_DWORD *)(CurrentThread + 1788) )
      v9 = 2;
    if ( v9 < 2 )
    {
      v21 = 0;
      started = 1075380276;
      v22 = 0;
      goto LABEL_18;
    }
  }
  v11 = 1;
  if ( _InterlockedIncrement(&dword_1403536A0) < (unsigned int)dword_140353338 )
  {
    v8 = PfSnCheckActionsNeeded(a2, a3, CurrentThread, (unsigned int)&v21, (__int64)&v22);
    if ( (a4 & 2) != 0 )
    {
      v8 &= ~2u;
      v22 = 9;
    }
    if ( (v8 & 2) != 0 )
    {
      if ( (int)PfSnGetPrefetchInstructions(a2, a3, &P, v12) >= 0 )
      {
        v13 = P;
        v6 = MEMORY[0xFFFFF78000000014] - *((_QWORD *)P + 16);
        if ( v6 < *((_QWORD *)P + 25) && v21 != 22 )
        {
          v8 &= ~1u;
          v21 = 11;
        }
        if ( v6 < *((_QWORD *)P + 24) && v22 != 22 )
        {
          v8 &= ~2u;
          v22 = 12;
        }
        v23 = *((_DWORD *)P + 52);
LABEL_9:
        if ( (a4 & 4) != 0 )
        {
          v8 &= ~1u;
          v21 = 8;
        }
        if ( (v8 & 1) != 0 )
        {
          v17 = PfSnBeginTrace(a2, a3, a1, CurrentThread & -(__int64)((a4 & 1) != 0), (a4 >> 3) & 1, &v25);
          if ( v17 < 0 )
          {
            switch ( v17 )
            {
              case -1073741618:
                v21 = 16;
                break;
              case -1073741670:
                v21 = 17;
                break;
              case -1072037882:
                v21 = 18;
                break;
              case -1073741791:
                v21 = 19;
                break;
              default:
                v21 = (v17 != -1073741661) + 20;
                break;
            }
          }
        }
        if ( (v8 & 2) != 0 )
        {
          if ( (v13[54] & 3) != 0 )
            a4 |= 0x10u;
          v19 = PfSnPrefetchScenario(v13, a4);
          P = 0LL;
          v13 = 0LL;
          if ( v19 >= 0 )
            v11 = 0;
        }
        started = 0;
        if ( !v11 )
          goto LABEL_15;
        goto LABEL_14;
      }
      v8 &= ~2u;
      v22 = 10;
    }
    v13 = P;
    goto LABEL_9;
  }
  v21 = 1;
  started = -1073741631;
  v22 = 1;
LABEL_14:
  _InterlockedDecrement(&dword_1403536A0);
  v13 = P;
LABEL_15:
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  v15 = v25;
  if ( v25 )
  {
    started = PfSnStartTraceTimer(v25);
    _m_prefetchw(&v15[45]);
    v18 = v15[45].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v18 != _InterlockedCompareExchange64((volatile signed __int64 *)&v15[45], v18 - 2, v18) )
      ExfReleaseRundownProtection(v15 + 45);
  }
LABEL_18:
  PfSnLogScenarioDecision(a2, a3, v8, v21, v22, v23, v6);
  *(_BYTE *)(CurrentThread + 562) = v20;
  return started;
}
