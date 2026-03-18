/*
 * XREFs of ExCreateHandleEx @ 0x140424CD0
 * Callers:
 *     ObDuplicateObject @ 0x1404243A0 (ObDuplicateObject.c)
 *     PspAllocateThread @ 0x140451490 (PspAllocateThread.c)
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 *     ObCompleteObjectDuplication @ 0x14053E31C (ObCompleteObjectDuplication.c)
 *     AlpcpAllocateMessageFunction @ 0x1405402B8 (AlpcpAllocateMessageFunction.c)
 *     RtlpInsertStringAtom @ 0x14054223C (RtlpInsertStringAtom.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x14069ECA0 (AlpcpAllocateMessageFromExtendedTables.c)
 *     PspCreateSilo @ 0x1406C18E8 (PspCreateSilo.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAllocateHandleTableEntry @ 0x140424DE0 (ExpAllocateHandleTableEntry.c)
 *     ExpFreeHandleTableEntry @ 0x140505270 (ExpFreeHandleTableEntry.c)
 *     ExpSetHandleExtraInfo @ 0x1406F0234 (ExpSetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x1406F051C (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ExCreateHandleEx(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v7; // r8d
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rbx
  _QWORD *v11; // rsi
  __int16 v12; // ax
  __int64 v14; // [rsp+28h] [rbp-20h]
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  HIDWORD(v14) = 0;
  v7 = a3 & 0x1FFFFFF;
  if ( (a4 & 8) != 0 )
    v7 |= 0x2000000u;
  v8 = (((_DWORD)a2 << 16) ^ (a4 << 17)) & 0xE0000 ^ (unsigned __int64)(a2 << 16) | 1;
  --CurrentThread->KernelApcDisable;
  LODWORD(v14) = v7;
  v15 = 0LL;
  v9 = ExpAllocateHandleTableEntry(a1, &v15);
  v10 = v15;
  v11 = (_QWORD *)v9;
  if ( v9 )
  {
    if ( a5 && (unsigned int)ExpSetHandleExtraInfo(a1, v15) )
    {
      ExpFreeHandleTableEntry(a1, v10, v11);
      v10 = 0LL;
    }
    else
    {
      if ( *(_QWORD *)(a1 + 96) )
        ExpUpdateDebugInfo(a1, CurrentThread, v10, 1LL);
      v11[1] = v14;
      *v11 = v8;
    }
  }
  v12 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v12;
  if ( !v12
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v10;
}
