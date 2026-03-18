/*
 * XREFs of VidSchiProcessIsrCompletedPacket @ 0x1C000CF40
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000CBB0 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C000B390 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextRunningTimeAtISR @ 0x1C000D1C0 (VidSchiUpdateContextRunningTimeAtISR.c)
 *     VidSchiUpdateCurrentIsrFrameTime @ 0x1C0014AD8 (VidSchiUpdateCurrentIsrFrameTime.c)
 */

__int64 __fastcall VidSchiProcessIsrCompletedPacket(__int64 a1, unsigned int a2, int a3, _DWORD *a4)
{
  union _SLIST_HEADER *v4; // r14
  unsigned int v5; // ebp
  __int64 v7; // r12
  _BOOL8 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r13
  __int64 v15; // rbx
  __int64 v16; // r9
  __int64 v17; // rcx
  _QWORD *v19; // rax
  _QWORD v20[11]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+8h]
  _BOOL8 i; // [rsp+B8h] [rbp+20h]

  v4 = *(union _SLIST_HEADER **)(a1 + 24);
  v5 = 0;
  v7 = a2;
  if ( *(_DWORD *)(a1 + 64) != a2 )
  {
    v9 = *a4 == 9;
    for ( i = v9; ; v9 = i )
    {
      v10 = *(unsigned int *)(a1 + 1364);
      v11 = *(_QWORD *)(a1 + 8 * v10 + 1376);
      if ( !v11 )
      {
        v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v9, 1LL, 0xFFFFF78000000320uLL);
        v19[3] = 281LL;
        v19[4] = 1LL;
        v19[5] = v7;
        v19[6] = *(unsigned int *)(a1 + 144);
        v19[7] = v4[1].Alignment;
        WdLogEvent5_WdCriticalError(v19);
        JUMPOUT(0x1C001A551LL);
      }
      if ( *(_DWORD *)(v11 + 88) == 3 || v9 && *(_DWORD *)(v11 + 104) == (_DWORD)v7 )
        break;
      _InterlockedExchange((volatile __int32 *)(a1 + 1364), ((_BYTE)v10 + 1) & 0xF);
      v12 = *(unsigned int *)(a1 + 1508);
      *(_DWORD *)(a1 + 452) = ((unsigned __int8)*(_DWORD *)(a1 + 452) + 1) & 0xF;
      v13 = *(_QWORD *)(a1 + 8 * v12 + 1520);
      v14 = ((_BYTE)v12 + 1) & 0xF;
      v21 = v13;
      _InterlockedExchange((volatile __int32 *)(a1 + 1508), ((_BYTE)v12 + 1) & 0xF);
      *(_QWORD *)(a1 + 56) = *(_QWORD *)(v11 + 104);
      v15 = *(_QWORD *)(v11 + 104);
      if ( a3 )
        *(_QWORD *)(a1 + 64) = v15;
      *(_DWORD *)(a1 + 2744) = 0;
      if ( a3 )
      {
        ++*(_QWORD *)(a1 + 40);
        ++v4[21].Region;
      }
      *(_DWORD *)(v11 + 92) ^= (*(_DWORD *)(v11 + 92) ^ (a3 << 6)) & 0x40;
      *(_QWORD *)(v11 + 80) = MEMORY[0xFFFFF78000000320];
      *(_DWORD *)(v11 + 72) = 10;
      if ( *(_QWORD *)(v11 + 56) )
      {
        *(_QWORD *)(*(_QWORD *)(v11 + 56) + 56LL) = MEMORY[0xFFFFF78000000320];
        *(_DWORD *)(*(_QWORD *)(v11 + 56) + 52LL) = 10;
      }
      *(_DWORD *)(v11 + 16) = 1;
      v20[2] = 0LL;
      v20[3] = 0LL;
      v20[0] = 0LL;
      v20[1] = v13;
      VidSchiUpdateContextRunningTimeAtISR(v20, v13, 1LL, 0xFFFFF78000000320uLL);
      v17 = *(_QWORD *)(a1 + 8 * v14 + 1520);
      if ( v17 && v17 != v21 )
        *(_QWORD *)(v17 + 472) = *(_QWORD *)(v21 + 472);
      if ( (*(_DWORD *)(v11 + 92) & 0x200) != 0 )
      {
        VidSchiUpdateCurrentIsrFrameTime(
          v4,
          *(&v4[162].Alignment + *(unsigned int *)(*(_QWORD *)(v11 + 56) + 144LL)),
          0LL);
        *(_QWORD *)(*(_QWORD *)(v11 + 56) + 120LL) = *(_QWORD *)(*(&v4[162].Alignment
                                                                 + *(unsigned int *)(*(_QWORD *)(v11 + 56) + 144LL))
                                                               + 14640);
        *(_DWORD *)(*(_QWORD *)(v11 + 56) + 116LL) = *(_DWORD *)(*(&v4[162].Alignment
                                                                 + *(unsigned int *)(*(_QWORD *)(v11 + 56) + 144LL))
                                                               + 14648);
      }
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 2724));
      VidSchiProfilePerformanceTick(8LL, (__int64)v4, a1, v16, 0LL, 0LL, v11, 0LL);
      ExpInterlockedPushEntrySList(v4 + 117, (PSLIST_ENTRY)(v11 + 32));
      if ( (_DWORD)v15 == (_DWORD)v7 )
        return v5;
    }
    return 1;
  }
  return v5;
}
