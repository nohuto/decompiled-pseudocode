/*
 * XREFs of VidSchiProcessIsrPreemptedPacket @ 0x1C0018BE0
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C00042DC (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     VidSchiUpdateContextRunningTimeAtISR @ 0x1C00045B4 (VidSchiUpdateContextRunningTimeAtISR.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0004F20 (VidSchiProfilePerformanceTick.c)
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
  bool v15; // zf
  int v16; // eax
  __int64 v17; // r9
  __int64 v18; // rdx
  _QWORD v19[11]; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v20; // [rsp+A8h] [rbp+10h]

  v5 = *(union _SLIST_HEADER **)(a1 + 24);
  if ( *(_DWORD *)(a1 + 104) != a2 )
  {
    v8 = (a3 & 1) << 6;
    do
    {
      v9 = *(unsigned int *)(a1 + 1332);
      v10 = *(_QWORD *)(a1 + 8 * v9 + 1344);
      _InterlockedExchange((volatile __int32 *)(a1 + 1332), ((_BYTE)v9 + 1) & 0xF);
      v11 = *(unsigned int *)(a1 + 1476);
      *(_DWORD *)(a1 + 420) = ((unsigned __int8)*(_DWORD *)(a1 + 420) + 1) & 0xF;
      v12 = *(_QWORD *)(a1 + 8 * v11 + 1488);
      v20 = ((_BYTE)v11 + 1) & 0xF;
      _InterlockedExchange((volatile __int32 *)(a1 + 1476), v20);
      v13 = *(_QWORD *)(v10 + 104);
      if ( *(_DWORD *)(v10 + 88) == 3 )
      {
        *(_QWORD *)(a1 + 104) = v13;
        v14 = 8;
        *(_QWORD *)(v10 + 80) = MEMORY[0xFFFFF78000000320];
        *(_DWORD *)(v10 + 72) = 10;
        *(_DWORD *)(v10 + 16) = 1;
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 2864));
      }
      else
      {
        *(_QWORD *)(a1 + 56) = v13;
        *(_QWORD *)(a1 + 72) = *(_QWORD *)(v10 + 104);
        *(_QWORD *)(v12 + 440) = *(_QWORD *)(v10 + 104);
        ++*(_DWORD *)(a1 + 2868);
        ++*(_DWORD *)(a1 + 2872);
        v15 = *(_QWORD *)(v10 + 56) == 0LL;
        *(_QWORD *)(v10 + 80) = MEMORY[0xFFFFF78000000320];
        *(_DWORD *)(v10 + 72) = 11;
        *(_DWORD *)(v10 + 16) = 2;
        if ( !v15 )
        {
          *(_QWORD *)(*(_QWORD *)(v10 + 56) + 56LL) = MEMORY[0xFFFFF78000000320];
          *(_DWORD *)(*(_QWORD *)(v10 + 56) + 52LL) = 11;
        }
        v14 = 10;
      }
      if ( a3 )
      {
        ++*(_QWORD *)(a1 + 40);
        ++v5[21].Alignment;
      }
      v16 = *(_DWORD *)(v10 + 92);
      v19[0] = 0LL;
      v19[1] = v12;
      *(_DWORD *)(v10 + 92) = v8 | v16 & 0xFFFFFFBF;
      v19[2] = 0LL;
      v19[3] = 0LL;
      VidSchiUpdateContextRunningTimeAtISR(v19);
      v18 = *(_QWORD *)(a1 + 8LL * v20 + 1488);
      if ( v18 )
      {
        if ( v18 != v12 )
          *(_QWORD *)(v18 + 472) = *(_QWORD *)(v12 + 472);
      }
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 2852));
      VidSchiProfilePerformanceTick(v14, (__int64)v5, a1, v17, 0LL, 0LL, v10, a4);
      ExpInterlockedPushEntrySList(v5 + 120, (PSLIST_ENTRY)(v10 + 32));
    }
    while ( *(_DWORD *)(a1 + 104) != a2 );
  }
}
