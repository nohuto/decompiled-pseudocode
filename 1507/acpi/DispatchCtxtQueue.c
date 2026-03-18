/*
 * XREFs of DispatchCtxtQueue @ 0x1C001E720
 * Callers:
 *     <none>
 * Callees:
 *     RunContext @ 0x1C0002900 (RunContext.c)
 */

void DispatchCtxtQueue()
{
  KIRQL v0; // al
  __int64 v1; // rcx
  char v2; // r8
  __int64 v3; // rcx

  v0 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  v1 = qword_1C005A0B8;
  v2 = gReadyQueue & 0xFD;
  byte_1C005A0C8 = v0;
  gReadyQueue &= ~2u;
  if ( qword_1C005A0B8
    && ((__int64 *)RunningContextListHead == &RunningContextListHead || (gdwfAMLI & 4) != 0)
    && (v2 & 8) == 0 )
  {
    while ( v1 )
    {
      if ( *(_QWORD *)(v1 + 8) == v1 )
      {
        qword_1C005A0B8 = 0LL;
      }
      else
      {
        qword_1C005A0B8 = *(_QWORD *)(v1 + 8);
        **(_QWORD **)(v1 + 8) = *(_QWORD *)v1;
        *(_QWORD *)(*(_QWORD *)v1 + 8LL) = *(_QWORD *)(v1 + 8);
      }
      *(_DWORD *)(v1 + 32) &= ~0x40u;
      v3 = v1 - 32;
      *(_QWORD *)(v3 + 56) = 0LL;
      RunContext((PSLIST_ENTRY)v3);
      v1 = qword_1C005A0B8;
    }
    v0 = byte_1C005A0C8;
  }
  KeReleaseSpinLock(&SpinLock, v0);
}
