/*
 * XREFs of GetClassIcoCur @ 0x1C01081A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetClassIcoCur(__int64 a1, int a2)
{
  _QWORD *v2; // rax

  v2 = *(_QWORD **)(a1 + 152);
  switch ( a2 )
  {
    case -14:
      return v2[14];
    case -34:
      return v2[19];
    case -12:
      return v2[15];
  }
  return 0LL;
}
