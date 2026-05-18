/*
 * XREFs of sub_180006E20 @ 0x180006E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 sub_180006E20()
{
  _QWORD *v0; // rax

  v0 = malloc(0x100uLL);
  Block = v0;
  qword_18000EFD8 = (__int64)v0;
  if ( !v0 )
    return 1LL;
  *v0 = 0LL;
  return 0LL;
}
