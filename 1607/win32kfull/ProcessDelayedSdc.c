/*
 * XREFs of ProcessDelayedSdc @ 0x1C0154CA0
 * Callers:
 *     PowerOnGdi @ 0x1C0154B90 (PowerOnGdi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessDelayedSdc(__int64 a1)
{
  _DWORD *v1; // rdx
  __int64 result; // rax

  v1 = (_DWORD *)gulDelayedSwitchAction;
  result = gulDelayedSwitchAction;
  if ( (gulDelayedSwitchAction & 1) != 0 )
  {
    result = gProtocolType;
    if ( !gProtocolType )
    {
      result = xxxUserSetDisplayConfig(0LL, 0LL, 0LL, 0LL, 2191, 0, 0, grpdeskRitInput, 0, 0LL, 0LL, a1);
      v1 = (_DWORD *)gulDelayedSwitchAction;
    }
  }
  *v1 = 0;
  return result;
}
