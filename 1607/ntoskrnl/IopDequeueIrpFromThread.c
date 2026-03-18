/*
 * XREFs of IopDequeueIrpFromThread @ 0x14002DDE0
 * Callers:
 *     IopfCompleteRequest @ 0x140053570 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x140054840 (IopCompleteRequest.c)
 *     IopParseDevice @ 0x1404408F0 (IopParseDevice.c)
 *     IopCloseFile @ 0x140443140 (IopCloseFile.c)
 *     IopDeleteFile @ 0x1404463A0 (IopDeleteFile.c)
 *     IoCancelFileOpen @ 0x14062333C (IoCancelFileOpen.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400D8260 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x1401D3CDC (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401D3D8C (KiReleaseSpinLockInstrumented.c)
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
    v4 = (volatile signed __int32 *)(v1 + 1840);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v4);
    }
    else if ( _interlockedbittestandset64(v4, 0LL) )
    {
      KxWaitForSpinLockAndAcquire();
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
      KiReleaseSpinLockInstrumented(v1 + 1840, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)(v1 + 1840), 0LL);
    result = (_QWORD *)CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
