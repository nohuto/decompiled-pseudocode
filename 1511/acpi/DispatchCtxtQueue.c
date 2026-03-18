/*
 * XREFs of DispatchCtxtQueue @ 0x1C001F5B0
 * Callers:
 *     <none>
 * Callees:
 *     RunContext @ 0x1C00028F0 (RunContext.c)
 */

void DispatchCtxtQueue()
{
  KIRQL v0; // al
  _QWORD *v1; // rdx
  char v2; // r8

  v0 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  v1 = (_QWORD *)qword_1C005A0C8;
  v2 = gReadyQueue & 0xFD;
  byte_1C005A0D8 = v0;
  gReadyQueue &= ~2u;
  if ( qword_1C005A0C8
    && ((__int64 *)RunningContextListHead == &RunningContextListHead || (gdwfAMLI & 4) != 0)
    && (v2 & 8) == 0 )
  {
    while ( v1 )
    {
      if ( (_QWORD *)v1[1] == v1 )
      {
        qword_1C005A0C8 = 0LL;
      }
      else
      {
        qword_1C005A0C8 = v1[1];
        *(_QWORD *)v1[1] = *v1;
        *(_QWORD *)(*v1 + 8LL) = v1[1];
      }
      v1[3] = 0LL;
      *((_DWORD *)v1 + 8) &= ~0x40u;
      RunContext((PSLIST_ENTRY)v1 - 2);
      v1 = (_QWORD *)qword_1C005A0C8;
    }
    v0 = byte_1C005A0D8;
  }
  KeReleaseSpinLock(&SpinLock, v0);
}
