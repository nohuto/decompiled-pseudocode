/*
 * XREFs of ObpCloseHandle @ 0x1404A4DA0
 * Callers:
 *     ObSetDirectoryDeviceMap @ 0x14046213C (ObSetDirectoryDeviceMap.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 *     ObSetDeviceMap @ 0x1405BBFDC (ObSetDeviceMap.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KeRaiseUserException @ 0x1402008EC (KeRaiseUserException.c)
 *     ExHandleLogBadReference @ 0x1402631AC (ExHandleLogBadReference.c)
 *     ExQueryHandleExceptionsPermanency @ 0x140263298 (ExQueryHandleExceptionsPermanency.c)
 *     ObCloseHandleTableEntry @ 0x1404946D0 (ObCloseHandleTableEntry.c)
 *     ExpLookupHandleTableEntry @ 0x140498B20 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1404EEB50 (ExpBlockOnLockedHandleEntry.c)
 */

__int64 __fastcall ObpCloseHandle(unsigned __int64 a1, char a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v6; // rbx
  _KPROCESS *Process; // r15
  ULONG_PTR v8; // r14
  PEPROCESS v9; // r12
  signed __int64 *v10; // rdi
  signed __int64 v11; // r8
  __int64 result; // rax
  __int16 v13; // ax
  bool v14; // [rsp+68h] [rbp+10h] BYREF
  char v15; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v6 = a1;
  Process = CurrentThread->ApcState.Process;
  if ( a2 || (a1 & 0xFFFFFFFF80000000uLL) != 0xFFFFFFFF80000000uLL || a1 >= 0xFFFFFFFFFFFFFFFEuLL )
  {
    v8 = Process[1].ActiveProcessors.Bitmap[5];
    v9 = CurrentThread->ApcState.Process;
    if ( v8 == ObpKernelHandleTable )
      return 3221225480LL;
  }
  else
  {
    v8 = ObpKernelHandleTable;
    v6 = a1 ^ 0xFFFFFFFF80000000uLL;
    v9 = PsInitialSystemProcess;
  }
  --CurrentThread->KernelApcDisable;
  if ( (v6 & 0x3FC) != 0 && (v10 = (signed __int64 *)ExpLookupHandleTableEntry((unsigned int *)v8, v6)) != 0LL )
  {
    do
    {
      while ( 1 )
      {
        _m_prefetchw(v10);
        v11 = *v10;
        if ( (*v10 & 1) != 0 )
          break;
        if ( !v11 )
          goto LABEL_14;
        ExpBlockOnLockedHandleEntry(v8, v10);
      }
    }
    while ( v11 != _InterlockedCompareExchange64(v10, v11 - 1, v11) );
    return ObCloseHandleTableEntry(v8, v10, (ULONG_PTR)v9, v6, a2, 0);
  }
  else
  {
LABEL_14:
    v13 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v13;
    if ( !v13
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( v6 < 0xFFFFFFFFFFFFFFFAuLL && v6 != 0 )
    {
      ExQueryHandleExceptionsPermanency(v8, &v15, &v14, a4);
      if ( (*(_BYTE *)(v8 + 44) & 0x10) != 0 && v14 )
        ExHandleLogBadReference(v8, v6, a2);
      if ( a2 )
      {
        if ( (NtGlobalFlag & 0x400000) != 0 || Process[1].ActiveProcessors.Bitmap[6] || *(_QWORD *)(v8 + 96) )
        {
          if ( KeGetCurrentThread()->ApcStateIndex == 1 )
            return 3221225480LL;
          else
            return KeRaiseUserException(0xC0000008);
        }
      }
      else if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 1) == 0
             && Process[1].ActiveProcessors.Bitmap[1]
             && (_BYTE)KdDebuggerEnabled )
      {
        KeBugCheckEx(0x93u, v6, 1uLL, 0LL, 0LL);
      }
    }
    result = 3221225480LL;
    if ( v6 + 6 <= 5 )
      return 0LL;
  }
  return result;
}
