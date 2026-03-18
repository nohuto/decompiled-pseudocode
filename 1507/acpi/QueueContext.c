/*
 * XREFs of QueueContext @ 0x1C00471D8
 * Callers:
 *     AcquireASLMutex @ 0x1C0013C24 (AcquireASLMutex.c)
 *     WriteCookAccess @ 0x1C001F3B0 (WriteCookAccess.c)
 *     WaitASLEvent @ 0x1C004733C (WaitASLEvent.c)
 * Callees:
 *     ListInsertTail @ 0x1C0017CB4 (ListInsertTail.c)
 */

void __fastcall QueueContext(__int64 a1, unsigned __int16 a2, _QWORD **a3)
{
  byte_1C005A0C8 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  ListInsertTail((_QWORD *)(a1 + 32), a3);
  *(_QWORD *)(a1 + 56) = a3;
  if ( a2 != 0xFFFF )
  {
    *(_DWORD *)(a1 + 64) |= 1u;
    KeSetTimer((PKTIMER)(a1 + 192), (LARGE_INTEGER)(-10000LL * a2), (PKDPC)(a1 + 256));
  }
  KeReleaseSpinLock(&SpinLock, byte_1C005A0C8);
}
