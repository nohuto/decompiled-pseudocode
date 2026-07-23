/*
 * XREFs of KiCompleteDirectSwitchThread @ 0x1400CD1D4
 * Callers:
 *     KeReleaseSemaphore @ 0x140052530 (KeReleaseSemaphore.c)
 *     KeReleaseSemaphoreEx @ 0x1400CCF30 (KeReleaseSemaphoreEx.c)
 * Callees:
 *     KiRemoveBoostThread @ 0x1400CD250 (KiRemoveBoostThread.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1400CF394 (KiUpdateTotalCyclesCurrentThread.c)
 */

__int64 __fastcall KiCompleteDirectSwitchThread(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 updated; // rdi
  __int64 v6; // rax
  unsigned __int64 v7; // rcx

  result = *(unsigned int *)(a2 + 120);
  if ( (result & 0x10) != 0 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 4u);
    _disable();
    updated = KiUpdateTotalCyclesCurrentThread(a1, a2, 0LL);
    _enable();
    v6 = *(_QWORD *)(a1 + 11400);
    if ( v6 )
    {
      v7 = *(_QWORD *)(a2 + 32);
      if ( v7 > updated )
        *(_QWORD *)(v6 - 184) += v7 - updated;
    }
    result = KiRemoveBoostThread(a1, a2);
    *(_QWORD *)(a2 + 32) = updated;
  }
  return result;
}
