/*
 * XREFs of IsUntaggedRequest @ 0x1C0007950
 * Callers:
 *     RaidUnitSubmitRequest @ 0x1C0003A58 (RaidUnitSubmitRequest.c)
 *     RaUnitStartIo @ 0x1C0004940 (RaUnitStartIo.c)
 *     RaidUnitProcessBusyRequest @ 0x1C000BDF0 (RaidUnitProcessBusyRequest.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsUntaggedRequest(int a1, unsigned __int64 a2)
{
  _BOOL8 result; // rax
  __int64 v3; // rcx

  result = 0;
  if ( (a1 & 0x102) != 0x102 && (a1 & 0x80010) == 0 )
  {
    if ( (unsigned int)a2 > 0x20 )
      return 1;
    v3 = 0x1000D0000LL;
    if ( !_bittest64(&v3, a2) )
      return 1;
  }
  return result;
}
