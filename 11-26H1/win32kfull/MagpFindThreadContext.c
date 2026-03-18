/*
 * XREFs of MagpFindThreadContext @ 0x1401EBE3C
 * Callers:
 *     MagGetLensContextInformation @ 0x1401EA86C (MagGetLensContextInformation.c)
 *     MagControl @ 0x1401EAF80 (MagControl.c)
 *     MagSetLensContextInformation @ 0x1401EB08C (MagSetLensContextInformation.c)
 *     MagContextThreadCallout @ 0x1402984B0 (MagContextThreadCallout.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MagpFindThreadContext(_QWORD *a1, __int64 a2)
{
  _QWORD *result; // rax

  for ( result = (_QWORD *)*a1; result != a1; result = (_QWORD *)*result )
  {
    if ( a2 == result[2] )
      return result;
  }
  return 0LL;
}
