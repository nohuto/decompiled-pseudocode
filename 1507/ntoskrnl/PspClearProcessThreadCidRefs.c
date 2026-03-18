/*
 * XREFs of PspClearProcessThreadCidRefs @ 0x140420C64
 * Callers:
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 *     PspRundownSingleProcess @ 0x140508838 (PspRundownSingleProcess.c)
 * Callees:
 *     ObDereferenceObjectEx @ 0x14000C4C0 (ObDereferenceObjectEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfUnblockPushLock @ 0x14017E9A0 (ExfUnblockPushLock.c)
 *     ExMapHandleToPointer @ 0x140425030 (ExMapHandleToPointer.c)
 */

void __fastcall PspClearProcessThreadCidRefs(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  volatile signed __int64 *v5; // rax
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // edi
  __int16 v9; // ax
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  --*(_WORD *)(a1 + 486);
  v5 = (volatile signed __int64 *)ExMapHandleToPointer(PspCidTable);
  v6 = (unsigned __int64)*v5 >> 1;
  *v5 &= 0xFFFFFFFFFFFE0001uLL;
  v7 = PspCidTable;
  v8 = (unsigned __int16)v6;
  _InterlockedExchangeAdd64(v5, 1uLL);
  _InterlockedOr(v10, 0);
  if ( *(_QWORD *)(v7 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(v7 + 48), 0LL);
  v9 = *(_WORD *)(a1 + 486) + 1;
  *(_WORD *)(a1 + 486) = v9;
  if ( !v9 && *(_QWORD *)(a1 + 152) != a1 + 152 )
    KiCheckForKernelApcDelivery();
  if ( v8 )
    ObDereferenceObjectEx(a3, v8);
}
