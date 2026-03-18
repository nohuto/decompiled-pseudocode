/*
 * XREFs of ExCreateHandleEx @ 0x14050DBE0
 * Callers:
 *     PspAllocateProcess @ 0x14046F030 (PspAllocateProcess.c)
 *     NtCreateJobObject @ 0x1404A20AC (NtCreateJobObject.c)
 *     AlpcpAllocateMessageFunction @ 0x1404B62CC (AlpcpAllocateMessageFunction.c)
 *     ObCompleteObjectDuplication @ 0x1404CBC54 (ObCompleteObjectDuplication.c)
 *     RtlpInsertStringAtom @ 0x1404D5B38 (RtlpInsertStringAtom.c)
 *     ObDuplicateObject @ 0x14050CBB0 (ObDuplicateObject.c)
 *     PspAllocateThread @ 0x1405154A0 (PspAllocateThread.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x1406550F4 (AlpcpAllocateMessageFromExtendedTables.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14006A0A0 (KeLeaveCriticalRegionThread.c)
 *     ExpFreeHandleTableEntry @ 0x1404A3C94 (ExpFreeHandleTableEntry.c)
 *     ExpAllocateHandleTableEntry @ 0x14050DCD0 (ExpAllocateHandleTableEntry.c)
 *     ExpSetHandleExtraInfo @ 0x1406AD594 (ExpSetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x1406AD814 (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ExCreateHandleEx(__int64 a1, __int64 a2, int a3, int a4, _DWORD *a5)
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
    if ( a5 && (*a5 || a5[1]) && (unsigned int)ExpSetHandleExtraInfo(a1, v16, a5) )
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
