/*
 * XREFs of LpcSendWaitReceivePort @ 0x14061F504
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     AlpcpProcessSynchronousRequest @ 0x1404271A0 (AlpcpProcessSynchronousRequest.c)
 */

__int64 __fastcall LpcSendWaitReceivePort(
        __int64 a1,
        __int64 a2,
        ULONG64 a3,
        unsigned __int64 *a4,
        char a5,
        char a6,
        LARGE_INTEGER *a7)
{
  struct _KTHREAD *CurrentThread; // rax
  int v9; // edx
  unsigned int v10; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = 131074;
  if ( a5 == 1 )
    v9 = 1179650;
  if ( a6 )
    v9 |= 0x200000u;
  v10 = AlpcpProcessSynchronousRequest(a1, v9, a2, 0LL, a3, a4, 0LL, a7, 0, a5);
  if ( v10 == -1073740029 )
    v10 = -1073741769;
  if ( v10 == -1073740031 )
    v10 = -1073741229;
  KeLeaveCriticalRegion();
  return v10;
}
