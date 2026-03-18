/*
 * XREFs of NtAlpcAcceptConnectPort @ 0x14047FD80
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     AlpcpAcceptConnectPort @ 0x14047D9CC (AlpcpAcceptConnectPort.c)
 */

__int64 __fastcall NtAlpcAcceptConnectPort(
        ULONG64 a1,
        void *a2,
        int a3,
        __int64 a4,
        ULONG64 a5,
        void *a6,
        __int128 *a7,
        int *a8,
        char a9)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v10; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = AlpcpAcceptConnectPort(a1, a3 & 0xC0000000, a2, a4, a5, a6, a7, a8, a9, 0LL, 0LL, 0);
  KeLeaveCriticalRegion();
  return v10;
}
