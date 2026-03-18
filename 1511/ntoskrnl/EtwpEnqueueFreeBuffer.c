/*
 * XREFs of EtwpEnqueueFreeBuffer @ 0x14009D39C
 * Callers:
 *     EtwpPrepareDirtyBuffer @ 0x14009C2E4 (EtwpPrepareDirtyBuffer.c)
 *     EtwpSwitchBuffer @ 0x14009D01C (EtwpSwitchBuffer.c)
 *     EtwpAllocateFreeBuffers @ 0x1400F485C (EtwpAllocateFreeBuffers.c)
 *     EtwpCompleteBuffer @ 0x1404B0A54 (EtwpCompleteBuffer.c)
 * Callees:
 *     EtwpUnlockBufferList @ 0x14009D414 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x14009D480 (EtwpLockBufferList.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

__int64 __fastcall EtwpEnqueueFreeBuffer(__int64 a1, unsigned int *a2)
{
  ULONG_PTR BugCheckParameter4; // rax
  ULONG_PTR v4; // rcx
  __int64 result; // rax
  char v7; // [rsp+40h] [rbp+8h] BYREF

  BugCheckParameter4 = *a2;
  v4 = *(unsigned int *)(a1 + 4);
  v7 = 0;
  if ( (_DWORD)v4 != (_DWORD)BugCheckParameter4 )
    KeBugCheckEx(0x11Du, 7uLL, (ULONG_PTR)a2, v4, BugCheckParameter4);
  a2[11] = 0;
  *((_QWORD *)a2 + 3) = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 824));
  EtwpLockBufferList(a1, &v7);
  **(_QWORD **)(a1 + 72) = a2 + 8;
  *(_QWORD *)(a1 + 72) = a2 + 8;
  result = EtwpUnlockBufferList(a1, &v7);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 244));
  return result;
}
