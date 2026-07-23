/*
 * XREFs of IopCancelApcRequired @ 0x1400EDEC4
 * Callers:
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x1404F68BC (IopCancelIrpsInThreadListForCurrentProcess.c)
 *     IopCancelSynchronousIrpsForThread @ 0x1406210A0 (IopCancelSynchronousIrpsForThread.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall IopCancelApcRequired(__int64 a1, __int64 a2, __int64 a3)
{
  KSPIN_LOCK *v3; // rbp
  KIRQL v7; // al
  _QWORD *v8; // rdx
  KIRQL v9; // r14
  unsigned __int8 v10; // bl
  _QWORD *v12; // rcx

  v3 = (KSPIN_LOCK *)(a1 + 1840);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1840));
  v8 = (_QWORD *)(a1 + 1640);
  v9 = v7;
  if ( (_QWORD *)*v8 == v8 )
  {
    v10 = 0;
  }
  else
  {
    v10 = 1;
    if ( a3 || a2 )
    {
      v12 = (_QWORD *)*v8;
      v10 = 0;
      while ( v8 != v12 )
      {
        if ( (*(_DWORD *)(v12 - 2) & 2) == 0 && (v12[5] == a3 && (!a2 || v12[20] == a2) || !a3 && v12[20] == a2) )
        {
          v10 = 1;
          break;
        }
        v12 = (_QWORD *)*v12;
      }
    }
  }
  KxReleaseSpinLock(v3);
  __writecr8(v9);
  return v10;
}
