/*
 * XREFs of sub_18004F6C0 @ 0x18004F6C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 sub_18004F6C0()
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
