/*
 * XREFs of IopCancelApcRequired @ 0x1400CC820
 * Callers:
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x14048FF24 (IopCancelIrpsInThreadListForCurrentProcess.c)
 *     IopCancelSynchronousIrpsForThread @ 0x1405F72E4 (IopCancelSynchronousIrpsForThread.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall IopCancelApcRequired(__int64 a1, __int64 a2, __int64 a3)
{
  KSPIN_LOCK *v3; // rbp
  KIRQL v7; // al
  _QWORD *v8; // rdx
  unsigned __int8 v9; // bl
  _QWORD *v11; // rcx

  v3 = (KSPIN_LOCK *)(a1 + 1832);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1832));
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
  KeReleaseSpinLock(v3, v7);
  return v9;
}
