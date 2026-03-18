/*
 * XREFs of GetHitTestCodeString @ 0x14018DDC8
 * Callers:
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x14018E024 (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall GetHitTestCodeString(int a1)
{
  const char *result; // rax

  switch ( a1 )
  {
    case 60:
      return "HTSCROLLUP";
    case -2:
      return "HTERROR";
    case 61:
      return "HTSCROLLDOWN";
    case 62:
      return "HTSCROLLUPPAGE";
    case 63:
      return "HTSCROLLDOWNPAGE";
  }
  result = "HTSCROLLTHUMB";
  if ( a1 != 64 )
    return "UNKNOWN";
  return result;
}
