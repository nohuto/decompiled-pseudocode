/*
 * XREFs of MiProbeAndLockPrepare @ 0x140099FD8
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x140099DD4 (MmProbeAndLockSelectedPages.c)
 *     MmStoreProbeAndLockPages @ 0x1401228E0 (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MiInitializeProbePacketVm @ 0x14009A124 (MiInitializeProbePacketVm.c)
 */

__int64 __fastcall MiProbeAndLockPrepare(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        char a5,
        int a6,
        int a7)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v8; // r11
  __int64 v9; // r9
  signed __int64 v10; // r9
  _KPROCESS *Process; // rax

  CurrentThread = KeGetCurrentThread();
  v8 = a3 + a4;
  *(_QWORD *)(a1 + 64) = CurrentThread;
  *(_QWORD *)(a1 + 48) = a2;
  *(_DWORD *)(a1 + 40) = a6;
  *(_QWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = v8;
  if ( a5 && (v8 > 0x7FFFFFFF0000LL || a3 >= v8) )
  {
    ++dword_140327108;
    return 3221225477LL;
  }
  else
  {
    v9 = *(unsigned int *)(a2 + 40);
    *(_QWORD *)(a1 + 32) = a2 + 48;
    v10 = ((a3 & 0xFFF) + v9 + 4095) >> 12;
    *(_QWORD *)(a1 + 16) = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(_QWORD *)(a1 + 104) = 0xFFFFFFFFFLL;
    *(_QWORD *)(a1 + 24) = (((v8 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( a6 )
      *(_WORD *)(a2 + 10) |= 0x80u;
    else
      *(_WORD *)(a2 + 10) &= ~0x80u;
    *(_WORD *)(a2 + 10) |= 2u;
    if ( a3 < 0x7FFFFFFF0000LL )
    {
      Process = CurrentThread->ApcState.Process;
      *(_QWORD *)(a1 + 72) = Process;
      *(_QWORD *)(a2 + 16) = Process;
      if ( a7 )
        v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[14], v10);
    }
    else
    {
      *(_QWORD *)(a1 + 72) = 0LL;
      *(_QWORD *)(a2 + 16) = 0LL;
    }
    MiInitializeProbePacketVm(a1, a2, a3, v10);
    return 0LL;
  }
}
