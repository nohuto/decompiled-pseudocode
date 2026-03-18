/*
 * XREFs of PfSnBeginScenario @ 0x1404D6D78
 * Callers:
 *     PfSnOperationProcess @ 0x1404C470C (PfSnOperationProcess.c)
 *     PfSnBeginAppLaunch @ 0x1404D64B4 (PfSnBeginAppLaunch.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     PsGetIoPriorityThread @ 0x140070170 (PsGetIoPriorityThread.c)
 *     PfSnStartTraceTimer @ 0x1400FAD0C (PfSnStartTraceTimer.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PfSnGetPrefetchInstructions @ 0x1404D439C (PfSnGetPrefetchInstructions.c)
 *     PfSnBeginTrace @ 0x1404D5984 (PfSnBeginTrace.c)
 *     PfSnLogScenarioDecision @ 0x1404D7040 (PfSnLogScenarioDecision.c)
 *     PfSnCheckActionsNeeded @ 0x1404D78A0 (PfSnCheckActionsNeeded.c)
 *     PfSnPrefetchScenario @ 0x1404DFA78 (PfSnPrefetchScenario.c)
 */

__int64 __fastcall PfSnBeginScenario(void *a1, _OWORD *a2, int a3, unsigned int a4)
{
  __int64 CurrentThread; // r13
  __int64 v7; // rsi
  int v8; // ebx
  __int64 v9; // rdi
  int v10; // r8d
  unsigned __int8 v11; // r14
  _DWORD *v12; // rsi
  unsigned int started; // r15d
  struct _EX_RUNDOWN_REF *v14; // rsi
  int v16; // eax
  int v17; // eax
  char v18; // [rsp+40h] [rbp-20h]
  int v19; // [rsp+44h] [rbp-1Ch] BYREF
  int v20; // [rsp+48h] [rbp-18h] BYREF
  int v21; // [rsp+4Ch] [rbp-14h]
  PVOID P; // [rsp+50h] [rbp-10h] BYREF
  struct _EX_RUNDOWN_REF *v23; // [rsp+58h] [rbp-8h] BYREF

  CurrentThread = (__int64)KeGetCurrentThread();
  v21 = -1;
  P = 0LL;
  v7 = (__int64)a2;
  v23 = 0LL;
  v8 = 0;
  v18 = *(_BYTE *)(CurrentThread + 562);
  v9 = -1LL;
  *(_BYTE *)(CurrentThread + 562) = 0;
  if ( (int)PsGetIoPriorityThread(CurrentThread) < 2 )
  {
    v19 = v10;
    started = 1075380276;
    v20 = v10;
    goto LABEL_18;
  }
  v11 = v10 + 1;
  if ( v10 + 1 + _InterlockedExchangeAdd(&dword_140305930, v10 + 1) < (unsigned int)dword_1403055C8 )
  {
    v8 = PfSnCheckActionsNeeded(v7, a3, CurrentThread, (unsigned int)&v19, (__int64)&v20);
    if ( (a4 & 2) != 0 )
    {
      v8 &= ~2u;
      v20 = 9;
    }
    if ( (v8 & 2) != 0 )
    {
      if ( (int)PfSnGetPrefetchInstructions(v7, a3, (unsigned int **)&P) >= 0 )
      {
        v12 = P;
        v9 = MEMORY[0xFFFFF78000000014] - *((_QWORD *)P + 16);
        if ( v9 < *((_QWORD *)P + 25) && v19 != 22 )
        {
          v8 &= ~1u;
          v19 = 11;
        }
        if ( v9 < *((_QWORD *)P + 24) && v20 != 22 )
        {
          v8 &= ~2u;
          v20 = 12;
        }
        v21 = *((_DWORD *)P + 52);
LABEL_7:
        if ( (a4 & 4) != 0 )
        {
          v8 &= ~1u;
          v19 = 8;
        }
        if ( ((unsigned __int8)v8 & v11) != 0 )
        {
          v16 = PfSnBeginTrace(
                  a2,
                  a3,
                  a1,
                  (struct _KTHREAD *)(CurrentThread & -(__int64)((v11 & (unsigned __int8)a4) != 0)),
                  *(_DWORD *)&v11 & ((unsigned __int8)a4 >> 3),
                  (__int64 *)&v23);
          if ( v16 < 0 )
          {
            switch ( v16 )
            {
              case -1073741618:
                v19 = 16;
                break;
              case -1073741670:
                v19 = 17;
                break;
              case -1072037882:
                v19 = 18;
                break;
              case -1073741791:
                v19 = 19;
                break;
              default:
                v19 = (v16 != -1073741661) + 20;
                break;
            }
          }
        }
        if ( (v8 & 2) != 0 )
        {
          if ( (v12[54] & 3) != 0 )
            a4 |= 0x10u;
          v17 = PfSnPrefetchScenario(v12, a4, 0LL);
          P = 0LL;
          v12 = 0LL;
          if ( v17 >= 0 )
            v11 = 0;
        }
        started = 0;
        if ( !v11 )
          goto LABEL_13;
        goto LABEL_12;
      }
      v8 &= ~2u;
      v20 = 10;
    }
    v12 = P;
    goto LABEL_7;
  }
  v19 = v10 + 1;
  started = -1073741631;
  v20 = v10 + 1;
LABEL_12:
  _InterlockedDecrement(&dword_140305930);
  v12 = P;
LABEL_13:
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  v14 = v23;
  if ( v23 )
  {
    started = PfSnStartTraceTimer(v23);
    ExReleaseRundownProtection_0(v14 + 45);
  }
  LODWORD(v7) = (_DWORD)a2;
LABEL_18:
  PfSnLogScenarioDecision(v7, a3, v8, v19, v20, v21, v9);
  *(_BYTE *)(CurrentThread + 562) = v18;
  return started;
}
