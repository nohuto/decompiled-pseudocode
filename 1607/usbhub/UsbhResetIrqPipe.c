/*
 * XREFs of UsbhResetIrqPipe @ 0x1C00445B0
 * Callers:
 *     UsbhHubResetIrqPipeWorker @ 0x1C0043FA0 (UsbhHubResetIrqPipeWorker.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhSyncSendInternalIoctl @ 0x1C0020110 (UsbhSyncSendInternalIoctl.c)
 *     memset @ 0x1C0029900 (memset.c)
 */

__int64 __fastcall UsbhResetIrqPipe(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rdi
  int *PoolWithTag; // rax
  int *v7; // rbx
  NTSTATUS v8; // edi

  v5 = FdoExt(a1, a2, a3, a4);
  PoolWithTag = (int *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x28uLL, 0x42554855u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x28uLL);
    *((_QWORD *)v7 + 1) = 0LL;
    *v7 = 1966120;
    *((_QWORD *)v7 + 3) = *((_QWORD *)v5 + 330);
    v8 = UsbhSyncSendInternalIoctl(a1, 0x220003u, (unsigned __int64)v7, 0LL);
    Log(a1, 4, 1937331029, v8, v7[1]);
    ExFreePoolWithTag(v7, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v8;
}
