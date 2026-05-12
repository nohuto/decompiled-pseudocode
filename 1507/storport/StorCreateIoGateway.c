/*
 * XREFs of StorCreateIoGateway @ 0x1C0008BD4
 * Callers:
 *     RaidCreateAdapter @ 0x1C0008A24 (RaidCreateAdapter.c)
 * Callees:
 *     memset @ 0x1C0013300 (memset.c)
 */

PKSPIN_LOCK __fastcall StorCreateIoGateway(PKSPIN_LOCK SpinLock)
{
  PKSPIN_LOCK result; // rax

  memset(SpinLock, 0, 0x140uLL);
  *((_DWORD *)SpinLock + 7) = 1000;
  *((_DWORD *)SpinLock + 8) = 1000;
  KeInitializeSpinLock(SpinLock);
  result = SpinLock + 1;
  SpinLock[2] = (KSPIN_LOCK)(SpinLock + 1);
  SpinLock[1] = (KSPIN_LOCK)(SpinLock + 1);
  *((_DWORD *)SpinLock + 32) = 0;
  return result;
}
