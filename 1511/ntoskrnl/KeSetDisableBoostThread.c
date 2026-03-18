/*
 * XREFs of KeSetDisableBoostThread @ 0x140452B08
 * Callers:
 *     NtSetInformationThread @ 0x140425860 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeSetDisableBoostThread(__int64 a1, int a2)
{
  if ( a2 )
    return _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 1u);
  else
    return _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 1u);
}
