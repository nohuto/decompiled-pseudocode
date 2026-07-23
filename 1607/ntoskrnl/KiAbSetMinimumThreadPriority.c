/*
 * XREFs of KiAbSetMinimumThreadPriority @ 0x14006BC64
 * Callers:
 *     KiAbProcessContextSwitch @ 0x14005C010 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x14006B728 (KiAbProcessThreadLocks.c)
 *     KiAbIoBoostOwners @ 0x14006BA1C (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x14006BB0C (KiAbCpuBoostOwners.c)
 * Callees:
 *     KiAbEntryGetCpuPriorityKey @ 0x14006BF58 (KiAbEntryGetCpuPriorityKey.c)
 *     KiSetPriorityFloor @ 0x14006C074 (KiSetPriorityFloor.c)
 *     KiAbThreadBoostIoPriority @ 0x14006C124 (KiAbThreadBoostIoPriority.c)
 *     KiAbThreadInsertList @ 0x1400AB258 (KiAbThreadInsertList.c)
 *     PsGetIoPriorityThread @ 0x1400E5CD0 (PsGetIoPriorityThread.c)
 *     PsGetBaseIoPriorityThread @ 0x1400E9DA0 (PsGetBaseIoPriorityThread.c)
 *     EtwTraceAutoBoostSetFloor @ 0x1402257A8 (EtwTraceAutoBoostSetFloor.c)
 */

__int64 __fastcall KiAbSetMinimumThreadPriority(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  ULONG_PTR v7; // rdi
  int IoPriorityThread; // eax
  unsigned int v9; // ebx
  char v10; // r14
  char v11; // r12
  char v12; // si
  int v13; // r13d
  char CpuPriorityKey; // al
  char *v15; // r11
  char v16; // r15
  int BaseIoPriorityThread; // eax
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // r11
  int v22; // [rsp+50h] [rbp-58h]
  char v23; // [rsp+54h] [rbp-54h]
  char v24; // [rsp+B0h] [rbp+8h]

  v7 = a1 - (unsigned __int16)(16 * *(unsigned __int8 *)(a1 + 24));
  v24 = *(_BYTE *)(v7 + 195);
  IoPriorityThread = PsGetIoPriorityThread(v7, a2, a3);
  v9 = 0;
  v10 = IoPriorityThread;
  v11 = 2;
  if ( IoPriorityThread < 2 && *(_DWORD *)(v7 + 1784) )
    v10 = 2;
  v12 = 1;
  if ( !*(_DWORD *)(v7 + 1792) || (v23 = 0, *(_DWORD *)(v7 + 1788)) )
    v23 = 1;
  v22 = 0;
  v13 = 0;
  *a6 = 0;
  CpuPriorityKey = KiAbEntryGetCpuPriorityKey(a1);
  v16 = *v15;
  if ( CpuPriorityKey < *v15 )
  {
    LOBYTE(v22) = *v15;
    *(_WORD *)(a1 + 88) ^= (*(_WORD *)(a1 + 88) ^ (*(_WORD *)(a1 + 88) & 0x7FFF | (1 << (v16 - 1)))) & 0x7FFF;
    v13 = (unsigned __int8)KiSetPriorityFloor(v7);
  }
  else
  {
    v16 = 0;
  }
  BaseIoPriorityThread = PsGetBaseIoPriorityThread(v7);
  if ( BaseIoPriorityThread < *(char *)(v20 + 1)
    && *(__int16 *)(a1 + 88) >= 0
    && (unsigned int)KiAbThreadBoostIoPriority(v7, a5, 0LL) )
  {
    BYTE1(v22) = 2;
    *(_WORD *)(a1 + 88) |= 0x8000u;
    v13 = 1;
  }
  else
  {
    v11 = 0;
  }
  if ( (*(_DWORD *)(v7 + 1792) == 0) >= *(char *)(a2 + 2)
    || (*(_BYTE *)(a1 + 90) & 1) != 0
    || !(unsigned int)KiAbThreadBoostIoPriority(v7, a5, 1LL) )
  {
    v12 = 0;
  }
  else
  {
    *(_WORD *)(a1 + 90) |= 1u;
    v13 = 1;
    BYTE2(v22) = 1;
  }
  if ( a4 && v13 && *(_BYTE *)(v7 + 793) )
    KiAbThreadInsertList(v7, a4, v7 + 1376);
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 && v22 )
  {
    LOBYTE(v19) = v11;
    LOBYTE(v18) = v16;
    EtwTraceAutoBoostSetFloor(v7, *(_DWORD *)(a1 + 32) & 0xFFFFFFFC, v18, v19, v12, v24, v10, v23, 0, *a6);
  }
  LOBYTE(v9) = v16 != 0;
  return v9;
}
