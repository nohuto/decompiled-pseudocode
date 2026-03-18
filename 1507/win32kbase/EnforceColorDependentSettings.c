/*
 * XREFs of EnforceColorDependentSettings @ 0x1C005A3A0
 * Callers:
 *     ?UpdateUserScreen@@YAHH@Z @ 0x1C0058B10 (-UpdateUserScreen@@YAHH@Z.c)
 * Callees:
 *     GreGetDeviceCaps @ 0x1C0056DB0 (GreGetDeviceCaps.c)
 */

__int64 EnforceColorDependentSettings()
{
  __int64 result; // rax

  result = *(unsigned int *)(gpDispInfo + 180);
  if ( (result & 2) != 0 )
  {
    gbDisableAlpha = 1;
  }
  else
  {
    result = GreGetDeviceCaps(*(HDC *)(gpDispInfo + 24), 24);
    gbDisableAlpha = result != -1;
  }
  return result;
}
