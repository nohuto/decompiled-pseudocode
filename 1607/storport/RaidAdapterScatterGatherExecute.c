/*
 * XREFs of RaidAdapterScatterGatherExecute @ 0x1C000376C
 * Callers:
 *     RaidAdapterExecuteXrb @ 0x1C0003924 (RaidAdapterExecuteXrb.c)
 *     RaidpAdapterContinueDataBufferScatterGather @ 0x1C002A420 (RaidpAdapterContinueDataBufferScatterGather.c)
 * Callees:
 *     RaidDmaBuildScatterGatherList @ 0x1C000385C (RaidDmaBuildScatterGatherList.c)
 *     RaidDmaGetScatterGatherList @ 0x1C002B594 (RaidDmaGetScatterGatherList.c)
 */

__int64 __fastcall RaidAdapterScatterGatherExecute(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rdi
  unsigned __int8 v5; // cl
  int v6; // esi
  unsigned int v7; // ebx
  int v8; // r14d
  char v9; // si
  __int64 result; // rax
  __int64 v11; // rax

  v2 = *(_QWORD *)(a2 + 168);
  v4 = a2;
  v5 = *(_BYTE *)(v2 + 2);
  if ( v5 == 40 )
  {
    v6 = *(_DWORD *)(v2 + 24);
    v7 = *(_DWORD *)(v2 + 60);
    v8 = *(_DWORD *)(v2 + 20);
  }
  else
  {
    v6 = *(_DWORD *)(v2 + 12);
    v7 = *(_DWORD *)(v2 + 16);
    v8 = v5;
  }
  LOBYTE(a2) = (v6 & 0x40) != 0;
  v9 = (unsigned __int8)v6 >> 7;
  if ( (*(_DWORD *)(a1 + 524) & 8) == 0 && (*(_BYTE *)(a1 + 109) & 2) == 0 )
    KeFlushIoBuffers(*(_QWORD *)(v4 + 104), a2);
  if ( v8 == 23 )
  {
    v11 = *(_QWORD *)(v4 + 104);
    if ( *(_DWORD *)(v11 + 40) > v7 )
      v7 = *(_DWORD *)(v11 + 40);
  }
  result = RaidDmaBuildScatterGatherList(
             (int)a1 + 696,
             *(_QWORD *)(a1 + 8),
             *(_QWORD *)(v4 + 104),
             *(_QWORD *)(v4 + 184),
             v7,
             (__int64)RaidpAdapterContinueScatterGather,
             v4,
             v9,
             v4 + 232);
  if ( (_DWORD)result == -1073741789 )
    return RaidDmaGetScatterGatherList(
             (int)a1 + 696,
             *(_QWORD *)(a1 + 8),
             *(_QWORD *)(v4 + 104),
             *(_QWORD *)(v4 + 184),
             v7,
             (__int64)RaidpAdapterContinueScatterGather,
             v4,
             v9);
  return result;
}
