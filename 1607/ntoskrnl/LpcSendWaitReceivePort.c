/*
 * XREFs of LpcSendWaitReceivePort @ 0x14065488C
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     AlpcpProcessSynchronousRequest @ 0x140447A30 (AlpcpProcessSynchronousRequest.c)
 */

__int64 __fastcall LpcSendWaitReceivePort(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 *a4,
        KPROCESSOR_MODE a5,
        char a6,
        LARGE_INTEGER *a7)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v9; // edx
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
