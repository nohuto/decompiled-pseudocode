/*
 * XREFs of AlpcpFreeMessageFunction @ 0x140504E5C
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExDestroyHandle @ 0x140505200 (ExDestroyHandle.c)
 *     ExMapHandleToPointerEx @ 0x14050538C (ExMapHandleToPointerEx.c)
 */

void __fastcall AlpcpFreeMessageFunction(_DWORD *Buffer)
{
  unsigned int v2; // edx
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR v4; // rsi
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int16 v7; // ax

  v2 = Buffer[74] & 0x7FFFFFFF;
  if ( v2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( (v2 & 0xFC000000) != 0 )
    {
      if ( AlpcpSecondaryMessageTables )
        v4 = *(_QWORD *)(AlpcpSecondaryMessageTables + 8 * ((unsigned __int64)v2 >> 26));
      else
        v4 = 0LL;
    }
    else
    {
      v4 = AlpcMessageTable;
    }
    v5 = v2 & 0x3FFFFFF;
    v6 = ExMapHandleToPointerEx(v4, v2 & 0x3FFFFFF);
    ExDestroyHandle(v4, v5, v6);
    v7 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v7;
    if ( !v7
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  ExFreePoolWithTag(Buffer, 0);
}
