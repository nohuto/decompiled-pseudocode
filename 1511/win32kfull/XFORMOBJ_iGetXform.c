/*
 * XREFs of XFORMOBJ_iGetXform @ 0x1C01198B0
 * Callers:
 *     ulGetRotate @ 0x1C0116EA8 (ulGetRotate.c)
 *     bNewXform @ 0x1C0118F04 (bNewXform.c)
 *     bInitXform @ 0x1C012C740 (bInitXform.c)
 *     ?UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A3C4C (-UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     NtGdiXFORMOBJ_iGetXform @ 0x1C02AF070 (NtGdiXFORMOBJ_iGetXform.c)
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
