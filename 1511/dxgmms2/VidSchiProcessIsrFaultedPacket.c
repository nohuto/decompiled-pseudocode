/*
 * XREFs of VidSchiProcessIsrFaultedPacket @ 0x1C0020F50
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000CBB0 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C000B390 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextRunningTimeAtISR @ 0x1C000D1C0 (VidSchiUpdateContextRunningTimeAtISR.c)
 */

PSLIST_ENTRY __fastcall VidSchiProcessIsrFaultedPacket(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  union _SLIST_HEADER *v4; // rsi
  PSLIST_ENTRY result; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // r15
  __int64 v15; // rax
  bool v16; // zf
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rcx
  _QWORD v22[4]; // [rsp+40h] [rbp-38h] BYREF

  v4 = *(union _SLIST_HEADER **)(a1 + 24);
  result = (PSLIST_ENTRY)a2;
  if ( *(_QWORD *)(a1 + 64) != a2 )
  {
    v8 = *(unsigned int *)(a1 + 1364);
    v9 = *(_QWORD *)(a1 + 8 * v8 + 1376);
    v10 = *(_QWORD *)(v9 + 48);
    if ( *(_QWORD *)(v10 + 104) == v4[11].Region )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, v10, a3, a4);
      v11[3] = 281LL;
      v11[4] = 5LL;
      v11[5] = v4;
      v11[6] = *(_QWORD *)(*(_QWORD *)(v9 + 48) + 104LL);
      v11[7] = *(unsigned int *)(v9 + 104);
      WdLogEvent5_WdCriticalError(v11);
      __debugbreak();
    }
    _InterlockedExchange((volatile __int32 *)(a1 + 1364), ((_BYTE)v8 + 1) & 0xF);
    v12 = *(unsigned int *)(a1 + 1508);
    *(_DWORD *)(a1 + 452) = ((unsigned __int8)*(_DWORD *)(a1 + 452) + 1) & 0xF;
    v13 = *(_QWORD *)(a1 + 8 * v12 + 1520);
    v14 = ((_BYTE)v12 + 1) & 0xF;
    _InterlockedExchange((volatile __int32 *)(a1 + 1508), ((_BYTE)v12 + 1) & 0xF);
    *(_QWORD *)(a1 + 56) = *(_QWORD *)(v9 + 104);
    *(_QWORD *)(a1 + 64) = *(_QWORD *)(v9 + 104);
    v15 = *(_QWORD *)(v9 + 104);
    *(_DWORD *)(a1 + 2744) = 0;
    *(_QWORD *)(a1 + 80) = v15;
    if ( (_DWORD)a3 )
    {
      ++*(_QWORD *)(a1 + 40);
      ++v4[21].Region;
    }
    *(_DWORD *)(v9 + 92) ^= (*(_DWORD *)(v9 + 92) ^ ((_DWORD)a3 << 6)) & 0x40;
    v16 = *(_QWORD *)(v9 + 56) == 0LL;
    *(_QWORD *)(v9 + 80) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(v9 + 72) = 18;
    if ( !v16 )
    {
      *(_QWORD *)(*(_QWORD *)(v9 + 56) + 56LL) = MEMORY[0xFFFFF78000000320];
      *(_DWORD *)(*(_QWORD *)(v9 + 56) + 52LL) = 18;
    }
    v17 = *(_DWORD *)a4;
    v22[0] = 0LL;
    *(_DWORD *)(v9 + 16) = v17;
    v18 = *(_QWORD *)(a4 + 16);
    v19 = *(_QWORD *)(v13 + 104);
    v22[1] = v13;
    *(_QWORD *)(v19 + 176) = v18;
    *(_DWORD *)(*(_QWORD *)(v13 + 104) + 184LL) = *(_DWORD *)(a4 + 24);
    *(_DWORD *)(*(_QWORD *)(v13 + 104) + 188LL) = *(_DWORD *)(a4 + 28);
    *(_DWORD *)(*(_QWORD *)(v13 + 104) + 192LL) = *(_DWORD *)(a4 + 32);
    *(_QWORD *)(*(_QWORD *)(v13 + 104) + 200LL) = *(_QWORD *)(a4 + 40);
    *(_DWORD *)(*(_QWORD *)(v13 + 104) + 196LL) = *(_DWORD *)(a4 + 60);
    v22[2] = 0LL;
    v22[3] = 0LL;
    VidSchiUpdateContextRunningTimeAtISR(v22);
    v21 = *(_QWORD *)(a1 + 8 * v14 + 1520);
    if ( v21 )
    {
      if ( v21 != v13 )
        *(_QWORD *)(v21 + 472) = *(_QWORD *)(v13 + 472);
    }
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 2724));
    VidSchiProfilePerformanceTick(12LL, (__int64)v4, a1, v20, 0LL, 0LL, v9, a4);
    return ExpInterlockedPushEntrySList(v4 + 117, (PSLIST_ENTRY)(v9 + 32));
  }
  return result;
}
