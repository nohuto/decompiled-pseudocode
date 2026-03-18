/*
 * XREFs of XFORMOBJ_iGetXform @ 0x1C001A780
 * Callers:
 *     ulGetRotate @ 0x1C0018B18 (ulGetRotate.c)
 *     bNewXform @ 0x1C0019E50 (bNewXform.c)
 *     bInitXform @ 0x1C014DC3C (bInitXform.c)
 *     ?UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A4D80 (-UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     NtGdiXFORMOBJ_iGetXform @ 0x1C02B19A0 (NtGdiXFORMOBJ_iGetXform.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall XFORMOBJ_iGetXform(XFORMOBJ *pxo, XFORML *pxform)
{
  if ( !pxo )
    return -1;
  if ( pxform )
    EXFORMOBJ::vGetCoefficient((EXFORMOBJ *)pxo, pxform);
  switch ( *(_DWORD *)(*(_QWORD *)&pxo->ulReserved + 32LL) & 0x43 )
  {
    case 1:
      return 2;
    case 3:
      return 1;
    case 67:
      return 0;
  }
  return 3;
}
