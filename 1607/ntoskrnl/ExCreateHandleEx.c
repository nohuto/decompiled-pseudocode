/*
 * XREFs of ExCreateHandleEx @ 0x1404F0B70
 * Callers:
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 *     AlpcpAllocateMessageFunction @ 0x1404A06AC (AlpcpAllocateMessageFunction.c)
 *     ObCompleteObjectDuplication @ 0x1404B1680 (ObCompleteObjectDuplication.c)
 *     RtlpInsertStringAtom @ 0x1404B913C (RtlpInsertStringAtom.c)
 *     ObDuplicateObject @ 0x1404EFB40 (ObDuplicateObject.c)
 *     PspAllocateThread @ 0x1404F8890 (PspAllocateThread.c)
 *     NtCreateJobObject @ 0x14051A4B8 (NtCreateJobObject.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x1406551D8 (AlpcpAllocateMessageFromExtendedTables.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140069C20 (KeLeaveCriticalRegionThread.c)
 *     ExpAllocateHandleTableEntry @ 0x1404F0C60 (ExpAllocateHandleTableEntry.c)
 *     ExpFreeHandleTableEntry @ 0x14051C094 (ExpFreeHandleTableEntry.c)
 *     ExpSetHandleExtraInfo @ 0x1406AD6CC (ExpSetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x1406AD94C (ExpUpdateDebugInfo.c)
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
      ExpFreeHandleTableEntry(a1, v12, v13);
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
