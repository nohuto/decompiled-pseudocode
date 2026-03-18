/*
 * XREFs of VidSchiProcessIsrPreemptedPacket @ 0x1C000E648
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000CBB0 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C000B390 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextRunningTimeAtISR @ 0x1C000D1C0 (VidSchiUpdateContextRunningTimeAtISR.c)
 */

void __fastcall VidSchiProcessIsrPreemptedPacket(__int64 a1, int a2, int a3, __int64 a4)
{
  union _SLIST_HEADER *v5; // rbp
  int v8; // esi
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rax
  unsigned int v14; // r13d
  int v15; // eax
  __int64 v16; // r9
  __int64 v17; // rdx
  bool v18; // zf
  _QWORD v19[11]; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v20; // [rsp+A8h] [rbp+10h]

  v5 = *(union _SLIST_HEADER **)(a1 + 24);
  if ( *(_DWORD *)(a1 + 104) != a2 )
  {
    v8 = (a3 & 1) << 6;
    do
    {
      v9 = *(unsigned int *)(a1 + 1364);
      v10 = *(_QWORD *)(a1 + 8 * v9 + 1376);
      _InterlockedExchange((volatile __int32 *)(a1 + 1364), ((_BYTE)v9 + 1) & 0xF);
      v11 = *(unsigned int *)(a1 + 1508);
      *(_DWORD *)(a1 + 452) = ((unsigned __int8)*(_DWORD *)(a1 + 452) + 1) & 0xF;
      v12 = *(_QWORD *)(a1 + 8 * v11 + 1520);
      v20 = ((_BYTE)v11 + 1) & 0xF;
      _InterlockedExchange((volatile __int32 *)(a1 + 1508), v20);
      v13 = *(_QWORD *)(v10 + 104);
      if ( *(_DWORD *)(v10 + 88) == 3 )
      {
        *(_QWORD *)(a1 + 104) = v13;
        v14 = 8;
        *(_QWORD *)(v10 + 80) = MEMORY[0xFFFFF78000000320];
        *(_DWORD *)(v10 + 72) = 10;
        *(_DWORD *)(v10 + 16) = 1;
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 2736));
      }
      else
      {
        *(_QWORD *)(a1 + 56) = v13;
        *(_QWORD *)(a1 + 72) = *(_QWORD *)(v10 + 104);
        *(_QWORD *)(v12 + 440) = *(_QWORD *)(v10 + 104);
        ++*(_DWORD *)(a1 + 2740);
        ++*(_DWORD *)(a1 + 2744);
        v18 = *(_QWORD *)(v10 + 56) == 0LL;
        *(_QWORD *)(v10 + 80) = MEMORY[0xFFFFF78000000320];
        *(_DWORD *)(v10 + 72) = 11;
        *(_DWORD *)(v10 + 16) = 2;
        if ( !v18 )
        {
          *(_QWORD *)(*(_QWORD *)(v10 + 56) + 56LL) = MEMORY[0xFFFFF78000000320];
          *(_DWORD *)(*(_QWORD *)(v10 + 56) + 52LL) = 11;
        }
        v14 = 10;
      }
      if ( a3 )
      {
        ++*(_QWORD *)(a1 + 40);
        ++v5[21].Region;
      }
      v15 = *(_DWORD *)(v10 + 92);
      v19[0] = 0LL;
      v19[1] = v12;
      *(_DWORD *)(v10 + 92) = v8 | v15 & 0xFFFFFFBF;
      v19[2] = 0LL;
      v19[3] = 0LL;
      VidSchiUpdateContextRunningTimeAtISR(v19);
      v17 = *(_QWORD *)(a1 + 8LL * v20 + 1520);
      if ( v17 )
      {
        if ( v17 != v12 )
          *(_QWORD *)(v17 + 472) = *(_QWORD *)(v12 + 472);
      }
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 2724));
      VidSchiProfilePerformanceTick(v14, (__int64)v5, a1, v16, 0LL, 0LL, v10, a4);
      ExpInterlockedPushEntrySList(v5 + 117, (PSLIST_ENTRY)(v10 + 32));
    }
    while ( *(_DWORD *)(a1 + 104) != a2 );
  }
}
