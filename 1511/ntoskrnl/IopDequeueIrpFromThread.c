/*
 * XREFs of IopDequeueIrpFromThread @ 0x14007E560
 * Callers:
 *     IopfCompleteRequest @ 0x140084CF0 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x140086090 (IopCompleteRequest.c)
 *     IopParseDevice @ 0x140412F10 (IopParseDevice.c)
 *     IopDeleteFile @ 0x14042EA40 (IopDeleteFile.c)
 *     IopCloseFile @ 0x14042ECB0 (IopCloseFile.c)
 *     IoCancelFileOpen @ 0x1405F99D8 (IoCancelFileOpen.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140038DE0 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x1401C4B24 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401C4BD4 (KiReleaseSpinLockInstrumented.c)
 */

_QWORD *__fastcall IopDequeueIrpFromThread(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // di
  volatile signed __int32 *v6; // rcx
  __int64 v7; // rdx
  _QWORD *result; // rax
  _QWORD *v9; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a1[19];
  CurrentIrql = 0;
  if ( v3 )
  {
    v6 = (volatile signed __int32 *)(v3 + 1832);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v6);
    }
    else if ( _interlockedbittestandset64(v6, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(v6, a2, a3);
    }
  }
  v7 = a1[4];
  result = a1 + 4;
  v9 = (_QWORD *)a1[5];
  if ( *(_QWORD **)(v7 + 8) != a1 + 4 || (_QWORD *)*v9 != result )
    __fastfail(3u);
  *v9 = v7;
  *(_QWORD *)(v7 + 8) = v9;
  a1[5] = a1 + 4;
  *result = result;
  if ( v3 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v3 + 1832, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 1832), 0LL);
    result = (_QWORD *)CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
