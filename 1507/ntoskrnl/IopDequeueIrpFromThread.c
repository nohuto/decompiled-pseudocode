/*
 * XREFs of IopDequeueIrpFromThread @ 0x1400485C0
 * Callers:
 *     IopfCompleteRequest @ 0x140048F80 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x14004A190 (IopCompleteRequest.c)
 *     IopDeleteFile @ 0x1404886E0 (IopDeleteFile.c)
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 *     IopCloseFile @ 0x14048F8A0 (IopCloseFile.c)
 *     IoCancelFileOpen @ 0x140673C54 (IoCancelFileOpen.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

_QWORD *__fastcall IopDequeueIrpFromThread(_QWORD *a1)
{
  __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // di
  volatile signed __int32 *v4; // rcx
  __int64 v5; // rdx
  _QWORD *result; // rax
  _QWORD *v7; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = a1[19];
  CurrentIrql = 0;
  if ( v1 )
  {
    v4 = (volatile signed __int32 *)(v1 + 1832);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v4);
    }
    else if ( _interlockedbittestandset64(v4, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(v4);
    }
  }
  v5 = a1[4];
  result = a1 + 4;
  v7 = (_QWORD *)a1[5];
  if ( *(_QWORD **)(v5 + 8) != a1 + 4 || (_QWORD *)*v7 != result )
    __fastfail(3u);
  *v7 = v5;
  *(_QWORD *)(v5 + 8) = v7;
  a1[5] = a1 + 4;
  *result = result;
  if ( v1 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v1 + 1832, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)(v1 + 1832), 0LL);
    result = (_QWORD *)CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
