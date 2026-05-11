/*
 * XREFs of PinGetTerminalUnit @ 0x1C0014D64
 * Callers:
 *     PinBuildDescriptors @ 0x1C0014D94 (PinBuildDescriptors.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall PinGetTerminalUnit(_QWORD *a1, int a2)
{
  _QWORD *result; // rax
  char v3; // r8

  result = (_QWORD *)*a1;
  v3 = 0;
  if ( (_QWORD *)*a1 == a1 )
    return 0LL;
  while ( !v3 )
  {
    if ( *((_DWORD *)result + 5) < 2u && *((_DWORD *)result + 16) == a2 )
      v3 = 1;
    else
      result = (_QWORD *)*result;
    if ( result == a1 )
    {
      if ( v3 )
        return result;
      return 0LL;
    }
  }
  return result;
}
