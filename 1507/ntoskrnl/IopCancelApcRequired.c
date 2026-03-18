/*
 * XREFs of IopCancelApcRequired @ 0x14000C0EC
 * Callers:
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x14042027C (IopCancelIrpsInThreadListForCurrentProcess.c)
 *     IopCancelSynchronousIrpsForThread @ 0x1406710DC (IopCancelSynchronousIrpsForThread.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall IopCancelApcRequired(__int64 a1, __int64 a2, __int64 a3)
{
  volatile signed __int32 *v4; // rbx
  unsigned __int8 CurrentIrql; // r14
  _QWORD *v8; // rdx
  unsigned __int8 v9; // di
  _QWORD *v11; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (volatile signed __int32 *)(a1 + 1832);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(a1 + 1832);
  }
  else if ( _interlockedbittestandset64(v4, 0LL) )
  {
    KxWaitForSpinLockAndAcquire(a1 + 1832);
  }
  v8 = (_QWORD *)(a1 + 1632);
  if ( (_QWORD *)*v8 == v8 )
  {
    v9 = 0;
  }
  else
  {
    v9 = 1;
    if ( a3 || a2 )
    {
      v11 = (_QWORD *)*v8;
      v9 = 0;
      while ( v8 != v11 )
      {
        if ( (*(_DWORD *)(v11 - 2) & 2) == 0 && (v11[5] == a3 && (!a2 || v11[20] == a2) || !a3 && v11[20] == a2) )
        {
          v9 = 1;
          break;
        }
        v11 = (_QWORD *)*v11;
      }
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v4, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
  __writecr8(CurrentIrql);
  return v9;
}
