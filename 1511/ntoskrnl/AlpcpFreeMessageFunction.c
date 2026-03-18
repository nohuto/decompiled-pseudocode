/*
 * XREFs of AlpcpFreeMessageFunction @ 0x1403F2E3C
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExDestroyHandle @ 0x1403F2154 (ExDestroyHandle.c)
 *     ExMapHandleToPointerEx @ 0x1403F2EDC (ExMapHandleToPointerEx.c)
 */

void __fastcall AlpcpFreeMessageFunction(_DWORD *Buffer)
{
  unsigned int v2; // edx
  struct _KTHREAD *CurrentThread; // rsi
  ULONG_PTR v4; // rdi
  unsigned int v5; // ebx
  _QWORD *v6; // rax

  v2 = Buffer[74] & 0x7FFFFFFF;
  if ( v2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( (v2 & 0xFC000000) != 0 )
    {
      v4 = 0LL;
      if ( AlpcpSecondaryMessageTables )
        v4 = *(_QWORD *)(AlpcpSecondaryMessageTables + 8 * ((unsigned __int64)v2 >> 26));
    }
    else
    {
      v4 = AlpcMessageTable;
    }
    v5 = v2 & 0x3FFFFFF;
    v6 = (_QWORD *)ExMapHandleToPointerEx(v4, v2 & 0x3FFFFFF);
    ExDestroyHandle(v4, v5, v6);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  }
  ExFreePoolWithTag(Buffer, 0);
}
