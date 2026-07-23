/*
 * XREFs of ObpCloseHandle @ 0x1404EF704
 * Callers:
 *     ObpSetDeviceMap @ 0x1404CBF4C (ObpSetDeviceMap.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140069C20 (KeLeaveCriticalRegionThread.c)
 *     ObpIsKernelHandle @ 0x1400CDBC8 (ObpIsKernelHandle.c)
 *     KeIsAttachedProcess @ 0x1400E5D20 (KeIsAttachedProcess.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     KeRaiseUserException @ 0x1401D3654 (KeRaiseUserException.c)
 *     ExHandleLogBadReference @ 0x14022C880 (ExHandleLogBadReference.c)
 *     ExQueryHandleExceptionsPermanency @ 0x14022C960 (ExQueryHandleExceptionsPermanency.c)
 *     ObCloseHandleTableEntry @ 0x14044D250 (ObCloseHandleTableEntry.c)
 *     ExMapHandleToPointer @ 0x1404F0EA4 (ExMapHandleToPointer.c)
 */

__int64 __fastcall ObpCloseHandle(unsigned __int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  ULONG_PTR v4; // rdi
  _KPROCESS *Process; // rsi
  ULONG_PTR v6; // rbx
  _KPROCESS *v7; // r15
  unsigned int *v8; // rax
  unsigned int v9; // ecx
  bool v11; // [rsp+70h] [rbp+18h] BYREF
  char v12; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = a1;
  Process = CurrentThread->ApcState.Process;
  if ( ObpIsKernelHandle(a1, a2) )
  {
    v6 = ObpKernelHandleTable;
    v4 ^= 0xFFFFFFFF80000000uLL;
    v7 = PsInitialSystemProcess;
  }
  else
  {
    v6 = Process[1].ActiveProcessors.Bitmap[5];
    v7 = Process;
    if ( v6 == ObpKernelHandleTable )
      return 3221225480LL;
  }
  --CurrentThread->KernelApcDisable;
  v8 = (unsigned int *)ExMapHandleToPointer(v6, v4);
  if ( v8 )
    return (unsigned int)ObCloseHandleTableEntry(v6, v8, v7, v4, a2, 0);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v4 >= 0xFFFFFFFFFFFFFFFAuLL || v4 == 0 )
    goto LABEL_22;
  ExQueryHandleExceptionsPermanency(v6, &v12, &v11);
  if ( (*(_BYTE *)(v6 + 44) & 0x10) != 0 && v11 )
    ExHandleLogBadReference(v6, v4, a2);
  if ( !a2 )
  {
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0
      && Process[1].ActiveProcessors.Bitmap[1]
      && (_BYTE)KdDebuggerEnabled )
    {
      KeBugCheckEx(0x93u, v4, 1uLL, 0LL, 0LL);
    }
    goto LABEL_22;
  }
  if ( (NtGlobalFlag & 0x400000) == 0 && !Process[1].ActiveProcessors.Bitmap[6] && !*(_QWORD *)(v6 + 96) )
  {
LABEL_22:
    v9 = -1073741816;
    if ( v4 + 6 <= 5 )
      return 0;
    return v9;
  }
  if ( KeIsAttachedProcess() )
    return 3221225480LL;
  return KeRaiseUserException(0xC0000008);
}
