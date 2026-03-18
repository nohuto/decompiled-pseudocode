/*
 * XREFs of EnforceColorDependentSettings @ 0x1C0057AC0
 * Callers:
 *     ?UpdateUserScreen@@YAHH@Z @ 0x1C0056368 (-UpdateUserScreen@@YAHH@Z.c)
 * Callees:
 *     GreGetDeviceCaps @ 0x1C0034D30 (GreGetDeviceCaps.c)
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
