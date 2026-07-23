/*
 * XREFs of KeInitThread @ 0x1403C8E74
 * Callers:
 *     KiInitializeIdleThread @ 0x1403D4908 (KiInitializeIdleThread.c)
 *     PspAllocateThread @ 0x1404F8890 (PspAllocateThread.c)
 * Callees:
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     KeInitializeTimerEx @ 0x1400EEAA0 (KeInitializeTimerEx.c)
 *     KiInitializeContextThread @ 0x1400EEAC0 (KiInitializeContextThread.c)
 *     KeAbInitializeThreadState @ 0x1400EED64 (KeAbInitializeThreadState.c)
 *     KeInitializeApc @ 0x1400EEDA8 (KeInitializeApc.c)
 *     MmCreateKernelStack @ 0x1400EF600 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x1400EF9D0 (MmDeleteKernelStack.c)
 */

__int64 __fastcall KeInitThread(
        __int64 a1,
        __int64 KernelStack,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6,
        __int64 a7,
        __int64 a8,
        int a9)
{
  __int64 *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rcx
  unsigned __int16 Group; // cx
  unsigned __int16 v19; // ax
  __int64 v20; // r10
  __int64 v21; // rcx

  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  *(_QWORD *)(a1 + 784) = a1 + 776;
  *(_QWORD *)(a1 + 776) = a1 + 776;
  v13 = (__int64 *)(a1 + 344);
  v14 = 4LL;
  do
  {
    *v13 = a1;
    v13 += 6;
    --v14;
  }
  while ( v14 );
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(a1 + 120) & 0xFFFFFFFE | *(_DWORD *)(a8 + 440) & 1 | 0x10020;
  *(_DWORD *)(a1 + 84) = 16 * KiShortExecutionCycles;
  *(_QWORD *)(a1 + 160) = a1 + 152;
  *(_QWORD *)(a1 + 152) = a1 + 152;
  *(_QWORD *)(a1 + 176) = a1 + 168;
  *(_QWORD *)(a1 + 168) = a1 + 168;
  *(_QWORD *)(a1 + 184) = a8;
  *(_QWORD *)(a1 + 544) = a8;
  *(_DWORD *)(a1 + 116) |= 0x4000u;
  if ( !a6 )
    *(_DWORD *)(a1 + 116) |= 0x400u;
  KeInitializeApc(
    a1 + 648,
    a1,
    0,
    (__int64)xHalFreeMessageTarget,
    (__int64)xHalFreeMessageTarget,
    (__int64)KiSchedulerApc,
    0,
    a1);
  KeInitializeEvent((PRKEVENT)(a1 + 736), NotificationEvent, 1u);
  KeInitializeTimerEx((PKTIMER)(a1 + 256), NotificationTimer);
  *(_QWORD *)(a1 + 304) = KiWaitNever ^ __ROR8__((a1 + 256) ^ _byteswap_uint64(KiWaitAlways), KiWaitNever);
  v15 = (_QWORD *)(a1 + 464);
  *(_DWORD *)(a1 + 480) = 16909313;
  v16 = a1 + 264;
  v17 = *(_QWORD *)(a1 + 264);
  if ( *(_QWORD *)(*(_QWORD *)v16 + 8LL) != v16 )
    __fastfail(3u);
  *v15 = v17;
  *(_QWORD *)(a1 + 472) = v16;
  *(_QWORD *)(v17 + 8) = v15;
  *(_QWORD *)v16 = v15;
  *(_QWORD *)(a1 + 240) = a7;
  *(_BYTE *)a1 = 6;
  if ( !KernelStack )
  {
    Group = KeGetCurrentThread()->Affinity.Group;
    v19 = a9 ? a9 - 1 : *(_WORD *)(a8 + 2LL * Group + 528);
    KernelStack = MmCreateKernelStack(8, v19, a1);
    if ( !KernelStack )
      return 3221225626LL;
  }
  *(_QWORD *)(a1 + 40) = KernelStack;
  *(_QWORD *)(a1 + 56) = KernelStack;
  *(_QWORD *)(a1 + 48) = KernelStack - (unsigned int)KeKernelStackSize;
  *(_BYTE *)(a1 + 126) = *(_BYTE *)(a1 + 126) & 0x80 | 8;
  if ( KiHeteroSystem )
    *(_BYTE *)(a1 + 125) = KiDefaultHeteroCpuPolicy;
  KeAbInitializeThreadState(a1);
  *(_QWORD *)(a1 + 1432) = v20;
  KiInitializeContextThread(v21, a3, a4, a5, a6);
  return 0LL;
}
