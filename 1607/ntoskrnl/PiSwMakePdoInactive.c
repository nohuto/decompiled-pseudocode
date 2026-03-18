/*
 * XREFs of PiSwMakePdoInactive @ 0x1404C3698
 * Callers:
 *     PiSwGetChildPdo @ 0x1403F1528 (PiSwGetChildPdo.c)
 *     PiSwProcessRemove @ 0x1404C36B0 (PiSwProcessRemove.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall PiSwMakePdoInactive(__int64 a1)
{
  _DWORD *result; // rax

  result = *(_DWORD **)(a1 + 64);
  if ( a1 == *(_QWORD *)(*(_QWORD *)result + 120LL) )
    *(_QWORD *)(*(_QWORD *)result + 120LL) = 0LL;
  result[2] |= 0x20u;
  return result;
}
