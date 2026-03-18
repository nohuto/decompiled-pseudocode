/*
 * XREFs of LpcSendWaitReceivePort @ 0x14069E284
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     AlpcpProcessSynchronousRequest @ 0x14047AD50 (AlpcpProcessSynchronousRequest.c)
 */

__int64 __fastcall LpcSendWaitReceivePort(
        __int64 a1,
        __int64 a2,
        ULONG64 a3,
        unsigned __int64 *a4,
        KPROCESSOR_MODE a5,
        char a6,
        LARGE_INTEGER *a7)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v9; // edx
  unsigned int v10; // eax
  struct _KTHREAD *v11; // rdx
  unsigned int v12; // ebx
  __int16 v13; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = 131074;
  if ( a5 == 1 )
    v9 = 1179650;
  if ( a6 )
    v9 |= 0x200000u;
  v10 = AlpcpProcessSynchronousRequest(a1, v9, a2, 0LL, a3, a4, 0LL, a7, 0, a5);
  v11 = KeGetCurrentThread();
  v12 = v10;
  if ( v10 == -1073740029 )
    v12 = -1073741769;
  if ( v12 == -1073740031 )
    v12 = -1073741229;
  v13 = v11->KernelApcDisable + 1;
  v11->KernelApcDisable = v13;
  if ( !v13
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != &v11->152
    && !v11->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v12;
}
