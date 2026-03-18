/*
 * XREFs of NtCancelSynchronousIoFile @ 0x140674C5C
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     IopCancelSynchronousIrpsForThread @ 0x1406710DC (IopCancelSynchronousIrpsForThread.c)
 */

NTSTATUS __fastcall NtCancelSynchronousIoFile(void *a1, __int64 a2, ULONG64 a3)
{
  KPROCESSOR_MODE PreviousMode; // r9
  _DWORD *v6; // rdx
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax
  PVOID v9; // rsi
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v11; // [rsp+68h] [rbp+20h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = (_DWORD *)a3;
    if ( a3 >= MmUserProbeAddress )
      v6 = (_DWORD *)MmUserProbeAddress;
    *v6 = *v6;
  }
  result = ObReferenceObjectByHandle(a1, 1u, (POBJECT_TYPE)PsThreadType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    ++CurrentThread->OtherOperationCount;
    __incgsdword(0x2E64u);
    v9 = Object;
    v11 = (unsigned int)IopCancelSynchronousIrpsForThread((__int64)Object, a2) == 0 ? 0xC0000225 : 0;
    *(_DWORD *)a3 = v11;
    *(_QWORD *)(a3 + 8) = 0LL;
    ObfDereferenceObject(v9);
    return v11;
  }
  return result;
}
