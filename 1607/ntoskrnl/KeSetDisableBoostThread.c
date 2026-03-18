/*
 * XREFs of KeSetDisableBoostThread @ 0x1404EFF14
 * Callers:
 *     NtSetInformationProcess @ 0x140425A10 (NtSetInformationProcess.c)
 *     NtSetInformationThread @ 0x14050E5D0 (NtSetInformationThread.c)
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
