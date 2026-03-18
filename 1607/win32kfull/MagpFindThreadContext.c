/*
 * XREFs of MagpFindThreadContext @ 0x1C0056A4C
 * Callers:
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 *     MagContextThreadCallout @ 0x1C01F4CC0 (MagContextThreadCallout.c)
 *     MagControl @ 0x1C01F4EB4 (MagControl.c)
 *     MagGetLensContextInformation @ 0x1C01F4FAC (MagGetLensContextInformation.c)
 *     MagSetLensContextInformation @ 0x1C01F5668 (MagSetLensContextInformation.c)
 *     MagSlicerControl @ 0x1C01F6210 (MagSlicerControl.c)
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
