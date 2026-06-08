/*
 * XREFs of InitCStateSupport @ 0x1C00162D0
 * Callers:
 *     <none>
 * Callees:
 *     InitMonitorMWaitSupport @ 0x1C0016300 (InitMonitorMWaitSupport.c)
 */

__int64 __fastcall InitCStateSupport(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 248) & 0x7F000LL) == 0 || (int)InitMonitorMWaitSupport() < 0 )
  {
    *(_QWORD *)(a1 + 184) = 0LL;
    *(_QWORD *)(a1 + 248) &= 0xFFFFFFFFFFF80FFFuLL;
  }
  return 0LL;
}
