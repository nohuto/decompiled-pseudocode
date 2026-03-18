/*
 * XREFs of AlpcpOpenPort @ 0x14053DF8C
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall AlpcpOpenPort(int a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v6; // ebx
  struct _KTHREAD *v7; // rdx
  __int16 v8; // ax
  __int64 v10; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a1 )
  {
    if ( a1 != 2 || (*(_DWORD *)(a4 + 256) & 0x100000) != 0 )
    {
      v6 = -1073741637;
      goto LABEL_3;
    }
    v10 = *(_QWORD *)(a4 + 24);
    if ( (v10 & 1) != 0 )
      v10 = 0LL;
    if ( v10 != a3 )
      *a5 &= ~1u;
  }
  v6 = 0;
LABEL_3:
  v7 = KeGetCurrentThread();
  v8 = v7->KernelApcDisable + 1;
  v7->KernelApcDisable = v8;
  if ( !v8
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v7->ApcState.ApcListHead[0].Flink != &v7->152
    && !v7->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v6;
}
