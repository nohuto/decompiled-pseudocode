/*
 * XREFs of QueueContext @ 0x1C0046AF8
 * Callers:
 *     AcquireASLMutex @ 0x1C0014B54 (AcquireASLMutex.c)
 *     WriteCookAccess @ 0x1C001FF40 (WriteCookAccess.c)
 *     WaitASLEvent @ 0x1C0046C48 (WaitASLEvent.c)
 * Callees:
 *     ListInsertTail @ 0x1C0018288 (ListInsertTail.c)
 */

void __fastcall QueueContext(__int64 a1, unsigned __int16 a2, _QWORD **a3)
{
  byte_1C005A0D8 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  ListInsertTail((_QWORD *)(a1 + 32), a3);
  *(_QWORD *)(a1 + 56) = a3;
  if ( a2 != 0xFFFF )
  {
    *(_DWORD *)(a1 + 64) |= 1u;
    KeSetTimer((PKTIMER)(a1 + 192), (LARGE_INTEGER)(-10000LL * a2), (PKDPC)(a1 + 256));
  }
  KeReleaseSpinLock(&SpinLock, byte_1C005A0D8);
}
