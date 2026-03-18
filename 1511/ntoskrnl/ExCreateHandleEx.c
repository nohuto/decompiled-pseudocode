/*
 * XREFs of ExCreateHandleEx @ 0x140424F50
 * Callers:
 *     PspAllocateThread @ 0x1403F0BB0 (PspAllocateThread.c)
 *     ObDuplicateObject @ 0x1404246E0 (ObDuplicateObject.c)
 *     PspAllocateProcess @ 0x14044C768 (PspAllocateProcess.c)
 *     RtlpInsertStringAtom @ 0x14046033C (RtlpInsertStringAtom.c)
 *     AlpcpAllocateMessageFunction @ 0x14047D760 (AlpcpAllocateMessageFunction.c)
 *     ObCompleteObjectDuplication @ 0x140480070 (ObCompleteObjectDuplication.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x14061FE50 (AlpcpAllocateMessageFromExtendedTables.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140042380 (KeLeaveCriticalRegionThread.c)
 *     ExpFreeHandleTableEntry @ 0x1403F21B0 (ExpFreeHandleTableEntry.c)
 *     ExpAllocateHandleTableEntry @ 0x140425030 (ExpAllocateHandleTableEntry.c)
 *     ExpSetHandleExtraInfo @ 0x14066CA18 (ExpSetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x14066CC94 (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ExCreateHandleEx(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  struct _KTHREAD *CurrentThread; // rbp
  int v6; // r8d
  int v8; // eax
  unsigned int v9; // r8d
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rbx
  _QWORD *v13; // rdi
  __int64 v15; // [rsp+28h] [rbp-20h]
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v6 = a3 & 0x1FFFFFF;
  HIDWORD(v15) = 0;
  v8 = v6 | 0x2000000;
  v9 = v6 & 0xFDFFFFFF;
  if ( (a4 & 8) != 0 )
    v9 = v8;
  v10 = (((_DWORD)a2 << 16) ^ (a4 << 17)) & 0xE0000 ^ (unsigned __int64)(a2 << 16) | 1;
  --CurrentThread->KernelApcDisable;
  LODWORD(v15) = v9;
  v16 = 0LL;
  v11 = ExpAllocateHandleTableEntry(a1, &v16);
  v12 = v16;
  v13 = (_QWORD *)v11;
  if ( v11 )
  {
    if ( a5 && (unsigned int)ExpSetHandleExtraInfo(a1, v16) )
    {
      ExpFreeHandleTableEntry(a1, v12, (__int64)v13);
      v12 = 0LL;
    }
    else
    {
      if ( *(_QWORD *)(a1 + 96) )
        ExpUpdateDebugInfo(a1, CurrentThread, v12, 1LL);
      v13[1] = v15;
      *v13 = v10;
    }
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v12;
}
