/*
 * XREFs of PspUmsUnInitThread @ 0x14067F7E0
 * Callers:
 *     PspExitThread @ 0x1404F950C (PspExitThread.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     PsTerminateProcess @ 0x1404CE4F8 (PsTerminateProcess.c)
 *     KeSetUmsThreadKernelLock @ 0x140650708 (KeSetUmsThreadKernelLock.c)
 *     KeUnInitializeUmsThread @ 0x1406507C8 (KeUnInitializeUmsThread.c)
 *     KeUpdateUmsThreadState @ 0x140650830 (KeUpdateUmsThreadState.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x140682478 (PspDisassociateUmsThreadFromPrimary.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1406827D8 (PspRundownUmsThreadForApcDelivery.c)
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
  int updated; // edi
  void *v13; // rsi
  int v15; // [rsp+30h] [rbp+8h] BYREF

  v15 = 0;
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
      v10 = PspRundownUmsThreadForApcDelivery(a1, &v15, v7, a4);
      if ( (*(_DWORD *)(a1 + 1728) & 0x10000) != 0 )
      {
        v10 = 0;
        v9 = 1;
      }
      if ( v10 < 0 || (v15 & 8) == 0 && (v15 & 1) == 0 )
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
    updated = PspDisassociateUmsThreadFromPrimary(a1, 0LL, &v15);
    KiLeaveGuardedRegionUnsafe(a1);
  }
  v13 = *(void **)(*(_QWORD *)(a1 + 496) + 16LL);
  KeUnInitializeUmsThread(a1);
  if ( v13 )
    ObfDereferenceObject(v13);
  if ( updated < 0 && (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x4000000800000000LL) == 0 )
    PsTerminateProcess((ULONG_PTR)KeGetCurrentThread()->ApcState.Process);
  return (unsigned int)updated;
}
