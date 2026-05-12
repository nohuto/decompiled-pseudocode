/*
 * XREFs of IsUntaggedRequest @ 0x1C00040D0
 * Callers:
 *     RaidUnitSubmitRequest @ 0x1C0002F20 (RaidUnitSubmitRequest.c)
 *     RaUnitStartIo @ 0x1C0004AC0 (RaUnitStartIo.c)
 *     RaidUnitProcessBusyRequest @ 0x1C000999C (RaidUnitProcessBusyRequest.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsUntaggedRequest(int a1, unsigned __int64 a2)
{
  __int64 v2; // rcx
  _BOOL8 result; // rax

  result = 0;
  if ( (a1 & 0x102) != 0x102 && (a1 & 0x80010) == 0 )
  {
    if ( (unsigned int)a2 > 0x20 )
      return 1;
    v2 = 0x1000D0000LL;
    if ( !_bittest64(&v2, a2) )
      return 1;
  }
  return result;
}
