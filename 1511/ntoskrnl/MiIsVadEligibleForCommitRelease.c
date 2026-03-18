/*
 * XREFs of MiIsVadEligibleForCommitRelease @ 0x1401CF8BC
 * Callers:
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1401D059C (MiReleaseOutSwappedProcessCommit.c)
 * Callees:
 *     MiVadMapsLargeImage @ 0x1400627D0 (MiVadMapsLargeImage.c)
 */

_BOOL8 __fastcall MiIsVadEligibleForCommitRelease(__int64 a1)
{
  __int16 v1; // r8
  __int64 v2; // r9
  __int64 v3; // rax
  unsigned __int64 v4; // rcx

  if ( ((1 << (*(_BYTE *)(a1 + 48) & 7)) & 0x55) != 0
    && !MiVadMapsLargeImage(a1)
    && (v3 = *(unsigned int *)(v2 + 52),
        LODWORD(v3) = v3 & 0x7FFFFFFF,
        v4 = v3 | ((unsigned __int64)*(unsigned __int8 *)(v2 + 34) << 31),
        v4 < 0x7FFFFFFFELL)
    && v4 )
  {
    return (v1 & 0x4000) == 0;
  }
  else
  {
    return 0LL;
  }
}
