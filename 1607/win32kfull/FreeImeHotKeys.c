/*
 * XREFs of FreeImeHotKeys @ 0x1C01337A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *__fastcall FreeImeHotKeys(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *result; // rax
  __int64 v4; // rbx

  result = (__int64 *)gpImeHotKeyListHeader;
  if ( gpImeHotKeyListHeader )
  {
    do
    {
      v4 = *result;
      Win32FreePool(result, a2, a3);
      gpImeHotKeyListHeader = v4;
      result = (__int64 *)v4;
    }
    while ( v4 );
  }
  return result;
}
