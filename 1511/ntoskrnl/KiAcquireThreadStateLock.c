/*
 * XREFs of KiAcquireThreadStateLock @ 0x14007DDC0
 * Callers:
 *     KiSetPriorityThread @ 0x14007BEA0 (KiSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x14007D1E0 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityThread @ 0x14007D6F0 (KeSetPriorityThread.c)
 *     ExpApplyPriorityBoost @ 0x14007EC80 (ExpApplyPriorityBoost.c)
 *     KiSetThreadSchedulingGroup @ 0x140094830 (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x140095180 (KiRemoveThreadFromSchedulingGroup.c)
 *     KeUpdateProcessSharedReadyQueueAffinity @ 0x1400952DC (KeUpdateProcessSharedReadyQueueAffinity.c)
 *     KiSetAffinityThread @ 0x140095508 (KiSetAffinityThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x1400956F8 (KeSetIdealProcessorThreadEx.c)
 *     KiApplyForegroundBoostThread @ 0x1400959C4 (KiApplyForegroundBoostThread.c)
 *     KeTryToFreezeThreadStack @ 0x1400D8DA4 (KeTryToFreezeThreadStack.c)
 *     KeQueryTotalCycleTimeThread @ 0x1400F1340 (KeQueryTotalCycleTimeThread.c)
 *     KeUpdateThreadTag @ 0x140104FD4 (KeUpdateThreadTag.c)
 *     KiUpdateThreadCpuSets @ 0x1401C8A4C (KiUpdateThreadCpuSets.c)
 *     KiSetHeteroPolicyThread @ 0x1401C9B74 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KiAcquireThreadStateLock(__int64 a1, __int64 *a2, volatile signed __int32 **a3)
{
  int v6; // ebx
  __int64 v7; // rdi
  volatile signed __int32 *v8; // r14
  char v9; // al
  __int64 v10; // rax
  __int64 result; // rax
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
LABEL_8:
          v10 = *(unsigned int *)(a1 + 536);
          if ( (int)v10 >= 0 )
          {
            v7 = KiProcessorBlock[v10];
            v16[0] = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
            {
              do
                KeYieldProcessorEx(v16, (__int64)a2, (__int64)a3);
              while ( *(_QWORD *)(v7 + 48) );
            }
            if ( a1 == *(_QWORD *)(v7 + 8) )
              goto LABEL_12;
            goto LABEL_40;
          }
        }
        if ( *(_BYTE *)(a1 + 388) == 1 )
          break;
        if ( *(_BYTE *)(a1 + 388) != 3 )
        {
          if ( *(_BYTE *)(a1 + 388) != 5 )
            goto LABEL_12;
          v9 = *(_BYTE *)(a1 + 112) & 7;
          if ( v9 == 1 || (unsigned __int8)(v9 - 3) <= 3u )
            goto LABEL_12;
          LOBYTE(v6) = 2;
          goto LABEL_8;
        }
        v12 = *(unsigned int *)(a1 + 536);
        if ( (int)v12 >= 0 )
        {
          v7 = KiProcessorBlock[v12];
          v17 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
          {
            do
              KeYieldProcessorEx(&v17, (__int64)a2, (__int64)a3);
            while ( *(_QWORD *)(v7 + 48) );
          }
          if ( a1 == *(_QWORD *)(v7 + 16) )
            goto LABEL_12;
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
          KeYieldProcessorEx(&v15, (__int64)a2, (__int64)a3);
        while ( *(_QWORD *)(v7 + 48) );
      }
      if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v13 )
        goto LABEL_12;
LABEL_40:
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 48), 0LL);
    }
    v14 = (unsigned int)v13;
    v18 = 0;
    LODWORD(v14) = v13 & 0x7FFFFFFF;
    v8 = *(volatile signed __int32 **)(KiProcessorBlock[v14] + 24776);
    while ( _interlockedbittestandset64(v8, 0LL) )
    {
      do
        KeYieldProcessorEx(&v18, (__int64)a2, (__int64)a3);
      while ( *(_QWORD *)v8 );
    }
    if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v13 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
  }
LABEL_12:
  result = (unsigned __int8)v6;
  *a2 = v7;
  *a3 = v8;
  return result;
}
