/*
 * XREFs of MiExceptionForMappedVa @ 0x1401E11D0
 * Callers:
 *     MiWaitForInPageComplete @ 0x140024D30 (MiWaitForInPageComplete.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 */

__int64 __fastcall MiExceptionForMappedVa(unsigned __int64 a1)
{
  unsigned int v1; // ebx
  _QWORD *v3; // rbp
  _KPROCESS *Process; // r14
  char *AnyMultiplexedVm; // rdi
  LONG *SharedVm; // rsi
  __int64 **v7; // rdx
  unsigned __int64 v8; // r8
  LONG *v9; // rax
  KIRQL v10; // r9
  unsigned __int64 v11; // rax
  LONG *v12; // rax
  KIRQL v13; // r9

  v1 = 0;
  v3 = &unk_1403268C0;
  Process = KeGetCurrentThread()->ApcState.Process;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  while ( 2 )
  {
    SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
    ExAcquireSpinLockShared(SharedVm);
    if ( SharedVm[1] )
      _InterlockedExchange(SharedVm + 1, 0);
    v7 = (__int64 **)v3[2];
    while ( v7 )
    {
      v8 = (unsigned __int64)v7[10] & 0xFFFFFFFFFFFFF000uLL;
      if ( a1 >= (unsigned __int64)v7[4] + v8 )
      {
        v7 = (__int64 **)v7[1];
      }
      else
      {
        if ( a1 >= v8 )
        {
          if ( ((_BYTE)v7[6] & 2) != 0 )
            v1 = 1;
          v12 = MiGetSharedVm((__int64)AnyMultiplexedVm);
          ExReleaseSpinLockShared(v12, v13);
          return v1;
        }
        v7 = (__int64 **)*v7;
      }
    }
    v9 = MiGetSharedVm((__int64)AnyMultiplexedVm);
    ExReleaseSpinLockShared(v9, v10);
    if ( v3 == (_QWORD *)&unk_1403268C0 )
    {
      v11 = Process[1].ActiveProcessors.Bitmap[2];
      if ( v11 )
      {
        if ( Process != PsInitialSystemProcess )
        {
          v3 = (_QWORD *)(v11 + 2880);
          AnyMultiplexedVm = (char *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008);
          continue;
        }
      }
    }
    break;
  }
  return v1;
}
