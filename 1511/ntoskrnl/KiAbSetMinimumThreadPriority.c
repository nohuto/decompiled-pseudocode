/*
 * XREFs of KiAbSetMinimumThreadPriority @ 0x140032518
 * Callers:
 *     KiAbCpuBoostOwners @ 0x140031714 (KiAbCpuBoostOwners.c)
 *     KiAbProcessThreadLocks @ 0x14003203C (KiAbProcessThreadLocks.c)
 *     KiAbProcessContextSwitch @ 0x140083550 (KiAbProcessContextSwitch.c)
 *     KiAbIoBoostOwners @ 0x1400E60F8 (KiAbIoBoostOwners.c)
 * Callees:
 *     KiSetPriorityFloor @ 0x140031B9C (KiSetPriorityFloor.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x1400356AC (KiAbEntryGetCpuPriorityKey.c)
 *     PsGetIoPriorityThread @ 0x140070170 (PsGetIoPriorityThread.c)
 *     PsGetBaseIoPriorityThread @ 0x140077F80 (PsGetBaseIoPriorityThread.c)
 *     KiAbThreadInsertList @ 0x1400EC5C8 (KiAbThreadInsertList.c)
 *     KiAbThreadBoostIoPriority @ 0x1401027C4 (KiAbThreadBoostIoPriority.c)
 *     EtwTraceAutoBoostSetFloor @ 0x14020DAD8 (EtwTraceAutoBoostSetFloor.c)
 */

__int64 __fastcall KiAbSetMinimumThreadPriority(__int64 a1, char *a2, __int64 a3, __int64 a4, __int64 a5)
{
  ULONG_PTR v6; // rdi
  int IoPriorityThread; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ebx
  char v13; // bp
  char v14; // r15
  int v15; // r12d
  char CpuPriorityKey; // al
  __int64 v17; // rdx
  __int64 v18; // r11
  char v19; // r14
  int v20; // r8d
  int v21; // r9d
  _DWORD v23[18]; // [rsp+40h] [rbp-48h] BYREF
  char v24; // [rsp+90h] [rbp+8h]
  __int16 v25; // [rsp+98h] [rbp+10h]

  v6 = a1 - (unsigned __int16)(16 * *(unsigned __int8 *)(a1 + 24));
  v24 = *(_BYTE *)(v6 + 195);
  IoPriorityThread = PsGetIoPriorityThread(v6);
  v12 = 0;
  v13 = IoPriorityThread;
  v14 = 2;
  if ( IoPriorityThread < 2 && *(_DWORD *)(v6 + 1788) )
    v13 = 2;
  v25 = 0;
  v23[0] = 0;
  v15 = 0;
  CpuPriorityKey = KiAbEntryGetCpuPriorityKey(a1, v9, v10, v11);
  v19 = *a2;
  if ( CpuPriorityKey < *a2 )
  {
    LOBYTE(v25) = *a2;
    *(_WORD *)(a1 + 88) = *(_WORD *)(a1 + 88) & 1 | (2 * ((*(_WORD *)(a1 + 88) >> 1) | (1 << (v19 - 1))));
    v15 = (unsigned __int8)KiSetPriorityFloor(v6, v18, v19);
  }
  else
  {
    v19 = 0;
  }
  if ( (int)PsGetBaseIoPriorityThread(v6, v17, 1LL) >= a2[1]
    || ((unsigned __int8)v20 & *(_BYTE *)(a1 + 88)) != 0
    || !(unsigned int)KiAbThreadBoostIoPriority(v6, a5, v23) )
  {
    v14 = 0;
  }
  else
  {
    v15 = 1;
    HIBYTE(v25) = 2;
    *(_WORD *)(a1 + 88) |= 1u;
  }
  if ( a4 && v15 && *(_BYTE *)(v6 + 793) )
    KiAbThreadInsertList(v6, a4, v6 + 1376);
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 && v25 )
  {
    LOBYTE(v21) = v14;
    LOBYTE(v20) = v19;
    EtwTraceAutoBoostSetFloor(v6, *(_DWORD *)(a1 + 32) & 0xFFFFFFFC, v20, v21, v24, v13, 0, v23[0]);
  }
  LOBYTE(v12) = v19 != 0;
  return v12;
}
