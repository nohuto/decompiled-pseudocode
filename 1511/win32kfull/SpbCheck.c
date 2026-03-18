/*
 * XREFs of SpbCheck @ 0x1C000C7D8
 * Callers:
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C0050400 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     zzzLockWindowUpdate2 @ 0x1C0090970 (zzzLockWindowUpdate2.c)
 *     CreateSpb @ 0x1C010B97C (CreateSpb.c)
 * Callees:
 *     SpbCheckDce @ 0x1C004C480 (SpbCheckDce.c)
 */

__int64 SpbCheck()
{
  __int64 result; // rax
  _QWORD **v1; // rcx
  __int64 *v2; // rbx

  result = gpDispInfo;
  if ( *(_QWORD *)(gpDispInfo + 72LL) )
  {
    GreLockVisRgn(*gpDispInfo);
    v1 = (_QWORD **)gpDispInfo;
    v2 = *(__int64 **)(gpDispInfo + 64LL);
    if ( v2 )
    {
      do
      {
        if ( (v2[8] & 0x400800) == 0 )
          SpbCheckDce(v2);
        v2 = (__int64 *)*v2;
      }
      while ( v2 );
      v1 = (_QWORD **)gpDispInfo;
    }
    return GreUnlockVisRgn(**v1);
  }
  return result;
}
