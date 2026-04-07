/*
 * XREFs of ?IsOKToCleanup@CContactStationaryVisual@@UEAA_NXZ @ 0x180088190
 * Callers:
 *     ?CleanupFinishedAnimations@CContactManager@@AEAAXXZ @ 0x180070A84 (-CleanupFinishedAnimations@CContactManager@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CContactStationaryVisual::IsOKToCleanup(CContactStationaryVisual *this)
{
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *((_QWORD *)this + 42);
  result = 0LL;
  if ( !v1 || *(_BYTE *)(v1 + 72) )
  {
    v3 = *((_QWORD *)this + 43);
    if ( !v3 || *(_BYTE *)(v3 + 72) )
      return 1LL;
  }
  return result;
}
