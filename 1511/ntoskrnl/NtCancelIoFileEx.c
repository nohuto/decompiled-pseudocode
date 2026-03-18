/*
 * XREFs of NtCancelIoFileEx @ 0x14048FDE0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     IopReferenceFileObject @ 0x1400CC3D8 (IopReferenceFileObject.c)
 *     IopCancelIrpsInFileObjectList @ 0x1400CC5B4 (IopCancelIrpsInFileObjectList.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x14048FF24 (IopCancelIrpsInThreadListForCurrentProcess.c)
 */

__int64 __fastcall NtCancelIoFileEx(void *a1, __int64 a2, ULONG64 a3)
{
  KPROCESSOR_MODE PreviousMode; // r8
  _DWORD *v6; // rdx
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  PVOID v9; // rdi
  int v10; // eax
  int v11; // ebx
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v13; // [rsp+68h] [rbp+20h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = (_DWORD *)a3;
    if ( a3 >= MmUserProbeAddress )
      v6 = (_DWORD *)MmUserProbeAddress;
    *v6 = *v6;
  }
  result = IopReferenceFileObject(a1, 0, PreviousMode, &Object, 0LL);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    ++CurrentThread->OtherOperationCount;
    __incgsdword(0x2E64u);
    v9 = Object;
    v10 = IopCancelIrpsInFileObjectList((__int64)Object, (int)KeGetCurrentThread()->ApcState.Process, a2, 0, 0, 0);
    v11 = v10;
    if ( !a2 || !v10 )
      v11 = IopCancelIrpsInThreadListForCurrentProcess(v9, a2) | v10;
    v13 = v11 == 0 ? 0xC0000225 : 0;
    *(_DWORD *)a3 = v13;
    *(_QWORD *)(a3 + 8) = 0LL;
    ObfDereferenceObject(v9);
    return v13;
  }
  return result;
}
