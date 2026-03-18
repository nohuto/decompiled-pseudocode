/*
 * XREFs of MiFinishResume @ 0x140144E14
 * Callers:
 *     <none>
 * Callees:
 *     MiPurgeZeroList @ 0x140144E54 (MiPurgeZeroList.c)
 *     MiPurgeTransitionList @ 0x140144F88 (MiPurgeTransitionList.c)
 */

LONG __fastcall MiFinishResume(int a1)
{
  if ( a1 )
  {
    MiPurgeTransitionList();
    dword_14034F0F8 = 0;
  }
  MiPurgeZeroList();
  _InterlockedDecrement(&dword_14034FB88);
  stru_14034F120.Parameter = (void *)-1LL;
  return KeSetEvent(&stru_14034F108, 0, 0);
}
