/*
 * XREFs of KiAcquireThreadStateLock @ 0x1400D1430
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14005CE50 (ExpApplyPriorityBoost.c)
 *     KeQueryTotalCycleTimeThread @ 0x14009553C (KeQueryTotalCycleTimeThread.c)
 *     KiSetThreadSchedulingGroup @ 0x1400C6A60 (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1400C6B2C (KiRemoveThreadFromSchedulingGroup.c)
 *     KeSetIdealProcessorThreadEx @ 0x1400C8244 (KeSetIdealProcessorThreadEx.c)
 *     KiSetAffinityThread @ 0x1400C885C (KiSetAffinityThread.c)
 *     KiApplyForegroundBoostThread @ 0x1400C8BFC (KiApplyForegroundBoostThread.c)
 *     KiSetPriorityThread @ 0x1400D0A40 (KiSetPriorityThread.c)
 *     KeSetPriorityThread @ 0x1400D0DC0 (KeSetPriorityThread.c)
 *     KeUpdateThreadTag @ 0x14010D73C (KeUpdateThreadTag.c)
 *     KeTryToFreezeThreadStack @ 0x1401D2DD0 (KeTryToFreezeThreadStack.c)
 *     KiUpdateThreadCpuSets @ 0x1401D7938 (KiUpdateThreadCpuSets.c)
 *     KiSetHeteroPolicyThread @ 0x1401D8180 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KiAcquireThreadStateLock(__int64 a1, __int64 *a2, volatile signed __int32 **a3)
{
  int v6; // edi
  __int64 v7; // rbx
  volatile signed __int32 *v8; // r14
  __int64 v9; // rax
  __int64 result; // rax
  char v11; // al
  __int64 v12; // r12
  __int64 v13; // r12
  __int64 v14; // rax
  int v15; // [rsp+20h] [rbp-48h] BYREF
  _DWORD v16[17]; // [rsp+24h] [rbp-44h] BYREF
  int v17; // [rsp+70h] [rbp+8h] BYREF
  int v18; // [rsp+88h] [rbp+20h] BYREF

  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v6 = *(unsigned __int8 *)(a1 + 388);
          v7 = 0LL;
          v8 = 0LL;
          if ( v6 != 2 )
            break;
LABEL_2:
          v9 = *(unsigned int *)(a1 + 536);
          if ( (int)v9 >= 0 )
          {
            v7 = KiProcessorBlock[v9];
            v16[0] = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
            {
              do
                KeYieldProcessorEx(v16);
              while ( *(_QWORD *)(v7 + 48) );
            }
            if ( a1 == *(_QWORD *)(v7 + 8) )
              goto LABEL_6;
            goto LABEL_40;
          }
        }
        if ( *(_BYTE *)(a1 + 388) == 1 )
          break;
        if ( *(_BYTE *)(a1 + 388) != 3 )
        {
          if ( *(_BYTE *)(a1 + 388) != 5 )
            goto LABEL_6;
          v11 = *(_BYTE *)(a1 + 112) & 7;
          if ( v11 == 1 || (unsigned __int8)(v11 - 3) <= 3u )
            goto LABEL_6;
          LOBYTE(v6) = 2;
          goto LABEL_2;
        }
        v12 = *(unsigned int *)(a1 + 536);
        if ( (int)v12 >= 0 )
        {
          v7 = KiProcessorBlock[v12];
          v17 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
          {
            do
              KeYieldProcessorEx(&v17);
            while ( *(_QWORD *)(v7 + 48) );
          }
          if ( a1 == *(_QWORD *)(v7 + 16) )
            goto LABEL_6;
          if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v12 )
            __fastfail(0x1Eu);
          goto LABEL_40;
        }
      }
      v13 = *(unsigned int *)(a1 + 536);
      if ( (int)v13 < 0 )
        break;
      v7 = KiProcessorBlock[v13];
      v15 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v15);
        while ( *(_QWORD *)(v7 + 48) );
      }
      if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v13 )
        goto LABEL_6;
LABEL_40:
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 48), 0LL);
    }
    v14 = (unsigned int)v13;
    v18 = 0;
    LODWORD(v14) = v13 & 0x7FFFFFFF;
    v8 = *(volatile signed __int32 **)(KiProcessorBlock[v14] + 24904);
    while ( _interlockedbittestandset64(v8, 0LL) )
    {
      do
        KeYieldProcessorEx(&v18);
      while ( *(_QWORD *)v8 );
    }
    if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v13 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
  }
LABEL_6:
  result = (unsigned __int8)v6;
  *a2 = v7;
  *a3 = v8;
  return result;
}
