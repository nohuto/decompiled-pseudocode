/*
 * XREFs of sub_1800209E0 @ 0x1800209E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 sub_1800209E0()
{
  _QWORD *v0; // rax

  v0 = malloc(0x100uLL);
  _onexitbegin = v0;
  _onexitend = (__int64)v0;
  if ( !v0 )
    return 1LL;
  *v0 = 0LL;
  return 0LL;
}
