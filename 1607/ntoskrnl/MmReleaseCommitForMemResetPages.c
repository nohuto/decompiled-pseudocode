/*
 * XREFs of MmReleaseCommitForMemResetPages @ 0x1401E0E70
 * Callers:
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     KeRetryOutswapProcess @ 0x1400B3328 (KeRetryOutswapProcess.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     MiAttachThreadDone @ 0x140108E2C (MiAttachThreadDone.c)
 *     MiPrepareAttachThread @ 0x140108EA0 (MiPrepareAttachThread.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall MmReleaseCommitForMemResetPages(_KPROCESS *BugCheckParameter1, int a2)
{
  __int64 v2; // rdi
  LONG *SharedVm; // r13
  unsigned int v6; // ebx
  int v7; // r15d
  LONG *v8; // rbx
  KIRQL v9; // al
  __int64 v10; // rdx
  char v11; // si
  __int64 v12; // rcx
  _BOOL8 v13; // rdx
  bool v14; // al
  __int16 Object; // [rsp+38h] [rbp-39h] BYREF
  char v17; // [rsp+3Ah] [rbp-37h]
  int v18; // [rsp+3Ch] [rbp-35h]
  _QWORD v19[2]; // [rsp+40h] [rbp-31h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-21h] BYREF
  _BYTE v21[48]; // [rsp+68h] [rbp-9h] BYREF

  v17 = 6;
  v2 = (__int64)&BugCheckParameter1[1].IdealNode[12];
  memset(&LockHandle, 0, sizeof(LockHandle));
  v19[1] = v19;
  Object = 0;
  v19[0] = v19;
  v18 = 0;
  SharedVm = MiGetSharedVm((__int64)&BugCheckParameter1[1].IdealNode[12]);
  if ( (*(_BYTE *)(v2 + 187) & 0xC0) == 0x80 )
  {
    KeAcquireInStackQueuedSpinLock(&qword_140327780, &LockHandle);
    v7 = MiPrepareAttachThread((__int64)BugCheckParameter1, v2);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v7 )
    {
      KiStackAttachProcess(BugCheckParameter1, 1, (__int64)v21);
      v8 = MiGetSharedVm(v2);
      v9 = ExAcquireSpinLockExclusive(v8);
      v8[1] = 0;
      v11 = v9;
      if ( (*(_BYTE *)(v2 + 187) & 0xC0) == 0x80 )
      {
        v12 = *((_QWORD *)SharedVm + 4);
        if ( *(_QWORD *)(v12 + 40) )
        {
          v6 = -1073740682;
        }
        else
        {
          *(_QWORD *)(v12 + 40) = &Object;
          v13 = a2 != 0;
          v14 = v13 ^ *(_DWORD *)(v12 + 48);
          LOBYTE(v13) = v11;
          *(_DWORD *)(v12 + 48) ^= v14;
          MiUnlockWorkingSetExclusive(v2, v13);
          v11 = 17;
          KeRetryOutswapProcess(&BugCheckParameter1->Header.Lock);
          KiUnstackDetachProcess((struct _KTHREAD *)v21, 1);
          MiAttachThreadDone(v2);
          v7 = 0;
          KeWaitForSingleObject(&Object, WrKernel, 0, 0, 0LL);
          v6 = 0;
        }
      }
      else
      {
        v6 = -1073741431;
      }
      if ( v11 != 17 )
      {
        LOBYTE(v10) = v11;
        MiUnlockWorkingSetExclusive(v2, v10);
      }
      if ( v7 )
      {
        KiUnstackDetachProcess((struct _KTHREAD *)v21, 1);
        MiAttachThreadDone(v2);
      }
    }
    else
    {
      return (unsigned int)-1073700861;
    }
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return v6;
}
