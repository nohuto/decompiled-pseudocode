/*
 * XREFs of KiAbSetMinimumThreadPriority @ 0x1400F475C
 * Callers:
 *     KiAbProcessContextSwitch @ 0x1400A1D30 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x1400F3A10 (KiAbProcessThreadLocks.c)
 *     KiAbCpuBoostOwners @ 0x140122E4C (KiAbCpuBoostOwners.c)
 *     KiAbIoBoostOwners @ 0x140123290 (KiAbIoBoostOwners.c)
 * Callees:
 *     KiAbThreadBoostIoPriority @ 0x1400D635C (KiAbThreadBoostIoPriority.c)
 *     KiSetPriorityFloor @ 0x1400F125C (KiSetPriorityFloor.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x1400F4C38 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbThreadInsertList @ 0x14012B960 (KiAbThreadInsertList.c)
 *     EtwTraceAutoBoostSetFloor @ 0x14025CD44 (EtwTraceAutoBoostSetFloor.c)
 */

__int64 __fastcall KiAbSetMinimumThreadPriority(__int64 a1, char *a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // ebx
  ULONG_PTR v7; // rsi
  int v9; // edi
  char v10; // bp
  int v11; // r12d
  char CpuPriorityKey; // al
  char *v13; // r9
  _QWORD *v14; // r11
  char v15; // r15
  int v16; // r8d
  int v17; // edx
  unsigned __int8 v19; // al
  _DWORD v20[18]; // [rsp+40h] [rbp-48h] BYREF
  char v21; // [rsp+90h] [rbp+8h]
  __int16 v23; // [rsp+A8h] [rbp+20h]

  v5 = 0;
  v7 = a1 - (unsigned __int16)(16 * *(unsigned __int8 *)(a1 + 24));
  v21 = *(_BYTE *)(v7 + 195);
  v9 = (*(_DWORD *)(v7 + 1724) >> 9) & 7;
  if ( (*(_DWORD *)(*(_QWORD *)(v7 + 544) + 772LL) & 0x100000) != 0 )
    v9 = 0;
  v10 = 2;
  if ( v9 < 2 )
  {
    if ( (struct _KTHREAD *)v7 == KeGetCurrentThread() && *(_DWORD *)(v7 + 1788) )
      v9 = 2;
    if ( v9 < 2 && *(_DWORD *)(v7 + 1788) )
      LOBYTE(v9) = 2;
  }
  v23 = 0;
  v11 = 0;
  v20[0] = 0;
  CpuPriorityKey = KiAbEntryGetCpuPriorityKey(a1, a2, a3, a2);
  v15 = *v13;
  v16 = 1;
  if ( CpuPriorityKey < *v13 )
  {
    LOBYTE(v23) = *v13;
    *(_WORD *)(a1 + 88) = *(_WORD *)(a1 + 88) & 1 | (2 * ((*(_WORD *)(a1 + 88) >> 1) | (1 << (v15 - 1))));
    v19 = KiSetPriorityFloor(v7, v14, v15);
    v13 = a2;
    v16 = 1;
    v11 = v19;
  }
  else
  {
    v15 = 0;
  }
  v17 = (*(_DWORD *)(v7 + 1724) >> 9) & 7;
  if ( (*(_DWORD *)(*(_QWORD *)(v7 + 544) + 772LL) & 0x100000) != 0 )
    v17 = 0;
  if ( v17 >= v13[1] || (*(_BYTE *)(a1 + 88) & 1) != 0 || !(unsigned int)KiAbThreadBoostIoPriority(v7, a5, v20) )
  {
    v10 = 0;
  }
  else
  {
    v11 = 1;
    HIBYTE(v23) = 2;
    *(_WORD *)(a1 + 88) |= 1u;
  }
  if ( a4 && v11 && *(_BYTE *)(v7 + 793) )
    KiAbThreadInsertList(v7, a4, v7 + 1376);
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 && v23 )
  {
    LOBYTE(v13) = v10;
    LOBYTE(v16) = v15;
    EtwTraceAutoBoostSetFloor(v7, *(_DWORD *)(a1 + 32) & 0xFFFFFFFC, v16, (_DWORD)v13, v21, v9, 0, v20[0]);
  }
  LOBYTE(v5) = v15 != 0;
  return v5;
}
