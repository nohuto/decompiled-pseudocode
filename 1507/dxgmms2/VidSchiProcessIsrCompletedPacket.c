/*
 * XREFs of VidSchiProcessIsrCompletedPacket @ 0x1C00043E0
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C00042DC (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     VidSchiUpdateContextRunningTimeAtISR @ 0x1C00045B4 (VidSchiUpdateContextRunningTimeAtISR.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0004F20 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateCurrentIsrFrameTime @ 0x1C001B450 (VidSchiUpdateCurrentIsrFrameTime.c)
 */

__int64 __fastcall VidSchiProcessIsrCompletedPacket(__int64 a1, unsigned int a2, int a3, _DWORD *a4)
{
  union _SLIST_HEADER *v4; // r14
  unsigned int v5; // edi
  __int64 v7; // r15
  _BOOL8 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // r13
  __int64 v14; // rbx
  int v15; // r9d
  __int64 v16; // rcx
  _QWORD *v18; // rax
  _QWORD v19[11]; // [rsp+40h] [rbp-58h] BYREF
  _BOOL8 i; // [rsp+A0h] [rbp+8h]
  unsigned int v21; // [rsp+A8h] [rbp+10h]

  v4 = *(union _SLIST_HEADER **)(a1 + 24);
  v5 = 0;
  v7 = a2;
  if ( *(_DWORD *)(a1 + 64) != a2 )
  {
    v9 = *a4 == 9;
    for ( i = v9; ; v9 = i )
    {
      v10 = *(unsigned int *)(a1 + 1332);
      v11 = *(_QWORD *)(a1 + 8 * v10 + 1344);
      if ( !v11 )
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
        v18[3] = 281LL;
        v18[4] = 1LL;
        v18[5] = v7;
        v18[6] = *(unsigned int *)(a1 + 120);
        v18[7] = v4[1].Alignment;
        WdLogEvent5_WdCriticalError(v18);
        JUMPOUT(0x1C000BD91LL);
      }
      if ( *(_DWORD *)(v11 + 88) == 3 || v9 && *(_DWORD *)(v11 + 104) == (_DWORD)v7 )
        break;
      _InterlockedExchange((volatile __int32 *)(a1 + 1332), ((_BYTE)v10 + 1) & 0xF);
      v12 = *(unsigned int *)(a1 + 1476);
      *(_DWORD *)(a1 + 420) = ((unsigned __int8)*(_DWORD *)(a1 + 420) + 1) & 0xF;
      v13 = *(_QWORD *)(a1 + 8 * v12 + 1488);
      v21 = ((_BYTE)v12 + 1) & 0xF;
      _InterlockedExchange((volatile __int32 *)(a1 + 1476), v21);
      *(_QWORD *)(a1 + 56) = *(_QWORD *)(v11 + 104);
      v14 = *(_QWORD *)(v11 + 104);
      if ( a3 )
        *(_QWORD *)(a1 + 64) = v14;
      *(_DWORD *)(a1 + 2872) = 0;
      if ( a3 )
      {
        ++*(_QWORD *)(a1 + 40);
        ++v4[21].Alignment;
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
      v19[2] = 0LL;
      v19[3] = 0LL;
      v19[0] = 0LL;
      v19[1] = v13;
      VidSchiUpdateContextRunningTimeAtISR(v19);
      v16 = *(_QWORD *)(a1 + 8LL * v21 + 1488);
      if ( v16 && v16 != v13 )
        *(_QWORD *)(v16 + 472) = *(_QWORD *)(v13 + 472);
      if ( (*(_DWORD *)(v11 + 92) & 0x200) != 0 )
      {
        VidSchiUpdateCurrentIsrFrameTime(
          v16,
          *(&v4[165].Alignment + *(unsigned int *)(*(_QWORD *)(v11 + 56) + 144LL)),
          0LL);
        *(_QWORD *)(*(_QWORD *)(v11 + 56) + 120LL) = *(_QWORD *)(*(&v4[165].Alignment
                                                                 + *(unsigned int *)(*(_QWORD *)(v11 + 56) + 144LL))
                                                               + 14632);
        *(_DWORD *)(*(_QWORD *)(v11 + 56) + 116LL) = *(_DWORD *)(*(&v4[165].Alignment
                                                                 + *(unsigned int *)(*(_QWORD *)(v11 + 56) + 144LL))
                                                               + 14640);
      }
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 2852));
      VidSchiProfilePerformanceTick(8, (_DWORD)v4, a1, v15, 0LL, 0LL, v11, 0LL);
      ExpInterlockedPushEntrySList(v4 + 120, (PSLIST_ENTRY)(v11 + 32));
      if ( (_DWORD)v14 == (_DWORD)v7 )
        return v5;
    }
    return 1;
  }
  return v5;
}
