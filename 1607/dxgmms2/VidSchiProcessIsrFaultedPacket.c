/*
 * XREFs of VidSchiProcessIsrFaultedPacket @ 0x1C0024708
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000B8C0 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C0009E20 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextRunningTimeAtISR @ 0x1C000BF10 (VidSchiUpdateContextRunningTimeAtISR.c)
 */

void __fastcall VidSchiProcessIsrFaultedPacket(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  union _SLIST_HEADER *v5; // rsi
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rax
  bool v16; // zf
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rcx
  _QWORD v22[4]; // [rsp+40h] [rbp-38h] BYREF

  v5 = *(union _SLIST_HEADER **)(a1 + 24);
  if ( *(_DWORD *)(a1 + 64) != a2 && *(_DWORD *)(a1 + 72) != a2 )
  {
    v7 = *(unsigned int *)(a1 + 1404);
    v8 = *(_QWORD *)(a1 + 8 * v7 + 1416);
    v9 = *(_QWORD *)(v8 + 48);
    if ( *(_QWORD *)(v9 + 104) == v5[12].Region )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v7, a3, a4);
      v10[3] = 281LL;
      v10[4] = 5LL;
      v10[5] = v5;
      v10[6] = *(_QWORD *)(*(_QWORD *)(v8 + 48) + 104LL);
      v10[7] = *(unsigned int *)(v8 + 104);
      WdLogEvent5_WdCriticalError(v10);
      __debugbreak();
    }
    _InterlockedExchange((volatile __int32 *)(a1 + 1404), ((_BYTE)v7 + 1) & 0xF);
    v11 = *(unsigned int *)(a1 + 1548);
    *(_DWORD *)(a1 + 492) = ((unsigned __int8)*(_DWORD *)(a1 + 492) + 1) & 0xF;
    v12 = *(_QWORD *)(a1 + 8 * v11 + 1560);
    v13 = ((_BYTE)v11 + 1) & 0xF;
    _InterlockedExchange((volatile __int32 *)(a1 + 1548), ((_BYTE)v11 + 1) & 0xF);
    *(_QWORD *)(a1 + 56) = *(_QWORD *)(v8 + 104);
    v14 = *(_QWORD *)(v8 + 104);
    *(_QWORD *)(a1 + 64) = v14;
    *(_QWORD *)(a1 + 72) = v14;
    v15 = *(_QWORD *)(v8 + 104);
    *(_DWORD *)(a1 + 2784) = 0;
    *(_QWORD *)(a1 + 88) = v15;
    if ( (_DWORD)a3 )
    {
      ++*(_QWORD *)(a1 + 40);
      ++v5[23].Region;
    }
    *(_DWORD *)(v8 + 92) ^= (*(_DWORD *)(v8 + 92) ^ ((_DWORD)a3 << 6)) & 0x40;
    v16 = *(_QWORD *)(v8 + 56) == 0LL;
    *(_QWORD *)(v8 + 80) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(v8 + 72) = 18;
    if ( !v16 )
    {
      *(_QWORD *)(*(_QWORD *)(v8 + 56) + 56LL) = MEMORY[0xFFFFF78000000320];
      *(_DWORD *)(*(_QWORD *)(v8 + 56) + 52LL) = 18;
    }
    v17 = *(_DWORD *)a4;
    v22[0] = 0LL;
    *(_DWORD *)(v8 + 16) = v17;
    v18 = *(_QWORD *)(a4 + 16);
    v19 = *(_QWORD *)(v12 + 104);
    v22[1] = v12;
    *(_QWORD *)(v19 + 168) = v18;
    *(_DWORD *)(*(_QWORD *)(v12 + 104) + 176LL) = *(_DWORD *)(a4 + 24);
    *(_DWORD *)(*(_QWORD *)(v12 + 104) + 180LL) = *(_DWORD *)(a4 + 28);
    *(_DWORD *)(*(_QWORD *)(v12 + 104) + 184LL) = *(_DWORD *)(a4 + 32);
    *(_QWORD *)(*(_QWORD *)(v12 + 104) + 192LL) = *(_QWORD *)(a4 + 40);
    *(_DWORD *)(*(_QWORD *)(v12 + 104) + 188LL) = *(_DWORD *)(a4 + 60);
    v22[2] = 0LL;
    v22[3] = 0LL;
    VidSchiUpdateContextRunningTimeAtISR(v22);
    v21 = *(_QWORD *)(a1 + 8 * v13 + 1560);
    if ( v21 )
    {
      if ( v21 != v12 )
        *(_QWORD *)(v21 + 472) = *(_QWORD *)(v12 + 472);
    }
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 2764));
    VidSchiProfilePerformanceTick(12LL, (__int64)v5, a1, v20, 0LL, 0LL, v8, a4);
    ExpInterlockedPushEntrySList(v5 + 119, (PSLIST_ENTRY)(v8 + 32));
  }
}
