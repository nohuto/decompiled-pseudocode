/*
 * XREFs of MonitorFlagsFromDpiAwareness @ 0x1C0071440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorFlagsFromDpiAwareness(int a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 >= -1 )
  {
    if ( a1 <= 0 )
    {
      return 64LL;
    }
    else if ( a1 == 1 )
    {
      return 128LL;
    }
    else if ( a1 == 2 )
    {
      return 32LL;
    }
  }
  return result;
}
