/*
 * XREFs of CmGetBoundTransaction @ 0x1404C4308
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __stdcall CmGetBoundTransaction(PLARGE_INTEGER Cookie, PVOID Object)
{
  PVOID result; // rax

  result = 0LL;
  if ( Cookie )
    return (PVOID)*((_QWORD *)Object + 7);
  return result;
}
