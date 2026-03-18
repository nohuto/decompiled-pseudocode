/*
 * XREFs of MagpFindThreadContext @ 0x1C006898C
 * Callers:
 *     xxxFreeWindow @ 0x1C0066C00 (xxxFreeWindow.c)
 *     MagContextThreadCallout @ 0x1C01FD690 (MagContextThreadCallout.c)
 *     MagControl @ 0x1C01FD884 (MagControl.c)
 *     MagGetLensContextInformation @ 0x1C01FD97C (MagGetLensContextInformation.c)
 *     MagSetLensContextInformation @ 0x1C01FE00C (MagSetLensContextInformation.c)
 *     MagSlicerControl @ 0x1C01FEBB4 (MagSlicerControl.c)
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
