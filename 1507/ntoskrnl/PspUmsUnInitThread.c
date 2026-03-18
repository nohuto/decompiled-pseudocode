/*
 * XREFs of PspUmsUnInitThread @ 0x1406C3888
 * Callers:
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     PsTerminateProcess @ 0x1405579A8 (PsTerminateProcess.c)
 *     KeSetUmsThreadKernelLock @ 0x140699E24 (KeSetUmsThreadKernelLock.c)
 *     KeUnInitializeUmsThread @ 0x140699F10 (KeUnInitializeUmsThread.c)
 *     KeUpdateUmsThreadState @ 0x140699F78 (KeUpdateUmsThreadState.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x1406C6604 (PspDisassociateUmsThreadFromPrimary.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1406C6990 (PspRundownUmsThreadForApcDelivery.c)
 */

__int64 __fastcall PspUmsUnInitThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  __int64 v7; // rbp
  char v8; // di
  char v9; // si
  int v10; // eax
  char v11; // si
  signed int updated; // edi
  __int16 v13; // ax
  void *v14; // rsi
  int v16; // [rsp+40h] [rbp+8h] BYREF

  v16 = 0;
  CurrentThread = (struct _KTHREAD *)a1;
  if ( !a1 )
    CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->Header.Reserved1 & 0x40) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 496);
    v7 = *(_QWORD *)v6;
    if ( (*(_DWORD *)(v6 + 80) & 4) != 0 )
    {
      v8 = 1;
      LOBYTE(a4) = 1;
      v9 = 0;
      v10 = PspRundownUmsThreadForApcDelivery(a1, &v16, v7, a4);
      if ( (*(_DWORD *)(a1 + 1724) & 0x10000) != 0 )
      {
        v10 = 0;
        v9 = 1;
      }
      if ( v10 < 0 || (v16 & 8) == 0 && (v16 & 1) == 0 )
        v8 = 0;
      v11 = v8 | v9;
    }
    else
    {
      KeSetUmsThreadKernelLock(v7, 0LL);
      v11 = 1;
    }
    updated = KeUpdateUmsThreadState(v7, 2, v11);
  }
  else
  {
    --*(_WORD *)(a1 + 486);
    updated = PspDisassociateUmsThreadFromPrimary(a1, 0LL, &v16);
    v13 = *(_WORD *)(a1 + 486) + 1;
    *(_WORD *)(a1 + 486) = v13;
    if ( !v13 && *(_QWORD *)(a1 + 152) != a1 + 152 )
      KiCheckForKernelApcDelivery();
  }
  v14 = *(void **)(*(_QWORD *)(a1 + 496) + 16LL);
  KeUnInitializeUmsThread(a1);
  if ( v14 )
    ObfDereferenceObject(v14);
  if ( updated < 0 && (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x4000000800000000LL) == 0 )
    PsTerminateProcess((__int64)KeGetCurrentThread()->ApcState.Process, updated);
  return (unsigned int)updated;
}
