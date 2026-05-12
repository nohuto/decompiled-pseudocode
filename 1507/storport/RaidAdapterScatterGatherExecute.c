/*
 * XREFs of RaidAdapterScatterGatherExecute @ 0x1C000F13C
 * Callers:
 *     RaidAdapterExecuteXrb @ 0x1C000EF88 (RaidAdapterExecuteXrb.c)
 *     RaidpAdapterContinueDataBufferScatterGather @ 0x1C0024AD0 (RaidpAdapterContinueDataBufferScatterGather.c)
 * Callees:
 *     RaidDmaBuildScatterGatherList @ 0x1C000F21C (RaidDmaBuildScatterGatherList.c)
 *     RaidDmaGetScatterGatherList @ 0x1C0025E30 (RaidDmaGetScatterGatherList.c)
 */

__int64 __fastcall RaidAdapterScatterGatherExecute(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rdi
  unsigned __int8 v6; // cl
  int v7; // esi
  unsigned int v8; // ebx
  int v9; // r14d
  char v10; // si
  __int64 v11; // rax
  __int64 result; // rax

  v3 = *(_QWORD *)(a2 + 160);
  v5 = a2;
  v6 = *(_BYTE *)(v3 + 2);
  if ( v6 == 40 )
  {
    v7 = *(_DWORD *)(v3 + 24);
    v8 = *(_DWORD *)(v3 + 60);
    v9 = *(_DWORD *)(v3 + 20);
  }
  else
  {
    v7 = *(_DWORD *)(v3 + 12);
    v8 = *(_DWORD *)(v3 + 16);
    v9 = v6;
  }
  LOBYTE(a3) = 1;
  LOBYTE(a2) = (v7 & 0x40) != 0;
  v10 = (unsigned __int8)v7 >> 7;
  if ( (*(_DWORD *)(a1 + 524) & 8) == 0 && (*(_BYTE *)(a1 + 109) & 2) == 0 )
    KeFlushIoBuffers(*(_QWORD *)(v5 + 96), a2, a3);
  if ( v9 == 23 )
  {
    v11 = *(_QWORD *)(v5 + 96);
    if ( *(_DWORD *)(v11 + 40) > v8 )
      v8 = *(_DWORD *)(v11 + 40);
  }
  result = RaidDmaBuildScatterGatherList(
             (int)a1 + 696,
             *(_QWORD *)(a1 + 8),
             *(_QWORD *)(v5 + 96),
             *(_QWORD *)(v5 + 176),
             v8,
             (__int64)RaidpAdapterContinueScatterGather,
             v5,
             v10,
             v5 + 224);
  if ( (_DWORD)result == -1073741789 )
    return RaidDmaGetScatterGatherList(
             (int)a1 + 696,
             *(_QWORD *)(a1 + 8),
             *(_QWORD *)(v5 + 96),
             *(_QWORD *)(v5 + 176),
             v8,
             (__int64)RaidpAdapterContinueScatterGather,
             v5,
             v10);
  return result;
}
