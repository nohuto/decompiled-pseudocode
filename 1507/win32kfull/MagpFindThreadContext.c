/*
 * XREFs of MagpFindThreadContext @ 0x1C008B374
 * Callers:
 *     xxxFreeWindow @ 0x1C0088BC8 (xxxFreeWindow.c)
 *     MagContextThreadCallout @ 0x1C01FD210 (MagContextThreadCallout.c)
 *     MagControl @ 0x1C01FD404 (MagControl.c)
 *     MagGetLensContextInformation @ 0x1C01FD4FC (MagGetLensContextInformation.c)
 *     MagSetLensContextInformation @ 0x1C01FDB8C (MagSetLensContextInformation.c)
 *     MagSlicerControl @ 0x1C01FE734 (MagSlicerControl.c)
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
