/*
 * XREFs of ObpInitializeNamespaceTable @ 0x1405BC73C
 * Callers:
 *     ObInitSystem @ 0x1407C266C (ObInitSystem.c)
 * Callees:
 *     <none>
 */

ULONG_PTR *ObpInitializeNamespaceTable()
{
  ULONG_PTR *result; // rax

  qword_140331B90 = 0LL;
  result = (ULONG_PTR *)&ObpPrivateNamespaceLookupTable;
  do
  {
    result[1] = (ULONG_PTR)result;
    *result = (ULONG_PTR)result;
    result += 2;
  }
  while ( (__int64)result < (__int64)&qword_140331B90 );
  return result;
}
