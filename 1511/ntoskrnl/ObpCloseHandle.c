/*
 * XREFs of ObpCloseHandle @ 0x1403F6F6C
 * Callers:
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     ObSetDirectoryDeviceMap @ 0x1404A7D9C (ObSetDirectoryDeviceMap.c)
 *     ObSetDeviceMap @ 0x140545400 (ObSetDeviceMap.c)
 * Callees:
 *     ObpIsKernelHandle @ 0x140038748 (ObpIsKernelHandle.c)
 *     KeLeaveCriticalRegionThread @ 0x140042380 (KeLeaveCriticalRegionThread.c)
 *     KeIsAttachedProcess @ 0x1400701C0 (KeIsAttachedProcess.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KeRaiseUserException @ 0x1401C4670 (KeRaiseUserException.c)
 *     ExHandleLogBadReference @ 0x140213858 (ExHandleLogBadReference.c)
 *     ExQueryHandleExceptionsPermanency @ 0x140213938 (ExQueryHandleExceptionsPermanency.c)
 *     ExMapHandleToPointer @ 0x1403F7030 (ExMapHandleToPointer.c)
 *     ObCloseHandleTableEntry @ 0x14040C6C0 (ObCloseHandleTableEntry.c)
 */

__int64 __fastcall ObpCloseHandle(unsigned __int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  ULONG_PTR v4; // rdi
  struct _KPROCESS *Process; // rsi
  ULONG_PTR v6; // rbx
  PEPROCESS v7; // r15
  __int64 v8; // rax
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
  v8 = ExMapHandleToPointer(v6, v4);
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
    if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 1) == 0
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
