/*
 * XREFs of KiSetSystemTimeDpc @ 0x14012045C
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x14002D4E8 (RtlGetSystemTimePrecise.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     KeAdjustInterruptTime @ 0x140117958 (KeAdjustInterruptTime.c)
 *     KiSelectActiveTimerTable @ 0x14012060C (KiSelectActiveTimerTable.c)
 *     KiAdjustTimerDueTimes @ 0x140120638 (KiAdjustTimerDueTimes.c)
 *     KiUpdateSystemTime @ 0x140120A30 (KiUpdateSystemTime.c)
 */

void __fastcall KiSetSystemTimeDpc(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  __int64 v6; // rsi
  signed __int32 v7; // eax
  unsigned int v8; // ebx
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 active; // r14
  signed __int32 v13; // eax
  unsigned int v14; // ebx
  signed __int32 v15; // eax
  unsigned int v16; // ebx
  LARGE_INTEGER *v17; // rbx
  unsigned int v18; // eax
  __int64 v19; // r9
  _QWORD *v20; // rcx
  __int64 v21; // r9
  __int64 v22; // rax
  _DWORD v23[4]; // [rsp+30h] [rbp-38h] BYREF
  int v24; // [rsp+78h] [rbp+10h] BYREF
  int v25; // [rsp+88h] [rbp+20h] BYREF

  v6 = a2;
  v7 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x7FFFFFFF) != 0 )
  {
    v24 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v8 )
      KeYieldProcessorEx(&v24, a2, (__int64)a3);
  }
  else
  {
    *(_DWORD *)a4 = v8 | *(_DWORD *)(a4 + 4);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  LOBYTE(a2) = 1;
  active = KiSelectActiveTimerTable(CurrentPrcb, a2);
  if ( CurrentPrcb->ClockOwner )
  {
    v17 = *(LARGE_INTEGER **)(v6 + 16);
    *v17 = RtlGetSystemTimePrecise();
    v18 = *(_DWORD *)(v6 + 4);
    v19 = **(_QWORD **)(v6 + 8);
    v20 = *(_QWORD **)(v6 + 16);
    *(_QWORD *)(v6 + 24) = v19;
    v21 = v19 - *v20;
    *(_QWORD *)(v6 + 24) = v21;
    if ( (v18 & 1) != 0 )
    {
      if ( KeAdjustInterruptTime(v21, (v18 & 2) != 0) )
      {
        v22 = -*(_QWORD *)(v6 + 24);
        *(_BYTE *)v6 = 1;
        *(_QWORD *)(v6 + 24) = v22;
      }
    }
    else
    {
      KiUpdateSystemTime(v21, 0LL, v18);
    }
  }
  v13 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v14 = ~v13 & 0x80000000;
  if ( (v13 & 0x7FFFFFFF) != 0 )
  {
    v25 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v14 )
      KeYieldProcessorEx(&v25, v10, v11);
  }
  else
  {
    *(_DWORD *)a4 = v14 | *(_DWORD *)(a4 + 4);
  }
  if ( *(_QWORD *)(v6 + 24) )
  {
    if ( active )
      KiAdjustTimerDueTimes(CurrentPrcb, active, v6);
    v15 = _InterlockedDecrement((volatile signed __int32 *)a4);
    v16 = ~v15 & 0x80000000;
    if ( (v15 & 0x7FFFFFFF) != 0 )
    {
      v23[0] = 0;
      while ( (*(_DWORD *)a4 & 0x80000000) != v16 )
        KeYieldProcessorEx(v23, v10, v11);
    }
    else
    {
      *(_DWORD *)a4 = v16 | *(_DWORD *)(a4 + 4);
    }
  }
  _InterlockedDecrement(a3);
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, 0LL, 2u);
}
